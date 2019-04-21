#include<stdio.h>
#include <conio.h>
#include <math.h>
#include<string.h>
void decimal_to_binary(); //1
void decimal_to_hexa();   //2
void decimal_to_octa();   //3
void binary_to_decimal(); //4
void binary_to_octa();    //5
void binary_to_hexa();    //6
void hexa_to_decimal();   //7
void hexa_to_binary();    //8
void hexa_to_octa();      //9
void octa_to_decimal();   //10
void octa_to_binary();    //11
void octa_to_hexa();      //12
int main ()
{
	int op;
	printf("\t\t\t***NUMBER SYSTEM CONVERTER***\n\n");
	char choice;
	do{
	printf("PRESS 1  : For Decimal to Binary Conversion \n");
	printf("PRESS 2  : For Decimal to Hexa Decimal Conversion \n");
	printf("PRESS 3  : For Decimal to Octal Conversion\n");
	printf("PRESS 4  : For Binary to Decimal Conversion\n"); 
	printf("PRESS 5  : For Binary to octal Conversion\n");
	printf("PRESS 6  : For Binary to Hexa Decimal Conversion\n");
	printf("PRESS 7  : For Hexa Decimal to Decimal Conversion\n");
	printf("PRESS 8  : For Hexa Decimal to Binary Conversion\n");
	printf("PRESS 9  : For Hexa Decimal to Octal Conversion\n");
	printf("PRESS 10 : For Octal to Decimal Conversion\n");
	printf("PRESS 11 : For Octal to Binary Conversion\n");
	printf("PRESS 12 : For Octal to Hexa Decimal Conversion\n");
		scanf("%d",&op);
		switch (op)
		{	
			case 1:
			decimal_to_binary();
			break;
			case 2:
			decimal_to_hexa();
			break;
			case 3:
			decimal_to_octa();
			break;
			case 4:
		    binary_to_decimal();
			break;
			case 5:
		    binary_to_octa();
			break;
			case 6:
		    binary_to_hexa();
			break;
			case 7:
		    hexa_to_decimal();
			break;
			case 8:
		    hexa_to_binary();
			break;
			case 9:
		    hexa_to_octa();
			break;
			case 10:
		    octa_to_decimal();
			break;
			case 11:
		    octa_to_binary();
			break;
			case 12:
		    octa_to_hexa();
			break;
			default:
				printf("you entered the wrong choice\n");
			}
	printf("\nEnter Y to again convert And N to quit\n");	
	fflush(stdin);
	scanf(" %c", &choice);
	printf("\n");
	}while(choice=='Y'||choice=='y');
	printf("\t\t\t***HOPE YOU HAVE A GOOD DAY!***");
	return 0;
}
void decimal_to_binary() 
{	printf("\t\t\t*** DECIMAL TO BINARY ***\n");
	int i=0,num;
	printf("Enter the decimal number you want to convert in binary\n");
	scanf("%d", &num);

	int a[50];
	do{
		a[i]=num%2;
		num=num/2;
		i++;
	}while(num!=0);
	int y=i-1;
	printf("Your binary equivalent number is\n");
	for(int j=0; j<i; j++){
		printf("%d", a[y]);
		y--;
	}
}
void decimal_to_hexa()
{	printf("\t\t\t*** DECIMAL TO HEXA CONVERTER ***\n");
	int y,num,i=0,a[50];
	printf("Enter your decimal number\n");
	scanf("%d",&num);
	do{
		a[i]=num%16;
		num=num/16;
		i++;
	}while(num!=0);
	char b[50],c;
	for(int j=0; j<i; j++){
		if(a[j]<=9){
			b[j]=a[j]+'0';
		}
		else {
			b[j]=55+a[j];
		}
	}
	y=i-1;
	for(int j=0; j<i; j++){
		printf("%c", b[y]);
		y--;
	}
}
void decimal_to_octa()
{	printf("\t\t\t*** DECIMAL TO OCTAL ***\n");
	int i=0,y,num;
	int a[50];
	printf("Enter the decimal number you want to convert in octal\n");
	scanf("%d", &num);
	do{
		a[i]=num%8;
		num=num/8;
		i++;
	}while(num!=0);
	y=i-1;
	printf("Your octal equivalent number is:\n");
	for(int j=0; j<i; j++){
		printf("%d", a[y]);
		y--;
	}
}   
void binary_to_decimal()
{	printf("\t\t\t*** BINARY TO DECIMAL ***\n");
	printf("Enter binary number\n");
	int n,num,num1,sum=0,i=0,check,c=0;
	scanf("%d",&num);
	num1=num;
	do{
		check=num1%10;
		if(check<0||check>1){
			printf("Enter binary number only\n");
			c++;
			break;
	}
	num1=num1/10;
	}while(num1!=0);
	if(c!=0){
		scanf("%d",&num);
	}
	do{
		n=num%10;
		sum=sum+(pow(2,i)*n);
		num=num/10;
		i++;
	}while(num!=0);
	printf("Your decimal equivalent number is %d \n", sum);
}
void binary_to_octa()  
{	printf("\t\t\t*** BINARY TO OCTAL ***\n");
	printf("Enter binary number\n");
	int n,num,num1,sum=0,i=0,check,c=0,a[100],y;
	scanf("%d",&num);
	num1=num;
	do{
		check=num1%10;
		if(check<0||check>1){
			printf("Enter binary number only\n");
			c++;
			break;
	}
	num1=num1/10;
	}while(num1!=0);
	if(c!=0){
		scanf("%d",&num);
	}
	do{
		n=num%10;
		sum=sum+(pow(2,i)*n);
		num=num/10;
		i++;
	}while(num!=0);
	i=0;
	do{
		a[i]=sum%8;
		sum=sum/8;
		i++;
	}while(sum!=0);
	y=i-1;
	printf("Your octal equivalent number is:\n");
	for(int j=0; j<i; j++){
		printf("%d", a[y]);
		y--;
	}
}
void binary_to_hexa()
{
	printf("\t\t\t*** BINARY TO HEXA DECIMAL ***\n");
	printf("Enter binary number\n");
	int n,num,num1,sum=0,i=0,check,d=0,y,a[50];
	scanf("%d",&num);
	num1=num;
	do{
		check=num1%10;
		if(check<0||check>1){
			printf("Enter binary number only\n");
			d++;
			break;
	}
	num1=num1/10;
	}while(num1!=0);
	if(d!=0){
		scanf("%d",&num);
	}
	do{
		n=num%10;
		sum=sum+(pow(2,i)*n);
		num=num/10;
		i++;
	}while(num!=0);
	i=0;
	do{
		a[i]=sum%16;
		sum=sum/16;
		i++;
	}while(sum!=0);
	char b[i];
	for(int j=0; j<i; j++){
		if(a[j]<=9){
			b[j]=a[j]+'0';
		}
		else {
			b[j]=55+a[j];
		}
	}
	y=i-1;
	for(int j=0; j<i; j++){
		printf("%c",b[y]);
		y--;
	}
}
void hexa_to_decimal()
{
	printf("\t\t\t*** HEXA DECIAMAL TO DECIMAL ***\n");
	printf("Enter hexa decimal number\n");
	char a[100];
	int i,d=0,sum=0,num,y;
	scanf("%s",a);
	i=strlen(a);
	for(int j=0;j<i;j++){
			if(a[j]>'F'){
			printf("Error enter hexa decimal code from 0 to 9 and A to F, capitilization should be cared\n");
			d++;
			break;
		}
	}
	if(d!=0){
		scanf("%s",a);
	}
	y=i-1;
	for(int j=0;j<i;j++){
		if(a[y]>='A')
		{
			num=a[y]-55;
		}else {
			num=a[y]-48;
		}
		sum=sum+pow(16,j)*num;
		y--;
	}
	printf("The equivalent decimal is : %d", sum);
}   
void hexa_to_binary()
{
	printf("\t\t\t*** HEXA DECIMAL TO BINARY ***\n");
	printf("Enter hexa decimal number\n");
	char a[100];
	int i,d=0,sum=0,num,y,b[50];
	scanf("%s",a);
	i=strlen(a);
	for(int j=0;j<i;j++){
		if(a[j]>'F'){
			printf("Error enter hexa decimal code from 0 to 9 and A to F, capitization should be cared\n");
			d++;
			break;
		}
	}
	if(d!=0){
		scanf("%s",a);
	}
	y=i-1;
	for(int j=0;j<i;j++){
		if(a[y]>='A')
		{
			num=a[y]-55;
		}else {
			num=a[y]-48;
		}
		sum=sum+pow(16,j)*num;
		y--;
	}
	i=0;
	do{
		b[i]=sum%2;
		sum=sum/2;
		i++;
	}while(sum!=0);
	y=i-1;
	printf("Your binary equivalent number is\n");
	for(int j=0; j<i; j++){
		printf("%d", b[y]);
		y--;
	}
}   
void hexa_to_octa() 
{	
	printf("\t\t\t*** HEXA DECIMAL TO OCTAL ***\n");
	printf("Enter Hexa decimal number\n");
	char a[100];
	int i,d=0,sum=0,num,y,b[50];
	scanf("%s",a);
	i=strlen(a);
	for(int j=0;j<i;j++){
		if(a[j]>'F'){
			printf("Error enter hexa decimal code from 0 to 9 and A to F, capitilization should be cared\n");
			d++;
			break;
		}
	}
	if(d!=0){
		scanf("%s",a);
	}
	y=i-1;
	for(int j=0;j<i;j++){
		if(a[y]>='A')
		{
			num=a[y]-55;
		}else {
			num=a[y]-48;
		}
		sum=sum+pow(16,j)*num;
		y--;
	}
	i=0;
	do{
		b[i]=sum%8;
		sum=sum/8;
		i++;
	}while(sum!=0);
	y=i-1;
	printf("Your octal equivalent is:\n");
	for(int j=0; j<i; j++){
		printf("%d", b[y]);
		y--;
	}
}     
void octa_to_decimal()
{	
	printf("\t\t\t*** OCTAL TO DECIMAL ***\n");
	printf("Enter octal number\n");
	int n,num,num1,sum=0,i=0,check,c=0;
	scanf("%d",&num);
	num1=num;
	do{
		check=num1%10;
		if(check<0||check>7){
			printf("Enter octal number only\n");
			c++;
			break;
	}
	num1=num1/10;
	}while(num1!=0);
	if(c!=0){
		scanf("%d",&num);
	}
	do{
		n=num%10;
		sum=sum+(pow(8,i)*n);
		num=num/10;
		i++;
	}while(num!=0);
	printf("Your decimal equivalent is %d \n", sum);
}   
void octa_to_binary()
{	
	printf("\t\t\t*** OCTAL TO BINARY ***\n");
	printf("Enter octal number\n");
	int n,num,num1,sum=0,i=0,check,c=0,a[50],y;
	scanf("%d",&num);
	num1=num;
	do{
		check=num1%10;
		if(check<0||check>7){
			printf("Enter octal number only\n");
			c++;
			break;
	}
	num1=num1/10;
	}while(num1!=0);
	if(c!=0){
		scanf("%d",&num);
	}
	do{
		n=num%10;
		sum=sum+(pow(8,i)*n);
		num=num/10;
		i++;
	}while(num!=0);
	i=0;
	do{
		a[i]=sum%2;
		sum=sum/2;
		i++;
	}while(sum!=0);
	y=i-1;
	printf("Your binary equivalent number is\n");
	for(int j=0; j<i; j++){
		printf("%d", a[y]);
		y--;
	}
}    
void octa_to_hexa()
{	
	printf("\t\t\t*** OCTAL TO HEXA DECIMAL ***\n");
	int n,num,num1,sum=0,i=0,check,c=0,a[50],y;
	printf("Enter octal number\n");
	scanf("%d",&num);
	num1=num;
	do{
		check=num1%10;
		if(check<0||check>7){
			printf("Enter octal number only\n");
			c++;
			break;
	}
	num1=num1/10;
	}while(num1!=0);
	if(c!=0){
		scanf("%d",&num);
	}
	do{
		n=num%10;
		sum=sum+(pow(8,i)*n);
		num=num/10;
		i++;
	}while(num!=0);
	i=0;
	do{
		a[i]=sum%16;
		sum=sum/16;
		i++;
	}while(sum!=0);
	char b[50];
	for(int j=0; j<i; j++){
		if(a[j]<=9){
			b[j]=a[j]+'0';
		}
		else {
			b[j]=55+a[j];
		}
	}
	y=i-1;
	printf("Hexadecimal equivalent: \n");
	for(int j=0; j<i; j++){
		printf("%c", b[y]);
		y--;
	}
}
