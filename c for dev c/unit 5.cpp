#include<stdio.h>
//concept of pointer Dereferencing
//int main(){
//	int age=18;
//	int *ptr=&age;
//	printf("%d\n",age);
//	printf("%p\n",&age);
//	printf("%p\n",ptr);
//	printf("%d",*ptr);
//	return 0;	
//}
	
//int main(){
//	int a;
//	int *aptr;
//	a=7;
//	aptr=&a;
//	printf("The address of a is %p""\n the value of aptr is %p",&a,aptr);
//	printf("\n\n the value of a is %d" "\n the  value of *aptr is %d",a,*aptr);
//	printf("\n\n showing that * and & are complements of " "each other\n&*aptr = %p" "\n*&aptr = %p\n",&*aptr,*&aptr);
//	return 0;
//}


//recursion function using pointer:
//to find the factorial of given   number
//int main(){
//	int i,n,fact=1;
//	int *pn,*pfact;
//	pn=&n;
//	pfact=&fact;
//	printf("\n Enter number: ");
//	scanf("%d",pn);  //here why we are not using &pn because &show address we alreday declear n address 
//	//means we write scanf("%d",&n); we wrote pn inseted of &n because pn =&n;
////	we wrote upper thaats why means indirectly in the form of pointer it taking value of n';
//	for(i=1;i<=*pn;i++){
//		*pfact=*pfact*i;
//	}
//	printf("\n Factorial of number is:%d\n",*pfact);
//	printf("%d",*&pn);
//	return 0;
//}



//int main(){
//	int n,i,fact=1;
//	int *pn,*pfact;
//	pn=&n;
//	pfact=&fact;
//	printf("\n enter Number: ");
//	scanf("%d",pn);
//	for(i=1;i<=*pn;i++){
//		*pfact=*pfact*i;
//	}
//	printf("%d",*pfact);
//}



//reverse using pointer
//int main(){
//	int n,d1,rev=0,place=1;
//	int *pn;
//	pn=&n;
//	scanf("%d",pn);
//	while(*pn>0){
//		d1=*pn%2;
//		rev=rev+d1*place;
//		*pn=*pn/2;
//		place=place*10;
//	}
//	printf("%d",rev);
//	return 0;
//}







//LECTURE 2
//int main(){
//	int *pnum;
//	char *pch;
//	float *pfnum;
//	double *pdnum;
//	long *plnum;
//	printf("\n Size of Integer pointer=%d",sizeof(pnum));
//	printf("\n Size of character pointer=%d",sizeof(pch));
//	printf("\n Size of float pointer=%d",sizeof(pfnum));
//	printf("\n Size of double pointer=%d",sizeof(pdnum));
//	printf("\n Size of long pointer=%d",sizeof(plnum));
//	return 0;
//	//same length of hexadecimal 
//	//all will give the same answer equialvalent to size taken by unsigned integer for a particular complier
//}
	
	
//to find the area of circle
//int main(){
//	double radius ,area=0.0;
//	double *pradius=&radius,*parea=&area;
//	printf("Enter the radius of circle");
//	scanf("%lf",pradius);
//	*parea=3.14* (*pradius) * (*pradius);
//	printf("%.2lf",*parea);
//	return 0;
//}


//to find the reverse of the number using pointer
//int main(){
//	int n,d1,rev=0;
//	int *pn=&n,*prev=&rev,*pd1=&d1;
//	scanf("%d",pn);
//	while(*pn>0){
//		*pd1=*pn%10;
//		*prev=*prev*10+*pd1;
//		*pn/=10;
//	}
//	printf("%d",*prev);
//	return 0;
//}


#include<math.h>
//to find the armstrong number:
//int main() {
//    int n, *p, temp, sum = 0, d;
//    scanf("%d", &n);
//    p = &n;
//    temp = *p;
//
//    while (*p > 0) {
//        d = *p % 10;
//        sum = sum + pow(d,3);
//        *p = *p / 10;
//    }
//    if (temp == sum)
//        printf("Armstrong");
//    else
//        printf("Not Armstrong");
//
//    return 0;
//}



//Lecture 2(TYPE OF POINTER IN C):

//void pointer:
//int main(){
//	int value=42;
//	void *generic;
//	generic= &value;
//	printf("%f\n",*((float*)generic));
//	return 0;
//}



//Null pointer 
//int main(){
//	int *pointer=NULL;
//	if(pointer == NULL){
//		printf("%d\n",*pointer);
//	}else{
//		printf("pointer is NULL.\n");
//	}
//	return 0;
//}
									

