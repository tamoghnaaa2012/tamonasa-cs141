//including library
#include<iostream>
using namespace std;

//to convert lowercase to uppercase
char Upper(char a){
     char c = char(int(a)-32);
     return c;
     }
//to convert uppercase to lowercase
char Lower(char b){
     char d = char(int(b)+32);
     return d;
     }
//main
int main(){
     char input;
     cout<<"enter character: "<<endl;
     cin>>input;
     //check if character is uppercase
     if (int(input)>=65 && int(input)<=90){
          char x=Lower(input);
          cout<<"This is an uppercase character"<<endl;
          cout<<"The lowercase character is "<<x<<endl;
          }
     //check if character is lowercase
     else if (int(input)>=97 && int(input)<=122){
          char y=Upper(input);
          cout<<"This is an lowercase character"<<endl;
          cout<<"The uppercase character is "<<y<<endl;
     }
     //wrong input
     else {
          cout<<"Wrong input"<<endl;
          }
     return 7;
}
