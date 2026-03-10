#include<iostream>
using namespace std;
int *fun(){
    int *p=new int();
    *p=24;
    delete p;
    return p;

}

int main () {
int *p=fun();
cout<<*p;
return 0;
}