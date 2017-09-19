/*Azael Roa*/
#include<stdio.h>
#include<math.h>
double function (double);
main()
{
    int categories,count,time=0,division[20];
    double weight[20],y,grade,category[20],sum,ctotal[20],total=0;
    char check;
    printf("Enter how many categories: ");
    scanf("%d",&categories);
    for(count=0;count<categories;count++){
        printf("Enter Weight in decimal number: ");
        scanf("%lf",&y);
        weight[count]=y;
    }
    system("cls");
for(count=0;count<categories;count++){
    do{
        printf("\nEnter a grade: ");
        scanf("\n%lf",&grade);
        sum+=grade;
        printf("Enter y to enter another grade or n to move to next category: ");
        scanf("\n%c",&check);
        time++;
        }
    while (check=='y');
    division[count]=time;
    category[count]=sum;
    time=0;
    sum=0;
}
system("cls");
for(count=0;count<categories;count++){
printf("\nOverall grade from each category: %.1lf",category[count]/division[count]);
ctotal[count]=(category[count]/division[count])*weight[count];
total+=ctotal[count];
}
double function (double total);
{
printf("\nOverall grade for the course: %.1lf",total);
getch();
}
}


