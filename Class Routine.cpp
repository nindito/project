#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;



struct project
{
    char time[20];
    char course[20];
    char building[20];
    int room;
    char courseteacher[20];

};

void Aroom(void)
{
    printf("\t\t\t\tAvailable ClassRoom:\n\n");
    int a[9]= {101,102,103,104,105,106,107,108,109},i;
    for(i=0;i<9;i++)
    {
         if(i==0)
            printf("\t\tMax sit 35:\n");
        if(i==3)
            printf("\t\tMax sit 40:\n");
        if(i==6)
            printf("\t\tMax sit 45:\n");
             printf("\t\t\t\t%d)Room_NO : %d\n",i+1,a[i]);
    }


}


int room(int n)
{
    int a;
    printf("\t\t\tSuitable Room List:\n");
    if(n<=35)
        printf("\t\t\t\t1)101\n\t\t\t\t2)102\n\t\t\t\t3)103\n");
    if(n>35 &&  n<=40)
        printf("\t\t\t\t1)104\n\t\t\t\t2)105\n\t\t\t\t3)106\n");
    if(n>40 &&n<=45)
        printf("\t\t\t\t1)107\n\t\t\t\t2)108\n\t\t\t\t3)109\n");
    printf("Select a Room please(1-3):");
    scanf("%d",&a);
    if(n<=35)
    {
        switch(a)
        {
        case 1:
            return(101);
            break;
        case 2:
            return(102);
            break;
        case 3:
            return(103);
            break;
        }

    }
    if(n<=40)
    {
        switch(a)
        {
        case 1:
            return(104);
            break;
        case 2:
            return(105);
            break;
        case 3:
            return(106);
            break;
        }

    }
    if(n<=45)
    {
        switch(a)
        {
        case 1:
            return(107);
            break;
        case 2:
            return(108);
            break;
        case 3:
            return(109);
            break;
        }

    }
}




