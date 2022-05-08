#include "E:\embedded\HW_1\Session\Headers\Calc.h"
#include "stdio.h"

int sum (int a[], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum = sum + a[i];
	}
	return sum;
}
int Max(int a[], int n){
	int max = a[0];
	for(int i = 1; i<n ; i++){
		if(max < a[i])
			max = a[i];
	}
	return max;
}

int Min(int a[], int n){
	int min = a[0];
	for(int i = 1; i<n ; i++){
		if(min > a[i])
			min = a[i];
	}
	return min;
}
int TimX(int a[], int b[], int n,int y){
    short j=0;
    for(short i=0;i<n;i++){
        if (y==a[i]){
            j=j+1;
            b[j]=i;
        }
    }
    if (j!=0){
        for(short i=1;i<=j;i++){
          printf("->position of X: %d\n",b[j]);
        }
    }
    else{
         printf("->not found"); 
    }
    return 0;
}
	