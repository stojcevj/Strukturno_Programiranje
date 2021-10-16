/*
Да се напише функција letterFrequency (char * text, char letter) што за даден letter ќе испечати информации која е релативната фреквенција на појавување на таа буква во текстуалната низа text (како мала и како голема буква). Текстот е ограничен на максимум 1000 карактери.

Релативната фреквенција на буква се пресметува како количник од бројот на појавувања на таа буква и вкупниот број на букви во текстот.

For example:

Input	Result
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse efficitur tempus enim, id imperdiet nisl rhoncus et. Nunc aliquam suscipit ex eget tincidunt. Nullam finibus ipsum congue, tempus quam et, condimentum diam. Maecenas commodo est nibh, ac condimentum neque ultrices in. Donec varius lectus nibh. Praesent quis turpis quis purus venenatis condimentum id molestie erat. In viverra dignissim congue. Sed sit amet malesuada metus, ut egestas massa. Vivamus pretium, dui at hendrerit pharetra, nunc augue dignissim lorem, in suscipit tortor ligula quis tellus. Sed porttitor enim non faucibus facilisis. Phasellus accumsan tincidunt est, quis imperdiet mauris commodo vel. Aliquam erat volutpat. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Vestibulum vestibulum massa suscipit quam mollis, quis hendrerit quam tempor. In feugiat viverra condimentum. Donec volutpat est enim, ut malesuada libero pulvinar vel. In hac habitasse.
c

*/

#include <stdio.h> 
#include <string.h> 
#include <ctype.h>
#include <math.h>
#define MAX 1000
  
double letterFrequency (char * text, char letter){ 
	float cifri=0;
	float malo=0;
	float golemo=0;
	while(*text!='\0'){
		if(*text == tolower(letter)){
			malo++;
		}else if(*text == toupper(letter)){
			golemo++;
		}
		text++;
		cifri++;	
	}
	printf("%c -> %.3f%%\n",tolower(letter),malo/(cifri+1.0)* 100);
	printf("%c -> %.3f%%\n",toupper(letter),golemo/cifri * 100);
} 
int main() { 
	char text[MAX];
	char letter;
	char c;
	int i=0;
	while ((c=getchar())!= '\n'){
            text[i] = c;
            i++;
        }
	scanf("%c",&letter);
	letterFrequency(text,letter);
	
	return 0;
} 