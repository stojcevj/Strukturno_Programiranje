/*
Да се напише програма каде од тастатура ќе се внесе еден број кој има пет цифри, но не мора да е петцифрен, како на пример 04569 или 00256. Програмата ги печати сумите на паровите цифри од надвор кон внатре, за на крај да ја испечати средишната цифра. Така, ако внесениот број е 12596, програмата враќа 7 11 5.

влез: 12596 
излез: 7 11 5
For example:

Input	Result
90008
17 0 0



*/

#include <stdio.h>
int main () {
		
		int broj,sum1=0,sum2=0,sum3=0;
		
		scanf("%d",&broj);
		
		sum1 = (broj / 10000) + broj % 10;
		sum2 = (broj / 1000) % 10 + (broj % 100) / 10;
		sum3 = (broj / 100) % 10;
		printf("%d %d %d",sum1,sum2,sum3);
		return 0;	
}

