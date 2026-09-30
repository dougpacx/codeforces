#include <iostream>
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	
    int a,b;cin>>a>>b;
 
    int count=1;
    
    for(int i=0;a<=b;i++){
    	a*=3;
    	b*=2;
    	if(a<=b){
    		count++;
    	}else{
    		cout<<count<<endl;
    	}
    }
 
	return 0;
}