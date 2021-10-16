/*
Да се напише програма која вчитува од стандарден влез два децимални броја (маса во кг и висина во цм) и пресметува и печати на стандарден излез индекс на телесна маса по формулата:

BMI=masa/(visina∗visina)

Висината претходно треба да се претвори од сантиметри во метри.


For example:

Input	Result
100 176
32.28


*/



#include <stdio.h>

int main(){
	
	float masa,visina,bmi;
	
	scanf("%f%f", &masa,&visina);
	visina = visina / 100;
	bmi = masa/(visina*visina);
	printf("%.2f", bmi);
	
	return 0;
}