/*
Да се напишат следните функции за работа со низи од децимални броеви:

Функцијата double max (double * niza, int n), што како резултат ќе го врати максимумот во низата niza со n елементи.
Функцијата double min (double * niza, int n), што како резултат ќе го врати минимумот во низата niza со n елементи.
Функцијата void normalize (double * niza, int n), што ќе го нормализира секој елемент од низата по следната формула:

x = (x-min(niza)) / (max(niza) - min(niza))

Да не се менува main функцијата и да не се користи операторот за пристап до елемент на низа [ ]!

For example:

Input	Result
20
23.67
58.74
19.06
47.44
51.16
78.15
75.85
77.09
72.90
20.49
16.18
57.16
12.96
21.90
24.00
26.18
43.67
35.94
13.01
78.95
MAX -> 78.950
MIN -> 12.960
0.162 0.694 0.092 0.523 0.579 0.988 0.953 0.972 0.908 0.114 0.049 0
*/

#include<stdio.h>
double max (double *niza, int n){
	double maxi;int i;
	maxi = *niza;
	for(i=1;i<n;i++){
		if(*(niza+i) > maxi) maxi = *(niza+i);
	}
	return maxi;
}
double min (double *niza, int n){
	double mini;int i;
	mini = *niza;
	for(i=1;i<n;i++){
		if(*(niza+i) < mini) mini = *(niza+i);
	}
	return mini;
}
void normalize (double * niza, int n){
	double x;
	int i;
	for(i=0;i<n;i++){
		x = ((*(niza+i)-min(niza,n)) / (max(niza,n) - min(niza,n)));
		printf("%.3f ",x);
		
	}	
}
int main(){
	double niza[1000];
	float k;
	int n,i;
	scanf("%d",&n);
		
	for(i=0;i<n;i++){
		scanf("%f",&k);
		niza[i] = k;
	}
	
	printf("MAX -> %.3f\n",max(niza, n));
	printf("MIN -> %.3f\n",min(niza, n));
	normalize(niza,n);
	
	
	return 0;
}