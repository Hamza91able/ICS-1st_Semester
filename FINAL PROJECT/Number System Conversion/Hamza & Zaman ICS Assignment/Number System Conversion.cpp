/*
Number System Conversions.
Made using Dev-C.
Final Project: Introduction To Computer Science.
Submitted By: Muhammad Hamza Khan and Syed Muhammad Zaman Mehdi.
Submitted To: Miss Afsha Jameel.
Seat # EP1750044 and EP1750090 (Respectively)
Class: BSSE-1 (Setion-A)

All Number systems:
1.Decimal number system
2.Binary number system
3.Octal number system
4.Hexadecimal number system

All Conversions:
1.Decimal to Binary.		Done... (Zaman)
2.Decimal to Octal. 		Done... (Zaman)
3.Decimal to Hexadecimal.	Done... (Zaman)
4.Binary to Decimal.		Done... (Zaman)
5.Binary to Octal.			Done... (Hamza)
6.Binary to Hexadecimal.	Done... (Hamza)
7.Octal to Decimal.			Done... (Zaman)
8.Octal to Binary.			Done... (Zaman)
9.Octal to Hexadecimal.		Done... (Hamza)
10.Hexadecimal to Decimal.	Done... (Hamza)
11.Hexadecimal to Binary.	Done... (Hamza)
12.Hexadecimal to Octal.	Done... (Hamza)
*/

/*Program Start.*/

/*Including standard libraries.*/
/*To use standard print and scan functions.*/
#include <stdio.h>
/*To use standard math functions.*/
#include <math.h>
/*To use standard string functions.*/
#include <string.h>
/*To use system("clr") command for clearing the screen.*/
#include <stdlib.h>

/*Globally defining MAX to be later used by arrays.*/
#define MAX 1000

/*Declaring all 12 functions.*/
void dec_bin();
void dec_oct();
void dec_hex();
void bin_dec();
void bin_oct();
void bin_hex();
void oct_dec();
void oct_bin();
void oct_hex();
void hex_dec();
void hex_bin();
void hex_oct();

/*Main body Start.*/
int main()
{
	int input;
	char choice;
	/*Using a "goto" loop in case user enters a out of range input. Used in line 162.*/
	RESTART:do
	{
		printf ("\t\tNumber System Conversions\n");
		printf ("\t\t-------------------------\n");
		printf ("\n\nUse numbers to navigate the menu.");
		printf ("\n---------------------------------");
		printf ("\n1.Decimal to Binary");
		printf ("\n2.Decimal to Octal");
		printf ("\n3.Decimal to Hexadecimal");
		printf ("\n4.Binary to Decimal");
		printf ("\n5.Binary to Octal");
		printf ("\n6.Binary to Hexadecimal");
		printf ("\n7.Octal to Decimal");
		printf ("\n8.Octal to Binary");
		printf ("\n9.Octal to Hexadecimal");
		printf ("\n10.Hexadecimal to Decimal");
		printf ("\n11.Hexadecimal to Binaary");
		printf ("\n12.Hexadecimal to Octal");
		printf ("\n13.Quit");
		printf ("\n---------------------------------");
		printf ("\n");
		printf ("\n#>");
		scanf ("%d",&input);
		/*Using switch statements to call functions.*/
		switch(input)
		{
			case 1:
				system("cls");
				printf ("\n\t\tDecimal To Binary");
				printf ("\n\t\t-----------------");
				dec_bin();
				break;
			case 2:
				system("cls");
				printf ("\n\t\tDecimal to Octal");
				printf ("\n\t\t----------------");
				dec_oct();
				break;
			case 3:
				system("cls");
				printf ("\n\t\tDecimal to Hexadecimal");
				printf ("\n\t\t----------------------");
				dec_hex();
				break;
			case 4:
				system("cls");
				printf ("\n\t\tBinary to Decimal");
				printf ("\n\t\t-----------------");
				bin_dec();
				break;
			case 5:
				system("cls");
				printf ("\n\t\tBinary to Octal");
				printf ("\n\t\t---------------");
				bin_oct();
				break;
			case 6:
				system("cls");
				printf ("\n\t\tBinary to Hexadecimal");
				printf ("\n\t\t---------------------");
				bin_hex();
				break;
			case 7:
				system("cls");
				printf ("\n\t\tOctal to Decimal");
				printf ("\n\t\t----------------");
				oct_dec();
				break;
			case 8:
				system("cls");
				printf ("\n\t\tOctal to Binary");
				printf ("\n\t\t---------------");
				oct_bin();
				break;
			case 9:
				system("cls");
				printf ("\n\t\tOctal to Hexadecimal");
				printf ("\n\t\t--------------------");
				oct_hex();
				break;
			case 10:
				system("cls");
				printf ("\n\t\tHexadecimal to Decimal");
				printf ("\n\t\t----------------------");
				hex_dec();
				break;
			case 11:
				system("cls");
				printf ("\n\t\tHexadecimal to Binary");
				printf ("\n\t\t---------------------");
				hex_bin();
				break;
			case 12:
				system("cls");
				printf ("\n\t\tHexadecimal to Octal");
				printf ("\n\t\t--------------------");
				hex_oct();
				break;
			case 13:
				printf ("Exiting . . . ");
				return 0;
			default:
				printf ("Invalid Selection. Try again.\n\n\n");
				/*Redirecting program to RESTART in case of out of range input.*/
				goto RESTART;
		}
		printf ("\n\nContinue? Y/N\n#>");
		scanf (" %c",&choice);
		system("cls");
	}
	/*Restarts Program if entered 'Y'.*/
	while (choice == 'y' || choice == 'Y');
	return 0;
}
/*Main body End.*/

