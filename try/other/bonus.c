/* bonus*/
#include <stdio.h>
#include <math.h>
#include <ctype.h>
main()
{
    int number, answer;
    char check;
    do{

            printf("Enter a number to be squared ");
            scanf("%d",&number);
            answer=number*number;
            printf("\nAnswer = %d\n\n",answer);
            printf("continue with next number? type 'y' for YES and 'n' for NO :");
            scanf("\n%c",&check);
            printf("\n");
            check=putchar (tolower(check));
            system("cls");
    }
    while (check=='y');
getch();
}
