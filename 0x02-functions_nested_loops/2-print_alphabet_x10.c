#include <stdio.h>
#include <string.h>
/**
 * Print alphabet 10 times
 * using putchar()
 */
void print_alphabet_x10(void)
{
    
    char ch;
    int i;
    
    for(i=0;i<10;i++)
    {
        for(ch='a';ch<='z';ch++)
        {
            putchar(ch);
        }
        putchar('\n');
    }   
}
/*Main function starts here
 * End of comment
 */
int main()
{
    // Write C code here
    print_alphabet_x10();
    return 0;
}

