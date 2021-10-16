/*
Да се напише функција revertString(char *a, char *b, char *comparator) која ќе ги преврти стринговите a и b и потоа ќе врати еден од нив во зависност од стрингот comparator, кој доколку има вредност pogolem се враќа лексикографски поголемиот или доколку има вредност pomal се враќа лексикографски помалиот. Доколку двата стрингови се еднакви, не е битно кој стринг ќе се врати.

Во главниот дел од програмата треба N пати да се прочитаат 3 стрингови и за нив да се испечати резулататот од revertString функцијата.

Забелешка: За стрингот comparator се смета дека не е case-sensitive. На пример за вредностите poGolEm и POGoleM функцијата треба да врати ист резултат. Доколку пак comparator има непозната вредност да се врати стрингот "Invalid comparator".

For example:

Input	Result
1
Hello
World
poMal
dlroW

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
int brojac_a=0, brojac_b=0, brojac_c=0;
int revertString(char *a, char *b, char *comparator){
	int i=0,j=0,golemina=0,result;
	char tmp;
		for(i=0;i<(brojac_a/2);i++){
			tmp = *(a+i);
			*(a+i) = *(a+brojac_a-i-1);
			*(a+brojac_a-i-1) = tmp;
		}
		
		for(i=0;i<(brojac_b/2);i++){
			tmp = *(b+i);
			*(b+i) = *(b+brojac_b-i-1);
			*(b+brojac_b-i-1) = tmp;
		}
		//pogolem
		if(brojac_c == 7 && tolower(*(comparator))=='p' && tolower(*(comparator+1))=='o' && tolower(*(comparator+2))=='g' && tolower(*(comparator+3))=='o' && tolower(*(comparator+4))=='l' && tolower(*(comparator+5))=='e' && tolower(*(comparator+6))=='m'){
			golemina = 1;
		}else if(brojac_c == 5 && tolower(*(comparator))=='p' && tolower(*(comparator+1))=='o' && tolower(*(comparator+2))=='m' && tolower(*(comparator+3))=='a' && tolower(*(comparator+4))=='l'){
			golemina = 0;
		}else{
			printf("Invalid comparator\n");
			return 0;
		}
		
		if(golemina){
			result = strcmp(a,b);
			if(result == 0){
				for(i=0;i<brojac_a;i++){
					printf("%c",a[i]);
				}
				printf("\n");
			}else if(result > 0){
				for(i=0;i<brojac_a;i++){
					printf("%c",a[i]);
				}
				printf("\n");
			}else{
				for(i=0;i<brojac_b;i++){
					printf("%c",b[i]);
				}
				printf("\n");
			}
		}else{
			result = strcmp(a,b);
			if(result == 0){
				for(i=0;i<brojac_a;i++){
					printf("%c",a[i]);
				}
				printf("\n");
			}else if(result > 0){
				for(i=0;i<brojac_b;i++){
					printf("%c",b[i]);
				}
				printf("\n");
			}else{
				for(i=0;i<brojac_a;i++){
					printf("%c",a[i]);
				}
				printf("\n");
			}
		}
}

int main(){
	int n,i=0,j=0,s=0;
	char a[MAX], b[MAX], c[MAX];
	char ch,ch1,ch2;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		brojac_a=0;
		brojac_b=0;
		brojac_c=0;
		j = 0;
		while((ch=getchar())!='\n'){
			a[j++] = ch;
			brojac_a++;
		}
		j = 0;
		while((ch1=getchar())!='\n'){
			b[j++] = ch1;
			brojac_b++;
		}
		j = 0;
		while((ch2=getchar())!='\n'){
			c[j++] = ch2;
			brojac_c++;
		}
		revertString(a,b,c);		
	}
	return 0;
}
