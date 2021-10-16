/*
За дадена низа од N големина, исчитајте ја истата и потоа:

Испечатете ја во нејзината оригинална форма
Сменете го распоредот на низата во обратна насока
Отстранете го секој втор член
Повторно сменете го распоредот на низата во обратна насока
За секоја од овие промени испечатете ја низата. За целосни поени работете само со една низа.

Пример:

Влез:

5 1 2 3 4 5

Излез:

1 2 3 4 5

5 4 3 2 1

5 3 1

1 3 5

For example:

Input	Result
5
1 2 3 4 5
1 2 3 4 5 
5 4 3 2 1 
5 3 1 
1 3 5 
*/

#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int niza[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&niza[i]);
	}
		
	for(i=0;i<n;i++){
		printf("%d ",niza[i]);
	}
	
	printf("\n");
	
	for(i=n-1;i>=0;i--){
		printf("%d ",niza[i]);
	}
	
	printf("\n");
	if(n<=5 && n>2){
		for(i=0;i<n;i++){
			if(i%2!=0){
				niza[i] = 0;
			}
		}		
	}else if(n<=2){
			for(i=0;i<n;i++){
				if(i%2==0){
					niza[i] = 0;
				}
			}
	}else{
			for(i=0;i<n;i++){
				if(i%2==0){
					niza[i] = 0;
				}
			}
	}
	
	
	for(j=n-1;j>=0;j--){
		if(niza[j]==0){}else{printf("%d ",niza[j]);}
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		if(niza[i]==0){
		}else{
			printf("%d ",niza[i]);
		}
	}
	
	
	
	return 0;
}