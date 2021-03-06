/*
Од стандарден влез се внесуваат два цели броеви A и P.

Да се испечатат во опаѓачки редослед првите 5 броеви во интервалот (0,A] за коишто важи дека сумата на нивните цифри изнесува P проценти од самиот број.

Ако нема такви броеви во интервалот, да се испечати порака NEMA.

For example:

Input	Result
100000 25
48
36
24
12

*/

#include<stdio.h>
int main(){
	
	float a,b,suma;
	int m,n,k=0;;
	scanf("%f%f",&a,&b);
	
	for(m=a;m>0;m--){
		suma = 0;
		for(n=m;n!=0;n/=10){
			suma += n%10;
		}
		if(k<5 && suma == m*(b/100)){
			printf("%d\n",m);
			k++;
		}
	}
	
	if(k==0){
		printf("NEMA");
	}
	
	return 0;
	
}