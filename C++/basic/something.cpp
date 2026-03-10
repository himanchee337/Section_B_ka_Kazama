#include<iostream>
using namespace std;
class number{
    int i;
    public:
    number(int i){
        this->i=i;

    }
    int add(number &g){
       int s= this->i+g.i;
       return s;
    }

};
int main(){
    number a(33),b(12);
    int c=a.add(b);
    cout<<c;
    
    return 0;
}