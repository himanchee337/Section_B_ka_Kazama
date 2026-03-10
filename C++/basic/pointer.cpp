#include<iostream>
using namespace std;
int main(){
    int a=6;
    int *p; //pointer variable declaration
    p=&a;
    //refrencing
   // cout<<"value of a is "<<a<<endl;
   //value of a using p
   cout<<"value of a is "<<*p<<endl; //derefrencing
   
    return 0;
}