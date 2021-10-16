/*
Да се напише функцијата matematickaOperacija (int a, int b, char operation, int rezultat) која што нема да враќа резултат. Целта на функцијата е врз основа на аргументот operation да изврши определена математичка операција, и резултатот од истата да го смести во rezultat. Возможни вредности за operation се:

+ (собирање)
- (разлика)
* (производ)
/ (делење)
% (остаток)
Да не се менува main функцијата, освен во делот каде е експлицитно назначено!

For example:

Input	Result
5 10
5 + 10 -> 15
5 - 10 -> -5
5 * 10 -> 50
5 / 10 -> 0
5 % 10 -> 5


*/

#include<stdio.h>
void matematickaOperacija (int a, int b, char operation, int *rezultat){
    switch(operation){
    	case '+': *rezultat = a + b; break;
    	case '-': *rezultat = a - b; break;
    	case '/': *rezultat = a / b; break;
    	case '*': *rezultat = a * b; break;
    	case '%': *rezultat = a % b; break;
	}
}
int main(){
    int a,b,rezultat,i;
    char operation;
    char operacii[5] = {'+','-','*','/','%'};
    scanf("%d%d",&a,&b);
    for(i=0;i<5;i++){
	    matematickaOperacija(a,b,operacii[i],&rezultat);
	    printf("%d %c %d -> %d\n",a,operacii[i],b,rezultat);
	}
    return 0;
}