#include <iostream>
using namespace std;

class DynamicArray {
private:
int* arr;
int size;

public:
DynamicArray(int size){
    this->size = size;
    arr = new int[size];
}

~DynamicArray(){
    delete[] arr;
}
void setValues(int a, int b, int c, int d){
arr[0] = a;
arr[1] = b;
arr[2] = c;
arr[3] = d;
}

void printValues()const{
for(int i = 0; i < size; ++i) {
    cout << arr[i] << " ";
}
cout << endl;}

DynamicArray operator+(const DynamicArray& other){
    DynamicArray result(size);
    for (int i = 0; i < size; ++i){
        result.arr[i] = arr[i] + other.arr[i];
}
    return result;}
};

int main(){
DynamicArray obj1(4);
DynamicArray obj2(4);

obj1.setValues(1,4,7,8);
obj2.setValues(7,5,4,9);

DynamicArray result = obj1 + obj2;

    cout << "Result of addition: ";
    result.printValues();

return 0;
}
