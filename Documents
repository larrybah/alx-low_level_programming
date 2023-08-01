#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
void display_elf_header_info(const Elf64_Ehdr *header);

/**
 * display_error - displays error message
 */
void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * display_elf_header_info - displays elf header information
 * @header: elf header
 */
void display_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "Unknown");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:      printf("UNIX - System V\n");
					break;
		case ELFOSABI_HPUX:      printf("UNIX - HP-UX\n");
					break;
		case ELFOSABI_NETBSD:    printf("UNIX - NetBSD\n");
					break;
		case ELFOSABI_LINUX:     printf("UNIX - Linux\n");
					break;
		case ELFOSABI_SOLARIS:   printf("UNIX - Solaris\n");
					break;
		case ELFOSABI_IRIX:      printf("UNIX - IRIX\n");
					break;
		case ELFOSABI_FREEBSD:   printf("UNIX - FreeBSD\n");
					break;
		case ELFOSABI_TRU64:     printf("UNIX - TRU64\n");
					break;
		case ELFOSABI_ARM:       printf("ARM\n");
					break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n");
					break;
		default:                 printf("Unknown\n");
					break;
	}
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
                                                            (header->e_type == ET_DYN) ? "DYN (Shared object file)" :
                                                            (header->e_type == ET_REL) ? "REL (Relocatable file)" : "Unknown");
	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - prints header infor
 * @argc: arg count
 * @argv: arg array
 * Return: (0) always
 */

int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error("Failed to open the file");
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		display_error("Failed to read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		display_error("Not an ELF file");
	}
	display_elf_header_info(&header);
	close(fd);
	return (0);
}
