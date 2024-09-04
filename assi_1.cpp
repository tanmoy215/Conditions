#include <iostream>
using namespace std;
int main() {
    // Declare the variables
    int amount, originalAmount;
    int note500 = 0, note200 = 0, note100 = 0, note50 = 0;
    int note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;

    // Input the amount from the user
    cout << "Enter the amount: ";
    cin >> amount;

    // Store the original amount for output
    originalAmount = amount;

    // Use a switch statement to calculate the number of notes
    switch (amount >= 500) {
        case 1: 
            note500 = amount / 500;
            amount %= 500;
    }
    switch (amount >= 200) {
        case 1: 
            note200 = amount / 200;
            amount %= 200;
    }
    switch (amount >= 100) {
        case 1: 
            note100 = amount / 100;
            amount %= 100;
    }
    switch (amount >= 50) {
        case 1: 
            note50 = amount / 50;
            amount %= 50;
    }
    switch (amount >= 20) {
        case 1: 
            note20 = amount / 20;
            amount %= 20;
    }
    switch (amount >= 10) {
        case 1: 
            note10 = amount / 10;
            amount %= 10;
    }
    switch (amount >= 5) {
        case 1: 
            note5 = amount / 5;
            amount %= 5;
    }
    switch (amount >= 2) {
        case 1: 
            note2 = amount / 2;
            amount %= 2;
    }
    switch (amount >= 1) {
        case 1: 
            note1 = amount;
    }

    // Output the result
    cout << "For the amount " << originalAmount << " the minimum number of notes required are: " <<endl;
    if (note500 > 0) cout << "Notes of 500: " << note500 <<endl;
    if (note200 > 0) cout << "Notes of 200: " << note200 <<endl;
    if (note100 > 0) cout << "Notes of 100: " << note100 <<endl;
    if (note50 > 0) cout << "Notes of 50: " << note50 <<endl;
    if (note20 > 0) cout << "Notes of 20: " << note20 <<endl;
    if (note10 > 0) cout << "Notes of 10: " << note10 <<endl;
    if (note5 > 0) cout << "Notes of 5: " << note5 << endl;
    if (note2 > 0) cout << "Notes of 2: " << note2 << endl;
    if (note1 > 0) cout << "Notes of 1: " << note1 << endl;

    return 0;
}
