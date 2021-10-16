/*
Да се напише програма во која од тастатура се читаат број на редици и колони (не поголеми од 100) и елементи на матрица (цели броеви).

Да се испечати редниот број на колоната (индексот) којашто има најмала сума на елементите. Ако има повеќе колони со иста најмала сума, да се испечати индексот на првата таква колона.

Читањето на елементи во матрицата да се направи преку функција void readMatrix(int a[100][100], int n, int m)

For example:

Input	Result
2 2
25 52
52 24
1


*/

#include<stdio.h>
#define MAX 100

void readMatrix(int a[100][100], int n, int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);	
		}
	}
}
int main(){
	int n,m,i,j,suma=0,min,kolona=0,flag=1;
	int a[100][100];
	scanf("%d %d",&n,&m);
	readMatrix(a,n,m);	
	
	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
			suma+=a[i][j];
		}
		if(flag){
			min = suma;
			kolona = j;
			flag--;
		}
		if(min>suma){
			min = suma;
			kolona = j;
		}
		suma = 0;
	}
	
	
	printf("%d",kolona);
}


