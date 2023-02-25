#include<stdio.h>
int main(){
	printf("%d",palindrome());
	
}
int palindrome(){
	int a,d,rev,temp;
	printf("your num =");
	temp=a;
	scanf("%d",&a);
	while(a!=0){
		d=a%10;
		a=a/10;
		rev=rev*10+d;
	}
	if(rev==temp){
		printf("its a palindrome");
	}
	else{
		printf("not");
	}
}
