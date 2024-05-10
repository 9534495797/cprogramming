#include<stdio.h>
//int main(){
//	int a=5;
//	int *aptr;
//	aptr=&a;
//	printf("%d\n",&a);
//	printf("%d\n",*aptr);//aptr means pointer on a
//	printf("%d\n",aptr);
//	printf("%d\n",a);
//	printf("%d\n",&aptr);
//	
//}


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
//	printf("%d",*((int*)(ptr)));
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
//     int * const ptr=&a;// we can not change because this is constant
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
//int main(){
//	int a=1;
//	int *ptr;
//	ptr=&a;
//	printf("%d\n",*ptr);
//	printf("%d\n",&ptr);
//	*ptr=8;
//	printf("%d\n",*ptr);
//	printf("%d\n",a);
//	printf("%d\n",&a);
//	printf("%d\n",&ptr);
//	printf("%d\n",ptr);
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
//printf("%d\n",*(a+1));
//printf("%d\n",*(a+2));
//printf("%d\n",*(a+3));
//printf("%d\n",*(a+4));
//printf("%d\n",*(a+5));
//printf("%d",*(a+6));
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

//int main(){
//	int a=5;
//	int *aptr;
//	aptr=&a;
//	printf("%d\n",*aptr);
//	printf("%d\n",&aptr);
//	printf("%d\n",aptr);
//	printf("%d\n",a);
//	printf("%d",&a);
//	
//}


#include<stdio.h>
//int main(){
//	int num;
//	printf("enter the value =");
//	scanf("%d",&num);
//	printf("%u\n",num);
//	printf("%d",&num);
//	
//}

//
//int main(){
//	char c;
//	int x;
//	float y;
//	printf("values =\n");
//	scanf("%c",&c);
//	scanf("%d",&x);
//	scanf("%f",&y);
//	printf("%c\n",&c);
//		printf("%d\n",&x);
//			printf("%f",&y);
//				printf("%d",sizeof(x));
//}

//int main(){
//	int x=10,*p;
//	p=&x;
//	printf("%d\n",p);
//	printf("%d\n",*p);
//	printf("%d",&p);
//}


//sum using pointers

//int main(){
//	int a=3,b=4;
//	int *p1,*p2;
//	p1=&a;
//	p2=&b;
//	int c=a+b;
//	int d=*p1+*p2;
//	printf("%d\n",c);
//	printf("%d",d);
//	
//}

//wild pointer
//int main(){
//	int x,*p;
//	for(x=0;x<=3;x++){
//		printf("%u",p[x]);
//	}
//}

//constant pointer
//int main(){
//	int x=3;
//	int const *p;
//	p=&x;
//	x=10;
//	printf("%d\n",x);
//	printf("%d\n",p);
//	printf("%d",*p);}


//int main(){
//	int x=4,*p1,*p2;
//	p1=&x;
//	p2=&x;
//	printf("%d\n",sizeof(p1));
//		if(p1=p2){
//		printf("size same");
//	}
//	else{
//		printf("size not same");
//	}
//}

//pointer to pointer
int main(){
	int x=3,*p,**q;
	p=&x;
	q=&p;
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",**q);
	printf("%d\n",*q);
	printf("%d",q);
	//printf("%d",*p);
}


