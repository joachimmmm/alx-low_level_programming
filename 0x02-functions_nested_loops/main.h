#include <stdio.h>
#include <ctype.h>

void print_alphabet(void)
{
        int alphabet;

        for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
        {
                putchar(tolower(alphabet));
        }
        putchar('\n');
        return;
}
