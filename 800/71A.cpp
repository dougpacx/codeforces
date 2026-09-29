#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string w;
        cin >> w;

        int s = w.size();

        if(s > 10){
            cout << w[0] << s-2 << w[s-1] << "\n";
        }else{
            cout << w << "\n";
        }
    }

    return 0;
}