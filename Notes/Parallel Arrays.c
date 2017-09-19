/* Guadarrama */

#include <stdio.h>
#include <math.h>
#define MAXSIZE 50

double aver (int, int, int);

main()
{
    int a, b, c, d, e, f, i;
    int studentid [10];
    double average [10], ave, ave2;

    studentid [0]=11;
    studentid [1]=12;

    printf("Enter grade for student id #11\n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("Enter grade for student id #12\n");

    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &i);

    ave=aver(a,b,c);
    ave2=aver(e,f,i);

    average[0]=ave;
    average[1]=ave2;

    for(d=0;d<2;d++)

        printf("student %d average is %2lf\n", studentid[d], average[d]);

    getch();
}

double aver (int gr1, int gr2, int gr3)
{
    double average;
    int total;

    total=gr1+gr2+gr3;
    average=total/3;

    return average;
}
