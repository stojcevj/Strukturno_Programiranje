/*
Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:

релативната фреквенција на сите мали букви
релативната фреквенција на сите големи букви
Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).

Да не се менува функцијата writeToFile().

For example:

Input	Result
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse efficitur tempus enim, id imperdiet nisl rhoncus et. Nunc aliquam su

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
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
	char c;
	int golema=0;
	int mala=0;
	float vk;
	if((in = fopen("text.txt","r"))==NULL){
		printf("Ne mozam da procitam");
	}
	
	while((c = fgetc(in))!= EOF){
		if(isalpha(c)){
			if(isupper(c)) golema++;
			if(islower(c)) mala++;
			vk++;
		}
	} 
	printf("%.4f\n", golema/vk);
	printf("%.4f", mala/vk);
	
	fclose(in);   
	return 0;
}
