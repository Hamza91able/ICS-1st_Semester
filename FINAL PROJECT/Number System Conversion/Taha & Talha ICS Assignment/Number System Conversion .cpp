#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void decimal_binary();
void decimal_octal();
void decimal_hexadecimal();
void binary_decimal();
void binary_octal();
void binary_hexadecimal();
void octal_decimal();
void octal_binary();
void octal_hexadecimal();
void hexadecimal_decimal();
void hexadecimal_binary();
void hexadecimal_octal();


int main()
{
	int number;
	char yn;
	printf ("\t\tNumber System Conversions\n");
	do
	{
		printf ("\n\nUse numbers to navigate the menu.");
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
		printf ("\nEnter: ");
		scanf ("%d",&number);
		switch(number)
		{
			case 1:
				printf ("\n\t\tDecimal To Binary");
				decimal_binary();
				break;
			case 2:
				printf ("\n\t\tDecimal to Octal");
				decimal_octal();
				break;
			case 3:
				printf ("\n\t\tDecimal to Hexadecimal");
				decimal_hexadecimal();
				break;
			case 4:
				printf ("\n\t\tBinary to Decimal");
				binary_decimal();
				break;
			case 5:
				printf ("\n\t\tBinary to Octal");
				binary_octal();
				break;
			case 6:
				printf ("\n\t\tBinary to Hexadecimal");
				binary_hexadecimal();
				break;
			case 7:
				printf ("\n\t\tOctal to Decimal");
				octal_decimal();
				break;
			case 8:
				printf ("\n\t\tOctal to Binary");
				octal_binary();
				break;
			case 9:
				printf ("\n\t\tOctal to Hexadecimal");
				octal_hexadecimal();
				break;
			case 10:
				printf ("\n\t\tHexadecimal to Decimal");
				hexadecimal_decimal();
				break;
			case 11:
				printf ("\n\t\tHexadecimal to Binary");
				hexadecimal_binary();
				break;
			case 12:
				printf ("\n\t\tHexadecimal to Octal");
				hexadecimal_octal();
				break;
			case 13:
				printf ("Exiting...");
				return 0;
			default:
				printf ("Invalid Selection.");	
		}
		printf ("\n\nContinue? Y/N ");
		yn=getch();
	}
	while (yn == 'y' || yn == 'Y');
	return 0;
}


void decimal_binary()
{
	long int dec_num,remainder,quotient;
	int binary_num [100],i=1,j;
	printf("\nEnter any decimal number: ");
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
}

void decimal_octal()
{
	long int dec_num,remainder,quotient;
	int octal_num[100],i=1,j;
	printf("\nEnter any decimal number: ");
	scanf("%ld",&dec_num);
	quotient=dec_num;
	while(quotient!=0)
	{
	octal_num[i++]=quotient%8;
	quotient=quotient/8;
	}
	printf("Equivalent octal value of given decimal number %ld is: ",dec_num);
	for(j=i-1;j>0;j--)
	{
	printf("%d",octal_num[j]);
	}	
}

void decimal_hexadecimal()
{
	long int dec_num,remainder,quotient;
	int i=1,j,k;
	char hexa_dec_num[100];
	printf("\nEnter any decimal number : ");
	scanf("%ld",&dec_num);
	quotient=dec_num;
	while(quotient!=0)
	{
	k=quotient%16;
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
}

void binary_decimal()
{
	long int binary_num,binary_numb,dec_num=0,j=1,remainder;
	printf("\nEnter any binary number: ");
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
}

void binary_octal()
{
	long int bin, oct = 0, i = 1, rem;
 	printf("\nEner a Binary Number ");
    scanf("%ld", &bin);
    while (bin != 0)
    {
        rem = bin % 10;
        oct = oct + rem * i;
        i = i * 2;
        bin = bin / 10;
    }
    printf("Equivalent Octal number: %lo", oct);
}

void binary_hexadecimal()
{
	long int bin, hex = 0, i = 1, rem;
 	printf("\nEnter a Binary number: ");
    scanf("%ld", &bin);
    while (bin != 0)
    {
        rem = bin % 10;
        hex = hex + rem * i;
        i = i * 2;
        bin = bin / 10;
    }
    printf("Equivalent Hexadecimal value: %lX", hex);
}

void octal_decimal()
{
	long int octal_num,octal_numb,decimal_num=0;
	int i=0;
	printf("\nEnter any octal number : ");
	scanf("%ld",&octal_num);
	octal_numb=octal_num;
	while(octal_num!=0)
	{
		decimal_num = decimal_num + (octal_num % 10) * pow(8,i++);
		octal_num = octal_num/10;
	}
	printf("Equivalent decimal value of given octal number %ld is : %ld",octal_numb,decimal_num);	
}

void octal_binary()
{
	char octal_num[1000];
	long int i=0;
	printf("\nEnter any octal number : ");
	scanf("%s",octal_num);
	printf("Equivalent binary value of given octal number %s is : ",octal_num);
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
				printf("\nInvalid octal digit %c",octal_num[i]);
			}
		}
		i++;
	}
}

void octal_hexadecimal()
{
	int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
 	long long oct, tempOct, bin=0, place=1;
    char hex[65] = "";
    int rem;
    printf("\nEnter a Octal number: ");
    scanf("%lld", &oct);
    tempOct = oct;
    while(tempOct > 0)
    {
        rem = tempOct % 10;
        bin = (OCTALVALUES[rem] * place) + bin;
        tempOct	/= 10;
 		place *= 1000;
    }
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
    printf("Equivalent Hexadecimal number: %s", hex);	
}

void hexadecimal_decimal()
{
	char hex[17];
    long long dec=0, place=1;
    int i = 0, val, len;
    printf("\nEnter a Hexadecimal number: ");
    scanf ("%s", hex);
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
		dec += val * pow(16, len);
        len--;
    }
    printf("Equivalent Decimal number: %lld", dec);
}

void hexadecimal_binary()
{
	char bin[1000], hex[1000];
    long int i = 0;
	printf("\nEnter a Hexadecimal number: ");
    scanf("%s", hex);
    printf("Equivalent Binary Number: ");
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
            	printf("\nInvalid hexa digit %c ", hex[i]);
        }
        i++;
    }
}

void hexadecimal_octal()
{
	char hex[17];
    long long oct, bin, place;
    int i = 0, rem, val;
    printf("\nEnter a Hexadecimal number: ");
    scanf ("%s", hex);
 	oct = 0ll;
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
 		oct = (val * place) + oct;
        bin /= 1000;
 		place *= 10;
    }
    printf("Equivalent Octal number = %lld", oct);
}
