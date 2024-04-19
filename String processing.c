#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char sentence[10000];
    gets(sentence);

    char word[1000][40];
    int x=0,y=0,i;
    for(i=0; i<strlen(sentence); i++)
    {
        if(sentence[i]==' ' ||sentence[i]==',' ||sentence[i]=='.')
        {
            if(y!=0)
            {
                word[x][y]='\0';
                x++;
                y=0;
            }

        }
        else
            word[x][y++]=sentence[i];
    }
    printf("\n");
    for(i=0; i<=x; i++)
        printf("%s\n",word[i]);

    // for searching

    printf("\nSearch a word\n");
    char search[40];
    int flag=0;
    gets(search);
    for(i=0; i<x; i++)
        if(strcmp(search,word[i])==0)
        {
            flag=1;
            break;
        }
    if(flag==1)
        printf("Item is found");
    else
        printf("Item is not found");


    // string insertion 

    printf("\nInput a string to insert\n");
    int posi;
    char insertedString[40];
    printf("Enter a string:");
    gets(insertedString);
    printf("Enter a position:");
    scanf("%d",&posi);

    for(i=x; i>=posi; i--)
        strcpy(word[i+1],word[i]);
    
    strcpy(word[posi],insertedString);
    x++;
    printf("\n");
    for(i=0; i<x; i++)
        printf("%s\n",word[i]);


    // string deletion 
    printf("\nEnter a position for deletion");
    scanf("%d",&posi);

    for(i=posi; i<x-1; i++)
        strcpy(word[i],word[i+1]);

    x--;
    printf("\n");
    for(i=0; i<x; i++)
        printf("%s\n",word[i]);
    return 0;
}


