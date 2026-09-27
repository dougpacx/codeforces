#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t,a,b,c;
	cin >> t;

	int cont = 0;

	while(t--){
		cin>>a>>b>>c;

		if(a+b+c > 1){
			cont++;
		}else{
			cont += 0;
		}
	}

	cout << cont << endl;
	return 0;
}