#include <stdio.h>
void print_alphabet_x10();

int main(void)
{
    print_alphabet_x10();
    return (0);
}

void print_alphabet_x10()
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
