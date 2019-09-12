#include<stdio.h>
float mytax(int ti){
	if(ti<= 200000)
		return 0;
	else if(ti<500000)
		return (ti- 200000)*0.1;
	else if(ti<1000000)
		return 30000 + (ti-500000)*.2;
	else
		return 130000 + (ti - 1000000)*0.3;
}
int main(){
	int ti;
	printf("Enter taxable Income: ");
	scanf("%d", &ti);
	printf("Income tax is %.2f\n", mytax(ti));
	return 0;
}
