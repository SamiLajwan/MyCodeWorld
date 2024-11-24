class Solution {
public:
    bool canMakeBouquets(vector<int>& bloomDay, int m, int k, int D) {
        int counter = 0, bouquets = 0;
        
        for (int i = 0; i < bloomDay.size(); i++) {
            // Check if the flower is bloomed
            if (bloomDay[i] <= D) {
                counter++; // Consecutive bloomed flowers
                if (counter == k) {
                    bouquets++; // Make a bouquet
                    counter = 0;
                }
            } else {
                counter = 0; // Reset counter if the flower isn't bloomed
            }

            if (bouquets == m) {
                return true; // Successfully made all bouquets
            }
        }
        
        return false; // Couldn't make enough bouquets
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlowersNeeded = (long long)m * k;
        if (bloomDay.size() < totalFlowersNeeded) {
            return -1; // Not enough flowers to meet the requirement
        }

        int start = *min_element(bloomDay.begin(), bloomDay.end()); // Minimum possible day
        int end = *max_element(bloomDay.begin(), bloomDay.end());   // Maximum possible day
        int ans = -1;

        // Binary search for the minimum day
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (canMakeBouquets(bloomDay, m, k, mid)) {
                ans = mid; // Update answer
                end = mid - 1; // Look for an earlier day
            } else {
                start = mid + 1; // Increase the day
            }
        }

        return ans;
    }
};
