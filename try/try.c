        print("Number of grades for Mary");
    scanf("%d", numgrd);
    for ( i = 0; i < numgrd; i++ )
    {
        printf("Enter grade: \n");
        scanf("%d",&grade[i]);
    }
        print("Number of grades for Debbie");
    scanf("%d", numgrd);
    for ( i = 0; i < numgrd; i++ )
    {
        printf("Enter grade: \n");
        scanf("%d",&grade[i]);
    }




    for ( i = 0; i < 5; i++ )
        {
        printf("\nEnte ");
        scanf("%lf",&student[i]);
        }
        system("cls");
/*----------------2nd--------------------------------*/
    for ( x = 0; x < categ; x++ )
    {
sum=0;
count=0; /* resets count to 0 for every category */
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
