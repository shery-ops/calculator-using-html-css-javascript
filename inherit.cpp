#include <iostream>
using namespace std;
class A{
    private:
    int a=5;
    public: 
    A(){}

    void display(){
cout<<"display of class A"<<endl;
cout<<"a="<<a<<endl;
    }
    void getter(){
        cout<<"Enter value of a"<<endl;
        cin>>a;
    }
};
class B: public A{
public:
B(){
}

void display(){                          //function overiding
    cout<<"display of class B"<<endl;
    
}
};
int main(void){
B obj;
obj.display();

    return 0;
}