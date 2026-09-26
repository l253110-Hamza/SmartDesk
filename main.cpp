#include <iostream>
using namespace std;

int main()
{
    cout << "====================================\n";
    cout << "           SMARTDESK\n";
    cout << "   Personal Productivity Manager\n";
    cout << "====================================\n";

    cout << "\n1. Login\n";
    cout << "2. Register\n";
    cout << "3. Exit\n";

    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nLogin selected.\n";
    }
    else if (choice == 2)
    {
        cout << "\nRegistration selected.\n";
    }
    else if (choice == 3)
    {
        cout << "\nGoodbye!\n";
    }
    else
    {
        cout << "\nInvalid choice.\n";
    }

    return 0;
}