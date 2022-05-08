#include <stdio.h>
#include <math.h>

#include "E:\embedded\HW_1\Session\Headers\convert.h"

int DectoHex(int xyz)
{
		int bien_phu = 0;
		int phantu = 0;
		char mang[100];
		int a = xyz;
		while (a != 0)
		{
			int number = a % 16;
			if (number <= 9)
				mang[phantu++] = number+48;
			else if (number == 10)
				mang[phantu++] = 'A';
			else if (number == 11)
				mang[phantu++] = 'B';
			else if (number == 12)
				mang[phantu++] = 'C';
			else if (number == 13)
				mang[phantu++] = 'D';
			else if (number == 14)
				mang[phantu++] = 'E';
			else if (number == 15)
				mang[phantu++] = 'F';
			bien_phu++;
			a /= 16;
		}
		printf("->%d convert to HEX: ox",xyz);
		for (int i = bien_phu - 1; i >= 0; i--)
		{
            printf("%c", mang[i]);
		}
        return 0;
}


int DectoBinary(int n){
    int i=0;
    int a[1000];
    int he2=0;
    int m=n;;
    while (n!=0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1; j>=0;j--){
        he2=he2+pow(a[j]*10,j);
    }
    printf("->%d chuyen sang Binary: ob%d",m,he2);
    return 0;
}