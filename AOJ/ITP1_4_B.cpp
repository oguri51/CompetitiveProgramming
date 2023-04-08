#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    double r, s, l;
    
    cin >> r;

    s = r * r * M_PI;
    l = r * 2 * M_PI;

    cout << fixed << setprecision(6);
    cout << s << " " << l << endl;

    return 0;
}
