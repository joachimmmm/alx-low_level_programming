void print_alphabet(void)
{
        int alphabet;

        for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
                putchar(tolower(alphabet));
        }
        putchar('\n');
        return;
}
