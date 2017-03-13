#include<iostream>
using namespace std;

int main(){
	int n = 0;
	cout<<"Please enter a number except 1"<<endl;
	cin>>n;
	while(n!=1){
		cout<<" "<<n;
		if((n%2)==1){
			n = (3*n)+1;
		}
		else{
			n = n/2;
		}
	}
	cout<<" "<<n<<endl;
	return 0;
}
