/*
Да се напише програма која ќе ги изведува основните математички операции (+, -, *, /, %) врз два броја кои се читаат од стандарден влез.

For example:

Input	Result
10 12
a + b = 22
a - b = -2
a * b = 120
a / b = 0
a % b = 10

*/



#include <stdio.h>

int main(){
	
	int a,b;
	
	scanf("%d%d", &a,&b);
	
	printf("a + b = %d\n",a+b);
	printf("a - b = %d\n",a-b);
	printf("a * b = %d\n",a*b);
	printf("a / b = %d\n",a/b);
	printf("a %% b = %d",a%b);
	
	return 0;
}