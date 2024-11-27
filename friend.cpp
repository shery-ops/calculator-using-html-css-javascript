#include <iostream>
using namespace std;
class A{
    private:
    int n;
    public:
    A(int a){
        n=a;
    }
    friend void foo(A);
    
};
int main(){
A obj();

    return 0;
}