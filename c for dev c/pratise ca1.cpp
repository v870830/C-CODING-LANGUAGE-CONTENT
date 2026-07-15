#include<stdio.h>
//int main(){
//	int x,digit,rev=0,digit2,digit3;
//	scanf("%i",&x);
//	while(n>0){
//		digit=n%10;
//		rev=rev*10+digit;
//		n=n/10;
//	}
//	while(rev>0){
//		digit2=rev%10;
//		digit3=digit2/10;
//		while(digit3>0){
//			digit4=digit3%10;
//			if (digit4>digit3){
//				digit3=digit3/10;
//			}
//		}
//	}
//}





int main(){
	int n;
	scanf("%d",&n);
	int largest_digit=-1; second_largest_digit=-1;
	while(n>0){
		int digit=n%10;
		if(digit>largest_digit){
			second_largest_digit=largest_digit;
			largest_digit=digit;
		}
		else if(digit>second_largest_digit && diit!=largest_digit){
			second_largest_digit=digit;
		}
		n=n/10;
	}
	printf("the second largest digit is %d\n",second_largest_digit);
}





