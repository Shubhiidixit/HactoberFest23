#include <iostream>
#include <vector>

using namespace std;

// Function to perform prime factorization
void primeFactorization(int n) {
    // Initialize the list to store prime factors
    vector<int> factors;

    // Divide n by 2 until it is divisible by 2
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }

    // n must be odd at this point, so we can skip even numbers in the loop
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }

    // If n is still greater than 2, it's a prime number itself
    if (n > 2) {
        factors.push_back(n);
    }

    // Print the prime factors
    cout << "Prime Factors: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        primeFactorization(n);
    }

    return 0;
}
