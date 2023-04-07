#include <iostream>
using namespace std;

int main() {

    int i = 1;
    int num;
    
    while(1){
        
        cin >> num;

        if(num == 0) break;
        
        cout << "Case " << i << ": " << num << endl;

        i++;
    }

    return 0;
}
