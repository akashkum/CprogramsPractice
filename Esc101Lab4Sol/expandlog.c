#include<stdio.h>
#include<math.h>
float myexp(float x){
	return 1+x+(x*x)/2;
}
float mylog(float x){
	float z = (x-1)/(x+1);
	
	return 2*(z+(pow(z,3))/3 + pow(z, 5)/5);
}
int main(){
	int choice;
	float x;
	printf("Enter 1 for exponent and 0 for logarithm: ");
	scanf("%d", &choice);
	if(choice==1){
		printf("Enter value of x: ");
		scanf("%f", &x);
		printf("Exponent of %f: %f\n", x, myexp(x));
		}
	else if (choice ==2){
		printf("Enter value of x: ");
		scanf("%f", &x);
		if(x>0)
			printf("Log of %f: %f\n",x, mylog(x));
		else
			printf("%f is not in domain of logarithm!\n", x);
		}
	else
		printf("Invalid choice!\n");
}
