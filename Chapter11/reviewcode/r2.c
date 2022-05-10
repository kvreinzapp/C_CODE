#include <stdio.h>
int main(void)
{
    char note[] = "Talking to the moon";
    char *ptr;

    ptr = note;

    puts(note);
    puts(++ptr);
    // note[6] = '\0';
    // puts(note);

    // puts(++ptr);
    return 0;
}