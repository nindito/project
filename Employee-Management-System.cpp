#include<iostream>
#include<cstring>
using namespace std;

int main() {
int n;

struct employee {
  char name[20];
  int sl;
  int id;
  };

   
    





    printf("\n\t::: Employee Management System :::\n");
    printf("\n\t==================================\n");
    printf("\n\tEnter Employee Range : ") ;
    scanf("%d", &n) ;

 float avg_salary,salary[n],total_salary=0;
 struct employee c[n],temp;
 float max=0;
    float min=0;


int i,j;


for(i=0;i<n;i++) {

printf("\n\t\t\t\t\tEnter data of Employee no. %d\n\n",i+1);



printf("\n\t\t\t\t\tSerial No: ");
scanf("%d",&c[i].sl);

fflush(stdin);
printf("\n\t\t\t\t\tName: ");
gets(c[i].name);


printf("\n\t\t\t\t\tID: ");
scanf("%d",&c[i].id);

printf("\n\t\t\t\t\tSalary: ");
scanf("%f",&salary[i]);

        total_salary+=salary[i];
        avg_salary = total_salary/n;



}

for(i=0;i<n;i++) {
printf("\n\t\t\t\t\tDetails of No. %d Employee",i+1);
printf("\n\t\t\t\t\t--------------------------");
printf("\n\t\t\t\t\tSerial :%d\n\t\t\t\t\tName :%s\n\t\t\t\t\tID :%d\n\t\t\t\t\tSalary :%.2f\n\n",c[i].sl,c[i].name,c[i].id,salary[i]);

}
    printf("\n\t\t\t\t\tTotal Salary of all Employees : %.2f\n",total_salary);
    printf("\n\t\t\t\t\tAverage Salary of an Employee : %.2f\n",avg_salary);

    min=salary[0];
    max=salary[0];


for(i=0;i<n;i++)
{
if(salary[i]>max)
max=salary[i];
if(salary[i]<min)
min=salary[i];
}

printf("\n\t\t\t\t\tThe Maximum Salary is %5.2f\n",max);
printf("\n\t\t\t\t\tThe Minimum Salary is %5.2f\n",min);

return 0;

}


