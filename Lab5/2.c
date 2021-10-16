/*
Да се напише програма која ќе прочита два природни броја. Програмата треба да провери дали сите цифри од првиот број се појавуваат во вториот број. Ако овој услов е исполнет, програмата печати DA, во спротивно NE.

For example:

Input	Result
421988 4111992
NE

*/

#include<stdio.h>
int main(){
	int a,b,i,j,k=0,cifra,cifra1,broj,s=0;
	scanf("%d%d",&a,&b);
	
	while(a!=0){
		s++;
		cifra = a % 10;
		broj = b;
		while(broj!=0){
			cifra1 = broj % 10;
			if(cifra1 == cifra){
				k++;
				break;
			}else{
				
			}
			broj/=10;
		}
		a/=10;
	}
	if(s!=k){
		printf("NE");		
	}else{
		printf("DA");
	}
	
	return 0;
}