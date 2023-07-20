#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter a 5-digit number: ";
    cin >> number;
    
   
    int firstDigit = number / 10000;
    int secondLastDigit = (number / 10) % 10;
    
    int sum = firstDigit + secondLastDigit;
    
    cout << "Sum of the first and the second last digit: " << sum << endl;
    
    return 0;
}
