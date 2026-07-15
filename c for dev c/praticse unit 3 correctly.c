#include<stdio.h>

//Lecture 13 double factorial
//int n;
//int main(){
//	int i,pro=1;
//	scanf("%d",&n);
//	if(n%2==0){
//		for(i=n;i>1;i--){
//			if(i%2==0){
//				pro*=i;
//			}
//		} 
//	}
//	else{
//		for(i=n;i>1;i--){
//			if(i%2!=0){
//				pro*=i;
//			}
//		}
//	}
//	printf("the double factorial is : %d",pro);
//	return 0;
//}



//second question to find the sum of enter integer
//int add(int a){
//	static int sum=0;
//	sum+=a;
//	return sum;
//}         
//int main(){
//	static int n,i,m,final_score;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&m);
//		final_score=add(m);
//	}
//	printf("the final sum is : %d ",final_score);
//}                        
//



//third questions is:
//int a,b,c;
//void findmax(){
//	if(a>b && a>c){
//		printf("%d is greater \n ",a);
//	}else if(b>a && b>c){
//		printf("%d is greater \n ",b);
//	}else{
//		printf("%d is greater \n ",c);
//	}
//	return 0;
//}
//int main(){
//	extern int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	findmax();
//}



//find the given series of number is in ap ap or not
//int main(){
//	auto int i;
//	scanf("%d",&i);
//	while(i=1){
//		digit1=i%10;
//		i=i/10;
//		digit2=i%10;
//	}
//}



//int fact(int n){
//	if(n==0){
//		return 0;
//	}else if(n==1){
//		return 1;
//	}else{
//		return n*fact(n-1);
//	}
//}
//int main(){
//	int n;
//	printf("enter the integer which you want to  find factorial: ");
//	scanf("%d",&n);
//	int result=fact(n);
//	printf("the factorial of %d is : %d ",n,result);
//	return 0;
//}




//question to find the given number is a power of two or not:
//int main(){
//	int n,sum=0;
//	scanf("%d",&n);
//	if(n%2!=0 || n==0){
//		printf("not a power of 2 .");
//	}
//	else{
//		while(n>1){
//			if(n%2==0){
//				sum+=1;
//				n=n/2;
//			}else{
//				sum=0;
//				break;
//			}
//		}
//	}
//	if(sum==0){
//		printf("not a power of 2.");
//	}else {
//		printf("power of 2 is : %d",sum);
//	
//	}
//	return 0;
//}
//


//for same question we can use 
//n&&(n-1)




//to find the enter integer in in ap form or not
//
//int main(){
//    int n, diff, d1, j;
//    scanf("%d", &n);
//
//    int arr1[10], i = 0;
//
//    while(n > 0){
//        d1 = n % 10;
//        arr1[i] = d1;
//        n = n / 10;
//        i++;
//    }
//
//    diff = arr1[1] - arr1[0];   // better this way
//
//    int count = 1;
//
//    for(j = 1; j < i; j++){
//        if(arr1[j] != arr1[j-1] + diff){
//            count = 0;
//            break;
//        }
//    }
//
//    if(count == 0)
//        printf("NO");
//    else
//        printf("YES");
//
//    return 0;
//}













