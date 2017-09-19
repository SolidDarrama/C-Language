#include <stdio.h>
#include <math.h>

/* && (and)
   || (or)  */

main()
{
    int a, b;
    char check;

    do{
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("\nEnter second value: ");
    scanf("&d", &b);
    if (a<5 || b>10)
        printf("\n\nNice Guess!!\n\n");
    else
        printf("\n\nSorry, you lose!!!\n\n");
    printf("Try again? type 'y' for YES and 'n' for NO: ");
    scanf("\n%c", &check);
    printf("\n");
    }
    while(check=='y');
    getch();
}
