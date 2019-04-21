#include<conio.h>
#include<stdio.h>
int main()
{
//clrscr();
long int binary_num,binary_numb,dec_num=0,j=1,remainder;
printf("Enter any binary number: ");
scanf("%ld",&binary_num);
binary_numb=binary_num;
while(binary_num!=0)
{
remainder=binary_num%10;
dec_num=dec_num+remainder*j;
j=j*2;
binary_num=binary_num/10;
}
printf("Equivalent decimal value of given binary number %ld is : %ld",binary_numb,dec_num);
getch();
}
