#include <iostream>

using namespace std;

// Function to count distinct ways to climb stairs
int countDistinctWayToClimbStair(long long nStairs) {
    // Base case
    if (nStairs < 0)
        return 0;
    
    if (nStairs == 0)
        return 1;
    
    // Recursive call
    int ans = countDistinctWayToClimbStair(nStairs-1) 
        + countDistinctWayToClimbStair(nStairs-2);
    
    return ans;
}

int main() {
    long long nStairs;
    cout << "Enter number of stairs: ";
    cin >> nStairs;
    
    int distinctWays = countDistinctWayToClimbStair(nStairs);
    cout << "Number of distinct ways to climb " << nStairs << " stairs: " << distinctWays << endl;
    
    return 0;
}