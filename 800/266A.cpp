#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);

    int st;cin>>st;

    string colors;

    int count=0;

    cin >> colors;

    for(int i=1;i<st;i++){
    	if(colors[i] == colors[i-1]){
    		count++;
    	}
    }

    cout<<count;

	return 0;
}