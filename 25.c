#include<stdio.h>

void main(){

int n,i,sum=0;


printf("---------------------------------------------------------------------------------\n");
printf("\t\tPPS-25-evaluate the series 1^2+2^2+3^2+��+n^2\n");
printf("---------------------------------------------------------------------------------\n");

printf("\nEnter Value of n : ");
scanf("%d",&n);

printf("\n---------------------------------------------------------------------------------\n");
for(i=1;i<=n;i++)
{
 sum=sum+(i*i);
}
printf("Sum of Series = %d",sum);

printf("\n---------------------------------------------------------------------------------\n");
}
















