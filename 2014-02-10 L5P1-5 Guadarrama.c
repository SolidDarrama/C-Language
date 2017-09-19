/*Guadarrama*/

#include<stdio.h>
#include<math.h>


/*made a prototype for each equation (item=cost*tax) and final total cost*/
double costtax1 (double, double);
double costtax2 (double, double);
double costtax3 (double, double);
double costtax4 (double, double);
double costtax5 (double, double);
double total (double, double, double, double, double);

main()
{
double item1, item2, item3, item4, item5, tax1, tax2, tax3, tax4, tax5, cost1, cost2, cost3, cost4, cost5, TotalCost=0;

/*make scan for each item cost*/
printf("Input Cost of Item:\n");
scanf("%lf",&item1);
scanf("%lf",&item2);
scanf("%lf",&item3);
scanf("%lf",&item4);
scanf("%lf",&item5);

/*make scan for each item's tax*/
printf("\nInput Tax Amount in Decimal Form:\n");
scanf("%lf",&tax1);
scanf("%lf",&tax2);
scanf("%lf",&tax3);
scanf("%lf",&tax4);
scanf("%lf",&tax5);

/*use the sub program to solve the equation (cost*tax) for each item*/
cost1=costtax1(item1, tax1);
cost2=costtax2(item2, tax2);
cost3=costtax3(item3, tax3);
cost4=costtax4(item4, tax4);
cost5=costtax5(item5, tax5);

system("cls");

/*use the sub program to solve the total cost of all items combine (after taxes are added)*/
TotalCost=total(cost1, cost2, cost3, cost4, cost5);
printf("Total Cost of All:\n%2.2f",TotalCost);

getch();
}
/*Equation for the 1st item, cost * tax*/
double costtax1(double item1, double tax1)
{
double cost1;
cost1=(item1*tax1)+item1;
return cost1;
}
/*Equation for the 2nd item, cost * tax*/
double costtax2(double item2, double tax2)
{
double cost2;
cost2=(item2*tax2)+item2;
return cost2;
}
/*Equation for the 3rd item, cost * tax*/
double costtax3(double item3, double tax3)
{
double cost3;
cost3=(item3*tax3)+item3;
return cost3;
}
/*Equation for the 4th item, cost * tax*/
double costtax4(double item4, double tax4)
{
double cost4;
cost4=(item4*tax4)+item4;
return cost4;
}
/*Equation for the 5th item, cost * tax*/
double costtax5(double item5, double tax5)
{
double cost5;
cost5=(item5*tax5)+item5;
return cost5;
}
/*Equation for adding all the items(after tax)*/
double total(double cost1, double cost2, double cost3, double cost4, double cost5)
{
double totalcost;
totalcost=cost1+cost2+cost3+cost4+cost5;
return totalcost;
}
