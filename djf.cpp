#include<stdio.h>
int main(){
	int x=3;
	int y=4;
	x=x+y;
	y=x-y;
	x=x-y;
	printf("x=%d",x);
	printf("y=%d",y);
}
