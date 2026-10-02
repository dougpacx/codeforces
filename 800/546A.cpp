#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int k,n,w;cin>>k>>n>>w;


	int val=0;
	for(int i=1;i<=w;i++){
		val += k*i;
	}

	if(val-n>0){
		cout<<val-n<<endl;	
	}else{
		cout << 0 << endl;
	}

	

	return 0;
}