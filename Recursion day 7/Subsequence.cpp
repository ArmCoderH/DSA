#include <iostream>
using namespace std;

void solve(string str, string output, int index) {
    // Base case: If we have processed all characters
    if (index >= str.length()) {
        if (!output.empty()) {  // Print only non-empty subsequences
            cout << output << endl;
        }
        return;
    }

    // Exclude the current character
    solve(str, output, index + 1);

    // Include the current character
    output.push_back(str[index]);
    solve(str, output, index + 1);
}

int main() {
    string str = "abc";  // Input string
    string output = "";  // Temporary output string to store the subsequence
    int index = 0;       // Start index

    // Generate and print all subsequences
    solve(str, output, index);

    return 0;
}
