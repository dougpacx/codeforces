#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);

	int n,k;
	cin>>n>>k;

	int score[n];

	for(int i = 0; i < n;i++){
		cin >> score[i];
	}

	int cont=0;

	for(int i=0;i<n;i++){
		if(score[i] >= score[k-1] && score[i]>0){
			cont++;
		}
	}

	cout << cont << endl;

	return 0;
}