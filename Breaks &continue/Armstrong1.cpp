#include <iostream>

int main() {
    int number, originalNumber, remainder, result = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    if (result == number)
        std::cout << number << " is an Armstrong number.";
    else
        std::cout << number << " is not an Armstrong number.";

    return 0;
}
