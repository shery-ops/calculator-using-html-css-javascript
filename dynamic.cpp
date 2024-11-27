#include <iostream>
using namespace std;
class address{
     public:
    string city,town;
    int house,street;

   
    address(string name,string city,string town,int house,int street){
        name=name;
        city=city;
        town=town;
        street=street;
        house=house;
    }
    void display(){
cout<<"name"<<name<<endl;
cout<<"house"<<house<<endl;
cout<<"street"<<street<<endl;
cout<<"town"<<town<<endl;
cout<<"city"<<city<<endl;

    }
    
    
};
class person{
    public:
    string name;
    address object();


};
int main(){
    string name,town,city;
    int house,street;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your street number"<<endl;
    cin>>street;
    cout<<"enter your house number"<<endl;
    cin>>house;
    cout<<"Enter your town name"<<endl;
    cin>>town;
    cout<<"Enter your city name"<<endl;
    cin>>city;
address obj(name,town,city,house,street);


return 0;
}