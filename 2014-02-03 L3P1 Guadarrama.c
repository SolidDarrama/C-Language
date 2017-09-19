/*Guadarrama*/

/*assign to double variables to 0
created a while loop to provide 30 items
create the statement item++ to keep adding another item until it reaches 30
assign one of the double variables, the value of (item * price ($4.50) * tax (15%))
displayed: total price*/


#include<stdio.h>
main()
{
    int count=1;
    double item=0, total=0, tax=0;
    while (item<=29)
        {
        item++;
        tax=item*0.15*4.5;
        total=item*4.5+tax;
        printf("%d", count);
        count++;
        printf(" Total Price = %lf\n",total);
        }
}
