#include <stdio.h>
#include <string.h>

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        while ((st[i] != '\n') && (st[i] != '\0'))
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return 0;
}

char *s_get_ptr(char *st, int n) // using the pointer notation, eliminate the variable i
{
    char *ret_val;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        while ((*st != '\n') && (*st != '\0'))
        {
            st++;
        }

        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return 0;
}

// A version of s_get using strchr()
char *s_get_chr(char *st, int n)
{
    char *ret_val;
    char *location;
    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        location = strchr(st, '\n');
        *location = '\0';

        while (getchar() != '\n')
            continue;
    }

    return ret_val;
}

char *s_get_chr_ans(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); // look for newline
        if (find)                // if the address is not NULL,
            *find = '\0';        // place a null character there
        else                     // the address is NULL, do not find a new line
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

// A strlen() function of my own
int strlen_v(char *ptr)
{
    int counter = 0;
    char *pc;
    pc = ptr;
    while (*pc)
    {
        counter++;
        pc++;
    }
    return counter;
}

// another version
int strlen_v_ans(const char *s)
{

    int ct = 0;
    while (*s++) // or while (*s++ != '\0')
        ct++;
    return (ct);
}