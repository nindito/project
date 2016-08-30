#include<iostream>
using namespace std;


void area(){

    double A,B,C;
    double pi=3.14159;
    printf("\nEnter base width & height : ");
    scanf("%lf %lf %lf",&A,&B,&C);
    printf("\n TRIANGULO: %.3lf\n CIRCULO  : %.3lf\n TRAPEZIO : %.3lf\n QUADRADO : %.3lf\n RETANGULO: %.3lf\n",.5*A*C,pi*C*C,((A+B)/2)*C,B*B,A*B);


}


void cur()
{
    int A;
    float B;
    float BD,USA,IND,EUR,CN;

    printf("\n1: Bangladesh To ALL\n2: India To All\n3: USA To All\n4: Europe To All\n5: China TO All\n\nEnter your choice:");
    scanf("%d",&A);

    switch (A){

case 1:
    printf("\n\nEnter your Ammount : ");
    scanf("%f",&B);
    BD=B;
    USA=B*0.013;
    IND=B*0.86;
    EUR=B*0.011;
    CN=B*0.084;

    printf("\nBD: %.1f\n\n     USA  : %f \t\t  EUR : %f\n     INDIA: %f \t\t  CHINA: %f\n\n",BD,USA,EUR,IND,CN);

    break;

case 2:
    printf("\n\nEnter your Ammount : ");
    scanf("%f",&B);
    IND=B;
    BD=B*1.13;
    USA=B*0.015;
    EUR=B*0.013;
    CN=B*0.099;

    printf("\nINDIA: %.1f\n\n     USA  : %f \t\t  EUR : %f\n     BD: %f \t\t  CHINA: %f\n\n",IND,USA,EUR,BD,CN);
    break;

case 3:
    printf("\n\nEnter your Ammount : ");
    scanf("%f",&B);
    USA=B;
    BD=B*78.41;
    IND=B*67.14;
    EUR=B*0.88;
    CN=B*6.62;

    printf("\nUSA: %f\n\n     BD  : %f \t\t  EUR : %f\n     INDIA: %f \t  CHINA: %f\n\n",USA,BD,EUR,IND,CN);
    break;

case 4:
    printf("\n\nEnter your Ammount : ");
    scanf("%f",&B);
    EUR=B;
    BD=B*88.80;
    IND=B*76.03;
    USA=B*1.13;
    CN=B*7.50;

    printf("\nEUR: %f\n\n     BD  : %f \t\t  USA : %f\n     INDIA: %f \t  CHINA: %f\n\n",EUR,BD,USA,IND,CN);
    break;

case 5:
    printf("\n\nEnter your Ammount : ");
    scanf("%f",&B);
    CN=B;
    BD=B*11.84;
    IND=B*10.14;
    EUR=B*0.13;
    USA=B*0.15;

    printf("\nCHINA: %f\n\n    BD  : %f \t\t  EUR : %f\n    INDIA: %f \t\t  USA: %f\n\n",CN,BD,EUR,IND,USA);
    break;






    }
}


void len()
{
    int a;
    float i;
    printf("\n1. Meter TO ALL\n2. Centemeter TO ALL\n3. Kilometer TO ALL\n4. INCH TO ALL\n5. MILE TO ALL\n");
    printf("\nEnter your choice : ");
    scanf("%d",&a);
    switch(a){
case 1:
    printf("\nEnter the length in meter : ");
    scanf("%f",&i);

    printf("\n-> %.2f meter = %.4f CM\n",i,i*100);
    printf("-> %.2f meter = %.4f KM\n",i,i*.001);
    printf("-> %.2f meter = %.4f INCH\n",i,i*39.37007874);
    printf("-> %.2f meter = %.4f MILE\n",i,i*0.00062137119224);
    break;
case 2:
    printf("\nEnter the length in Centemeter : ");
    scanf("%f",&i);

    printf("\n-> %.2f CM = %.4f M\n",i,i*.01);
    printf("-> %.2f CM = %.4f KM\n",i,i* 0.00001);
    printf("-> %.2f CM = %.4f INCH\n",i,i*0.3937007874);
    printf("-> %.2f CM = %.4f MILE\n",i,i*0.0000062137119224);
    break;
case 3:
    printf("\nEnter the length in Kilometer : ");
    scanf("%f",&i);

    printf("\n-> %.2f KM = %.4f M\n",i,i*1000);
    printf("-> %.2f KM = %.4f CM\n",i,i*100000);
    printf("-> %.2f KM = %.4f INCH\n",i,i*39370.07874 );
    printf("-> %.2f KM = %.4f MILE\n",i,i*0.62137119224);
    break;
case 4:
    printf("\nEnter the length in INCH : ");
    scanf("%f",&i);

    printf("\n-> %.2f INCH = %.4f M\n",i,i*0.0254);
    printf("-> %.2f INCH = %.4f CM\n",i,i*2.54);
    printf("-> %.2f INCH = %.4f KM\n",i,i*0.0000254);
    printf("-> %.2f INCH = %.4f MILE\n",i,i*0.000015782828283);
    break;
case 5:
    printf("\nEnter the length in MILE : ");
    scanf("%f",&i);

    printf("\n-> %.2f MILE = %.4f M\n",i,i*1609.344);
    printf("-> %.2f MILE = %.4f CM\n",i,i*160934.4);
    printf("-> %.2f MILE = %.4f KM\n",i,i*1.609344);
    printf("-> %.2f MILE = %.4f INCH\n",i,i*63360);
    break;
    }


}


