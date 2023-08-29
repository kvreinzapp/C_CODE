#include <stdio.h>
#include <string.h>
#define TSIZE 45 /*size of array to hold title*/
// #define FMAX 5   /*maximum number of film titles*/
#define FMAX 3 /*maximum number of film titles*/

struct film
{
    char title[TSIZE];
    int rating;
};

char *s_gets(char *st, int n);

int main(void)
{
    struct film movies[FMAX]; // create an array of structure

    int i = 0;
    int j;

    puts("Enter first movie title:");
    while (i < FMAX && s_gets(movies[i].title, TSIZE) != NULL &&
           movies[i].title[0] != '\0')
    {
        puts("Enter your rating <0-10>:");
        scanf("%d", &movies[i++].rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next tiltle (Empty line to stop):");
    }
    if (i == 0)
        printf("No data entered. ");
    else
        printf("Here is your movie list:\n");

    for (j = 0; j < i; j++)
        printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);
    printf("Bye!\n");
    return 0;
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); // look for newline
        if (find)                // if the adress id not NULL
            *find = '\0';        // place a nul character here
        else
            while (getchar() != '\n')
                continue; // dipose of rest of line
    }
    return ret_val;
}
