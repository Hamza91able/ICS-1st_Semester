#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#define MAX 1000
void Binary_to_Decimal();
void Binary_to_Octal();
void Binary_to_Hexadecimal();
void Decimal_to_Binary();
void Decimal_to_Octal();
void Decimal_to_Hexadeciaml();
void Octal_to_Binary();
void Octal_to_Decimal();
void Octal_to_Hexadecimal();
void Hexadecimal_to_Decimal();
void Hexadecimal_to_Binary();
void Hexadecimal_to_octal();

int main()
{
	int op;
	char choice;
	
	printf("\t\t <<<< WELLCOME TO THE NUMBER SYSTEM CONVERTER >>>> \n\n");

	do
	{
		printf(" Press [1]: BINARY TO DECIMAL CONVERSION \n");
		printf(" Press [2]: BINARY TO OCTAL CONVERSION \n");
	    printf(" Press [3]: BINARY TO HEXA-DECIMAL CONVERSION \n");
	    printf(" Press [4]: DECIMAL TO BINARY CONVERSION \n");
	    printf(" Press [5]: DECIMAL TO OCTAL CONVERSION \n");
	    printf(" Press [6]: DECIMAL TO HEXA-DECIMAL CONVERSION \n");
	    printf(" Press [7]: OCTAL TO BINARY CONVERSION \n");
	    printf(" Press [8]: OCTAL TO DECIMAL CONVERSION \n");
	    printf(" Press [9]: OCTAL TO HEXA DECIMAL CONVERSION \n");
	    printf(" Press [10]: HEXA-DECIMAL TO DECIMAL CONVERSION \n");
	    printf(" Press [11]: HEXA-DECIMAL TO BINARY CONVERSION \n");
	    printf(" Press [12]: HEXA-DECIMAL TO OCTAL CONVERSION \n");
	    
	    scanf(" %d", &op);
	    switch(op)
	    {
	      case 1:
	        Binary_to_Decimal();
	        break;
	      case 2:
	      	Binary_to_Octal();
	      	break;
	      case 3:
	        Binary_to_Hexadecimal();
	        break;
	      case 4:
	      	Decimal_to_Binary();
	      	break;
	      case 5:
	      	Decimal_to_Octal();
	      	break;
	      case 6:
	      	Decimal_to_Hexadeciaml();
	      	break;
	      case 7:
	      	Octal_to_Binary();
	      	break;
	      case 8:
	      	Octal_to_Decimal();
	      	break;
		  case 9:
		  	Octal_to_Hexadecimal();
		  	break;
		  case 10:
		  	Hexadecimal_to_Decimal();
		  	break;
		  case 11:
		  	Hexadecimal_to_Binary();
		  	break;
		  case 12:
		  	Hexadecimal_to_octal();
		  	break;
		  default: 
		    printf (" << YOU HAVE ENTERED A WRONG SELECTION >>\n\n");
		}
		printf("\n<<TO USE THIS CONVERTER AGAIN PRESS Y OR PRESS N TO LEAVE>>\n");
		choice=getch();
	}
 while (choice=='y' || choice=='Y');
 return 0;
}

void Binary_to_Decimal()
{
	printf("\t\t << WELCOME TO THE BINARY TO DECIMAL CONVERTER>>\n\n");
long long num;
    int decNum=0, i=0, remainder;
    printf("Enter a binary number: ");
    scanf("%lld", &num);
    while (num!=0)
    {
        remainder = num%10;
        num /= 10;
        decNum += remainder*pow(2,i); // it can also be wrutten as decNum = decNum +remainder*pow(2,i) //
        ++i;
    }
    printf("converted number in decimal is %d\n", decNum );
}

void Decimal_to_Binary()
{
	printf("\t\t\t<<<WELCOME TO DECIMAL TO BINARY CONVERTER>>>\n\n");
    long long binNum = 0;
    int num, remainder, i = 1;
    printf(" ENTER A DECIMAL NUMBER \n ");
    scanf("%d", &num);

    while (num!=0)
    {
        remainder = num%2;
        num/= 2;
        binNum += remainder*i;
        i *= 10;
    } printf("Converted number into BINARY IS %lld\n", binNum);
}