//WILD Pointer:
//int main(){
//	int *wildPointer;
//	if(wildPointer!=NULL){
//		printf("%d\n",*wildPointer);
//	}else{
//		printf("wildpointer is not inialized,canot derefence.\n");
//	}
//	return 0;
//}



//LECTURE 2 ON VOID POINTER AND NULL POINTER
//int main(){
//	int x=10;
//	char ch='A';
//	void *gp;
//	gp=&x;
//	printf("\n Generic pointer points to the integer value = %d",*(int*)gp);
//	gp=&ch;
//	printf("\n Generic pointer now points to the character %c",*(char*)gp);
//	return 0;
//}
//      

 

//Lecture 3:
//LECTURE ABOUT ARRAY USING IN POINTER 
//#include<stdlib.h>
//int main(){
//	int n=1;
//	int *ptr=(int *)malloc(n*sizeof(int));
//	*ptr=6;
//	printf("%d",*ptr);
//	printf("\n%d",ptr);
//	free(ptr);
//	printf("\n%d",ptr);
//	ptr=NULL;
//	printf("\n%d",ptr);
//	return 0;
//}



//CODE for Passing Pointer to a function(or Call by references)
//
//void read(float *b,float *h);
//void calculate_area(float *b,float *h,float *a);
//int main(){
//	float base,height,area;
//	read(&base,&height);
//	calculate_area(&base,&height,&area);
//	printf("\n Area is:%f",area);
//	return 0;
//}
//void read(float *b,float *h){
//	printf("\n Ennter the base of the triangle: ");
//	scanf("%f",b);
//	printf("\n Enter the height of the triangle:");
//	scanf("%f",h);
//}
//void calculate_area(float *b,float *h,float *a){
//	*a=0.5*(*b)*(*h);
//}




//int main(){
//	char *p=NULL;
//	char *q=0;
//	if(p)printf(" p ");
//	else printf("nullp");
//	if(q) printf("q\n");
//	else printf(" nullq\n");
//	return 0;
//}

//int main(){
//	int i=10;
//	void *p=&i;
//	printf("%f\n",*(float*)p);
//	return 0;
//}





//mcq questions
//void m(int *p,int *q){
//	p=q;
//	*p=8;
//	*q=7;
//	
//}
//int main(){
//	int a=6,b=5;
//	m(&a,&b);
//	printf("%d%d\n",a,b);
//}


//Lecture 3 
//we can not use this 
//printf("\n%d",p1+p2);
//printf("\n%d",p1+p2);
//printf("\n%d",p1/p2);
//printf("\n%d",p1*p2);
//printf("\n%d",p1%p2);
//printf("\n%d",p1*2);
//printf("\n%d",p1/p2);
//printf("\n%d",p1%2);
//we can only subtraction and comparison of adreese not rest

//int main(){
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int *p1,*p2;
//	p1=arr;
//	scanf("%d",p1);
//	printf("\n%d",*p1);
//	p1++;
//	printf("\n%d",*p1);
//	p1--;
//	printf("\n%d",*p1);
//	p1=p1+2;
//	printf("\n%d",*p1);
//	p1=p1-2;
//	printf("\n%d",p1);
//	p2=&arr[4];
//	printf("\n%d",p2-p1);
//	while(p1<=p2){
//		printf("\n%d",*p1);
//		p1++;
//	}
//	return 0;
//}






//int main(){
//	int a[]={1,2,3,4,5};
//	int *p=a;
//	printf("\n%d",*(p+1));
//	printf("\n%d",*(a+3));
//	printf("\n%d",p[2]);
//	printf("\n%d",3[p]);
//	printf("\n%d",1[a]);
//}



//int main(){
//	int arr[]={1,2,3,4,5};
//	int i;
//	int *p;
//	p=arr;
//	printf("\n First Value is %d:",*p);
//	p=p+1;
//	printf("\n Second value is :%d",*p);
//	*p=45;
//	p=p+2;
//	*p=-2;
//	printf("\n Modified array is: ");
//	for(i=0;i<5;i++){
//		printf("\n%d",arr[i]);
//	}
//	p=arr;
//	*(p+1)=0;
//	*(p-1)=1;
//	printf("\n Modified array is:");
//	for(i=0;i<5;i++){
//		printf("\n%d",*(p+i));
//	}
//}


//int main(){
//	int i,n;
//	int a[10],*parr=a;
//	printf("\n Enter the numbers of elements");
//	scanf("%d",&n);
//	printf("\n Enter the elements");
//	for(i=0;i<n;i++){
//		scanf("%d",parr+i);
//	}
//	printf("\n Entered array elements are: ");
//	for(i=0;i<n;i++){
//		printf("\t%d",*(parr+i));
//	}
//	return 0;
//}


