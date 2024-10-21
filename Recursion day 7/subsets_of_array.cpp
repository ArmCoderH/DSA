#include <iostream>
using namespace std;

void solve(int nums[], int n, int index, int output[], int outputSize) {
    // Base case: If we have processed all elements
    if (index == n) {
        cout << "{ ";
        for (int i = 0; i < outputSize; i++) {
            cout << output[i] << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Exclude the current element
    solve(nums, n, index + 1, output, outputSize);

    // Include the current element
    output[outputSize] = nums[index];
    solve(nums, n, index + 1, output, outputSize + 1);
}

int main() {
    int nums[] = {1, 2, 3}; // Input array
    int n = 3; // Size of input array
    int output[10]; // Temporary array to store a subset

    // Generate all subsets
    solve(nums, n, 0, output, 0);

    return 0;
}
