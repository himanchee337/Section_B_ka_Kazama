#include<iostream>
using namespace std;
int main(){
    void*p;
    int a=52;
    p=&a;
    cout<<*(int*)p<<endl;
    char ch='z';
    p=&ch;
    cout<<*(int*)p<<endl;
}