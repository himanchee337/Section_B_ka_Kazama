#include<iostream>
using namespace std;
namespace maths{
    float pi = 3.14;
    float aoc(int r)
    {
        return pi*r*r;

    }
    
}
using namespace maths;
int main(){
    int r;
    cin>>r;
    float area=aoc(r);
    cout<<"area="<<area;
    cout<<"value of pi="<<maths:: pi;
return 0;
}
