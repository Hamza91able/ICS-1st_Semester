#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void Dectobin();
void Dectooct();
void Dectohex();
void Bintodec();
void Bintooct();
void Bintohex();
void Octtobin();
void Octtodec();
void Octtohex();
void Hextodec();
void Hextobin();
void Hextooct();
int main()
{ 
char O;
	do
	{
	int choice;
	printf("---NUMBER CONVERSION CALCULATOR---\n");
	printf("\nSelect 1 to convert Decimal into binary\n");
	printf("\nSelect 2 to convert Decimal into Octal\n");
	printf("\nSelect 3 to convert Decimal into HexaDecimal\n");
	printf("\nSelect 4 to convert Binary into Decimal\n");
	printf("\nSelect 5 to convert Binary into Octal\n");
	printf("\nSelect 6 to convert Binary into HexaDecimal\n");
	printf("\nSelect 7 to convert Octal into Binary\n");
	printf("\nSelect 8 to convert Octal into Decimal\n");
	printf("\nSelect 9 to convert Octal into HexaDecimal\n");
	printf("\nSelect 10 to convert HexaDecimal into Decimal\n");
	printf("\nSelect 11 to convert HexaDecimal into binary\n");
	printf("\nSelect 12 to convert HexaDecimal into Octal\n");
	printf("\n");
	printf("\nEnter Your Choice According To The Given Menu Above\n\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		Dectobin();
	    break;
	case 2:
		Dectooct();
	    break;
	case 3:
		Dectohex();
		break;
	case 4:
		Bintodec();
		break;
	case 5:
		Bintooct();
		break;
	case 6:
	 	Bintohex();
	 	break;
	case 7:
	 	Octtobin();
	 	break;
	case 8:
	 	Octtodec();
	 	break;
	case 9:
	 	Octtohex();
	 	break;
	case 10:
	 	Hextodec();
	 	break;
	case 11:
	 	Hextobin();
	 	break;
	case 12:
	 	Hextooct();
	 	break;
	default:
	printf("Your Selection Isn't In The Above Menu");
	break;
}
printf("\nIf you want to continue, then press Y");
O=getch();
}
while(O == 'Y');
}
//DecimalTobinary
void Dectobin()
{
    long num, decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0;
    printf("Enter a decimal Number which you want to convert into binary \n");
    scanf("%ld", &num);
    decimal_num = num;
    while (num > 0)
    {

        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;

    }
    printf("Its binary equivalent is = %ld\n", binary);		
}
//Decimal to Octal
void Dectooct()
{
	long int n,n1,m=1,rem,ans=0;
	printf("\nEnter your Decimal Number which you want to convert into octal\n");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{ 
	rem=n%8;
	ans=(rem*m)+ans;
	n=n/8;
	m=m*10;
	}
	printf("\nYour Decimal No is %ld",n1);
	printf("\nYour Octal Number is %ld",ans);
}	
//Decimal to HexaDecimal
void Dectohex()
{     long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
    printf("Enter decimal number which you want to convert into hexadecimal: ");
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
    for (i =j;i>=0;i--)
            printf("%c", hexadecimalnum[i]);
}
//Binary To Decimal
void Bintodec()
{
	int num,binary,decimal=0,base=1,rem;
	printf("\nEnter Binary Number which you want to convert into decimal\n");
	scanf("%d",&num);
	binary=num;
	while(num>0)
	{ 
	rem=num%10;
	decimal=decimal+rem*base;
	num=num/10;
	base=base*2;
	}
	printf("the binary num is= %d",binary);
	printf("Its decimal %d",decimal);
}	
//Binary to Octal
void Bintooct()
{ 
    long int binarynum,octalnum=0,j=1,rem;
    printf("Enter Your binary number which you want to convert into octal: ");
    scanf("%ld", &binarynum);
    while (binarynum != 0)
    {
        rem=binarynum%10;
        octalnum=octalnum+rem*j;
        j=j*2;
        binarynum=binarynum / 10;
    }
    printf("Equivalent octal value: %lo", octalnum);
}
//Binary To HexaDecimal
void Bintohex()
{ 
 unsigned intpart=0;
 int a=0,m,n=0,q=1,rem;
 char g1[80], hex[80]={'\0'};
 printf("Enter your Binary number which you want to convert into hexadecimal :");
 gets(g1);
 for (a =0;g1[a] != '\0';a++)
 {
	q++;
 }
for(m=0;m<q-1;m++)
 {
  if(g1[m] == '.')
  break;
  }
 a=0;
 while(g1[a])
{
 g1[a] = g1[a]-48;
    ++a;
 }
 a=m-1;
while(a-2>=0)
{
 rem = g1[a-3]*8 + g1[a-2]*4 + g1[a-1]*2 + g1[a];
 if(rem>9)
 hex[n++]=rem+55;
 else
 hex[n++]=rem+48;
 a=a-4;
 }
  if(a ==1)
 hex[n] = g1[a-1] *2 + g1[a] + 48 ;
 else if(a==0)
 hex[n] = g1[a] + 48 ;
 else
 n--;
 printf("\nThe Hexadecimal Number is");
 while(n>=0)
{
 printf("%c",hex[n--]);
    }
}
//Octal To Binary
void Octtobin()
{
	int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long octal,tempOctal,binary, place;
    int rem;
    printf("Enter any Octal number which you want to convert into binary\n: ");
    scanf("%lld", &octal);
    tempOctal = octal;
    binary = 0;
    place  = 1;
    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
		binary = (OCTALVALUES[rem]*place) + binary;
        tempOctal /= 10;
        place *= 1000;
    }
    printf("Octal number = %lld\n", octal);
    printf("Binary number = %lld", binary);
}
//Octal to Decimal
void Octtodec()
{
	long int octal, decimal = 0;
    int i = 0;
    printf("\nEnter Your Octal Number which you want to convert into Decimal\n: ");
    scanf("%ld", &octal);
    while (octal != 0)
    {
        decimal =  decimal +(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }
    printf("Equivalent decimal value: %ld",decimal);
}
//Octal To HexaDecimal
void Octtohex()
{
	int octalDigitToBinary[8] = {0, 1, 10, 11, 100, 101, 110, 111};  
    int hexDigitToBinary[16] = {0, 1, 10, 11, 100, 101, 110, 111, 1000,
      1001, 1010, 1011, 1100, 1101, 1110, 1111};    
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F'};
 char hexadecimalNumber[30];
    long long octalNumber, binaryNumber = 0, position;  
    int digit, fourDigit, i;  
    
    printf("Enter an Octal Number which you want to convert into hexadecimal\n");  
    scanf("%ld", &octalNumber); 
   
    position = 1;  
    while(octalNumber != 0) {
        digit = octalNumber % 10;
        binaryNumber = (octalDigitToBinary[digit]*position)+binaryNumber;  
        octalNumber /= 10;  
        position *= 1000;  
    }
    position = 0;
    while(binaryNumber != 0){
        fourDigit = binaryNumber%10000;
        for(i = 0; i < 16; i++){
            if(hexDigitToBinary[i] == fourDigit){
                hexadecimalNumber[position] = hexDigits[i];
                break;
            }
        }
 
        position++;
        binaryNumber /= 10000; 
    }
    hexadecimalNumber[position] = '\0';
    strrev(hexadecimalNumber);
    printf("HexaDecimal Number = %s", hexadecimalNumber);
     
}
//HexaDecimal to Decimal
void Hextodec()
{
	int hex[20],dec,i,j,ch,p;
 i=0;
 p=0;
 dec=0;
 printf("Enter Your Hexadecimal Number which you want to convert into decimal\n :");
 while ((ch=getchar()) != '\n') 
 {
 if ((ch > 47 && ch < 58) || (ch > 64 && ch < 71))
 hex[i++] = ch;
 }
 for (j=i-1;j>=0;j--) 
 {
    if (hex[j] > 57)
	dec +=  (hex[j]-55)*(int)pow((double)16, p);
    else
    dec +=  (hex[j]-48)*(int)pow((double)16, p);		 
	p++;
 }
printf("Decimal value is : %d",dec);
}
//Hexadecimal to Binary
void Hextobin()
{
 long int i=0;
	char binnum[100], hexdec[100];
	printf("Enter any hexadecimal number which you want to convert into binary : ");
	scanf("%s",hexdec);
	printf("\nEnter Binary value is : ");
	while(hexdec[i])
	{
		switch(hexdec[i])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid hexadecimal digit %c",hexdec[i]);
		}
		i++;
	}
}
////HexaDecimal to Octal
void Hextooct()
{
char hexa[17];
long oct,bin,place;
int i=0,rem,value;
printf("\nEnter a hexadecimal Number which you want to convert into Octal number");
scanf("%s",hexa);
oct = 011;
bin =011;
place =011;
for(i=0;hexa[i]!='\0';i++)
{
	bin = bin * place;
	switch(hexa[i])
	{
		case '0':
			bin +=0;
			break;
		case '1':
			bin +=1;
			break;
		case '3':
		 bin +=11;
		 break;
		case '4':
		bin +=100;
		break; 
		case '5':
		bin +=101;
		break;
		case '6':
		bin +=110;
		break;
		case '7':
		bin +=111;
		break;
		case '8':
		bin +=1000;
		break;
		case '9':
		bin +=1001;
		break;
		case 'a':
		case 'A':
		bin +=1010;
		break;
		case 'b':
		case 'B':
		bin +=1011;
		break;
		case 'c':
		case 'C':
		bin +=1100;
		break;
		case 'd':
		case 'D':
		bin +=1101;
		break;
		case 'e':
		case 'E':
		bin +=1110;
		break;
		case 'f':
		case 'F':
		bin +=1111;
		break;
		default:
		printf("Error");
	}
	place = 10000;
}
place = 1;
while(bin>0)
{
	rem = bin % 1000;
	switch(rem)
	{
		case 0:
			value = 0;
			break;
		case 1:	
		value = 1;
		break;
		case 10:
			value = 2;
			break;
		case 11:
		value = 3;
		break;
		case 100:
		value = 4;
		break;
		case 101:
		value =5;
		break;
		case 110:
		value = 6;
		break;
		case 111:
		value = 7;
		break;
			
	}
oct = (value * place) * oct;
bin/=1000;
place *=10;	
}
printf("Your Octal number is = %lld",oct);
}
