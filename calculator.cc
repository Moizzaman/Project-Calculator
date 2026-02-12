#include <iostream>
using namespace std;
int main()
{
    // Variables to use
    int choice;
    double num1, num2;

    cout << "====== Calculator ======" << endl;
    cout << "which operation do you want to perform?" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Profit loss calculation" << endl;
    cout << "6. Profit loss percentage calculation" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Result: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Result: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Result: " << num1 * num2 << endl;
        break;
    case 4:
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero!" << endl;
        break;
    case 5:
        cout << "Enter Sale and Purchase price Respectivly: ";
        cin >> num1 >> num2;
        if (num1 > num2)
            cout << "Profit: " << num1 - num2 << endl;
        else if (num2 > num1)
            cout << "Loss: " << num2 - num1 << endl;
        else
            cout << "No profit, no loss." << endl;
        break;
    case 6:
        cout << "Enter Sale and Purchase price Respectivly: ";
        cin >> num1 >> num2;
        if (num1 > num2)
        {
            double profit = num1 - num2;
            cout << "Profit Percentage: " << (profit / num2) * 100 << "%" << endl;
        }
        else if (num2 > num1)
        {
            double loss = num2 - num1;
            cout << "Loss Percentage: " << (loss / num2) * 100 << "%" << endl;
        }
        else
        {
            cout << "No profit, no loss." << endl;
        }
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}