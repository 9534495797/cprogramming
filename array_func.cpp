#include<stdio.h>
int main(){
	int size;
	printf("enter size of areray");
	scanf("%d",&size);
	printf("values of array \n");
}
for(i=0;i<size;i++){
	scanf("%d",&a[i]);
}
printf("\n");
for(i=0;i<size;i++){
	printf("5d",a[i]);
}
modify(a,size);
printf("\n");
for(i=0;i<size;i++){
	printf("%d",a[i]);
}






void modify(int b[],size){
	int i;
	for(i=0;i<size;i++){
		b[i]=b[i]+1;
	}
}
