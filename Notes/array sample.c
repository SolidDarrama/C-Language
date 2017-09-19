/* Guadarrama */

#include <stdio.h>
#include <math.h>
#define MAXSIZE 50


main()
{
int grade[MAXSIZE][4];
int cla;
int num;

printf("how many stu");
scanf("%d",&cla);
for (num=0;num<cla;num++)
    {
     printf("type in four grades for the next student");
     scanf("%d",&grade[num][0]);
     scanf("%d",&grade[num][1]);
     scanf("%d",&grade[num][2]);
     scanf("%d",&grade[num][3]);
     printf("the grades were: %d %d %d %d\n", grade[num][0], grade[num][1], grade[num][2], grade[num][3]);
    }
getch();
}

