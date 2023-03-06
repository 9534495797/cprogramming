#include<stdio.h>
int main(){
	int x,y;
	printf("enter your value=");
	scanf("%d %d",&x,&y);
	printf("%d %d %d %f %d %d",x+y,x-y,x*y,x/y,x%y,2<<x);
}
