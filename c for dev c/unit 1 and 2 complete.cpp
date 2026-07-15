#include<stdio.h>
//int main(){
//	printf("my name is vansh");
//	char ch='1';
//	for (ch='8';ch>='5';ch--){
//		printf("%c\n",ch+54);
//	}
//	return (0);
//
//}
//concept of goto:
//int main(){
//	int n=0,j;
//	for (j=2;j<=8;j++){
//		n=n+j;
//		if(j==8)
//			goto add;
//	}
//	add:
//		printf("%d\n",n);
//	vansh:
//		printf("%d\n",n*n);
//	number:printf("%d",j);
//return 0;
//}

//practise question:
//int main(){
//	int i=1,sum=0;
//	while(i<=5){
//		if (i!=3){
//			sum+=i*5+2;
//			printf("%d",sum);
//		}
//		i++;
//		if(sum>60)
//		return sum;
//	}
//	return sum;
//}



//int main(){
//	for (int n=1;n<=3;n++){
//		if(n==2){
//			break;
//		}
//		printf("hello ram ram ji my name is vansh %d \n",n);
//		for(int m=1;m<=2;m++){
//			if (m==2){
//				continue;
//			}
//			printf("%d %d",n,m);
////		}
//	}
//	return 0;
//}

//int main(){
//	for (int n=1;n<=3;n++){
//		if(n==2){
//			break;
//		}
//		printf("hello ram ram ji my name is vansh %d \n",n);
//}
//}




//// some important concept related to this is
//int main(){
//	int a=5;
//	if(a==10)
//	{
//		printf("A");
//	}
//	return 0;
//	
//}


//method of swapinng 
//int main(){
//	int a=5;
//	int b=10;
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf(" the value of a is : %i\n",a);
//	printf("the value of  \b ids %i",b);
//	return 0;
//}


//some basic thing to remember
//int main(){
//	int a=8;
//	if(a ==10)
//	printf("hello tau ram ram ji how are you my name is vansh aggarwal and i am from haryana");
//	return 0;
//	
//}

//also some good concept to remember: 
//int main(){
//	int a=10;
////	printf("%d helllo %d hello %d hello %d hello \n",++a,++a,a++,a++);
//	printf("%d helllo %d hello\n",a++,a+2);
//	printf("%a",a);
//	return 0;
//}

//
//int main(){
//	for(int i=1;i<=5;i+1) printf("A");
//	return 0;
//	//here i will be print infinite
//}

//
//int main(){
//	int a=10;
//	int b=20;
//	int c=a*b;
////	int t=c/2;
//	int t=(int)c/2;
//	printf("%i",t);
//	return 0;
//	//here the output will come zero in case of int 
//}


//concept to find the octalmeans divide by 8 and then reverse of remeinder
//int main(){
//	int a,octal=0,i=1;
//	scanf("%i",&a);
//	while(a>0){
//		octal=octal+(a%8)*i;
//		a=a/8;
//		i=i*10;
//	}
//	printf("%i",octal);
//	return 0;
//}


int main(){
	int a,binary=0,i=1;
	scanf("%i",&a);
	while(a>0){
		binary=binary+(a%2)*i;
		a=a/2;
		i=i*10;
	}
	printf("%i",binary);
	return 0;
}
                                       
                                       
//int main(){
//	int a,hexa=0,i=1;
//	scanf("%i",&a);
//	while(a>0){
//		hexa=hexa+(a%16)*i;
//		a=a/16;
//		i=i*10;
//	}
//	printf("%i",hexa);
//	return 0;
//}



//int main(){
//	int n,rem=0,sum=0,rem2=0,sum2=0;
//	scanf("%i",&n);
//	while(n>0){
//		rem=n%10;
//		sum =sum+rem;
//		n=n/10;
//		while(sum>0){
//			rem2=sum%10;
//			sum2+=rem2;
//			sum=sum/10;
//}
//}
//	printf("%i",sum2);
//	return 0;
//}





//int main(){
//	int inputnumber;
//	scanf("%d",&inputnumber);
//	int dr=inputnumber;
//	int steps=0;
//	while(dr>9){
//		int sum =0;
//		while(dr>0){
//			sum+=dr%10;
//			dr/=10;
//		}
//		dr=sum;
//		steps++;
//	}
//	int temp=inputnumber;
//		int steps2=0;
//		while(temp>9){
//			int sum=0;
//			while(temp>0){
//				sum+=temp%10;
//				temp/=10;
//			}
//			temp=sum;
//			steps2++;
//		}
//		printf("Digital Root: %d\n",dr);
//		printf("Number of steps: %d\n",steps2);
//		return 0;
//}





