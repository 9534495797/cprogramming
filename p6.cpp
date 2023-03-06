#include<stdio.h>
int main(){
	int x,y;
	printf("enter your values=");
	scanf("%d %d",&x,&y);
	if (x==y){
		printf("same");
	}
	else if(x<y){
		printf(" x is less than y");
	}
	else{
		printf("y is less than x");
	}
}
