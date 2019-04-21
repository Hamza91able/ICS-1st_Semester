#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
//clrscr();
long int dec_num,remainder,quotient;
int binary_num [100],i=1,j;
printf("Enter any decimal number: ");
scanf("%ld",&dec_num);
quotient=dec_num;
while(quotient!=0)
{
binary_num[i++]=quotient%2;
quotient=quotient/2;
}
printf("Equivalent binary value of the given decimal number %d is : ",dec_num);
for(j=i-1;j>0;j--)
{
printf("%d",binary_num[j]);
}
getch();
}
