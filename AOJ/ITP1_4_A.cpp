#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int a, b, d, r;
    double f;
    
    cin >> a >> b;

    d = a / b;
    r = a % b;
    f = (double)a / (double)b;

    cout << fixed << setprecision(5); //小数点以下の桁数指定
    cout << d << " " << r << " " << f << endl;

    return 0;
}