/*Defining All Functions.*/

void dec_bin()
{
	long int dec_num,quotient;
	int binary_num [MAX],i=1,j;
	printf("\nEnter any decimal number #>");
	scanf("%ld",&dec_num);
	quotient=dec_num;
	while(quotient!=0)
	{
		binary_num[i++]=quotient%2;
		quotient=quotient/2;
	}
	printf("Equivalent binary value of the given decimal number %d #>",dec_num);
	for(j=i-1;j>0;j--)
	{
		printf("%d",binary_num[j]);
	}	
}

void dec_oct()
{
	long int dec_num,quotient;
	int octal_num[MAX],i=1,j;
	printf("\nEnter any decimal number #>");
	scanf("%ld",&dec_num);
	quotient=dec_num;
	while(quotient!=0)
	{
	octal_num[i++]=quotient%8;
	quotient=quotient/8;
	}
	printf("Equivalent octal value of given decimal number %ld #>",dec_num);
	for(j=i-1;j>0;j--)
	{
	printf("%d",octal_num[j]);
	}	
}

void dec_hex()
{
	long int dec_num,quotient;
	int i=1,j,k;
	char hexa_dec_num[MAX];
	printf("\nEnter any decimal number #>");
	scanf("%ld",&dec_num);
	quotient=dec_num;
	while(quotient!=0)
	{
	k=quotient%16;
	/*converting integer into character.*/
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
	printf("Equivalent hexadecimal value of given decimal number %ld is #>",dec_num);
	for(j=i-1;j>0;j--)
	{
	printf("%c",hexa_dec_num[j]);
	}
}

void bin_dec()
{
	long int binary_num,binary_numb,dec_num=0,j=1,remainder;
	printf("\nEnter any binary number #>");
	scanf("%ld",&binary_num);
	binary_numb=binary_num;
	while(binary_num!=0)
	{
		remainder=binary_num%10;
		dec_num=dec_num+remainder*j;
		j=j*2;
		binary_num=binary_num/10;
	}
	printf("Equivalent decimal value of given binary number %ld #>%ld",binary_numb,dec_num);	/*"d" in "ld" represents decimal.*/
}

void bin_oct()
{
	long int bin, oct = 0, i = 1, rem;
 	printf("\nEner a Binary Number #>");
    scanf("%ld", &bin);
    while (bin != 0)
    {
        rem = bin % 10;
        oct = oct + rem * i;
        i = i * 2;
        bin = bin / 10;
    }
    printf("Equivalent Octal number #>%lo",oct);	/*"o" in "lo" represents octal.*/
}

void bin_hex()
{
	long int bin, hex = 0, i = 1, rem;
 	printf("\nEnter a Binary number #>");
    scanf("%ld", &bin);
    while (bin != 0)
    {
        rem = bin % 10;
        hex = hex + rem * i;
        i = i * 2;
        bin = bin / 10;
    }
    printf("Equivalent Hexadecimal value #>%lX",hex);	/*"x" in "lx" represents hexadecimal.*/
}

void oct_dec()
{
	long int octal_num,octal_numb,decimal_num=0;
	int i=0;
	printf("\nEnter any octal number #>");
	scanf("%ld",&octal_num);
	octal_numb=octal_num;
	while(octal_num!=0)
	{
		decimal_num = decimal_num + (octal_num % 10) * pow(8,i++);
		octal_num = octal_num/10;
	}
	printf("Equivalent decimal value of given octal number %ld #>%ld",octal_numb,decimal_num);	
}

void oct_bin()
{
	char octal_num[MAX];
	long int i=0;
	printf("\nEnter any octal number #>");
	scanf("%s",octal_num);
	printf("Equivalent binary value of given octal number %s #>",octal_num);
	while(octal_num[i])
	{
		switch(octal_num[i])
		{
			case '0':
			{
				printf("000");
				break;
			}
			case '1':
			{
				printf("001");
				break;
			}
			case '2':
			{
				printf("010");
				break;
			}
			case '3':
			{
				printf("011");
				break;
			}
			case '4':
			{
				printf("100");
				break;
			}
			case '5':
			{
				printf("101");
				break;
			}
			case '6':
			{
				printf("110");
				break;
			}
			case '7':
			{
				printf("111");
				break;
			}
			default:
			{
				printf("\nNeglecting 8 because it is an invalid octal digit",octal_num[i]);
			}
		}
		i++;
	}
}

void oct_hex()
{
	int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
 	long long oct, tempOct, bin=0, place=1;
    char hex[65] = "";
    int rem;
    printf("\nEnter a Octal number #>");
    scanf("%lld", &oct);
    tempOct = oct;
	/*Octal to binary conversion.*/
    while(tempOct > 0)
    {
        rem = tempOct % 10;
        bin = (OCTALVALUES[rem] * place) + bin;
        tempOct	/= 10;
 		place *= 1000;
    }
	/*Binary to hexadecimal conversion.*/
    while(bin > 0)
    {
        rem = bin % 10000;
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
		bin /= 10000;
    }
	strrev(hex);
    printf("Equivalent Hexadecimal number #>",hex);	
}

void hex_dec()
{
	char hex[17];
    long long dec=0, place=1;
    int i = 0, val, len;
    printf("\nEnter a Hexadecimal number #>");
    scanf ("%s", hex);
 	/*Find the length of total number of hex digit.*/
    len = strlen(hex);
    len--;
    /*Iterate over each hex digit.*/
    for(i=0; hex[i]!='\0'; i++)
    {
		/*Find the decimal representation of hex[i].*/
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
		dec += val * pow(16, len);
        len--;
    }
    printf("Equivalent Decimal number #>%lld",dec);
}

void hex_bin()
{
	char bin[MAX], hex[MAX];
    long int i = 0;
	printf("\nEnter a Hexadecimal number #>");
    scanf("%s", hex);
    printf("Equivalent Binary Number #>");
    while (hex[i])
    {
        switch (hex[i])
        {
        	case '0':
            	printf("0000");
					break;
        	case '1':
            	printf("0001");
					break;
        	case '2':
            	printf("0010");
					break;
        	case '3':
            	printf("0011");
					break;
        	case '4':
            	printf("0100");
					break;
        	case '5':
            	printf("0101");
					break;
        	case '6':
            	printf("0110");
					break;
        	case '7':
            	printf("0111");
					break;
        	case '8':
            	printf("1000");
					break;
        	case '9':
            	printf("1001");
					break;
        	case 'A':
            	printf("1010");
					break;
        	case 'B':
           	 	printf("1011");
					break;
        	case 'C':
            	printf("1100");
					break;
        	case 'D':
            	printf("1101");
					break;
        	case 'E':
            	printf("1110");
					break;
        	case 'F':
            	printf("1111");
					break;
        	case 'a':
            	printf("1010");
					break;
        	case 'b':
            	printf("1011");
					break;
        	case 'c':
            	printf("1100");
					break;
        	case 'd':
            	printf("1101");
					break;
        	case 'e':
            	printf("1110");
					break;
        	case 'f':
           	 	printf("1111");
				break;
        	default:
            	printf("\nInvalid hexa digit %c ",hex[i]);
        }
        i++;
    }
}

void hex_oct()
{
	char hex[17];
    long long oct, bin, place;
    int i = 0, rem, val;
    printf("\nEnter a Hexadecimal number #>");
    scanf ("%s", hex);
 	oct = 0ll;
    bin = 0ll;
    place = 0ll;
	/*Hexadecimal to binary conversion.*/
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
	/*Binary to octal conversion.*/
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
 		oct = (val * place) + oct;
        bin /= 1000;
 		place *= 10;
    }
    printf("Equivalent Octal number #>%lld",oct);
}

/*Program End.*/
