#include<stdio.h>
int mian()
{
int rows=5;
for(int i=0;i<rows;i++)
{
for(j=0;j<2*(rows-i)-1;j++)
{
printf(" ");
}
for(k=0;k<=i;k++)
{
printf("#");
}
printf("\n");
}
return 0;
}
