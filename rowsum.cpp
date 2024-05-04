#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter rows";
	cin>>n;
	int m;
	cout<<" enter column";
	cin>>m;
	int arr[n][m];
	cout<<"elements are ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int maxsum=-1;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			sum+=arr[i][j];
		}
		if (sum>=maxsum){
			maxsum=sum;
		}
	}
       cout<<maxsum;
}