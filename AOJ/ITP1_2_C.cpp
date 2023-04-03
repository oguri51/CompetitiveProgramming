#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int a, b, c, tmp;

    cin >> a >> b >> c;

    vector<int> num = {a, b, c};

    for(int i=0; i < num.size() - 1; i++){
        for(int j=1; j < num.size(); j++){
            if(num[i] > num[j]){
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            } 
        }
    }
    
    cout << num[0];
    for(int i=1; i < num.size(); i++) cout << " " << num[i];
    cout << endl;

    return 0;
}
