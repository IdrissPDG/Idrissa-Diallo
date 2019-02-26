#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main (int argc, string argv[])
{
    if (argc==2)
    {
        string i;

        int pdg=atoi(argv[1]);

        i=get_string("plaintext: ");

        printf("cyphertext: ");

        for (int a=0; a<strlen(i);a++)

        if(isalpha(i[a]))
        {
            if(islower(i[a]))
            {
                printf("%c",(((i[a]- 97)+ pdg)%26)+ 97);
            }
            if(isupper(i[a]))
            {
                printf("%c",(((i[a]- 65)+ pdg)%26)+ 65);
            }
        }
        else
        {
            printf("%c",i[a]);
        }
        printf("%c\n");
    }
    return 0;
}
