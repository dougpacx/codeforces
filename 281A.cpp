#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);

	string w;
	cin >> w;

	w[0] = toupper(w[0]);

	cout << w; 

	return 0;
}