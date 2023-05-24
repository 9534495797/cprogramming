#include<stdio.h>
//int main(){
//	int x;
//	int y;
//	scanf("%d",&x);
//	scanf("%d",&y);
//	int z =x+y;
//	int v=x/y;
//	printf("sum %d\n",z);
//	printf("division %d",v);
//}
//#include<math.h>
//int main(){
//	int x;
//	scanf("%d",&x);
//	printf("square root = %d",sqrt(x));
//}


//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int x, sqr_root;
//
//    printf("Enter a number: ");
//    scanf("%d", &x);
//
//    sqr_root = sqrt(x);
//
//    printf("The square root=%d",sqr_root);
//
//    return 0;
//}

//#include<stdio.h>
//int main(){
//	int num1,num2;
//	scanf("%d",&num1);
//	scanf("%d",&num2);
//	if(num1>num2){
//		printf("num1 greater then num2 %d",num1);
//	}
//	else{
//		printf("num2 greater than num1 %d",num2);
//	}
//}


//#include<stdio.h>
//int main(){
//	int n1=20,n2=20,n3=20;
//	if(n1>=n2 && n1>=n3){
//		printf("%d is largest\n",n1);
//	}
//	if(n2>=n1 && n2>=n3){
//		printf("%d is largest\n",n2);
//	}
//	if (n3>=n1 && n3>=n2){
//		printf("%d is largest\n",n3);
//	}
//}

//#include<stdio.h>
//int main(){
//	int n1=20,n2=20,n3=20;
//	if(n1>=n2 && n1>n3){
//		printf("%d 1 is largest\n",n1);
//	}
//	if(n2>n1 && n2>=n3){
//		printf("%d 2 is largest\n",n2);
//	}
//	if (n3>=n1 && n3==n2){
//		printf("%d 3  is largest\n",n3);
//	}
//}

//#include<stdio.h>
//int main(){
//	int n1=20,n2=20,n3=20;
//	if(n1>=n2 && n1>n3){
//		printf("%d 1 is largest\n",n1);
//	}
//	if(n2>n1 && n2>=n3){
//		printf("%d 2 is largest\n",n2);
//	}
//	if (n3>=n1 && n3==n2){
//		printf("%d 3  is largest\n",n3);
//	}
//}




int main() {
    int num1, num2, num3;
    int largest;

    // Input three numbers from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number using switch case
    switch(1) {
        case  (num1 > num2 && num1 > num3):
            largest = num1;
            break;
        case  (num2 > num1 && num2 > num3):
            largest = num2;
            break;
        case  (num3 > num1 && num3 > num2):
            largest = num3;
            break;
    }

    // Print the largest number
    printf("The largest number is %d", largest);

    return 0;
}


