#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i;
    system("color 1F");
    system("cls");
    char user_input[50], name[30], copy_input[50];
    char *intent, *context;

    printf("\n\t\t\t\t\t\t\tGoogle Search Engine\n");
    printf(" Please enter you name to proceed: ");
    gets(name);

    printf("\n Hello %s, I am Google, What do you want to search?\n", name);

    while (1)
    {
        printf("\n %s: ", name);
        gets(user_input);

        strlwr(user_input);
        strcpy(copy_input, user_input);
        intent = strtok(copy_input, " ");

        char s[100] = "START https://www.google.com/search?q=";
        for (i = 0; user_input[i]; i++)
        {
            if (user_input[i] == ' ')
            {
                user_input[i] = '+';
            }
        }

        strcat(s, user_input);

        system(s);
    }
}