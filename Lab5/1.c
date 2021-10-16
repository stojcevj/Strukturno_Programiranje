/*
Дефинираме вредност d за тројка цели броеви a, b и c , така што таа се пресметува како сума меѓу апсолутните разлики од првиот и вториот број, од една страна, и вториот и третиот број, од друга страна:

d = |(a-b)| + |(b-c)|

Да се напише програма со којашто од тастатура се вчитуваат N тројки цели броеви (N се внесува од тастатура), и која што ја наоѓа и ја печати најмалата вредност за d од прочитаните тројки.

Пример:

Влез:

3

1 2 3

22 30 22

1 1 1

Излез:

0

Објаснување:

За тројката 1 2 3 вредноста d е: |(1-2)| + (2-3)| = 2

За тројката 22 30 22 вредноста d е: |(22-30)| + |(30-22)| = 16

За тројката 1 1 1 вредноста d е: |(1-1)| + |(1-1)| = 0

Најмала вредност d: 0

For example:

Input	Result
5
1 21 3
5 8 4
2 1 9
21 42 81
2 5 2
6



*/

#include<stdio.h>
#include<math.h>
int main(){
	int n,d=0,a,b,c,i,max=999999,j;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
			scanf("%d%d%d",&a,&b,&c);
			d = (abs(a-b) + abs(b-c));
				if(d<=max){
					max = d;
				}
	}	
	printf("%d",max);
	
	return 0;
}