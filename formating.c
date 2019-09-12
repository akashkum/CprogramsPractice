#include<stdio.h>
#define Max 30
#define Msg "Hey it's checking define\n"
int main(){
	printf("%d\n%o\n%x\n", 50, 50, 50);	//50 62 32 it is conerting decimal to 
										// octal and hexadecimal
	printf("%d\n%o\n%x\n", 50, 050, 0x50); // 50 50 50
	
	int n = 123, m =432;
	printf("%d\n%6d\n%2d\n", n , n , m);
	// printf("%4.2f", n); gives error
	// float n = 12.3289232; conflicting type doesn't work
	// int n =23; redefinition doesn't work
	float z = 123.322938;
	printf("%f\n", z);
	printf("%3.2f\n", z);
	printf("%8.6f\n", z);
	printf("%8.5f\n", z);
	printf("%s", Msg);
	//Max= 23; //error: lvalue required as left operand of assignment
	printf("print define %d\n", Max);
}
