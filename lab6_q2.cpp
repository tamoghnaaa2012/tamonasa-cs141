//Include the library
#include<iostream>
using namespace std;

//function for sum
int sum(int a,int b){
	int s=a+b;
	return s;
}
//void function
void sumR(int a,int b,int &c){
	c=a+b;
}
	
//main
int main(){
	int num1, num2;
	cout<<"enter the first number"<<endl;
	cin>>num1;
	cout<<"enter the second number"<<endl;
	cin>>num2;
	int sum;
	sumR(num1,num2,sum);
	cout<<"The sum is: "<<sum<<endl;

return 0;
}



