#include<stdio.h>
//recursion function using pointer:
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
//	printf("\n Factorial of number is:%d",*pfact);
//	return 0;
//}
