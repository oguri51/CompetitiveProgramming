#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, num, idx;
    char mark;
    vector<vector<bool>> card(4, vector<bool> (13, false));
    string s = "SHCD";

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> mark >> num;

        idx = s.find(mark);
        card[idx][num-1] = true;
    }

    for(int i=0; i<card.size(); i++){

        mark = s[i];

        for(int j=0; j<card.at(0).size(); j++){
            if(!card[i][j]){
                cout << mark << " " << j+1 << endl;
            }
        }
    }

    return 0;
}
