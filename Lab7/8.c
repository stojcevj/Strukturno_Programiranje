/*
Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент n ќе испечати на екран превртен триаголник од броевите од 1 до n, како во примерот подолу. Дополнителни функции се дозволени, но истите мора да се рекурзивни. Не е дозволено користење на циклуси!

Пример за n=4:

1 2 3 4 
1 2 3 
1 2 
1
For example:

Input	Result
3
1 2 3 
1 2 
1 


*/

#include<stdio.h>
int ispisi(int n){
    if(n==1){
        printf("1 ");;
    }else{
        ispisi(n-1);
        printf("%d ",n);
    }
}
int triagolnik(int n){
    ispisi(n);
    printf("\n");
    if(n>1)
       triagolnik(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    triagolnik(n);
    return 0;
}