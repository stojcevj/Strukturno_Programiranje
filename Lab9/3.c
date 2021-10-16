/*
Да се напише програма која што од дадена влезна датотека "text.txt" ќе испечати колку зборови има во секој ред, како и ќе испечати просечен број на зборови во редовите во датотеката. Во рамките на секој ред, кои било два збора се разделени точно со едно празно место.

Дополнително да се испечати редот со најголем број на зборови во него, на начин што секоја мала буква ќе биде голема, а секоја голема ќе биде мала.

For example:

Input	Result
Therefore some one more some left alas much knew one held uninspiring jeez that other and overpaid straight that outrageously that liberal abandoned affably.
A some ouch considering far barring however ouch drew suave well glibly tapir ferret danced more chose as aboard much darn necessarily circa hey inconsiderate by.
Irefully flailed that a obliquely sober that much naked until fish comfortably less prissily jeez a much rid lobster some pounded less led droll opposite near.
#

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    FILE *in;
    int iw=0;
    int count=0;
    float red=0;
    int zbir = 0;
    int max=0;
    int max_red;
	char c;
	char d;
	char matrica[MAX][MAX];
	int red_m=0;
	int kol=0;
	int i,j;
	
    if((in = fopen("text.txt","r"))==NULL){
    	fprintf(stderr,"error");
	}
    while((c = fgetc(in)) != EOF){
    	if(isspace(c)){
    		count++;
    		if(c=='\n'){
    			zbir += count;
    			red++;
    			printf("%d\n",count);
    			if(max < count){
    				max_red = red;
    				max = count;
				}
    			count=0;	
			}
		}
	}
	printf("%.2f\n",zbir/red);
	fclose(in);
	if((in = fopen("text.txt","r"))==NULL){
    	fprintf(stderr,"error");
	}
    while((c = fgetc(in)) != EOF){
    	if(c=='\n'){
    		red_m++;
    		kol = 0;
		}else{
			matrica[red_m][kol++] = c;
		}
	}
	kol=0;
	while(matrica[max_red-1][kol] != '\0'){
		if(islower(matrica[max_red-1][kol])){
			printf("%c",toupper(matrica[max_red-1][kol]));
		}else if(isupper(matrica[max_red-1][kol])){
			printf("%c",tolower(matrica[max_red-1][kol]));
		}else if(isspace(matrica[max_red-1][kol])){
			printf(" ");
		}else{
			printf("%c",matrica[max_red-1][kol]);
		}
		kol++;
	}
		
	fclose(in);
}
