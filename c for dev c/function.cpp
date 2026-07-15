#include<stdio.h>
//recursion function
//int sum(int n){
//	if (n==0)
//	return 0;
//	else {
//		return n+sum(n-1);
//	}
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int y=sum(n);
//	printf("the sum of digit is %d",y);
//}




//fact using recusrion
//int fact(int n){
//	if (n==1)
//	return 1;
//	else {
//		return n*fact(n-1);
//	}
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int y=fact(n);
//	printf("the sum of digit is %d",y);
//}




//long long unsigned int fact(long long unsigned int n){
//	if (n==1)
//	return 1;
//	else {
//		return n*fact(n-1);
//	}
//}
//int main(){
//	long long unsigned int n;
//	scanf("%llu",&n);
//	long long unsigned int y=fact(n);
//	printf("the sum of digit is %llu",y);
//}

//fibonic series
//long fib(long n){
//	if(n==0||n==1)
//	return n;
//	else 
//	return fib(n-1)+fib(n-2);
//}
//int main(){
//	long int n;
//	scanf("%ld",&n);
//	long int y=fib(n);
//	printf("the fibonic series is %ld",y);
//}

//fibnoic series 
int fib(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fib(n-1)+fib(n-2);
	}
}
int main(){
	int n;
	printf("enter the number of  terms: ");
	scanf("%d",&n);
	printf("fibonic series upt to %dterms is: ");
	for(int i=0;i<n;i++){
		printf("%d",fib(i));
	}
	printf("\n");
	return 0;
}











