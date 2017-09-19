/* Guadarrama */

#include <stdio.h>
#include <math.h>

void zone1 (int,double);
void zone2 (int,double);

main()
{
int count=0;
char conti;
double total=0, x;

    do{
            if(count<10)
                 printf("Enter cost of the item: ");
            else
                {
                 printf("This Program Will Only Allow A Maximum of 10 Items, Please Start Over!\n");
                 count=0;
                 total=0;
                 printf("\nEnter cost of the item: ");
                }
                 scanf("%lf",&x);
                 printf("\n");
                 printf("Continue with the next item? Type 'y' for YES and 'n' for NO: ");
                 scanf("\n%c",&conti);
                 system ("cls");
                count++;
                 total=total+x;
                system ("cls");


    }
        while (conti=='y');
        zone1(count,total);
}

/*Void zone1: its job is to check whether the item count is above or below 5*/
void zone1 (int count,double total)
        {
            if (count<6)
                count=1;
            else
                count=2;

                zone2(count,total);
        }

/*Void zone 2: its job is to apply the discount amount, after verify from zone1 (number of items)*/
void zone2 (int count,double total)
        {
            while (count<1 || count>2);
            switch(count){
                case 1:
                    total=total-(total*.15);
                    printf("15 Percent Discount Applied, Your Total is: $%.2lf ",total);
                    break;
                case 2:
                    total=total-(total*.30);
                    printf("30 Percent Discount Applied, Your Total is: $%.2lf ",total);
                    break;
        }

getch();
}