void Binary_to_Octal()
{
		printf("\t\t\t<<<WELCOME TO BINARY TO OCTAL CONVERTER>>>\n\n");

	printf("Enter binary number");
	int n,num,num1,sum=0,i=0,check,c=0,a[100],y;
	scanf("%d",&num);
	num1=num;
	do{
		check=num1%10;
		if(check<0||check>1){
			printf("Enter binary number only");
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
	printf("Your octal equivalent number is:");
	for(int j=0; j<i; j++){
		printf("%d", a[y]);
		y--;
	}
}

void Binary_to_Hexadecimal()
{
	long int binary, hexadecimal= 0, i = 1, remainder;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binary);
    while (binary != 0)
    {
        remainder = binary % 10;
        hexadecimal = hexadecimal + remainder * i;
        i = i * 2;
        binary = binary/ 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimal);
}

void Decimal_to_Octal()
{
	long decinum, remainder, quotient;
    int octalNumber[100], i = 1, j;
 
    printf("Enter the decimal number: ");
    scanf("%ld", &decinum);
    quotient = decinum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal no %d: ", decinum);
    for (j = i - 1; j > 0; j--)
    printf("%d", octalNumber[j]);
}

void Decimal_to_Hexadeciaml()
{
    int deci_num, remainder, hexa_num = 0;
    int count = 0;
    printf("Enter a Decimal Number:\t");
    scanf("%d", &deci_num); 
    while(deci_num != 0)
    {
        remainder = deci_num % 16;
        hexa_num= hexa_num + remainder * pow(10, count);
        deci_num = deci_num / 16;
        count++;
    }
    printf("\nHexadecimal Equivalent:\t%d\n", hexa_num);
}

void Octal_to_Binary()
{
	char octnum[MAX];
    long i = 0;
    printf("Enter any octal number: ");
    scanf("%s", octnum);
    printf("Equivalent binary value: ");
    while (octnum[i])
    {
        switch (octnum[i])
        {
        case '0':
            printf("000");
			break;
        case '1':
            printf("001"); 
			break;
        case '2':
            printf("010"); 
			break;
        case '3':
            printf("011"); 
			break;
        case '4':
            printf("100"); 
			break;
        case '5':
            printf("101"); 
			break;
        case '6':
            printf("110"); 
			break;
        case '7':
            printf("111"); 
			break;
        default:
            printf("\n Invalid octal digit %c ", octnum[i]);
        }
        i++;
    }
}

void Octal_to_Decimal()
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

void Octal_to_Hexadecimal()
{
	int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
 
    long long octal, tempOctal, binary, place;
    char hex[65] = "";
    int rem;
 
    place = 1;
    binary = 0;
     
    printf("Enter any octal number: ");
    scanf("%lld", &octal);
    tempOctal = octal;
 
    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;
 
        place *= 1000;
    }
     
    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }
 
        binary /= 10000;
    }
 
    strrev(hex);
 
    printf("Octal number: %lld\n", octal);
    printf("Hexadecimal number: %s", hex);
}

void Hexadecimal_to_Decimal()
{
	char hex[17];
    long long decimal, place;
    int i = 0, val, len;
 
    decimal = 0;
    place = 1;
 
    printf("Enter any hexadecimal number: ");
    scanf ("%s", hex);
 
    /* Find the length of total number of hex digit */
    len = strlen(hex);
    len--;
 
    for(i=0; hex[i]!='\0'; i++)
    {
  
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }
 
        decimal += val * pow(16, len);
        len--;
    }
 
    printf("Hexadecimal number = %s\n", hex);
    printf("Decimal number = %lld", decimal);
}

void Hexadecimal_to_Binary()
{
	char binarynum[MAX], hexa[MAX];
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
        }
        i++;
    }
}

void Hexadecimal_to_octal()
{
	char hex[17];
    long long octal, bin, place;
    int i = 0, rem, val;
 
    printf("Enter any hexadecimal number: ");
    scanf ("%s", hex);
 
    octal = 0ll;
    bin = 0ll;
    place = 0ll;
 
    for(i=0; hex[i]!='\0'; i++)
    {
        bin = bin * place;
 
        switch(hex[i])
        {
            case '0':
                bin += 0;
                break;
            case '1':
                bin += 1;
                break;
            case '2':
                bin += 10;
                break;
            case '3':
                bin += 11;
                break;
            case '4':
                bin += 100;
                break;
            case '5':
                bin += 101;
                break;
            case '6':
                bin += 110;
                break;
            case '7':
                bin += 111;
                break;
            case '8':
                bin += 1000;
                break;
            case '9':
                bin += 1001;
                break;
            case 'a':
            case 'A':
                bin += 1010;
                break;
            case 'b':
            case 'B':
                bin += 1011;
                break;
            case 'c':
            case 'C':
                bin += 1100;
                break;
            case 'd':
            case 'D':
                bin += 1101;
                break;
            case 'e':
            case 'E':
                bin += 1110;
                break;
            case 'f':
            case 'F':
                bin += 1111;
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
 
        place = 10000;
    }
 
    place = 1;
 
    while(bin > 0)
    {
        rem = bin % 1000;
 
        switch(rem)
        {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            case 10:
                val = 2;
                break;
            case 11:
                val = 3;
                break;
            case 100:
                val = 4;
                break;
            case 101:
                val = 5;
                break;
            case 110:
                val = 6;
                break;
            case 111:
                val = 7;
                break;
        }
 
        octal = (val * place) + octal;
        bin /= 1000;
 
        place *= 10;
    }
 
    printf("Hexadecimal number = %s\n", hex);
    printf("Octal number = %lld", octal);
}
