#include<iostream>
using namespace std;
class person {
    public:
  int   roll;
    string name;
    person(int r,string s ){
        roll=r;
        name=s;

    }

void display (){
    cout<<name<<" : "<<roll<<endl;
}
};
int main (){
    person p1(1,"ram");
    person p2(p1);
    p1.roll=27;
    p1.name="lakhn";
    p1.display();
    p2.display();
    return 0;
}