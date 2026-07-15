#include<stdio.h>
//mwthod to find the given number is prime or not
//int isprime(int n){
//	int i;
//	for(i=2;i<n;i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return 1;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=2;i<n;i++){
//		if(isprime(i)){
//			printf("%d",i);
//		}
//	}
//	return 0;
//}



//code to find given number is prime or not
//int main(){
//	int n,y;
//	scanf("%d",&n);
//	if(n>2){
//		for(int i=2;i<n;i++){
//			if(n%i==0){
//				y=-1;
//				break;
//			}
//		}
//		if(y==-1){
//			printf("not a prime number");
//		}else{
//			printf("yes prime number");
//	}
//	}
//	else if(n<2){
//		printf("not a prime number");
//	}
//	return 0;
//}
//


//to find in this format of number:
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//




//to find in this different format
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n-i;j++){
//			printf(" ");
//		}
//		for(int j=1;j<=i;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//code to find binary expression:
//int main(){
//	int n,sum=0,d1,place=1;
//	scanf("%d",&n);
//	while(n>0){
//		d1=n%2;
//		sum=sum+d1*place;
//		place=place*10;
//		n=n/2;
//	}
//	printf("%d",sum);
//	return 0;
//}


//code to find the hexadecimal code
//int main(){
//	int num,rem,temp;
//	long long rev=0,place=1;
//	printf("enter an integer: ");
//	scanf("%d",&num);
//	temp=num;
//	while(temp>0){
//		rem=temp%16;
//		if(rem<10){
//			rev=rev+place*rem;
//		}else{
//			rev=rev+(rem-10+65)*place;
//		}
//		place=place*100;
//		temp=temp/16;
//	}
//	printf("hexadecimal: ");
//	while(rev>0){
//		int val=rev%100;
//		if(val>=65){
//			printf("%c",val);
//		}else{
//			printf("%d",val);
//		}
//		rev=rev/100;
//	}
//	return 0;
//}

//int isn(int n){
//	int count =0,hold=0,d1;
//	while(n>1){
//		d1=n%10;
//		if(d1==0){
//			count+=1;
//		}
//		n=n/10;
//		hold=d1;
//	}
//	if(hold == 0 && count !=0){
//		printf("not a duck number. ");
//	}else
//	{
//		printf("yes a duck number");
//	}
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	isn(n);
//	return 0;
//}




3

























