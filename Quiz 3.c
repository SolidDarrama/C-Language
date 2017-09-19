/* CEN 180 Quiz 3 - SOLUTION
2 Write a program that the user can ONLY input 2, 5, or 8 items at a grocery store.
3 If the items are any other number than 2, 5, or 8, then a message will display
4 saying "Sorry, incorrect number of items, try again" and the program will end.
5 The beginning of the program should display a message saying, "How many items do
6 you have?"
7
8 If the customer has 2 items, he or she will receive a discount of 5%.
9 If the customer has 5 items, he or she will receive a discount of 10%.
10 If the customer has 8 items, he or she will receive a discount of 15%.
11
12 All items are to be taxed at 15%, AFTER the discount has been applied.
13
14 After the discount and tax have been applied, the display should show the total
15 due for the customer. The "total due" display should have a decimal precision of
16 two places past the decimal.
17
18 YOU MUST DEFINE AT LEAST 1 CONSTANT. YOU MUST USE AT LEAST 1 IF HEADER WITH
19 MULTIPLE STATEMENTS.
20 */

 #include <stdio.h>
 #include <math.h>
 #define TAX .15

 main()

 {
double b, c, d, e, f, g, h, i,totaldue, subtotal;
 int a;

 printf("How many items do you have? ");
 scanf("%d", &a);

 if (a == 2) {
 printf("Enter cost of first item ");
 scanf("%lf", &b);
 printf("Enter cost of second item ");
 scanf("%lf", &c);
 subtotal = (b + c) * .95; /* 5% Discount */
 totaldue = (TAX * subtotal) + subtotal;
 printf("Total Due = %4.2lf", totaldue);
 }

 if (a == 5) {
 printf("Enter cost of first item ");
 scanf("%lf", &b);
 printf("Enter cost of second item ");
 scanf("%lf", &c);
 printf("Enter cost of third item ");
 scanf("%lf", &d);
 printf("Enter cost of fourth item ");
 scanf("%lf", &e);
 printf("Enter cost of fifth item ");
 scanf("%lf", &f);
 subtotal = (b + c + d + e + f) * .90; /* 10% Discount */
 totaldue = (TAX * subtotal) + subtotal;
 printf("Total Due = %4.2lf", totaldue);
 }

 if (a == 8) {
 printf("Enter cost of first item ");
 scanf("%lf", &b);
 printf("Enter cost of second item ");
 scanf("%lf", &c);
 printf("Enter cost of third item ");
 scanf("%lf", &d);
 printf("Enter cost of fourth item ");
 scanf("%lf", &e);
 printf("Enter cost of fifth item ");
 scanf("%lf", &f);
 printf("Enter cost of sixth item ");
 scanf("%lf", &g);
 printf("Enter cost of seventh item ");
 scanf("%lf", &h);
 printf("Enter cost of eighth item ");
 scanf("%lf", &i);
 subtotal = (b + c + d + e + f + g + h + i) * .85; /* 15% Discount */
 totaldue = (TAX * subtotal) + subtotal;
 printf("Total Due = %4.2lf", totaldue);
 }
 if (a < 2)
 printf("Sorry, incorrect number of items, try again!");
 if (a == 3)
 printf("Sorry, incorrect number of items, try again!");
 if (a > 8)
 printf("Sorry, incorrect number of items, try again!");
 if (a == 4)
 printf("Sorry, incorrect number of items, try again!");
 if (a == 6)
 printf("Sorry, incorrect number of items, try again!");
 if (a == 7)
 printf("Sorry, incorrect number of items, try again!");

 getch();

 }
