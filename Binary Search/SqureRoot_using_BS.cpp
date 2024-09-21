#include <iostream>
using namespace std;

int binerysearch(int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    int ans = -1;
    while (s <= e) {
        int sq = mid * mid;
        if (sq == n) {
            return mid;
        }
        if (sq < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = binerysearch(number);
    cout << "The floor square root of " << number << " is: " << result << endl;

    return 0;
}
