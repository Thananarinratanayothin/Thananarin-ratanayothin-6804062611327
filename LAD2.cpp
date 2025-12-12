#include<stdio.h>
int main(){
	float n1, n2, n3, s1,n11;
	n1=600;
	n2=799;
	n3=200;
	scanf("%f",&s1);
	if (s1 >= 1){
		n11= n1*0.05;
		n1= n1- n11;
		printf("%f",n1);
	}
}

