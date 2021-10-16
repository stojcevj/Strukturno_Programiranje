/*
Дефинирајте ја рекурзивната функција "sumOfDigits(int number)" така што за дадениот аргумент "number" ќе ја пресмета сумата на сите негови цифри. Пример за аргумент "1234" функцијата треба да врати 1 + 2 + 3 + 4 = 10.

Не правете промени во дадената main функција, само дефинирајте ја рекурзивната функција.

For example:

Input	Result
1
1234567890
45
45


*/

#include<stdio.h>
#define MAX 100
int cifra,sum;
int sumOfDigits(int number){
	if(number<10){
		return number;
	}else{
		return number%10 + sumOfDigits(number/10);
	}
}
int main(){
	int n,x,i,suma=0;
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		scanf("%d",&x);
		printf("%d\n",sumOfDigits(x));
		suma+=sumOfDigits(x);
	}
	printf("%d",suma);
return 0;	
}