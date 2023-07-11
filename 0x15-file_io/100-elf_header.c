#include "main.h"
void print_elf_header(const Elf64_Ehdr *header);

/**
 * print_elf_header - prints elf head file
 * @message: to print
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}

	printf("\n");
	printf("Class:			%s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data:			%s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:		%d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:			");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM: printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE: printf("Standalone (embedded) application\n");
			break;
		default: printf("<unknown>\n");
			break;
	}
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE: printf("NONE (No file type)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown>\n"); break;
	}
	
	printf("Entry point address:               %#018lx\n", header->e_entry);
}
