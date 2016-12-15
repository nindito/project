#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

/*
Platform=3.
Platform serial=0,1,2.
Waiting train max=3 .
Time of train standing in a platform is 10 minutes.
after 10 minutes trains left the platform automatically.
please input in minute for inserting train

*/

void insert(int train[], int time[], int a, int empty_line)
{
     train[empty_line] = 1;
        time[empty_line] = a;
        printf("\n\tTrain entered at platform %d.\n", empty_line);
}


void display(int train[], int waiting[])
{
    int i,sl=0;

printf("\n\t\t-----------------");
    printf("\n\t\tTrain in platform");
      printf("\n\t\t-----------------\n");

    for(i=0; i<3; i++)
    {
         ++sl;
        printf("\n\tNumber %d Train at/will %d no platform \n", sl,i);

    }
    printf("\n\t\t--------------");
    printf("\n\t\tTrain waiting");
    printf("\n\t\t--------------\n");
     for(i=0; i<3; i++)
    {
        if (waiting[i]== 0)
        {
            printf("\n\tNo Train in waiting at platform %d \n",i);
        }
        else
        printf("\t %d ", waiting[i]);
    }

}

void insertwait(int wating[], int waittime[], int a, int empty_line)
{
     wating[empty_line] = 1;
        waittime[empty_line] = a;
}

int leave_first(int train[], int time[], int new_time)
{
    int i;
    int lowest = 0;
    int empty_line = -1;
    for(i=0; i<3; i++)
    {
        if(lowest == 0)
        {
            lowest = time[i];
            empty_line = i;
        }
        if(time[i] < lowest)
        {
            lowest = time[i];
            empty_line = i;
        }
    }
    return empty_line;
}

int update_platform(int train[], int time[], int waiting[], int waittime[], int new_time)
{
    int i;
    int empty_line = -1;
    for(i=0; i<3; i++)
    {
        if(new_time - time[i] > 10)
        {
            train[i] = 0;
            time[i] = 0;

            if(waiting[i] != 0)
            {
                train[i] = waiting[i];
                time[i] = waittime[i];
            waiting[i] = 0;
            waittime[i] = 0;
            }
        }
    }

}



int get_empty(int train[], int n)
{
    int i;
    int empty_line = -1;
    for(i=0; i<n; i++)
    {
        if(train[i] == 0)
        {
            empty_line = i;

            break;
        }
    }
    return empty_line;
}




int main()
{
    int n = 3;
    int train[3] = {0};
    int time[3] = {0};
    int waittime[3] = {0};
    int waiting[3] = {0};
    int empty_line;
    int empty_line_wait;

    int i,j,k,l;
    int a, b, c, d;

  printf("\t\tTRAIN STATION SIMULATION \n ");

  printf("\t\t-------------------------\n\n ");
    menu:
 printf("\n\tPress 1 for inserting Trains\n\tPress 2 for Display Platforms State\n\tPress 3 to Quit\n\n\tEnter your choice:");
 scanf("%d", &k);

 switch(k)
 {
 	case 1:


 	printf("\n\tENTER THE TIME(Minute) FOR TRAIN NO: ");
    scanf("%d", &a);
    update_platform(train, time, waiting, waittime, a);
     empty_line = get_empty(train, n);
    if(empty_line == -1)
    {
        printf("/n\tAll platforms are busy.\n");
        int will_leave =  leave_first(train, time, a);
        printf("\n\tTrain should wait at platform %d.\n", will_leave);
        insertwait(waiting, waittime, a, will_leave);

    }else{
        train[empty_line] = 1;
        time[empty_line] = a;
        printf("\n\tTrain entered at platform %d.\n", empty_line);
    }



 	goto menu;
 	break;
 	case  2:
	 display(train, waiting);
	 goto menu;
	 case 3: exit(0);
	 break;
	 default:
	 printf("\n\tWrong type!!!!please try again.\n");
	 goto menu;
	 break;
 }





}


