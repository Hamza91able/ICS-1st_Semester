#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int conversion_1(long long);
int conversion_2(long long);
int conversion_3(long long);
int conversion_4(long long);
int conversion_5(long long);
int conversion_6(long long);

	int main()
{
	long long number;
	char choice;
	do
	{
		printf("\nEnter a Number");
		scanf("%lld", &number);
		
			printf("Select the conversion you want to perform by pressing its Serial number\n ");
			
			printf(" 1) *Binary to Decimal\n");
			printf(" 2) *Decimal to Binary\n");
			printf(" 3) *Binary to Octal\n");
			printf(" 4) *Octal to Binary\n");
			printf(" 5) *Binary to Hexadecimal\n");
			printf(" 6) *Hexadecimal to Binary\n");
			printf(" 7) *Decimal to Octal\n");
			printf(" 8) *Octal to Decimal\n");
			printf(" 9) *Decimal to Hexadecimal\n");
			printf(" 10) *Hexadecimal to Decimal\n");
			printf(" 11) *Octal to Hexadecimal\n");
			printf(" 12) *Hexadecimal to Octal\n");
		choice=getch();
		switch(choice)
		{
			case '1':
			conversion_1 (number);
			break;
		
			case '2':
			conversion_2(number);
			break;
		
			case '3':
			conversion_3(number);
			break;
		
			case '4':
			conversion_4(number);
			break;
		
			case '5':
			conversion_5(number);
			break;
			
			case '6':
			conversion_6(number);
			break;
			
			case '7':
				conversion_2(number);
				{
					conversion_6(number);
				}
	    	break;
			
			case '8':
				conversion_4(number);
				{
					conversion_1(number);
				}
			break;
			
			case '9':
				conversion_2(number);
				{
					conversion_5(number);
				}
			break;
		
			case '10':
				conversion_6(number);
			{
				conversion_1(number);
			}
			break;
		
			case '11':
				conversion_4(number);
				{
					conversion_5(number);
				}
			break;
		
			case'12':
				conversion_6(number);
				{
					conversion_3(number);
				}
			break;
			
			default:
				printf("Invalid operation");
		}
		printf("\nDo you want to Continue?   ( Y/N )");
		choice=getch();
	}
	while (choice=='Y' || choice=='y');
	return 0;
}
//1 Binary to Decimal.
int conversion_1( long long number)
{
    int decimalNumber = 0, i = 0, remainder;
    while (number!=0)
    {
        remainder = number%10;
        number /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
        printf("\n%lld in binary = %d in decimal", number);
    }
    return decimalNumber;
}
//2 Decimal to Binary.
int conversion_2( long long number)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (number!=0)
    {
        remainder = number%2;
        printf("\nStep %d: %d/2, Remainder = %d, Quotient = %d\n", step++, number, remainder, number/2);
        number /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
//3 Binary to Octal.
int conversion_3(long long number)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(number != 0)
    {
        decimalNumber += (number%10) * pow(2,i);
        ++i;
        number/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
//4 Octal to Binary.
int conversion_4(long long number)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;

    while(number != 0)
    {
        decimalNumber += (number%10) * pow(8,i);
        ++i;
        number/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}
//5 Binary to Hexadecimal.
int conversion_5(long long number)
{
	int hexDigitToBinary[16] = {0, 1, 10, 11, 100, 101, 110, 111, 1000,
      1001, 1010, 1011, 1100, 1101, 1110, 1111};
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hexaDecimalNumber[20];    
    long binaryNumber;  
    int position, i, digits; 
     position = 0;  
       
    /* Convert a Hexadecimal Number to Binary Number */
    while(binaryNumber!=0) {
     /*get the last 4 binay digits */
        digits = binaryNumber % 10000;  
        for(i=0; i<16; i++) {
            if(hexDigitToBinary[i] == digits) {
                hexaDecimalNumber[position] = hexDigits[i];
                position++;  
                break;  
            }  
        }  
   
        binaryNumber /= 10000;  
    }  
   
    hexaDecimalNumber[position] = '\0';  
    strrev(hexaDecimalNumber);  
   
    printf("\nHexadecimal Number : %s", hexaDecimalNumber);  
   
    return 0;  
}

//6 Hexadecimal to Binary.
int conversion_6(long long number)
{
	 char *hexDigitToBinary[16] = {"0000", "0001", "0010", "0011", "0100", "0101", 
 "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};    
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hexadecimal[30], binaryNumber[100];   
    int i = 0, j, index=0;  
    
    for(i=0; hexadecimal[i] != '\0'; i++)  {  
        for(j = 0; j < 16; j++){
            if(hexadecimal[i] == hexDigits[j]){
                strcat(binaryNumber, hexDigitToBinary[j]);
            }
        }
    }  
   
    printf("\nBinary Number : %s", binaryNumber);  
   
    return 0;  
}
