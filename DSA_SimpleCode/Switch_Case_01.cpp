#include<iostream>
using namespace std;

int main()
{
    int num = 500;
    int pos;
    cout << "which nots are need ?\n 1.100 nots \n 2.20 nots \n 3.10 nots \n 4.1 not " << endl;
    cout << "enter postion = ";
    cin>>pos;

    switch (pos)
    {
    case 1:
        cout << "100 nots for " << num << "rs is = " << num/100 << endl;
        break;
    
    case 2:
        cout << "20 nots for " << num << "rs is = " << num/20 << endl;
        break;

    case 3:
        cout << "10 nots for " << num << "rs is = " << num/10 << endl;
        break;

    case 4:
        cout << "1 not for " << num << "rs is = " << num/1 << endl;
        break;

    default:
        break;
    }
}
