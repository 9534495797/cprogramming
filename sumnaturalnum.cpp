//#include<stdio.h>
//int main(){
//	int n=5,i,add=0;
//	for(i=0;i<=5;i=i+1){
//		add+=i;
//	}
//	printf("%d",add);
//}

//int main(){
//	int n=20,i,add=0;
//	for(i=2;i<=20;i=i+2){
//		add+=i;
//		
//	}
//	printf("%d",add);
//}

#include <stdio.h>

int main() {
    int num, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

