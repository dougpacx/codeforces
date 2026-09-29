#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int w;cin>>w;
	int t;

	if(w == 2){
		cout << "NO";
	}
	else if(w%2==0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
