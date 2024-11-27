#include <iostream>
#include <string>
using namespace std;
class laptop{
    private:
    string brand;
    string model;
    int serial;
    string color;
    float price;
    int ram;
    float screenSize;

    public:
    laptop(int s,string brand,int ram,float price,string color,string model,float screenSize){
        serial = s;
        this->model = model;
        this->brand=brand;
        this->ram=ram;
        this->price=price;
        this->color=color;
        this->screenSize=screenSize;
    }
    void display(){
cout<<"Ram size="<<ram<<endl;

cout<<"serial number="<<serial<<endl;

cout<<"model ="<<model<<endl;

cout<<"brand="<<brand<<endl;

cout<<"color="<<color<<endl;

cout<<"price="<<price<<endl;

cout<<"screen Size="<<screenSize<<endl;

}
void upgrade(int upram){
this->ram=upram;
};

};

int main(void){
int upram;
int ram,serial;
string model,brand,color;
float price,screensize;
cout<<"Enter Ram size=";
cin>>ram;
cout<<"Enter serial number=";
cin>>serial;
cout<<"Enter model=";
cin>>model;
cout<<"Enter brand=";
cin>>brand;
cout<<"Enter color=";
cin>>color;
cout<<"Enter price=";
cin>>price;
cout<<"Enterscreen Size=";
cin>>screensize;



laptop obj(serial,brand,ram,price,color,model,screensize);
cout<<"enter upgradebale RAM"<< endl;
cin >>upram;

obj.upgrade(upram);
obj.display();

    return 0;
}