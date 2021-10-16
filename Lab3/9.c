/*
Од влез се внесува цел позитивен број n, така што n > 2. Со помош на ѕвездички, да се исцрта полн правоаголен триаголник со висина и ширина n, како во примерот:

За n=5

    *
   **
  ***
 ****
*****
For example:

Input	Result
0
Nevaliden vlez



*/
#include<stdio.h>
int main(){
	int n,i,j,p,b=1,z=0,o;
	scanf("%d",&n);
	
	if(n>2){
		for(i=0;i<n;i++){
			for(j=0;j<1;j++){
				p = n-b;
				z = z + 1;
					for(p;p!=0;p--){
						printf(" ");
					}
					
					for(o=0;o<z;o++){
						printf("*");
					}
				b++;	
			}
			printf("\n");
		}
	}else{
		printf("Nevaliden vlez");
	}
	
	return 0;		
}