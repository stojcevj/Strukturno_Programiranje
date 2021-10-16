/*
За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.

0-50 = 5

51-60 = 6

61-70 = 7

71-80 = 8

81-90 = 9

91-100 = 10

Покрај оценките да се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:

1 - 3 = "-"

4 - 7 = " "

8-0 = "+"

For example:

Input	Result
101
Nevalidna vrednost za poeni!



*/

#include <stdio.h>

int main(){
	
	int poeni,znak=0;
	
	scanf("%d",&poeni);
	znak = poeni % 10;
	
	if(poeni>=0 && poeni<=50){
			printf("Ocenka 5\n");
	}else if(poeni>=51 && poeni<=60){
		if(znak>=1 && znak<=3){
			printf("Ocenka 6-\n");
		}else if(znak>=4 && znak<=7){
			printf("Ocenka 6\n");
		}else if((znak>=8 && znak<=9) || znak == 0){
			printf("Ocenka6+\n");
		}
	}else if(poeni>=61 && poeni<=70){
		if(znak>=1 && znak<=3){
			printf("Ocenka 7-\n");
		}else if(znak>=4 && znak<=7){
			printf("Ocenka 7\n");
		}else if((znak>=8 && znak<=9) || znak == 0){
			printf("Ocenka 7+\n");
		}
	}else if(poeni>=71 && poeni<=80){
		if(znak>=1 && znak<=3){
			printf("Ocenka 8-\n");
		}else if(znak>=4 && znak<=7){
			printf("Ocenka 8\n");
		}else if((znak>=8 && znak<=9) || znak == 0){
			printf("Ocenka 8+\n");
		}
	}else if(poeni>=81 && poeni<=90){
		if(znak>=1 && znak<=3){
			printf("Ocenka 9-\n");
		}else if(znak>=4 && znak<=7){
			printf("Ocenka 9\n");
		}else if((znak>=8 && znak<=9) || znak == 0){
			printf("Ocenka 9+\n");
		}
	}else if(poeni>=91 && poeni<=100){
		if(znak>=1 && znak<=3){
			printf("Ocenka 10-\n");
		}else if(znak>=4 && znak<=7){
			printf("Ocenka 10\n");
		}else if((znak>=8 && znak<=9) || znak == 0){
			printf("Ocenka 10+\n");
		}
	}else{
		printf("Nevalidna vrednost za poeni!\n");
	}
	
    return 0;
}
