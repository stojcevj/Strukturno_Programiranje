/*
Од стандарден влез се чита цел број n. Потоа се вчитуваат n низи од цели броеви (со максимална должина од 100 елементи), при што за секоја прво се внесува должината на низата, а потоа сите елементи на низата, па на крај бројот k.

Да се напише програма која за секоја низа ќе ја трансформира истата, т.ш. за секој k-ти елемент ќе се направи замена на местата помеѓу него и неговиот претходник. Се смета дека важи k е најмалку 2.

На пример, ако е дадена следната низа:

1 2 3 4 5 6 7 8, за k=2 се добива

2 1 4 3 6 5 8 7
Да се испечатат сите трансформирани низи.

For example:

Input	Result
1
8 1 2 3 4 5 6 7 8 2
2 1 4 3 6 5 8 7 

*/

#include<stdio.h>
int main(){
	int n,i,dolzina=0,k=0,zamena,j,s;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		scanf("%d",&dolzina);
		int niza[dolzina+1];
		if(dolzina>100){break;}
			for(j=1;j<=dolzina;j++){
				scanf("%d",&niza[j]);
			}
		scanf("%d",&k);
		if(k<2){break;}
			for(s=1;s<=dolzina;s++){
				if(s%k==0){
					zamena = niza[s];
					niza[s] = niza[s-1];
					niza[s-1] = zamena; 
				}
				zamena = 0;
			}
			
			for(s=1;s<=dolzina;s++){
				printf("%d ",niza[s]);
			}
			
			printf("\n");
	}
	

	
	
	return 0;
}