#include <iostream>
using namespace std;

bool isValid(long long number);
int sumOfDoubleEvenPlace(long long number);
int getDigit(int number);
int sumOfOddPlace(long long number);
bool prefixMatched(long long number, int d);
int getSize(long long d);
long long getPrefix(long long number, int k);

int main() {
    long long number;
    cout << "Enter a credit card number as a long integer: ";
    cin >> number;
    if (isValid(number))
        cout << number << " is valid" << endl;
    else
        cout << number << " is invalid" << endl;
    return 0;
}

bool isValid(long long number) {
    int numDigits = getSize(number);
    if (numDigits < 13 || numDigits > 16)
        return false;
    bool prefixOK = prefixMatched(number, 4)  ||   
                    prefixMatched(number, 5)  ||   
                    prefixMatched(number, 37) ||   
                    prefixMatched(number, 6);      
    if (!prefixOK)
        return false;
    long long sum = sumOfDoubleEvenPlace(number) + sumOfOddPlace(number);
    return (sum % 10 == 0);
}


int sumOfDoubleEvenPlace(long long number) {
    int sum = 0;
    number /= 10;
    while (number != 0) {
        int digit = static_cast<int>(number % 10);
        sum += getDigit(digit * 2);
        number /= 100; 
    }
    return sum;
}

int getDigit(int number) {
    if (number < 10)
        return number;
    else
        return (number / 10) + (number % 10);
}

int sumOfOddPlace(long long number) {
    int sum = 0;
    while (number != 0) {
        sum += static_cast<int>(number % 10);
        number /= 100; 
    }
    return sum;
}

bool prefixMatched(long long number, int d) {
    int k = getSize(d);
    return getPrefix(number, k) == d;
}

int getSize(long long d) {
    int numDigits = 0;
    do {
        numDigits++;
        d /= 10;
    } while (d != 0);
    return numDigits;
}

long long getPrefix(long long number, int k) {
    int size = getSize(number);
    if (size < k)
        return number;
    long long result = number;
    for (int i = 0; i < size - k; i++)
        result /= 10;
    return result;
}
