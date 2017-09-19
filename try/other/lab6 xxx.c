/*xxx*/
#include<stdio.h>
#include<math.h>
void name1 (int,double);
void name (int,double);
main()
{
    int number=0;
    double a,total=0;
    char check;
    do{
            if(number<10)
            printf("Enter cost of item: ");
            else{
            printf("This Program Will Only Allow A Maximum of 10 Items, Please Start over!");
                 number=0;
                 total=0;
                 printf("\n\nEnter cost of Item: ");
            }
            scanf("%lf",&a);
            printf("\n");
            printf("continue with next number? type 'y' for YES and 'n' for NO: ");
            scanf("\n%c",&check);
            system ("cls");
            number++;
            total=total+a;
            system ("cls");


    }
    while (check=='y');
    name1(number,total);
}
void name1 (int number,double total)
{
    if (number<6)
        number=1;
    else
        number=2;



    name(number,total);




}
void name (int number,double total)
{
while (number<1 || number>2);
    switch(number){
        case 1:
            total=total-(total*.15);
            printf("you received 15 percent off your total is: %.2lf ",total);
            break;


        case 2:
            total=total-(total*.30);
            printf("you received 30 percent off your total is: %.2lf ",total);
            break;

}
getch();
}