void weight()
{
    int a;
    float i;
    printf("\n1. kg to all\n2. cg to all\n3. Gram to all\n4. Pound to all\n5. Ton to all\n");
    printf("\nEnter your choice : ");
    scanf("%d",&a);
    switch(a){
case 1:
    printf("\nEnter the weight in kilogram : ");
    scanf("%f",&i);

    printf("\n-> %.4f kg = %.4f cg\n",i,i*100000);
    printf("-> %.4f kg = %.4f gram\n",i,i*1000);
    printf("-> %.4f kg = %.4f pound\n",i,i*2.2046226218);
    printf("-> %.4f kg = %.4f ton\n",i,i*0.001);
    break;
case 2:
    printf("\nEnter the weight in centegram : ");
    scanf("%f",&i);

    printf("\n-> %.4f cg = %.4f kg\n",i,i*0.00001);
    printf("-> %.4f cg = %.4f gram\n",i,i* 0.01);
    printf("-> %.4f cg = %.4f pound\n",i,i*0.000022046226218);
    //printf("%.4f cg = %.4f ton\n",i,i*0.0000062137119224);
    break;
case 3:
    printf("\nEnter the weight in gram : ");
    scanf("%f",&i);

    printf("\n-> %.4f gram = %.4f kg\n",i,i*0.001);
    printf("-> %.4f gram = %.4f cg\n",i,i*100);
    printf("-> %.4f gram = %.4f pound\n",i,i*0.0022046226218);
    printf("-> %.4f gram = %.4f ton\n",i,i*0.000001);
    break;
case 4:
    printf("\nEnter the weight in pound : ");
    scanf("%f",&i);

    printf("\n-> %.4f pound = %.4f kg\n",i,i*0.45359237);
    printf("-> %.4f pound = %.4f cg\n",i,i*45359.237);
    printf("-> %.4f pound = %.4f gram\n",i,i*453.59237);
    printf("-> %.4f pound = %.4f ton\n",i,i*0.00045359237);
    break;
case 5:
    printf("\nEnter the weight in ton : ");
    scanf("%f",&i);

    printf("\n-> %.4f ton = %.4f kg\n",i,i*1000);
    printf("-> %.4f ton = %.4f cg\n",i,i*100000000);
    printf("-> %.4f ton = %.4f gram\n",i,i*1000000);
    printf("-> %.4f ton = %.4f pound\n",i,i*2204.6226218);
    break;
    }

}


int main()
{
    printf("Project Name: Unit Conversion System\n");
    printf("==================================================\n\n");
    char c;
    printf("a. Currency \nb. Length \nc. Weight \nd. Area\n");
    printf("\n\nSelect your choice\n\n");
    printf("Press a/b/c/d : ");
    scanf("%c",&c);

    switch (c)
    {
        case 'a': cur();
        break;

        case 'b': len();
        break;

        case 'c': weight();
        break;

        case 'd': area();
        break;

        default: printf("Error!Please type small letter a or b or c or d.\n Thank you.");
    }
}

