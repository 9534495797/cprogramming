#include<stdio.h>
int greatest(int *a,int *b ,int *c);
int main(){
	int a1,b1,c1;
	printf("enter you values=");
	scanf("%d %d %d",&a1,&b1,&c1);
	int d=greatest(&a1,&b1,&c1);
	printf("%d",d);
}
int greatest(int *a,int *b,int*c){
	if (*a>*b && *a>*c){
		return *a;
}
	else if(*b>*c && *b>*a){
		return *b;
	
	}
	else{
		return *c;
	}

}

//}
//int greatest(int *a,int *b,int *c){
//	return *a+*b+*c;
//}

