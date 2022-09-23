#include <iostream>
using namespace std;

// Online Shop Code

/*int main()
{
    int price = 0, shipping;
    cout << "Please enter the price of your order: ";
    cin >> price;

    if (price > 75) shipping = 0;
    else if (price >= 51) shipping = 5;
    else if (price >= 26) shipping = 10;
    else if (price >= 0) shipping = 15;

    cout << "\n The shipping cost for your order is: " << shipping;
    cout << "\n The total cost of your order is: " << price + shipping;

    return 0;
}*/

// Menu Chooser Code

/*int main() {
    enum Difficulty { Novice, Easy, Normal, Hard, Unbeatable };

    cout << "Difficulty Levels\n\n";
    cout << "0 - Novice\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n";
    cout << "4 - Unbeatable\n\n";

    int choice;

    cout << "Choice: ";
    cin >> choice;

    switch (choice) {
    case Novice:
        cout << "You picked Novice\n";
        break;
    case Easy:
        cout << "You picked Easy\n";
        break;
    case Normal:
        cout << "You picked Normal\n";
        break;
    case Hard:
        cout << "You picked Hard\n";
        break;
    case Unbeatable:
        cout << "You picked Unbeatable\n";
        break;
    default:
        cout << "You made an illegal choice.\n";

        return 0;
    }
}*/

  // Loan Calculator Code

int main() {
    int loan = 5000, repayment = 500, paymentcount = 0;

    cout << "Enter your loan amount: ";
    cin >> loan;
    cout << "\nEnter your repayment amount: ";
    cin >> repayment;

    int amount = loan;

    while (loan > 0)
    {
        loan = loan - repayment;
        paymentcount++;
    }

    cout << "\nIt will take " << paymentcount << " repayments of " << repayment << " to repay your loan of " << amount;
}

