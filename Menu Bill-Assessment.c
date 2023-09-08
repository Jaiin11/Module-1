#include <iostream>
using namespace std;

int main() {
    int a, qty, rate, total;

    cout << "Select your item \n1.Tea \n2.Cold Coffee \n3.Gujarati Thali \n4.Punjabi Thali \n5.Manchuriyam \n6.Puri Sabji \n7.Chhole kulche \n8.Pizza \n9.Vadapav \n10.Burger\n";
    cin >> a;

    switch (a) {
        case 1:
            cout << "\nYou have selected Tea.\n Enter the quantity: ";
            cin >> qty;
            rate = 10;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        case 2:
            cout << "\nYou have selected Cold Coffee.\n Enter the quantity: ";
            cin >> qty;
            rate = 30;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        case 3:
            cout << "\nYou have selected Gujarati Thali.\n Enter the quantity: ";
            cin >> qty;
            rate = 80;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        case 4:
            cout << "\nYou have selected Punjabi Thali.\n Enter the quantity: ";
            cin >> qty;
            rate = 100;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        case 5:
            cout << "\nYou have selected Manchuriyam.\n Enter the quantity: ";
            cin >> qty;
            rate = 85;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        case 6:
            cout << "\nYou have selected Puri Sabji.\n Enter the quantity: ";
            cin >> qty;
            rate = 60;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        case 7:
            cout << "\nYou have selected Chhole Kulche.\n Enter the quantity: ";
            cin >> qty;
            rate = 50;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        case 8:
            cout << "\nYou have selected Pizza.\n Enter the quantity: ";
            cin >> qty;
            rate = 110;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        case 9:
            cout << "\nYou have selected Vadapav.\n Enter the quantity: ";
            cin >> qty;
            rate = 15;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        case 10:
            cout << "\nYou have selected Burger.\n Enter the quantity: ";
            cin >> qty;
            rate = 65;
            total = qty * rate;
            cout << "\nTotal amount: " << total;
            break;
        default:
            cout << "\nSorry Unavailable..." << a;
            break;
    }

    return 0;
}

