#include<stdio.h>
//In C programming, a token is the smallest individual unit of a program that is meaningful to the compiler
//we cannot use float in case of % only valid for int
//entry control loop is for,while and exit control loop is do while onl



//int main(){
//	int a=6;
//	int b=~6;
//	printf("%d",b);
//}


//int main(){
//	float a=19.84;
//	float b=6.2;
//	printf("%f",a/b);
//	return 0;
//}

//int main(){
//	int a=6;
//	int b=7;
//	int c;
//	c=a,b;
//	printf("%d %d %d",c,b,a);
//}


//int main(){
//	int a=6;
//	int b=7;
//	int c;
//	c=a,c=b;
//	printf("%d %d %d",c,b,a);
//}



//return nothing
//int main(){
//	float a=65;
//	a++;
//	printf("%c",a);
//	return 0;
//}

//int main(){
//	int a=19.84;
//	int b=6.2;
//	printf("%c",a%b);
//	return 0;
//}



#include<math.h>
//int main(){
//	int a=9.8;
//	int b=ceil(a);
//	printf("%d",b);
//	return 0;
//}


//int main(){
//	float a=-10.90;
//	float b=fabs(a);
//	printf("%f",b);
//}

#include<string.h>
//int main(){
//	char name[30]="vansHagRTYVibl";
//	strchr(name,'b');
//	printf("%s",name);
//}

//
//int main(){
//	float a=(10.5)/(3.6);
//	float b=(int)a;
//	printf("%f",b);
//	printf("%f",a);
//	return 0;
//}
//


//int main(){
//	int a=10;
//	if(a>10){
//		goto end;
//		printf("Hello");
//	}else{
//		printf("Without end");
//	}
//	end:
//		printf("World");
//	return 0;
//}

//int main(){
//	float a;
//	scanf("%f",&a);
//	printf("%f",a);
//}


//int main(){
//	int arr[5]={1,2,3,4,5};
//	printf("%d",arr[7]);
//}



int main(){
	int n=5;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}









