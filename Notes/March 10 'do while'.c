/* do while example */

#include <stdio.h>
#include <math.h>

main()
{
    int number, answer;
    char check; /*it's a character variable*/
    do{
        printf("Enter a number to be squared ");
        scanf("%d", &number);
        answer=number*number;
        printf("\nAnswer = %d\n\n", answer);
        printf("Continue with the next number? type 'y' for YES and 'n' for NO: ");
        scanf("\n%c", &check);
        printf("\n");
    }
    while(check=='y');

getch();
}
