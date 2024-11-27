#include <iostream>
using namespace std;

class PhonePayments {
private:
    double phonePrice;
    double monthlyPayment;
    int totalMonths;
    double remainingAmount;

public:
    PhonePayments(double price) {
        phonePrice = price;
        monthlyPayment = 0.2 * price;
        totalMonths = 0;
        remainingAmount = price;}

void makePayment(bool isPaid) {
    if (isPaid) {
            remainingAmount -= monthlyPayment;
    } else {
            remainingAmount *= 1.02;
    }
        totalMonths++;}

void showTotalMonths() {
    cout << "Total months of installments: " << totalMonths << endl;
}

double getRemainingAmount() {
        return remainingAmount;
}};

int main() {
double phonePrice;
    cout << "Enter the price of the phone: ";
    cin >> phonePrice;

PhonePayments phonePayments(phonePrice);
while (phonePayments.getRemainingAmount() > 0) {
bool isPaid;
    cout << "Did you make the payment this month? (1 for yes, 0 for no): ";
    cin >> isPaid;
    phonePayments.makePayment(isPaid);

if (phonePayments.getRemainingAmount() == 0) {
    cout << "You have submitted all your installments." << endl;
    break;
}}
    phonePayments.showTotalMonths();
    return 0;
}