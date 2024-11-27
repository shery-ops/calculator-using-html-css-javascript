#include <iostream>
using namespace std;
class A{
public:
int n;
A(int n){
    this->n=n;
}
int operator ++(){
    ++n;
    cout<<n;
    return n;
}
};

int main(){
A obj1(2);
++obj1;

    return 0;
}