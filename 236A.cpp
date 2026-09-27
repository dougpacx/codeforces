#include <iostream>
#include <set>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);

	string w;cin>>w;

	set<char> u;

	for(char l : w){
		u.insert(l);
	}

	int s = u.size();

	if(s%2==0){
		cout << "CHAT WITH HER!";
	}else{
		cout << "IGNORE HIM!";
	}
	
	return 0;
}