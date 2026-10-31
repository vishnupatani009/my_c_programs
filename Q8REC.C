#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    strcpy(rev, str);

    i = 0;
    j = strlen(rev) - 1;

    while(i < j)
    {
        char temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;

        i++;
        j--;
    }

    if(strcmp(str, rev) == 0)
        printf("String is Palindrome");
    else
        printf("String is not Palindrome");

    return 0;
}