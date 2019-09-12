#include<stdio.h>
#include<stdlib.h>
int man_dist(int x1, int y1, int x2, int y2){
	return (int)(abs((float)(x1- x2))+ abs((float)(y1- y2)));
}
int main(){
	int Ax, Ay , Bx, By, Cx, Cy;
	printf("Enter x coordinate of point A: ");
	scanf("%d", &Ax);
	printf("Enter y coordinate of point A: ");
	scanf("%d", &Ay);
	
	printf("Enter x coordinate of point B: ");
	scanf("%d", &Bx);
	printf("Enter y coordinate of point B: ");
	scanf("%d", &By);
	
	printf("Enter x coordinate of point C: ");
	scanf("%d", &Cx);
	printf("Enter y coordinate of point C: ");
	scanf("%d", &Cy);
	
	int distAB = man_dist(Ax, Ay, Bx, By);
	int distBC = man_dist(Bx, By, Cx, Cy);
	int distCA = man_dist(Cx, Cy, Ax, Ay);
	
	if(distAB==distBC && distBC == distCA){
		printf("Point A and B\nPoint B and C\nPoint C and A\n");
	}else if(distAB>distBC){
		if(distAB>distCA)
			printf("Point A and B");
		else if(distAB<distCA)
			printf("Point C and A\n");
		else
			printf("Point A and B\nPointC and A");
	}else if(distAB<distBC){
		if(distBC>distCA)
			printf("Point B and C");
		else if(distBC<distCA)
			printf("Point C and A\n");
		else
			printf("Point B and C\nPointC and A");
	}else{
		if(distCA>distAB)
			printf("Point C and A\n");	
		else
			printf("Point A and B\nPoint B and C\n");		
	}
	return 0;
}
