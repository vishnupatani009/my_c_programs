#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char *p;
    char *words[20];
    int i = 0, n = 0;

    printf("Enter full name:\n");
    fgets(name, sizeof(name), stdin);

    p = strtok(name, " \n");

    while(p != NULL)
    {
        words[n] = p;
        n++;

        p = strtok(NULL, " \n");
    }

    printf("Abbreviated name:\n");

    for(i=0; i<n-1; i++)
    {
        printf("%c. ", words[i][0]);
    }

    printf("%s", words[n-1]);

    return 0;
}