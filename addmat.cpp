#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" enter rows";
	cin>>n;
	int m;
	cout<<" enter column";
	cin>>m;
	cout<<"enter first matrix";
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int b[n][m];
	 cout<<"enter second matrix";
	for(int i=0;i<n ;i++){
		for(int j=0;j<m;j++){
			cin>>b[i][j];
			
		}

	}
	//add two matrix

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j]+=b[i][j];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}