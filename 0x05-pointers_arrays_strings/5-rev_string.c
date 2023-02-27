#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char c;
	int length;
	int index;
	int rev_index;

	for (length = 0; s[length] != '\0'; length++)
		continue;
	index = 0;
	rev_index = length - 1;

	while (!(index >= rev_index))
	{
		c = s[index];
		s[index] = s[rev_index];
		s[rev_index] = c;

		index++;
		rev_index--;
	}
}
