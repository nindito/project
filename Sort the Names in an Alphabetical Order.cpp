/*
 * CPP program to read N names, store them in the form of an array
 * and sort them in alphabetical order. Output the given names and
 * the sorted names in two columns side by side.
 
                By Samsil Areifn
 */
 
By Samsil Areifn


#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    char name[20][10], temp_name[20][10], temp[10];
    int i, j, n;
 
    printf("Enter the number of Names you want to do input:\n"); //how many names input
    scanf("%d", &n);
    printf("Enter names: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        strcpy(temp_name[i], name[i]);
    } //input names
    for (i = 0; i < n - 1 ; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    } //for alphabetically sorting
    printf("\n----------------------------------------\n");
    printf(" Input   ||  NamestSorted names\n");
    printf("------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t || \t%s\n", temp_name[i], name[i]); //printf storted names
    }
    printf("------------------------------------------\n");
}
