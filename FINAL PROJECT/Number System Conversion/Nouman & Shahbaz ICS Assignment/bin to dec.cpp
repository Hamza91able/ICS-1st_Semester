#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()

/*{
	printf("\t\t << WELCOME TO THE BINARY TO DECIMAL CONVERTER>>\n\n");
long long num;
    int decNum=0, num1 , i=0, remainder,checknum,c=0;
    printf("Enter a binary number: ");
    scanf("%lld", &num);
    do{
		 checknum=num1%10;
		//if(checknum<0||checknum>1)
		if (checknum>1)
		{
			printf("Enter binary number only\n");
			c++;
			break;
		}
	
	}while(num!=0);
    {
        remainder = num%10;
        num /= 10;
        decNum += remainder*pow(2,i); // it can also be wrutten as decNum = decNum +remainder*pow(2,i) //
        ++i;
    }
    printf("converted number in decimal is %d\n", decNum );
    return 0;
}*/

/*int main()
{
	long int binarynum,alternatebin,decimalnum=0,j=1,remainder;
	printf("\nEnter a binary number: ");
	scanf("%ld",&binarynum);
	alternatebin=binarynum;
	while(binarynum!=0)
	{
		remainder=binarynum%10;
		decimalnum=decimalnum+remainder*j;
		j=j*2;
		binarynum=binarynum/10;
	}
	printf("Equivalent decimal value of given binary number %ld is %ld",alternatebin,decimalnum);
}
*/
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
    return 0;
}
