/*Calculation of bonus*/
#include <stdio.h>
main()
{
    int tot,eng,sci,SS,mat,san;

    printf("Enter english marks\n");
    scanf("%d",&eng);
    printf("Enter science marks\n");
    scanf("%d",&sci);
    printf("Enter social science marks\n");
    scanf("%d",&SS);
    printf("Enter maths marks\n");
    scanf("%d",&mat);
    printf("Enter sanskrit marks\n");
    scanf("%d",&san);

    tot=((eng+sci+SS+mat+san)/5);

    if(tot>=90)
    printf("Student's grade is = A+");

    if((tot>=80)&&(tot<90))
    printf("Student's grade is = A-");

    if((tot>=70)&&(tot<80))
    printf("Student's grade is = B+");

    if((tot>=60)&&(tot<70))
    printf("Student's grade is = B-");

    if((tot>=50)&&(tot<60))
    printf("Student's grade is = C+");

    if((tot>=40)&&(tot<50))
    printf("Student's grade is = C-");

    if((tot>=30)&&(tot<40))
    printf("Student's grade is = D+");

    if(tot<30)
    printf("Student's grade is = FAIL");
}


