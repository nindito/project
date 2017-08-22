#include<iostream>
using namespace std;
//Samsil Arefin
int main()
{
    float loan,down,month,inter,interest,dsub,total,perinter,capital;
    int choice;
    printf("1.Total Monthly Installment\t");
    printf("2.Interest Per Installment\t");
    printf("3.Capital Per Installment\t");
    printf("\n\nEnter Your Choice:");
    scanf("%d",&choice);


if(choice==1){
    printf("\nEnter Loan Amount: ");
        scanf("%f",&loan);

    printf("\nEnter Your Down Payment: ");
        scanf("%f",&down);

    printf("\nEnter Yearly Interest: ");
        scanf("%f",&inter);

    interest = loan*(inter/100.0);
    dsub=loan-down;
    total=dsub-interest;

    printf("\n\nTotal Monthly Installment: %.2f",total);

            }

else if(choice==2){
    printf("\nEnter Number Of Monthly Installment: ");
        scanf("%f",&month);

    printf("\nEnter Yearly Interest: ");
        scanf("%f",&inter);

    perinter = month*(inter/100.0);

    printf("\n\nInterest Per Installment: %.2f",perinter);
                    }

else if(choice==3){
    printf("\nEnter Number Of Monthly Installment: ");
        scanf("%f",&month);

    printf("\nEnter Yearly Interest: ");
        scanf("%f",&inter);

    perinter = month*(inter/100.0);
    capital = month-perinter;

     printf("\n\nCapital Per Installment: %.2lf",capital);
                }

    else{
        printf("\n\tError!! Choose among the Shown options.");
        }
        
        return 0;
}

