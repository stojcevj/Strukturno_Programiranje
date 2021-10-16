/*
За дадена низа со големина N, прочитајте ги сите елементи од дадениот влез, а потоа сортирајте ја низата. Испечатете ја во растечки редослед.

Пример:

Влез:

5

4 3 2 5 1

Излез:

1 2 3 4 5

For example:

Input	Result
5
4 2 3 1 5
1 2 3 4 5 


*/

#include<stdio.h>
int main(){
	int n,i,j,max=0,zamena;
	scanf("%d",&n);
	int niza[n];
	int niza1[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&niza[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(niza[j] > max){
				max = niza[j];
				zamena = j;
			}
		}
		niza[zamena] = 0;
		niza1[i] = max;
		max = 0;
 }
 	for(j=n-1;j>=0;j--){
	 	printf("%d ",niza1[j]);
	 }
	
	return 0;
}