/*
Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент n ќе испечати на екран триаголник од броевите од 1 до n. Дополнителни функции се дозволени, но истите мора да се исто така рекурзивни. Не е дозволено користење на циклуси!

Пример за n=4.

    1
    12
    123
    1234
For example:

Input	Result
8
1
12
123
1234
12345
123456
1234567
12345678


*/

#include<stdio.h>
int ispisi(int n){
    if(n==1){
        printf("1");;
    }else{
        ispisi(n-1);
        printf("%d",n);
    }
}
int triagolnik(int n){
    if(n>1)
       triagolnik(n-1);
    ispisi(n);
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    triagolnik(n);
    return 0;
}