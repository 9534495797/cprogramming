#include<stdio.h>
int main(){
	int a=5;
	int *aptr;
	aptr=&a;
	printf("%d\n",&a);
	printf("%d\n",*aptr);//aptr means pointer on a
	printf("%d\n",aptr);
	printf("%d\n",a);
	printf("%d\n",&aptr);
	
}


//int main(){
//	int a=5;
//	int *aptr;
//	aptr=&a;
//	printf("%d\n",&a);
//	printf("%d\n",*aptr);//aptr means pointer on a
//	*aptr=8;  //it will give 8 in second chance
//	printf("%d\n",aptr);
//	printf("%d\n",a);
//	printf("%d\n",&aptr);
//	
//}

// main(){
//	int a=6;
//	float b=23.678;
//	void *ptr;
//	ptr=&a;
//	printf("%d",*((float*)(ptr)));
//}

//int main(){
//	int a=6;
//	float b=23.678;
//	void *ptr;
//	ptr=&b;
//	printf("%f",*((float*)(ptr)));
//}

//
//int  main(){
//	int a=6,b=23;
//	+//we can add this
//     int * const ptr=&a;// we can not cange because this is constant
//     *ptr=10;
//     //ptr=&b  error because ptr is a
//     printf("%d\n",a);
//	printf("%d",*ptr);
//}
//#include<stdio.h>
//int main(){
//	int a[]={1,2,3,4,45};
//printf("%d\n",a);
//printf("%d\n",&a[0]);
//printf("%d\n",&a);
//printf("%d",a[0]);
//}


//#include<stdio.h>
//int main(){
//	int a[]={11,23,45,67,89,10,23};
//	
//	
//printf("%d\n",a);
//printf("%d\n",&a[0]);
//printf("%d\n",&a);
//printf("%d\n",a[0]);
//printf("%d",*(a+1));
//}


//#include<stdio.h>
//int main(){
//	int a[]={1,2,3,4,45};
//	int *b;
//	b=a;
//	int i;
//	for(i=0;i<5;i++){
//		printf(%d),*(a+i);
//	}
//printf("%d\n",a);
//printf("%d\n",&a[0]);
//printf("%d\n",&a);
//printf("%d",a[0]);
//printf("%d",b[0]);
//}
