#include<iostream>
using namespace std;

class address{
    public:
    int street,house;
    string city,town;

    address(int street,int house,string town,string city){
            this->street=street;
            this->city=city;
            this->house=house;
            this->town=town;
    }

};

class person{
    private:
        address *ptr;
        string name;
        int age;
public:
    person(string name,int age,address *p){
        ptr=p;
        this->name=name;
        this->age=age;
    }
    
    void display(){
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"Street number="<<ptr->street<<endl;
        cout<<"house number="<<ptr->house<<endl;
        cout<<"town="<<ptr->town<<endl;
        cout<<"City="<<ptr->city<<endl;

        }

};
int main(){
    address obja(5,3,"HUNZA","GILGIT");
    person obj("Sheryar khan",21, &obja);
    obj.display();
}