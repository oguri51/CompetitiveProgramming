#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int a, b, c;

    cin >> a >> b >> c;

    vector<int> num = {a, b, c};

    sort(num.begin(), num.end());

    cout << num[0];
    for(int i=1; i < num.size(); i++) cout << " " << num[i];
    cout << endl;

    return 0;
}
