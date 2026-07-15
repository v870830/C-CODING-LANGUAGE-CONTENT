#include<stdio.h>
//int main(){
//	int a;
//	scanf("%i",&a);
//	do{
//		printf("hello my name is %i",a);
//		a=a+1;
//	}
//	while(a<20);
//	printf("%i",a);
//	return 0;
//}


//value pass by reference
//void change(int *x) {   // Step 1: pointer parameter
//    *x = 50;            // Step 2: change value using dereference
//}
//
//int main() {
//    int a = 10;
//
//    change(&a);         // Step 3: send address of a
//
//    printf("%d", a);    // Step 4: original value changed
//}
//


// 

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

//
////code to find square of digit and then add;
//#include<math.h>
//int main(){
//	int n,rev=0,d1,seq,temp;
//	scanf("%d",&n);
//	while(n>0){
//		d1=n%10;
//		seq=d1*d1;
//		temp=seq;
//		int count=0;
//		while(temp>0){
//			count+=1;
//			temp=temp/10;
//		}
//		rev=rev*pow(10,count)+seq;
//		n=n/10;
//	}
//	printf("%d",rev);
//	return 0;
//}


//int main(){
//	int a=10;
//	int *ptr=&a;
//	ptr=ptr+2;
//	printf("%p\
",ptr);
//}


int main(){
	int i=0,j=0;
	while(++i<3){
		j=j+2;
		printf("%d %d",i,j);
	}
}

































