#include<conio.h>
#include<stdio.h>
#include<math.h>

void main ()
{
clrscr();
long int dec_num,remainder,quotient;
int octal_num[100],i=1,j;
printf("Enter any decimal number: ");
scanf("%ld",&dec_num);
quotient=dec_num;
while(quotient!=0)
{
octal_num[i++]=quotient%8;
quotient=quotient/8;
}
printf("Equivalent octal value of given decimal number %ld is: ",dec_num);
for(j=i-1;j>0;j--)
{
printf("%d",octal_num[j]);
}
getch();
}