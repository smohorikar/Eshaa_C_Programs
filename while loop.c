

#include <stdio.h>
main()
{
    int student,eng,sci,SS,mat,san,tot;
    student=1;
    while(student<=2)
    {
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
    printf("Student %d's grade is = A+\n",student);

    if((tot>=80)&&(tot<90))
    printf("Student %d's grade is = A-\n",student);

    if((tot>=70)&&(tot<80))
    printf("Student %d's grade is = B+\n",student);

    if((tot>=60)&&(tot<70))
    printf("Student %d's grade is = B-\n",student);

    if((tot>=50)&&(tot<60))
    printf("Student %d's grade is = C+\n",student);

    if((tot>=40)&&(tot<50))
    printf("Student %d's grade is = C-\n",student);

    if(tot<40)
    printf("Student %d's grade is = FAIL\n",student);
    student++;
    }

}


