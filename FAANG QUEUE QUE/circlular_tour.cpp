class Solution {
  public:
    int circularTour(vector<int>& gas, vector<int>& cost) {
        int totalDeficit = 0; // Total shortage of petrol across all stations
        int balance = 0;     // Current petrol balance
        int start = 0;       // Starting gas station index

        for (int i = 0; i < gas.size(); i++) {
            balance += gas[i] - cost[i];
            if (balance < 0) {
                totalDeficit += balance;
                start = i + 1; // Move start to the next station
                balance = 0;   // Reset the balance
            }
        }

        // If total petrol including the deficit is non-negative, return start index
        if(totalDeficit + balance >= 0)
        {
            return start;
        }
        else
        {
            return -1;
        }
    }
};