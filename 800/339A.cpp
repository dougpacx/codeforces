#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;cin >> s;

    int tam = s.size();
    for(int i=0;i<tam;i++){
    	if(s[i] == '+'){
    		continue;
    	}
    	for(int j=i+1;j<tam;j++){
    		if(s[j]<s[i]){
    			swap(s[i],s[j]);
    		}
    	}
    }

    bool primeiro=true;

    for(int i=0;i<tam;i++){
    	if(s[i] == '+'){
    		continue;
    	}

    	if(!primeiro){
    		cout << "+";
    	}

    	cout<<s[i];
    	primeiro=false;
    }

    cout << endl;

    
	return 0;
}