//#include<stdio.h>
//int counting(a);
//int main(){
//	int a;
//	printf("Enter your no=");
//	scanf("%d",&a);
//	count(a);
//	
//	
//}
//int count (a){
//	switch(a){
//		case 1 : printf("one");
//		break;
//		case 2 : printf("two");
//		break;
//		case 3 : printf("three");
//		break;
//		default :printf("you enter wrong");}
//	return a;}
	
	
	
	
	
//question 1st	
//int swap(int *a,int *b);
//int main(){
//	int a1,b1;
//	scanf("%d %d",&a1,&b1);
//	swap(&a1,&b1);
//	
//}
//int swap(int *a,int *b){
//	int temp;
//	temp=*a;
//	*a=*b;
//	*b=temp;
//	printf("%d %d",*a,*b);
//}

// new question

//#include <stdio.h>
//
//void factorial(int a, int *b) {
//    int i;
//    *b = 1;
//    for(i = 1; i <= a; i++) {
//        *b *= i;
//    }
//}
//
//int main() {
//    int a, fact;
//    printf("Enter a number: ");
//    scanf("%d", &a);
//    factorial(a, &fact);
//    printf("Factorial of %d is %d", a, fact);
//    return 0;
//}




//recursion
//#include<stdio.h>
//int main(){
//	int m;
//	scanf("%d",&m);
//	printf("%d",fact(m));
//}
//int fact(int n){
//	if(n==0){
//		return 1;
//	}
//	else{
//		return n* fact(n-1);
//	}
//}
// new question

//#include<stdio.h>
//int main(){
//	int m;
//	scanf("%d",&m);
//	printf("%d",fact(m));
//}
//int fact(int n){
//	if(n==1){
//		return 1;
//	}
//	else{
//		return n + fact(n-1);
//	}
//}


//new question

#include <stdio.h>

int reverse(int n, int reversed) {
    if (n == 0) {
        return reversed;
    } else {
        reversed = reversed * 10 + n % 10;
        return reverse(n / 10, reversed);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number is %d", reverse(n, 0));
    return 0;
}










