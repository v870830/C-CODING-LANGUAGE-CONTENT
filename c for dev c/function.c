#include<stdio.h>
//you can call function into or inside the main function only 
//functon with no argument and no return value;
//void add();//function decleartation if you will not use it then also not problem
//int main(){
//	add();
//	return 0;
//}
//void add(){ //function defineation
//	int a,b,sum;
//	scanf("%d\n",&a);
//	scanf("%d\n",&b);
//	sum=a+b;
//	printf("sum of %d and %d is : %d",a,b,sum);
//}


//function with argument and no return value;
//void add(int a,int b);
//int main(){
//	int a,b;
//	scanf("%d\n",&a);
//	scanf("%d\n",&b);
//	printf("\n enter sum of two number is: ");
//	add(a,b);
//	return 0;
//}
//void add(int a,int b){
//	int sum;
//	sum=a+b;
//	printf("the sum of two number %d and %d is : %d",a,b,sum);
//}


//function without argument with return value;
//int add(){
//	int a,b;
//	scanf("%d\n",&a);
//	scanf("%d\n",&b);
//	int sum=a+b;
//	return sum;
//}
//int main(){
//	int store=add();
//	printf("the sum of two number is : %d",store);
//	return 0;
//}


//function with argument and with return value;

//int add(int a,int b){
//	int sum=a+b;
//	return sum;
//}
//int main(){
//	printf("sum %d",add(2,4));
//	return 0;
//}


//void evenFibSum(int n,int *sum){
//	int a=0,b=1,next;
//	*sum =0;
//	if(n<2){
//		*sum=0;
//		return;
//	}
//	while(1){
//		next=a+b;
//		a=b;
//		b=next;
//		if(next>b)break;
//		if(a%2==0) *sum+=a;
//	}
//}
//int main(){
//	int n,sum;
//	scanf("%d",&n);
//	evenFibSum(n,&sum);
//	printf("%d\n",sum);
//	return 0;
//}


//concept of find sum of entered integer:
//int rec(int n){
//	int d1,sum=0,count=0;
//	while(n>0){
//		d1=n%10;
//		sum+=d1;
//		n=n/10;
//		count+=1;
//	}
//	printf("%d\n",sum);
//	printf("%d",count);
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	rec(n);
//	return 0;
//}

//int main(){
//	int n,temp,i;
//	scanf("%d",&n);
//	printf("enter value of n: ");
//	int m;
//	scanf("%d",&m);
//	if(n>m){
//		temp=m;
//	}else{
//		temp=n;
//	}
//	int hold=0;
//	for(i=1;i<temp;i++){
//		if(n%i==0 && m%i==0){
//			if(i>hold){
//				hold=i;
//			}
//		}
//	}
//	printf("%d",hold);
//	return 0;
//}


//
//int main(){
//	int temp;
//	scanf("%d",&temp);
//	int n=temp,d1,rev=0;
//	while(n>0){
//		d1=n%10;
//		rev =rev*10+d1;
//		n=n/10;
//	}
//	printf("%d",rev);
//	if(temp==rev){
//		printf("yes");
//	}else{
//		printf("no");
//	}
//	return 0;
//}














