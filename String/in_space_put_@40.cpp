#include<iostream>
#include<cstring> // for strlen
using namespace std;

string hello(char name[])
{
    string temp = ""; // For storing the modified string
    for(int i = 0; i <strlen(name); i++) // Use strlen for C-style string
    {
        if(name[i] == ' ') // Single quotes for character comparison
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(name[i]);
        }
    }
    return temp; // Return the modified string
}

int main()
{
    char name[30];
    cout << "Enter a string: ";
    cin.getline(name, 30); // Input the string with spaces
    cout << "String without space = " << hello(name) << endl;
}
