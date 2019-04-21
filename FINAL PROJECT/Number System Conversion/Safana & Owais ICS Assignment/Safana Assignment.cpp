                                                //*final project conversions\\*
#include<stdio.h> 
#include<conio.h>
#include<math.h>
#include<string.h>
int bin_dec();
int bin_oct();
int bin_hex();
int dec_bin();
int dec_oct();
int dec_hex();
int oct_bin();
int oct_dec();
int oct_hex();
int hex_bin();
int hex_oct();
int hex_dec();
int main()
{
	char choice,op;
	do
	{
		printf("\t\t\t\tNUMBER CONVERSION\n");
		printf("\nUSE NUMBERS TO NEVIGATE THE MENU\n\n");
		printf("1-BINARY TO DECIMAL CONVERSION\n");
		printf("2-BINARY TO OCTAL CONVERSION\n");
		printf("3-BINARY TO HEXADECIMAL CONERSION\n");
		printf("4-DECIMAL TO BINARY CONVERSION\n");
		printf("5-DECIMAL TO OCTAL CONVERSION\n");
		printf("6-DECIMAL TO HEXADECIMAL CONVERSION\n");
		printf("7-OCTAL TO BINARY CONVERSION\n");
		printf("8-OCTAL TO DECIMAL CONVERSION\n");
		printf("9-OCTAL TO HEXADECIMAL CONVERSION\n");
		printf("A-HEXADECIMAL TO BINARY CONVERSION\n");
        printf("B-HEXADECIMAL TO OCTAL CONVERSION\n");		
        printf("C-HEXADECIMAL TO DECIMAL CONVERSION\n");
		op=getch();
		switch(op)
		{
			case '1':
            bin_dec();
			break;			
			case '2':
			bin_oct();
            break;
            case '3':
            bin_hex();
	        break;
			case '4':
			dec_bin();
            break;
            case '5':
		    dec_oct();
            break;   
            case '6':         
	        dec_hex();
	        break;
	        case '7':
            oct_bin();
            break;
            case '8':         
	        oct_dec();
	        break;
	        case '9':
	        oct_hex();
	        break;  
	        case 'a':
	        case 'A':
	        hex_bin();
	        break;
			case 'B':
			case 'b':	
			hex_oct();
			break;
			case 'C':
			case 'c':
			hex_dec();
			break; 
	        default:
	        puts("\nPlease Select From Given Choice");
	    }
	printf("\n\n\t\t\t<DO YOU WANT TO CONTINUE?>\n1=Yes?\n2=No?\n");
	choice=getch();
    }
     	while(choice=='Y'|| choice=='y' || choice=='1');
return 0;
}
int bin_dec()
{
    int  num, bin, deci= 0, base = 1, rem;
 
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num);
    bin= num;
    while (num > 0)
    {
        rem = num % 10;
        deci= deci+ rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", bin);
    printf("Its decimal equivalent is = %d \n", deci);
}
int bin_oct()
{
   long long int p=0,i=0,j,num=0,n,re[100],arr[100];
 	printf("\n\t\t\t7-BINARY TO OCTAL CONVERSION\n\n");
	printf("Enter a Binary Number=");
	scanf("%lld",&n);
	while(n!=0)
	 {
		 re[i]=n%10;
		 n=n/10;
		 i++;
     }
  	for(j=0;j<i;j++)
     {
	     num=num+re[j]*pow(2,p);	
	     p++;
	 }
	i=0;
	n=num;
	while(n!=0)
	 {
	     arr[i]=n%8;
	     n=n/8;
	     i++;
    }
    printf("\nOctal Numbers=");
    for(j=i-1;j>=0;j--)
     {   
    	 printf("%d",arr[j]);
	 } 
}  
int bin_hex()
{
    long int binaryval, hexadecimalval = 0, i = 1, remainder;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
}
int dec_bin()
{
int dec,rem,i=1;
long int bin=0;
printf("Enter the decimal number : ");
scanf("%d",&dec);
while(dec>0)
{
rem=dec%2;
dec=dec/2;
bin=bin+(i*rem);
i=i*10;
}
printf("The binary number is %l",bin);
}
int dec_oct()
{
    long decimalnum, remainder, quotient;
    int octalNumber[100], i = 1, j;
 
    printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal no %d: ", decimalnum);
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
}
int dec_hex()
{
    long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    printf("Enter decimal number: ");
    scanf("%ld", &decimalnum);
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    for (i = j; i >= 0; i--)
            printf("%c", hexadecimalnum[i]);
}

