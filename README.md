```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void max(const vector<long long>& a) {
    long long maxsum = LLONG_MIN;
    long long s1 = 0;
    int start = 0, end = 0,temp1 = 0;
    for (int i = 0;i <a.size(); i++) {
        s1 = s1 + a[i];
        if (s1 > maxsum) {
            maxsum = s1;
            start = temp1;
            end = i;
        }
        else if (s1==maxsum) {
            start=temp1;
            end=i;
        }
        if (s1< 0) {
            s1 = 0;
            temp1 = i + 1;
        }
    }
    cout << maxsum << " " << start << " " << end << endl;
}
int main() {
    int n;
    cin >> n;  
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }
    max(a);  
    return 0;
}
```
