//include the library
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


//function to find maximum
int max(int a,int b){
	if (a>=b){
		return a;}
	else {
		return b;}

}

//void function
void maxR(int a,int b,int &maxm){
	maxm=max(a,b);
}


//function to find minimum
int min(int a,int b){
	if (a<=b){
		return a;}
	else {
		return b;}

}

//void function
void minR(int a,int b,int &minm){
	minm=min(a,b);
}


//main
int main(){
	int num1,num2;
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	
	//asking the user what operation he would like to perform
	cout<<"Enter 1: to find the SUM of the two numbers "<<endl;
	cout<<"Enter 2: to find the MAXIMUM of the two numbers "<<endl;
	cout<<"Enter 3: to find the MINIMUM of the two numbers "<<endl;
	int x,sum,maxm,minm;
	cin>>x;
	if (x==1){
		sumR(num1,num2,sum);
			cout<<sum<<" is their sum"<<endl;}
	else if (x==2){
		maxR(num1,num2,maxm);
			cout<<maxm<<" is their maximum"<<endl;}
	else if (x==3){
		minR(num1,num2,minm);
			cout<<minm<<" is their minimum"<<endl;}
	else {
		cout<<"Wrong input"<<endl;}
	return 0;
}














