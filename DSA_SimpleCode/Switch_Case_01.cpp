#include<iostream>
using namespace std;

int main()
{
    int num, pos;
    cout << "Enter the amount in Rs: ";
    cin >> num;  // Get the amount from the user
    
    cout << "Which notes are needed?\n 1. 100 Rs notes \n 2. 20 Rs notes \n 3. 10 Rs notes \n 4. 1 Rs notes" << endl;
    cout << "Enter position: ";
    cin >> pos;

    switch (pos)
    {
    case 1:
        cout << "100 Rs notes for " << num << " Rs is = " << num / 100 << " notes" << endl;
        break;
    
    case 2:
        cout << "20 Rs notes for " << num << " Rs is = " << num / 20 << " notes" << endl;
        break;

    case 3:
        cout << "10 Rs notes for " << num << " Rs is = " << num / 10 << " notes" << endl;
        break;

    case 4:
        cout << "1 Rs notes for " << num << " Rs is = " << num / 1 << " notes" << endl;
        break;

    default:
        cout << "Invalid option!" << endl;
        break;
    }
}
