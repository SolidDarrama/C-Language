/*Guadarrama*/
/*User inputs 5 items
  Display the 5 items' prices
  added prices of all 5 items
  Created an if-else statement (apply 20% discount when total is over 100; if not over 100 don't apply anything)
  */

#include<stdio.h>

main()

{
double item1, item2, item3, item4, item5, totalcost=0, subtotal=0, tax=0, finalcost=0;
printf("Input the cost of the 5 items\n");
scanf("%lf",&item1);
scanf("%lf",&item2);
scanf("%lf",&item3);
scanf("%lf",&item4);
scanf("%lf",&item5);
printf("\nReceipt\n");
printf("%4.2f\n",item1);
printf("%1.2f\n",item2);
printf("%2.3f\n",item3);
printf("%2.1f\n",item4);
printf("%2.2f\n",item5);
printf("\nSubtotal\n");
totalcost=item1+item2+item3+item4+item5;
if (totalcost>100)
    subtotal=totalcost-(totalcost*.20);
    else
    subtotal=totalcost+0;
printf("%2.2f\n",subtotal);
printf("\nTotal Tax\n");
tax=subtotal*0.15;
printf("%2.2f\n",tax);
printf("\nTotal Cost\n");
finalcost=subtotal+tax;
printf("%2.2f\n",finalcost);
}
