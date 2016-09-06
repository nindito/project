#include<iostream>
#include<cstring>
using namespace std;

//samsil arefin
int main()
{
    int t,choice,n,len,counter,i;
    char words[10][100]= {"ABEER","SAKIB","DEBASISH","ABIR","MAHMUD","PRANTA","BIJOY","KOLY","RAFI","AUNTU"};
    char game[100];
    char result[100];
    char ch;
    printf("Choose a random number between 1-10: ");
    scanf("%d",&choice);
    strcpy(game,words[choice-1]);
    len=strlen(game);
    for(i=0; i<len; i++)
    {
        result[i]='_';
    }
    result[len]='\0';
    printf("\n--::Game Started::--\n");
    n=11;
    counter=0;
    while(--n)
    {
        printf("\n");
        printf("Puzzle:-     ");
        for(i=0; i<len; i++)
            printf("%c ",result[i]);
        if(counter>=len)
        {//samsil arefin
            printf("\n--::You have solved the puzzle::--\n");
            break;
        }
        printf("\nYou have %d chances left",n);
        printf("\nInsert a valid character: ");
        scanf(" %c",&ch);//samsil arefin);
        ch=toupper(ch);
        for(i=0; i<len; i++)
        {
            if(game[i]==ch)
            {
                result[i]=ch;
                counter++;
            }
        }
    }
    return 0;
}

