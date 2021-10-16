/*
Да се напише програма која за дадена сума на пари, ќе испечати со колку најмалку банкноти и монети може да се исплати. На влез се чита еден цел број. На излез се печатат 9 редови, по колку банкноти или монети од секој апоен ни се потребни за да ја исплатиме сумата. Пример 1583 денари, најдобро е да се исплати како:

0*5000

1*1000

1*500

0*100

1*50

3*10

0*5

1*2

1*1


For example:

Input	Result
1583
0*5000
1*1000
1*500
0*100
1*50
3*10
0*5
1*2
1*1


*/


#include <stdio.h>

int main(){
	
	int pari;
	
	scanf("%d",&pari);
	
	printf("%d*5000\n",pari/5000);
	pari = pari % 5000;
	printf("%d*1000\n",pari/1000);
	pari = pari % 1000;
	printf("%d*500\n",pari/500);
	pari = pari % 500;
	printf("%d*100\n",pari/100);
	pari = pari % 100;
	printf("%d*50\n",pari/50);
	pari = pari % 50;
	printf("%d*10\n",pari/10);
	pari = pari % 10;
	printf("%d*5\n",pari/5);
	pari = pari % 5;
	printf("%d*2\n",pari/2);
	pari = pari % 2;
	printf("%d*1\n",pari/1);
	
	 
	return 0;
}