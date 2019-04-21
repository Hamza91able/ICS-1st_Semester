#include<conio.h>
#include<stdio.h>
#include<math.h>

void main ()
{
clrscr();
long int dec_num,remainder,quotient;
int i=1,j,k;
char hexa_dec_num[100];
printf("Enter any decimal number : ");
scanf("%ld",&dec_num);
quotient=dec_num;

while(quotient!=0)
{
k=quotient%16;

//converting integer in2 character
if(k<10)
{
k=k+48;
}
else
{
k=k+55;
}
hexa_dec_num[i++]=k;
quotient=quotient/16;
}
printf("Equivalent hexadecimal value of given decimal number %ld is : ",dec_num);
for(j=i-1;j>0;j--)
{
printf("%c",hexa_dec_num[j]);
}
getch();
}