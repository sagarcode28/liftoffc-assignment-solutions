#include <stdio.h>



int main()
{
    char str[100];
    char prevChar;
    int i, words;

   
    printf("Enter any string: ");
    gets(str);

    i = 0;
    words = 0;
    prevChar = '\0'; 
    while(1)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t' || str[i]=='\0')
        {
            
            if(prevChar != ' ' && prevChar != '\n' && prevChar != '\t' && prevChar != '\0')
            {
                words++;
            }
        }
        prevChar = str[i];

        if(str[i] == '\0')
             break;
        else
             i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}