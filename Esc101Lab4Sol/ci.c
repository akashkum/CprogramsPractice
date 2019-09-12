#include<stdio.h>
#include<math.h>
float compound_interest(float p, float r, float t, int n){
	int expnt = floor(n*t);
	return p*pow(1+r/n, expnt);
}
int main(){
	int n;
	float p, r, t;
	printf("Enter pricipal: ");
	scanf("%f", &p);
	printf("Enter rate of interest: ");
	scanf("%f", &r);
	printf("Enter time in years: ");
	scanf("%f", &t);
	printf("Enter compounding period per year: ");
	scanf("%d", &n);
	printf("Amount after interest is %.2f\n", compound_interest(p,r,t,n));
	return 0;
}
