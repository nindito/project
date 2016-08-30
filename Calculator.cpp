#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    
    double num1,num2;
    char operation,redo;
 
    cout<<"Welcome to the calculater program  written by Samsil Arefin"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<endl<<endl<<endl;
    
    do
    {
       
    cout<<" Please enter an operation which you like to calculate (+,-,*,/,s)";
    cout<<"[s stands for swap]:";
    cin>>operation ;
    cout<<endl<<endl;
     cout<<" Please enter two numbers to apply your requested operation(";
    cout<<operation<<"):"<<endl<<"1st num:";
    cin>>num1;
    cout<<"2nd num:" ;
    cin>>num2;
    cout<<endl;
 
    switch (operation)
    {
        
     case'+':            
             cout<<"The addition of two numbers ("<<num1<<","<<num2<<"):";
             cout<<num1+num2<<endl;
             break; 
     case'-':
             cout<<"The substraction of two numbers ("<<num1<<","<<num2<<"):";
             cout<<num1-num2<<endl;
             break;
      case'*':
             cout<<"The multiplication of two numbers ("<<num1<<","<<num2<<"):";
             cout<<num1*num2<<endl;
             break;
      case'/':
             cout<<"The division of two numbers ("<<num1<<","<<num2<<"):";
             if(num2==0)
             {
             cout<<"not valid"<<endl;
             }
             cout<<(num1/num2)<<endl;
             break;
      case's':
             cout<<"The swap of two numbers ("<<num1<<","<<num2<<"):";
             swap(num1,num2);
             cout<<"1stnumber="<<num1<<"and 2nd number="<<num2<<endl<<endl;                    
           break;
      default:
              cout<<"unknown command"<<endl;
      
           }
      
           cout<<"enter y or Y to continue:";
           cin>>redo;
           cout<<endl<<endl;
           }
           while(redo=='y'||redo=='Y');
           
   system("pause");
    return 0;
    
    }
