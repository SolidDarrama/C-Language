/* Guadarrama */

#include <stdio.h>
#include <math.h>
#define MAXSIZE 50
main()
{
int categ, i, x, count=0, grade, finall;
int a[100];
double b[100];
char check;
double sum, average, add;

    printf("Enter the number of categories: ");
    scanf("%d", &categ);

    for ( i = 0; i < categ; i++ )
        {
        printf("\nEnter the weight: ");
        scanf("%lf",&a[i]);

        /* WBH --- BEWARE THIS IS A WHOLE NUMBER AND CATEGORY VALUES ARE PERCENTAGES -
        WHAT WILL THE USER ENTER? HOW WILL YOU HANDLE IN YOUR MATH? 3
        DO YOU WANT TO TELL USER TO ENTER PERCENTAGE AS WHOLE NUMBER? SOME THINGS TO THINK ABOUT */

        printf ("--- wbh pause 1  ----");getch();
        }
        system("cls");
printf ("--- wbh pause 2  ----");getch();
    for ( x = 0; x < categ; x++ )
    {
sum=0;
count=0;
        do{
            printf("Enter the grade for category %d: ", x+1);
            scanf("%d",&grade);
            printf("\n");
            printf("Continue the next grade? Type 'y' for YES and 'n' for NO: ");
            scanf("\n%c",&check);
            count++;
            sum+=grade;
            system ("cls");

          }
          while (check=='y');
          b[x]=sum/count;
    }
for ( x = 0; x < categ; x++ )
printf("\n- wbh - %d --- %.2lf ----", a[x],b[x]);
/* WBH ----- THE CODE ITSELF APPEARS TO BE WORKING CORRECTLY MAYBE NOT EXACTLY THE
"WAY" YOU WANT BUT IT IS WORKING CORRECTLY FOR THE WAY IT IS WRITTEN
, ARE THESE NUMBERS CORRECT??
IF NOT WHY?? LOOK AT HOW YOU ARE COUNTING AND ADDING AND WHAT YOU ARE COUNTING AND
ADDING EACH TIME AROUND THE FOR LOOP*/
getch();



/* i can't seem, to get the second category to work properly, for some reason the first time (or first category works as shown in
the printf statement on line 54) i imagine the problem is within the do while; do you have any tips or advice, thanks*/
    for ( x = 0; x < categ; x++ )
    printf("Overall Grade for Category %d: %2.1lf\n",x+1, b[x]);


/*also, this is the grade per category equation with the weight applied/ does this seem correct or in the right direction, i couldnt
 test it out since my run in problem mention in the comment [on line 51]*/
    for ( x = 0; x < categ; x++ )
    {
    finall=0;
    add=a[x]*b[x];
    finall+=add;
    }

    printf("\nTotal %2.1lf\n", finall);

getch();


}
