#include<stdio.h>
//LECTURE ABOUT THE CONCEPT OF CLASS AND OBJECTS (OOP)
#include<iostream>
//first using public variable 
//using namespace std;
//class circle{
//public:
//	double radius;
//	double complete_area(){
//		return 3.14*radius*radius;
//	}
//};
//int main(){
//	class circle c1;
//	c1.radius=5.5;
//	cout<<"Radius is :"<<c1.radius<<"\n";
//	cout<<"Area is: "<<c1.complete_area();
//	return 0;
//}


//Second using private variable
//using namespace std;
//class circle{
//	private:
//		double radius;
//	public:
//		void compute_area(double r){
//			radius =r;
//			double area=3.14*radius*radius;
//			cout<<"Radius is:"<<radius<<endl;
//			cout<<"Area is :"<<area;
//		}
//};
//int main(){
//	circle obj;
//	obj.compute_area(1.5);
//	return 0;
//}


//Last one that example program using protected
#include<iostream>
//using namespace std;
//class parent{
//	protected:
//		int id_protected;
//};
//class child:public parent  //here : this colon  show that the ineritence symbol 
//{
//	public:
//		void setid(int id){
//			id_protected=id;
//		}
//		void displayid(){
//			cout<<"Id_protected is:"<<id_protected<<endl;
//		}
//};
//int main(){
//	child obj1;
//	obj1.setid(81);
//	obj1.displayid();
//	return 0;
//}


//NEW TOPIC NAME IS LINE AND INLINE 
//tO DECLEAR OWN FUNCTION
//using namespace std;
//void greet(){
//	cout<<"Good to see you";
//}
//int main(){
//	greet();
//	return 0;
//}

//FIRST TOPIC NAME IS INLINE FUNCTION
//Syntax  
//inline return_type function_name(parametres){
//}

//example with an inline function 
#include<iostream>
//using namespace std;
//inline int square(int s){
//	return s*s;
//}
//int main(){
//	cout<<"the squareof 3 is "<<square(3);
//	return 0;
//}


//USE an inline member function
#include<iostream>
//using namespace std;
//class a{
//public:
//	inline int add(int a,int b){
//		return a+b;
//	}
//};
//int main(){
//	a obj;
//	cout<<"The sum of 3 and 4 is: "<<obj.add(3,4);
//	return 0;
//}


//Second one is about non-inline function
#include<iostream>
using namespace std;
class multiplier{
public:
	int multiply(int a,int b);
};
int multiplier::multiply(int a,int b){
	return a*b;
}
int main(){
	multiplier m1;
	int a=5,b=10;
	cout<<m1.multiply(a,b);
	return 0;
}











