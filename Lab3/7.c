/*
Од стандарден влез се чита еден природен број n, по што се читаат n цели броеви. Да се најде најголемата разлика помеѓу два броја, од вака внесените броеви.

For example:

Input	Result
5
1 2 -1 -7 6
Najgolema razlika: 13

*/
#include<stdio.h>
int main(){
	int n,i,j,a,max=0,min=1000000,k=0;
	scanf("%d",&n);
	
	for(i=n;i>0;i--){
		scanf("%d",&a);
		
		if(a>max){
			max = a;
		}
		if(a<min){
			min = a;
		}
	}
	
	for(j=min;j<max;j++){
			k++;
	}
	
	printf("Najgolema razlika: %d",k);
	return 0;		
}