int main()
{

    int n,i,j,k=0,l=0,m=0,o=0,p=0,q=0,c,d,e,f,g,h,v,x;
    char s,a='y';
    struct project saturday[1000];
    struct project sunday[1000];
    struct project monday[1000];
    struct project tuesday[1000];
    struct project wednesday[1000];
    struct project thursday[1000];
    printf("\t\t\t\t\t\tWelcome to the Class routine.\n");
labal:
    printf("To create/edit routine of a day or 1 week please chose a option\n");
    printf("Chose a day/Option:\n\t\t1) Saturday.\n\t\t2) Sunday.\n\t\t3) Monday.\n\t\t4) Tuesday.\n\t\t5) Wednesday.\n\t\t6) Thursday.\n\t\t7) For inquiry.\n\t\t8) Available Room.\n\t\t9) Exit.\n");

    printf("Enter(1-9):");
    scanf("%d",&n);
    if(n==1||n==2||n==3||n==4||n==5||n==6||n==7||n==8)
    {
        printf("Enter the Section Name: ");
        scanf(" %c",&s);
        printf("\nEnter Students Number(Max 45):");
        scanf("%d",&x);
        while(x>45)
        {
           printf("!warning!_Max 45:\n");
           scanf("%d",&x);
           if(x<=45)
            break;
        }
        printf("\n");
        switch(n)
        {
        case 1 :
        {

            printf("\t\t\t\t\tDay:SATURDAY\n\n");
            printf("Do you want to take class in Saturday??[y/n]:");
            scanf(" %c",&a);
            if(a=='y')
            {
                k++;
                printf("Haw many class?:");
                scanf("%d",&c);

                for(i=0; i<c; i++)
                {
                    printf("\n%d)class:\n",i+1);
                    printf("An Example 0f time:08.00-09.00\nEnter Time:");
                    scanf("%s",&saturday[i].time);
                    while(i>=1)
                    {
                        if(strcmp(saturday[i].time,saturday[i-1].time)==0)
                        {
                            printf("Error!same time,Enter another Time:");
                            scanf("%s",&saturday[i].time);
                        }
                        break;
                    }
                    printf("Enter Subject:");
                    scanf("%s",&saturday[i].course);
                    printf("Enter Building:");
                    scanf("%s",&saturday[i].building);
                    saturday[i].room=room(x);
                    printf("Enter teacher initial: ");
                    scanf("%s",&saturday[i].courseteacher);
                    printf("\n\n");

                }
                printf("\t\t\t\t\tDay:SATURDAY\n\n");
                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<c; j++)
                    printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",saturday[j].time,saturday[j].course,saturday[j].building,saturday[j].room,saturday[j].courseteacher);



            }
            else
            {
                printf("\t\tNo class\n");
            }


            printf("Do you want to go next day? [y/n] : ");
            scanf(" %c",&a);
            if(a=='y')
                goto labal1;
            else
                goto labal;

        }


labal1:
        case 2:
        {

            printf("\t\t\t\t\tDay:SUNDAY\n\n");
            printf("Do you want to take class in sunday??[y/n]:");
            scanf(" %c",&a);
            if(a=='y')
            {
                l++;
                printf("Haw many class?:");
                scanf("%d",&d);

                for(i=0; i<d; i++)
                {
                    printf("\n%d)class:\n",i+1);
                    printf("An Example 0f time:08.00-09.00\nEnter Time:");
                    scanf("%s",&sunday[i].time);
                    while(i>=1)
                    {
                        if(strcmp(sunday[i].time,sunday[i-1].time)==0)
                        {
                            printf("Error!same time,Enter another Time:");
                            scanf("%s",&sunday[i].time);
                        }
                        break;
                    }
                    printf("Enter Subject:");
                    scanf("%s",&sunday[i].course);
                    printf("Enter Building:");
                    scanf("%s",&sunday[i].building);
                    sunday[i].room=room(x);
                    printf("Enter teacher initial: ");
                    scanf("%s",&sunday[i].courseteacher);

                }
                printf("\t\t\t\t\tDay:SUNDAY\n\n");
                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<d; j++)
                    printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",sunday[j].time,sunday[j].course,sunday[j].building,sunday[j].room,sunday[j].courseteacher);



            }
            else
            {
                printf("\t\tNo class\n");
            }
            printf("Do you want to go next day? [y/n] : ");
            scanf(" %c",&a);
            if(a=='y')
                goto labal2;
            else
                goto labal;

        }
labal2:
        case 3:

        {

            printf("\t\t\t\t\tDay:MONDAY\n\n");
            printf("Do you want to take class in Monday??[y/n]:");
            scanf(" %c",&a);
            if(a=='y')
            {
                m++;
                printf("Haw many class?:");
                scanf("%d",&e);

                for(i=0; i<e; i++)
                {
                    printf("\n%d)class:\n",i+1);
                    printf("An Example 0f time:08.00-09.00\nEnter Time:");
                    scanf("%s",&monday[i].time);
                    while(i>=1)
                    {
                        if(strcmp(monday[i].time,monday[i-1].time)==0)
                        {
                            printf("Error!same time,Enter another Time:");
                            scanf("%s",&monday[i].time);
                        }
                        break;
                    }
                    printf("Enter Subject:");
                    scanf("%s",&monday[i].course);
                    printf("Enter Building:");
                    scanf("%s",&monday[i].building);
                    monday[i].room=room(x);
                    printf("Enter teacher initial: ");
                    scanf("%s",&monday[i].courseteacher);

                }
                printf("\t\t\t\t\tDay:MONDAY\n\n");
                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<e; j++)
                    printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",monday[j].time,monday[j].course,monday[j].building,monday[j].room,monday[j].courseteacher);



            }
            else
            {
                printf("\t\tNo class\n");
            }


            printf("Do you want to go next day? [y/n] : ");
            scanf(" %c",&a);
            if(a=='y')
                goto labal3;
            else
                goto labal;


        }
