/*
Од стандарден влез се чита позитивен непарен број n (n е најмалку 3) кој ги дава димензиите на квадратната матрица од цели броеви, која се чита во продолжение. Да се напише програма која од таа матрица(макс. 100 x 100) ќе креира нова матрица 2 x 2, која ќе ги има за елементи збировите на елементите на регионите на првата матрица, соодветно. Во продолжение на сликата може да видиме како се добиваат регионите за матрица кога n = 5.



За оваа матрица, резултантната матрица би била:

17 28
16 28
For example:

Input	Result
5
0 0 0 0 0 
0 0 0 0 0 
0 0 0 0 0 
0 0 0 0 0 
0 0 0 0 0
0 0
0 0


*/

#include<stdio.h>
#define MAX 100

int main(){
	int n,i,j,meguregion,suma=0;
	int matrix[MAX][MAX];
	int matrix1[MAX][MAX];
	scanf("%d",&n);
	meguregion = n/2;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}	
	
	for(i=0;i<meguregion;i++){
		for(j=0;j<meguregion;j++){
			suma += matrix[i][j];
		}
	}
	matrix1[0][0]=suma;
	suma = 0;
	for(i=0;i<meguregion;i++){
		for(j=meguregion+1;j<n;j++){
			suma += matrix[i][j];
		}
	}
	matrix1[0][1]=suma;
	suma = 0;
	
	for(i=meguregion+1;i<n;i++){
		for(j=0;j<meguregion;j++){
			suma += matrix[i][j];
		}
	}
	matrix1[1][0]=suma;
	suma = 0;
	
	for(i=meguregion+1;i<n;i++){
		for(j=meguregion+1;j<n;j++){
			suma += matrix[i][j];
		}
	}
	matrix1[1][1]=suma;
	suma = 0;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",matrix1[i][j]);
		}
		printf("\n");
	}
	

	
	
}

