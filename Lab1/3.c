/*
Да се напише програма коjа за даден цел броj секунди коj се чита од стандарден влез, ќе ги отпечати на екран соодветните вредности во часови, минути и секунди.



For example:

Input	Result
6454
6454 sekundi se 1 casovi, 47 minuti i 34 sekundi



*/



#include <stdio.h>

int main(){
	
	int sekundi, minuti, casovi, sekundi_realni;
	
	scanf("%d", &sekundi);
	
		sekundi_realni = sekundi;
		minuti = sekundi / 60;
		sekundi = sekundi % 60;
		casovi = minuti / 60;
		minuti = minuti % 60;
	
	printf("%d sekundi se %d casovi, %d minuti i %d sekundi",sekundi_realni,casovi,minuti,sekundi);
	 
	return 0;
}