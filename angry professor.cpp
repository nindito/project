#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int t,n,k,i,j;
    printf("How many times do u want to calculate??\nEnter the Number:\n");
    scanf("%d",&t);
    for(j = 1; j <=t; j++)
    {
        printf("Enter the Total Number of Student(s) in the class &\n");
        printf("Number of student(s) (The professor wants in attendance):\n");
        scanf("%d %d",&n,&k);
        int a[n],m=0,L=0;
        printf("Enter the arriving time of %d student(s):\n",n);
        for( i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>0)
            {
                m=m+1;
            }
            else
            {
                L=L+1;
            }
        }
        if(L >= k )
        {
            printf("NO,\nThe class is not canceled.\n");
        }
        else
        {
            printf("YES,\nThe class is canceled\n");
        }

    }
    return 0;
}
