#include <iostream> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    int cont = 0;

    while(t--){
        string s;
        cin >> s;

        if(s == "++X"){
            ++cont;
        }else if(s == "X++"){
            cont++;
        }else if(s == "--X"){
            --cont;
        }else{
            cont--;
        }
    }

    cout << cont << "\n";

    return 0;
}
