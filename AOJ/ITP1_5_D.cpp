#include <iostream>
using namespace std;

int main() {

    int n, x = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        x = i;
        if(x % 3 == 0){
            cout << " " << i;
        } else{
            while(x != 0){
                if(x % 10 == 3){
                    cout << " " << i;
                    break;
                }
                x = x /10;
            }
        }
    }

    cout << endl;

    return 0;
}
