#include<iostream>
using namespace std;
void fun(int &b){
    b=b+5;
}
int main(){
    int a=5;
    fun(a);
    cout<<a<<endl;
    return 0;
}