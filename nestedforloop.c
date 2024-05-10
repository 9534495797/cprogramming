#include<stdio.h>
int main(){
	int a,b,sub;
	for(a=3;a>=1;a--){
		for(b=1;b<=2;b++){
			sub=a-b;
			printf("a=%d b=%d a-b = %d \n",a,b,sub);
		}
	}
}


