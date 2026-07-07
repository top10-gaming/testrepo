#include<iostream>
using namespace std;

int main()
{
	//star pattern
	int i=0,j=0;
	//logic
	for(i=0;i<=5;i++){
		for(j=0;j<i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=0;i<=5;i++){
		for(j=5;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}