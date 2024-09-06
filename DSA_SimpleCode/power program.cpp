#include<iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1; // Initialize the answer to 1
    for (int i = 1; i <= b; i++) // Start from 1 and loop b times
    {
        ans = ans * a; // Multiply ans by the base 'a' each time
    }
    cout<< "answer is="<<ans;
    return ans; // Return the final result
}

int main()
{
    power(10, 2); 
    return 0;
}
