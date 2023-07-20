#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter a 3-digit number: ";
    cin >> number;
    
    // Extracting individual digits
    int hundredsDigit = number / 100;
    int tensDigit = (number / 10) % 10;
    int onesDigit = number % 10;
    
    // Calculating the sum
    int sum = hundredsDigit + tensDigit + onesDigit;
    
    cout << "Sum of the digits: " << sum << endl;
    
    return 0;
}
