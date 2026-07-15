#include<stdio.h>

////ststic questions unit 3 
//Alex is developing a fitness application that utilizes a Collatz-like sequence to gamify step goals. The program employs a static storage specifier. Implement a function collatzSequence(int num), which calculates and displays the sequence for a given number of steps. 
//The sequence is generated based on even and odd rules.
//If n is even, then n = n / 2.
//If n is odd, then n = 3*n + 1.
//Repeat the above steps, until it becomes 1.
//int cs(int num){
//    printf("%d ",num);
//    while(num>=1){
//        if(num%2==0){
//            num=num/2;
//        }else{
//            num=3*num+1;
//        }
//        if(num==1){
//            printf("1");
//            break;
//        }
//        printf("%d ",num);
//    }
//}
//int main(){
//    static int num;
//    scanf("%d",&num);
//    cs(num);
//    return 0;
//}




//question no 2
//to find the given number is prime or not
//int isPrime(int n){
//    for(int j=2;j<n;j++){
//        if(n%j==0)
//        return 0;
//    }
//    return 1;
//}
//int main() {
//    int N;
//    scanf("%d", &N);
//    for (int i = 2; i <= N; i++) {
//        if (isPrime(i)) {
//            printf("%d ", i);
//        }
//    }



//armstrong number question4
//#include<math.h>
//void checkArmstrong(int *n){
//    int on=*n;
//    int temp =*n;
//    int sum=0;
//    int digits=0;
//    int countTemp=*n;
//    while(countTemp!=0){
//        countTemp/=10;
//        digits++;
//    }
//    temp=*n;
//    while(temp!=0){
//        int remainder=temp%10;
//        sum+=pow(remainder,digits);
//        temp/=10;
//    }
//    if(sum==on){
//        printf("Armstrong number");
//    }else{
//        printf("Not an Armstrong number");
//    }
//}

 // You are using GCC
 void checkArmstrong(int *n){
     int sum=0,digit1;
     while(*n>1){
         digit1= *n%10;
         sum+=digit1*digit1*digit1;
         *n/=10;
     }
     if(sum==*n){
         printf("Armstrong number");
     }else{
         printf("Not an Armstrong number");
     }
     return 0;
 }
int main() {
    int n;
    scanf("%d", &n);
    checkArmstrong(&n);
    return 0;
}


