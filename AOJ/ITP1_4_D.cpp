#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, min, max;
    long long sum = 0;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++) cin >> vec[i];

    min = *min_element(vec.begin(), vec.end());
    max = *max_element(vec.begin(), vec.end());
    for(int num: vec ) sum += num;

    cout << min << " " << max << " " << sum << endl;

    return 0;
}