labal3:
        case 4 :
        {

            printf("\t\t\t\t\tDay:TUESDAY\n\n");
            printf("Do you want to take class in TUESDAY??[y/n]:");
            scanf(" %c",&a);
            if(a=='y')
            {
                o++;
                printf("Haw many class?:");
                scanf("%d",&f);

                for(i=0; i<f; i++)
                {
                    printf("\n%d)class:\n",i+1);
                    printf("An Example 0f time:08.00-09.00\nEnter Time:");
                    scanf("%s",&tuesday[i].time);
                    while(i>=1)
                    {
                        if(strcmp(tuesday[i].time,tuesday[i-1].time)==0)
                        {
                            printf("Error!same time,Enter another Time:");
                            scanf("%s",&tuesday[i].time);
                        }
                        break;
                    }
                    printf("Enter Subject:");
                    scanf("%s",&tuesday[i].course);
                    printf("Enter Building:");
                    scanf("%s",&tuesday[i].building);
                    printf("Enter Room: ");
                   tuesday[i].room=room(x);
                    printf("Enter teacher initial: ");
                    scanf("%s",&tuesday[i].courseteacher);

                }
                printf("\t\t\t\t\tDay:TUESDAY\n\n");
                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<f; j++)
                    printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",tuesday[j].time,tuesday[j].course,tuesday[j].building,tuesday[j].room,tuesday[j].courseteacher);



            }
            else
            {
                printf("\t\tNo class\n");
            }


            printf("Do you want to go next day? [y/n] : ");
            scanf(" %c",&a);
            if(a=='y')
                goto labal4;
            else
                goto labal;

        }
labal4:
        case 5 :
        {

            printf("\t\t\t\t\tDay:WEDNESDAY\n\n");
            printf("Do you want to take class in Wednesday??[y/n]:");
            scanf(" %c",&a);
            if(a=='y')
            {
                p++;
                printf("Haw many class?:");
                scanf("%d",&g);

                for(i=0; i<g; i++)
                {
                    printf("\n%d)class:\n",i+1);
                    printf("An Example 0f time:08.00-09.00\nEnter Time:");
                    scanf("%s",&wednesday[i].time);
                    while(i>=1)
                    {
                        if(strcmp(wednesday[i].time,wednesday[i-1].time)==0)
                        {
                            printf("Error!same time,Enter another Time:");
                            scanf("%s",&wednesday[i].time);
                        }
                        break;
                    }
                    printf("Enter Subject:");
                    scanf("%s",&wednesday[i].course);
                    printf("Enter Building:");
                    scanf("%s",&wednesday[i].building);
                    wednesday[i].room=room(x);
                    printf("Enter teacher initial: ");
                    scanf("%s",&wednesday[i].courseteacher);

                }
                printf("\t\t\t\t\tDay:WEDNESDAY\n\n");
                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<g; j++)
                    printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",wednesday[j].time,wednesday[j].course,wednesday[j].building,wednesday[j].room,wednesday[j].courseteacher);



            }
            else
            {
                printf("\t\tNo class\n");
            }


            printf("Do you want to go next day? [y/n] : ");
            scanf(" %c",&a);
            if(a=='y')
                goto labal5;
            else
                goto labal;

        }
