/* review final */

#include<stdio.h>
#include<math.h>

main()
{
    char name[20] = {'H','O','l','l','y'}; /* 1st method of assigning an array*/
    char name1[20], name2[20], name3[20], check;
    int    count=0;

do{
        do{
   /* 2nd */  scanf("\n%c", &name1[10]); /* \n is needed when scanf a char */
   /* 3rd */ name2[10] = 'T';
   /* 4th */ scanf("%s", name3);
//-----------------------------------
    system("cls");
    printf("\n\n %s \n\n", name);
    printf("\n\n %c \n\n", name1[10]);
    printf("\n\n %c \n\n", name2[10]);
    printf("\n\n %s \n\n", name3);
    printf("Do you want to continue?");
    scanf("\n%c", &check);
    count++; /* give it a value, in this case 0 */

    }
while(check=='y');
    printf("Do you want to continue again?");
    scanf("\n%c", &check);
}
while(check=='y');



switch(count){
        case 1:
            printf("stoner");
            break;
        case 2:
            printf("who");
            break;
        case 3:
            printf("likes");
            break;
        case 4:
            printf("strange");
            break;
        case 5:
            printf("music");
            break;
}
if(count>=6)
printf("get a ride");

getch();
}
