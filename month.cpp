// copyright (c) 2020 Ahmad All rights reserved
//
// created by Ahmad El-khawaldeh
// created on Nov 2020
// This program will tell u if your input is possitive or negative

#include<iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12):";
    cin >> month;

    if (month == 1) {
        cout << "Enter month : January " <<endl;
    }
    else if (month == 2) {
        cout << "Enter month : February " <<endl;
    }
    else if (month == 3) {
        cout << "Enter month : March " <<endl;
    }
    else if (month == 4) {
        cout << "Enter month : April " <<endl;
    }
    else if (month == 5) {
        cout << "Enter month : May " <<endl;
    }
    else if (month == 6) {
        cout << "Enter month : June " <<endl;
    }
    else if (month == 7) {
        cout << "Enter month : July " <<endl;
    }
    else if (month == 8) {
        cout << "Enter month : August " <<endl;
    }
    else if (month == 9) {
        cout << "Enter month : September " <<endl;
    }
    else if (month == 10) {
        cout << "Enter month : October " <<endl;
    }
    else if (month == 11) {
        cout << "Enter month : November " <<endl;
    }
    else if (month == 12) {
        cout << "Enter month : December " <<endl;
    }
    else {
        cout << "Invalid input! Please enter month number between (1-12).";
    }

}