#include<conio.h>
#include<stdio.h>
#include<math.h>

int main ()
{
//clrscr();
long int octal_num,octal_numb,decimal_num=0;
int i=0;
printf("Enter any octal number : ");
scanf("%ld",&octal_num);
octal_numb=octal_num;
while(octal_num!=0)
{
decimal_num = decimal_num + (octal_num % 10) * pow(8,i++);
octal_num = octal_num/10;
}
printf("Equivalent decimal value of given octal number %ld is : %ld",octal_numb,decimal_num);
getch();
}
