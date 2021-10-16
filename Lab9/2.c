/*
Од датотека "input.txt" да се вчита квадратна матрица, така што прво ќе се прочита број n што означува колку редови и колони има матрица, а потоа да се вчитаат сите n x n елементи од матрицата.

Во датотеката "output.txt" да се запише матрицата така што ќе се запишат само елементите над главната дијагонала, но ќе имаат вредност колку сумата на елементите на главната дијагонала. Печатењето да се прави со три места за бројот за елементите над главната дијагонала, а за останатите да се испечатат три празни места, со цел да се добие посакуваниот излез како во тест примерите.

Да не се менуваат функциите writeToFile и printFile!

For example:

Input	Result
7
10 0 1 2 3 1 8
1 0 1 0 1 0 0
1 1 1 1 1 1 1
0 0 0 0 0 0 0
2 1 0 3 1 2 3
0 0 2 0 1 2 3
0 0 1 1 0 0 1
#
    015 015 015 015 015 015 
        015 015 015 015 015 
            015 015 015 015 
                015 015 015 
                    015 015 
                        015 

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void writeToFile() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    writeToFile();
	int niza[MAX][MAX];
	int i,j;
	int dolzina,suma=0;
	FILE *in, *out;
	
	if((in = fopen("input.txt","r"))==NULL){
		printf("ne se cita");
	}
	
	if((out = fopen("output.txt","w"))==NULL){
		printf("ne se pisuva");
	}
	fscanf(in,"%d", &dolzina);
	for (i=0;i<dolzina;i++){
        for (j=0;j<dolzina;j++){
            fscanf(in,"%d",&niza[i][j]);
            if(i == j){
            	suma+=niza[i][j];
			}
        }
    }
    
    for (i=0;i<dolzina;i++){
        for (j=0;j<dolzina;j++){
            if(j>i){
				fprintf(out,"%03d",suma);	
			}else{
				fprintf(out,"   ");
			}
			fprintf(out," ");
        }
        fprintf(out,"\n");
    }
  
    fclose(in);
    fclose(out);
    printFile();
    return 0;
}
