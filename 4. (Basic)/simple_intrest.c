#include<stdio.h>
void main(){
	float p,r,t,a;
	printf("Enter pricipal number");
	scanf("%f",&p);
	printf("Enter rate value");
	scanf("%f",&r);
	printf("Enter time value");
	scanf("%f",&t);
	a=(p*r*t)/100;
	printf("interest=%f",a);
	
}
