#include<iostream>
using namespace std;
class complexnum{
    int real;
    int imag;
    complxnum(){

    }
    complexnum(int r, int i){
        this->real=r;
        this->imag=i;
    }
    void display(){
        cout<<real<<"+"<<imag<<endl;
    }
    complexnum add(complexnum &c){
        complexnum t;
        t.real=this->real+c.real;
        t.imag=this->imag+c.imag;
        return t;
    }

};
int main(){
    complexnum c1(2,5),c2(4,7);
    complexnum c3= c1.add(c2);
    c1.display();
    cout<<" + ";
    c2.display();
    cout<<" = "; 
}