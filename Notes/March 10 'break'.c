#include <stdio.h>
#include <math.h>

/* switch break  */

main()
{
    int a;
    double value;

    do{
    printf("Enter 1 for square, 2 for square root: ");
    scanf("%d", &a);
    }
    while(a<1 || a>2);
    printf("\nEnter value: ");
    scanf("%lf", &value);
    switch (a){
        case 1:
            value=value*value;
            printf("\n\nSquare = %.4lf\n\n",value);
            break;
        case 2:
            value=sqrt(value);
            printf("\n\nSquare = %.4lf\n\n",value);
            break;
    }
    getch();
}
