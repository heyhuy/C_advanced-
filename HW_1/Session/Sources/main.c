#include "E:\embedded\HW_1\Session\Headers\cal.h"
#include "E:\embedded\HW_1\Session\Headers\convert.h"

#include "stdio.h"
#include <math.h>


void input(int a[], int n){
	for(int i=0; i<n; i++){
		printf("[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
}

void output(int a[], int n){

	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

int main(){
	int n,y,x,xy,xyz;
    int a[n],b[n];
	
	do{
		printf("nhap so phan tu (20<n<=60):  ");
		scanf("%d", &n);
		
	}while(n<1 || n>100);

	input(a, n);

	output(a, n);

	printf("\nSum = %d ", sum(a, n));
	printf ("\nMax = %d ", Max(a, n));	
	printf ("\nMin = %d ", Min(a, n));	
	printf("\n nhap so can tim vi tri:");
    scanf("%d",&x);
    TimX(a,b,n,x);
    printf("nhap so can doi sang Bin:");
    scanf("%d",&xy);
    DectoBinary(xy);
    printf("\nNhap so can doi sang Hex: ");
	scanf("%d", &xyz);
	DectoHex(xyz);

}