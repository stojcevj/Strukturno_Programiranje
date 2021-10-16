/*
Од стандарден влез се чита цел број К, по што се читаат N цели броеви. Да се напише програма која за секој прочитан број на стандарден излез ќе ги отпечати неговите цифри кои се поголеми од К, како и збирот на цифрите кои се отпечатени. Печатењето на цифрите поголеми од K да се реализира со посебна рекурзивна функција.

Пример: Доколку К = 5, за бројот 8423871 треба да се отпечати 887 : 23

For example:

Input	Result
4
4
25481234
9142347
1547810115
569124
58 : 13
97 : 16
5785 : 25
569 : 20

*/

#include<stdio.h>
int total=0;
int function(int n, int k){
	if(n<10){
		if(n%10>k){
			printf("%d",n);
			total += n;
			return n;
		}
	}else{
		total = function(n/10,k);
		if(n%10>k){
			printf("%d",n%10);
			total+=n%10;
		}
	return total;
	}
	
}	
int main(){
	int n, k, i, p;
	int total;
	scanf("%d%d", &k, &n);
	for (i = 0; i < n; ++i){
		scanf("%d", &p);
		total = function(p, k);
		printf(" : %d\n",total);
	}
	return 0;	
}
	