labal5:
        case 6 :
        {

            printf("\t\t\t\t\tDay:THURSDAY\n\n");
            printf("Do you want to take class in Thursday??[y/n]:");
            scanf(" %c",&a);
            if(a=='y')
            {
                q++;
                printf("Haw many class?:");
                scanf("%d",&h);

                for(i=0; i<h; i++)
                {
                    printf("\n%d)class:\n",i+1);
                    printf("An Example 0f time:08.00-09.00\nEnter Time:");
                    scanf("%s",&thursday[i].time);
                    while(i>=1)
                    {
                        if(strcmp(thursday[i].time,thursday[i-1].time)==0)
                        {
                            printf("Error!same time,Enter another Time:");
                            scanf("%s",&thursday[i].time);
                        }
                        break;
                    }
                    printf("Enter Subject:");
                    scanf("%s",&thursday[i].course);
                    printf("Enter Building:");
                    scanf("%s",&thursday[i].building);
                    thursday[i].room=room(x);
                    printf("Enter teacher initial: ");
                    scanf("%s",&thursday[i].courseteacher);

                }
                printf("\t\t\t\t\tDay:THURSDAY\n\n");
                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<h; j++)
                    printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",thursday[j].time,thursday[j].course,thursday[j].building,thursday[j].room,thursday[j].courseteacher);



            }
            else
            {
                printf("\t\tNo class\n");
            }


            printf("Do you want to go next day? [y/n] : ");
            scanf(" %c",&a);
            if(a=='y')
                goto labal;
            else
                goto labal;

        }
        case 7:
        {
            printf("\t\t\t<-------Routine For Section %c__(%d)------->\n\n",c,x);

            printf("\t\t\t\t\tDay:SATURDAY\n\n");
            if(k!=0)
            {

                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<c; j++)
                   printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",saturday[j].time,saturday[j].course,saturday[j].building,saturday[j].room,saturday[j].courseteacher);
                printf("\n\n");

            }
            else
                printf("\t\t\tNo class in Saturday.\n\n");

            printf("\t\t\t\t\tDay:SUNDAY\n\n");
            if(l!=0)
            {

                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<d; j++)
                     printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",sunday[j].time,sunday[j].course,sunday[j].building,sunday[j].room,sunday[j].courseteacher);
                printf("\n\n");

            }
            else
                printf("\t\t\tNo class in SUNDAY.\n\n");

            printf("\t\t\t\t\tDay:MONDAYDAY\n\n");
            if(m!=0)
            {

                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<e; j++)
                     printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",monday[j].time,monday[j].course,monday[j].building,monday[j].room,monday[j].courseteacher);
                printf("\n\n");

            }
            else
                printf("\t\t\tNo class in Monday.\n\n");

            printf("\t\t\t\t\tDay:TUESDAY\n\n");
            if(o!=0)
            {

                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<f; j++)
                   printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",tuesday[j].time,tuesday[j].course,tuesday[j].building,tuesday[j].room,tuesday[j].courseteacher);
                printf("\n\n");

            }
            else
                printf("\t\t\tNo class in Tuesday.\n\n");

            printf("\t\t\t\t\tDay:WEDNESDAY\n\n");
            if(p!=0)
            {

                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<g; j++)
                 printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",wednesday[j].time,wednesday[j].course,wednesday[j].building,wednesday[j].room,wednesday[j].courseteacher);
                printf("\n\n");

            }
            else
                printf("\t\t\tNo class in Wednesday.\n\n");

            printf("\t\t\t\t\tDay:THURSDAY\n\n");
            if(q!=0)
            {

                printf("\tTime\t\t\tSubject\t\tBuilding\tRoom\tTeacher\n");
                for(j=0; j<h; j++)
                     printf("\t%s\t\t%s\t\t%s\t\t%d\t%s\n",thursday[j].time,thursday[j].course,thursday[j].building,thursday[j].room,thursday[j].courseteacher);
                printf("\n\n");

            }
            else
                printf("\t\t\tNo class in Thursday.\n\n");
            printf("\nDo you Want to continue?[y/n]: ");
            scanf(" %c",&a);
            if(a=='y')
                goto labal;
            else
                break;

        }
        case 8:
            Aroom();
             printf("\nDo you Want to continue?[y/n]: ");
            scanf(" %c",&a);
            if(a=='y')
                goto labal;
            else
                break;


        }
    }
    else if(n==9)
        return 0;
    else
    {
        printf("!Wrong keyword!\nTo avoid the error please enter any key from 1 to 8.\n");
        goto labal;
    }



}


