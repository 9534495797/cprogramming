#include<stdio.h>
int reverse();
int main(){
	printf("%d",reverse());
}
int reverse(){
	int a,d,rev=0;
	printf("enter the value");
	scanf("%d",&a);
	while(a!=0){
		d=a%10;
		a=a/10;
		rev=rev*10+d;
	}
	return rev;
}
