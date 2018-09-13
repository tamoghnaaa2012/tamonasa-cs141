//include the library
#include<iostream>
using namespace std;

//function to find sum of all even numbers between the two numbers
int sumEvenNumbers(int a, int b){
	int sum=0;
	if (a%2==0){
		for (int i=a;i<=b;i+=2){
			sum+=i;
		}}
	else {
		for (int i=a+1;i<=b;i+=2){
			sum+=i;
	}}
	return sum;}

//function to find sum of all odd numbers between the two numbers
int sumOddNumbers(int a, int b){
	int sum=0;
	if (a%2!=0){
		for (int i=a;i<=b;i+=2){
			sum+=i;
		}}
	else {
		for (int i=a+1;i<=b;i+=2){
			sum+=i;
	}}
	return sum;}

//function to find the sum of squares of all odd numbers between the two numbers
int sumSquareOddNumbers(int a, int b){
	int sum=0;
	if (a%2!=0){
		for (int i=a;i<=b;i+=2){
			sum+=i*i;
		}}
	else {
		for (int i=a+1;i<=b;i+=2){
			sum+=i*i;
	}}
	return sum;}

//function to find the sum of squares of all even numbers between the two numbers
int sumSquareEvenNumbers(int a, int b){
	int sum=0;
	if (a%2==0){
		for (int i=a;i<=b;i+=2){
			sum+=i*i;
		}}
	else {
		for (int i=a+1;i<=b;i+=2){
			sum+=i*i;
	}}
	return sum;}

//main
int main(){
	int num1,num2;
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	int sumEven=sumEvenNumbers(num1,num2);
	int sumOdd=sumOddNumbers(num1,num2);
	int sumSquareEven=sumSquareEvenNumbers(num1,num2);
	int sumSquareOdd=sumSquareOddNumbers(num1,num2);
	cout<<"Sum of even numbers between them: "<<sumEven<<endl;
	cout<<"Sum of odd numbers between them: "<<sumOdd<<endl;
	cout<<"Sum of squares of odd numbers between them: "<<sumSquareOdd<<endl;
	cout<<"Sum of squares of even numbers between them: "<<sumSquareEven<<endl;
	return 0;
}


















