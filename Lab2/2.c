/*
Од стандарден влез се вчитуваат следните податоци за еден студент на ФИНКИ:

индекс (шестцифрен цел број)
шест оценки од последниот семестар кој го слушал
Да се напише програма која што на стандарден излез ќе ги испечати следните информации за студентот: (погледнете во тест примерите за форматот на печатење)

просек на студентот
просекот да се испечати со точност од 3 децимали
година на студии
студентите чијшто индекс почнува на 17 се трета година, на 16 се четврта година, на 15 се петта година итн.
дали е награден (1 = награден, 0 = не е награден)
Еден студент се наградува доколку има просек еднаков или поголем од 9.5
For example:

Input	Result
151021 9 9 10 10 10 8
Prosek: 9.333
Student: 151021
5 godina
Nagraden: 0


*/

#include <stdio.h>
int main () {
		
		int indeks;
		int o1,o2,o3,o4,o5,o6;
		float prosek;
		
			scanf("%d%d%d%d%d%d%d",&indeks,&o1,&o2,&o3,&o4,&o5,&o6);
			prosek = (o1+o2+o3+o4+o5+o6) / 6.0;
			printf("Prosek: %.3f\nStudent: %d\n",prosek,indeks);
			indeks = indeks / 10000;
			
				if(indeks == 19){
					printf("1 godina\n");	
				}else if(indeks == 18){
					printf("2 godina\n");
				}else if(indeks == 17){
					printf("3 godina\n");
				}else if(indeks == 16){
					printf("4 godina\n");
				}else if(indeks == 15){
					printf("5 godina\n");
				}else if(indeks == 14){
					printf("6 godina\n");
				}
			
			if(prosek >= 9.5){
				printf("Nagraden: 1\n");
			}else{
				printf("Nagraden: 0\n");
			}
		
		return 0;	
}

