#include<stdio.h>
//X=23f means we are writing like this 23.000000;understand;
//unit 2 static questions;
//concept of find it is a power of 2 or not
//int main(){
//	int n;
//	scanf(" please entered a integer: %i",&n);
//	if(n>0 && (n&(n-1))==0)
//	{
//		printf("Yes your intered intreger is the power of 2");
//	}
//	else {
//		printf("No your entered is not an power of 2");
//	}
//	return 0;
//}

//check given integer is a leap year or not
//int main(){
//	int n;
//	scanf("%i",&n);
//	switch((n%4==0 && n%100 !=0) || (n%400==0)){
//		case 1:
//			printf("yes %i is an leap year: ",n);
//			break;
//		default:
//			printf("no %i is not an leap year: ",n);
//			break;
//	}
//	return 0;
//}

//code to find the given digit is repeated first digit;
//very important concept of using nested while loop;
//int main(){
//	int n,digit,temp,rev=0,rem=0;
//	scanf("%i",&n);
//	while(n>0){
//		int rem=n%10;
//		rev=rev*10+rem;
//		n/=10;
//	}
//	while(rev>0){
//		digit=rev%10;
//		rev=rev/10;
//		temp=rev;
//		while(temp>0){
//			if (temp%10==digit){
//				printf("First repeated digit: %d\n",digit);
//				return 0;
//			}
//			temp=temp/10;
//		}
//	}
//	printf("No repeated digit found.\n");
//	return 0;
//}



//to find the greastest prime number :
//int main(){
//	long long int n;
//	int i=2;
//	scanf("%lld",&n);
//	while(n>1){
//		if(n%i==0){
//			n=n/i;
//		}
//		else 
//		i++;
//	}
//	printf("%lld",i);
//	return 0;
//}