//QUESTION WAP TO FIND THE SUM AND MEAN OF 1D ARRAY ELEMENTS USING POINTER TO AN ARRAY
//int main(){
//	int i,n,arr[20],sum=0;
//	int *pn=&n,*parr=arr,*psum=&sum;
//	float mean=0.0,*pmean=&mean;
//	printf("\n Enter me number of elements in the array.");
//	scanf("%d",pn);
//	for(i=0;i<*pn;i++){
//		printf("\n Enter the number:");
//		scanf("%d",(parr+i));
//	}
//	for(i=0;i<*pn;i++){
//		*psum=*psum+*(arr+i);
//	}
//	*pmean=*psum/ *pn;
//	printf("\n the numbers you entered are:");
//	for(i=0;i<*pn;i++){
//		printf("\n%d",*(arr+i));
//		printf("\n the sum is :%d",*psum);
//		printf("\n The mean is:%f",*pmean);
//		return 0;
//	}
//}



//Question for {Practise
//int main(){
//	int a[]={1,2,3,4};
//	int *p=a,i;
//	p++;
//	*(p+1)=29;
//	p=p+1;
//	*p=23;
//	p--;
//	*(p+0)=12;
//	p=a;
//	for(i=0;i<4;i++){
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}



//int main(){
//	int a[]={1,2,3,4};
//	int *p1=a,i;
//	int *p2=&a[2];
//	p2--;
//	*(p2-1)=90;
//	p1=p2;
//	*p1=100;
//	for(i=0;i<4;i++){
//		printf("%d",a[i]);
//	}
//}



//LECTURE 4
//dyanimc value do not waste memory that allocate  by user only=
//program for malloc memory (dyanmic)
//#include<stdlib.h>
//int main(){
//	int *p,n,i;
//	printf("Enter the number of integer to be entered");
//	scanf("%d",&n);
//	p=(int *)malloc(n*sizeof(int));  //its main work to change memory static into dyanmic
//	if(p==NULL){
//		printf("Memory not available.");
//		exit(1);
//	}
//	else{
//		printf("\n Memory allocation was succesful");
//		printf("\n Enter integer values");                              
//		for(i=0;i<n;i++){
//			scanf("%d",p+i);
//		}
//		for(i=0;i<n;i++){
//			printf("\n%d",*(p+i));
//		}
//	}
//	return 0;
//}



//calloc';
//malloc() returns void* so we need to typecast with the specfic data type but in case of calloc we dont need to do typecasting
//#include<stdlib.h>
//int main(){
//	int *p,n,i;
//	printf("Enter the number of integer to be entered");
//	scanf("%d",&n);
//	p=(int *)calloc(n,sizeof(int));  
//	if(p==NULL){
//		printf("Memory not available.");
//		exit(1);
//	}
//	else{
//		printf("\n Memory allocation was succesful");
//		printf("\n Enter integer values");                              
//		for(i=0;i<n;i++){
//			scanf("%d",p+i);
//		}
//		for(i=0;i<n;i++){
//			printf("\n%d",*(p+i));
//		}
//	}
//	return 0;
//}



//#include<stdlib.h>
//int main(){
//	int *ptr;
//	int n,i;
//	scanf("%d",&n);
//	ptr=(int *)calloc(n,sizeof(int));
//	for(int i=0;i<n;i++){
//		scanf("%d",ptr+i);
//	}
//	for(int i=n-1;i>=0;i--){
//		printf("%d",*(ptr+i));
//	}
//}



//LECTURE VERY IMPORTANT STRING PART:
//int main(){
//	char string_name[]={'h','e','e','l','l','o',' ','po'};
//	printf("%s",string_name);
//	return 0;
//}





//#include<string.h>
//#include <stdlib.h>
//struct student {
//	char name[50];
//	int age;
//	float grade;
//};
//int main() {
//	struct student s1;
//	strcpy(s1.name,"Udit");
//	printf("Enter age: ");
//	scanf("%d", &s1.age);
//	printf("Enter grade: ");
//	scanf("%f", &s1.grade);
//	printf("\nStudent Details:\n");
//	printf("Name: %s\n", s1.name);
//	printf("Age: %d\n", s1.age);
//	printf("Grade: %.2f\n", s1.grade);
//	return 0;
//};
//
//





//int main(){
//	int n;
//	scanf("%d",&n);
//	int arr[n];
//	int *parr=arr;
//	for(int i=0;i<n;i++){
//		scanf("%d",parr+i);
//	}
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-1-i;j++){
//			if(*(parr+j)>*(parr+j+1)){
//				int temp=*(parr+j);
//				*(parr+j)=*(parr+j+1);
//				*(parr+j+1)=temp;
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",*(parr+i));
//	}
//	return 0;
//}



