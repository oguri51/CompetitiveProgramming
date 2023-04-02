#include <iostream>
using namespace std;

int main() {
    
    int time;
    int h, m, s;

    cin >> time;

    h = time / 3600;
    m = time % 3600 / 60;
    s = time % 60;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}