int oct_bin()
{
    char octalnum[100];
    long i = 0;
 
    printf("Enter any octal number: ");
    scanf("%s", octalnum);
    printf("Equivalent binary value: ");
    while (octalnum[i])
    {
        switch (octalnum[i])
        {
        case '0':
            printf("000"); break;
        case '1':
            printf("001"); break;
        case '2':
            printf("010"); break;
        case '3':
            printf("011"); break;
        case '4':
            printf("100"); break;
        case '5':
            printf("101"); break;
        case '6':
            printf("110"); break;
        case '7':
            printf("111"); break;
        default:
            printf("\n Invalid octal digit %c ", octalnum[i]);
            return 0;
        }
        i++;
    }
}
int oct_dec()
{
 
    long int octal, decimal = 0;
    int i = 0;
 
    printf("Enter any octal number: ");
    scanf("%ld", &octal);
    while (octal != 0)
    {
        decimal =  decimal +(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }
    printf("Equivalent decimal value: %ld",decimal);
}
int oct_hex()
{
	long long int re[100],i=0,p=0,n,num=0,j;
	printf("\n\t\t\tC-OCTAL TO HEXADECIMAL CONVERSION\n\n");
	printf("Enter a Octal Number=");
	scanf("%lld",&n);
	while(n!=0)
	 {	
	    re[i]=n%10;
	    n=n/10;
	    i++;
	 }
	for(j=0;j<=i-1;j++)
	 {
	    num=num+re[j]*pow(8,p);	
	    p++;
	 }
	n=num;
	i=0;
	while(n!=0)
     {
	    re[i]=n%16;
	    n=n/16;
	    i++;
     }
  	printf("\nhexa decimal number=");
    for(j=i-1;j>=0;j--)
     {
   	    if (re[j]==10)
   	     {
   	      printf("A");	
	     }
	    if(re[j]==11)
	     {
	      printf("B");
         }
	    if (re[j]==12)
   	     {
   	      printf("C");	
	     }
	    if(re[j]==13)
   	     {
   	      printf("D");	
	     }
	    if(re[j]==14)
   	     {
   	      printf("E");	
	     }
        if(re[j]==15)
	     {
	      printf("F");		
	     }
	    if(re[j]<=9)
		{ 
	     printf("%d",re[j]);    
        }
	 }
}
int hex_bin()
{
    char binarynum[100], hexa[100];
    long int i = 0;
 
    printf("Enter the value for hexadecimal ");
    scanf("%s", hexa);
    printf("\n Equivalent binary value: ");
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            return 0;
        }
        i++;
    }
}
int hex_oct()
{
	long long int l,i,dec=0,num=0,p=0,j,n,arr[300];
	char s[30],op,re[100];
	printf("\n\t\t\t-HEXADECIMAL TO OCTAL CONVERSION\n\n");
	puts("Enter Hexadecimal Numbers");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	 {
	 	if(s[i]<'65')
	 	 {
	 	   re[i]=s[i]-48;
		 }
	    if(s[i]>='A')
	     { 
	       re[i]=s[i]-55;
	     }
	    if(s[i]>='a')
	     {
	       re[i]=s[i]-87;
		 }
	}
	for(i=l-1;i>=0;i--)
     {
   		dec=dec+re[i]*pow(16,p);
		p++;	
	 } 
		n=dec;
		i=0;
	while(n!=0)
	 {	
	    arr[i]=n%8;
	    n=n/8;		
     	i++;
   	 }
	printf("\nOctal Numbers are=");
	for(j=i-1;j>=0;j--)
	 {
        printf("%d",arr[j]);	
	    p++;
	 }
}
	 int hex_dec()
{  
	long long int l,i,dec=0,p=0,j,arr[300];
	char s[30],op,re[100];
	printf("\n\t\t\t6-HEXA TO DECIMAL CONVERSION\n\n");
	puts("Enter Hexadecimal Numbers=");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	 {
	 	if(s[i]<'65')
	 	 {
	 	   re[i]=s[i]-48;
		 }
	    if(s[i]>='A')
	     { 
	       re[i]=s[i]-55;
	     }
	    if(s[i]>='a')
	     {
	       re[i]=s[i]-87;
		 }
     }
	for(i=l-1;i>=0;i--)
	 {
		 dec=dec+re[i]*pow(16,p);
		 p++;	
	 }
	printf("\nDecimal Number=%lld",dec);
}

