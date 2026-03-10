#include<iostream>
using namespace std;
class number {
    private:
    int i ;
    public:
    number(){

    }
    number(int i,){
        this->i=i;


    }
    number add(number &g){
        number s;
        s.i=this->i+g.i;
        return s;
    }
    void display(){
        cout<<i;
    }
};
int main(){
    number a(56),b(72);
    number c=a.add(b);
    c.display;
    cout<<"+";
    b.display();
    cout<<"=";
    c.display();
    return 0;
}