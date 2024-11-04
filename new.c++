#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {`
        cin >> a[i];
    }

    long long max_sum = numeric_limits<long long>::min();
    long long current_sum = 0;
    int start = 0, end = 0, temp_start = 0;

    for (int i = 0; i < n; ++i) {
        current_sum += a[i];

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        } else if (current_sum == max_sum) {
            // Update end to the last occurrence of the same max sum
            end = i;
        }

        if (current_sum < 0) {
            current_sum = 0;
            temp_start = i + 1; // Start a new subarray from the next index
        }
    }

    cout << max_sum << " " << start << " " << end << endl;
    return 0;
}
