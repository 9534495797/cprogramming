#include<stdio.h>
//void sum(){
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf("%d",a+b);
//	
//	
//}
//int main(){
//	sum();
//	return 0;
//}    //sum


//void even();// function prototype means only naming  it is no need to write it
//void even(){ //def function
//	int a,b;
//	scanf("%d ",&a);
//	for (b=1;b<=30;b=b+1){
//		if (b%2==0){
//			printf("%d\n",b);
//		}
//	}
//
//}
//int main(){
//	even();
//	return 0;
//}  even number question


//void factor();
//void factor(){
//	int a,b;
//	printf("factor = ");
//	scanf("%d",&a);
//	for(b=1;b<=a;b++){
//		if(a%b==0){
//			printf("%d\n",b);
//		}
//	}
//}
//int main(){
//	factor();
//	return 0;
//	
//}

//int sum();
//int sum(){
//	int a,b;
//	scanf("%d %d" ,&a,&b);
//	return a+b;
//}
//int main(){
//	printf("%d",sum());
//	return 0;
//}  //sum by calling function

//int sum();
//int sum(){
//	int a;
//	scanf("%d",&a);
//	if(a%2==0){
//		return a;
//	}
//	else{
//		return a;
//	}
//}
//int main(){
//	printf("%d",sum());
//}

//int reverse();
//int reverse(){
//	int a,i=0;
//	scanf("%d",&a);
//	if(a[i]==i[a]){
//		return a;
//	}
//	
//}
//int main(){
//	printf("%d",reverse());
//}








#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    printf("The reversed number is: %d\n", reversed_num);

    return 0;
}

