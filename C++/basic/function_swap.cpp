#include<iostream>
using namespace std;
void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;

}
 int  main(){
    int a=5,b=20;
    cout<<"value before swap : "<<a<<" "<<b;
    swap(a,b);
    cout<<" values after swap : "<<a<<" "<<b;
    return 0;
}
