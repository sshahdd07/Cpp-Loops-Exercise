#include <iostream>
using namespace std;

int main()
{
    int num;

    // Get input from the user
    cout << "Enter a positive number: ";
    cin >> num;

    // Check if the number is valid
    if (num < 0)
    {
        cout << "Invalid input! Please enter a positive number." << endl;
        return 0;
    }

    // Display numbers from 1 to num
    cout << "\nNumbers from 1 to " << num << ":" << endl;

    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // Calculate the sum of numbers
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    cout << "\nSum = " << sum << endl;

    // Display even numbers
    cout << "\nEven numbers:" << endl;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    // Calculate factorial
    unsigned long long factorial = 1;

    if (num > 20)
    {
        cout << "\nFactorial is too large to calculate using this data type." << endl;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }

        cout << "\nFactorial = " << factorial << endl;
    }

    // Display multiplication table
    cout << "\nMultiplication Table of " << num << ":" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
