/*Calculation of bonus*/
#include <stdio.h>
main()
{
    int bonus,cy,yoj,yrofser;

    printf("Enter current year\n");
    scanf("%d",&cy);
    printf("Enter year of joining \n");
    scanf("%d",&yoj);

    yrofser=cy-yoj;
    bonus = 3000;
  if(yrofser>3)
  printf("bonus=Rs%d",bonus);
}
