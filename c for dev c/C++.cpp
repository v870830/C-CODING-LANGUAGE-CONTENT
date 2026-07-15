#include<stdio.h>
//Lecture of c++ programming
#include<iostream>
//First is cout function
//cout to display output on screen
//EXAMPLE1
#include<iostream>
//using namespace std;//important to write a std namespace
//int main(){
//	cout << "Hello World";
//	return 0;
//}

//xample 2
using namespace std;
//int main(){
//	cout << "hello my name is vansh agggarwal and i am from haryannna";
//	return 0;
//}

//USING OMIITING NAMESPACE
//meANS If we dont write like using namespace std;
//int main(){
//	std::count<<"Hello";
//	return 0;
//}

//int main(){
//	int c=10;
//	cout << c*c+c*c;
//}




//Second is standarad input stream;
//input style is cin>>
//ex1:
//using namespace std;
//int main(){
//	char height;
//	int value;
//	cin>>height;
//	cout<<"Now Entered value: ";
//	cin>>value;
//	cout<<"your enter height value is "<<height<< " and value is :"<<value;
//}
	
	
	
#include<iostream>
//using namespace std;
//int main(){
//	int a,b;
//	cout<<"Lovely Professional University";
//	cin>>a>>b;
//	cout<<"your addition value is: "<<a+b;
//}



//Example of inline member function

#include<iostream>
//using namespace std;
//class operation{
//	int a,b,add;
//	public:
//		void get(){
//		cout<<"Enter first value: ";
//		cin>>a;
//		cout<<"Enter second value: ";
//		cin>>b;
//		}
//		void sum();
//}s;
//inline void operation::sum(){
//	add=a+b;
//	cout<<"Addition of two numbers: "<<a+b;	
//}
//int main(){
//	cout<<"Program using inline function: \n";
//	s.get();
//	s.sum();
//	return 0;
//}


#include<iostream>
using namespace std;
class arithmetic{
	int x,y;
	public:
		void getdata(){
			cout<<"Enter the value of x and y:"<<endl;
			cin>>x>>y;
		}
		void sum(){
			cout<<"sum: "<<x+y;
		}
		void divide(){
			cout<<"Divide: "<<x/y;
		}
		void Multiply(){
			cout<<"Multiply: "<<x*y;
		}
		void subtract(){
			cout<<"Subtraction: "<<x-y;
	}
	
};







