#include<iostream>
using namespace std;
int main(){
int *p1=new int (5);
int *p2;
p2=p1;
cout<<*p1<<endl;
cout<<*p2<<endl;
*p1=*p2;
cout<<*p2;
return 0;


}
