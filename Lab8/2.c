/*
Да се напишат следните функции за работа со низи од децимални броеви:

Функцијата double max (double * niza, int n), што како резултат ќе го врати максимумот во низата niza со n елементи.
Функцијата double min (double * niza, int n), што како резултат ќе го врати минимумот во низата niza со n елементи.
Функцијата void normalize (double * niza, int n), што ќе го нормализира секој елемент од низата по следната формула:

x = (x-min(niza)) / (max(niza) - min(niza))

Функција void sort (double * niza, int n) што ќе ја сортира низата во опаѓачки редослед!

Да не се менува main функцијата и да не се користи операторот за пристап до елемент на низа [ ]!
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
void sort(double *niza, int n){
    int i,j;
    double temp;
    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
            if (*(niza+j) <= *(niza+j+1)){
                temp =  *(niza+j);
                *(niza+j) =  *(niza+j+1);
                *(niza+j+1) = temp;
            }
        }
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
	sort(niza,n);
	normalize(niza,n);
	
	
	return 0;
}