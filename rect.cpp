#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" enter rows";
	cin>>n;
	int m;
	cout<<"enter column";
	cin>>m;
	int arr[m][n];
	cout<<"enter the elements of the matrix";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int x1,x2,y1,y2;
	cout<<"enter first coordinate";
	cin>>x1>>y1;
	cout<<"enter second coordinate";
	cin>>x2>>y2;
	//sum
	int sum=0;
	for(int i=x1;i<=x2;i++){
		for(int j=y1;i<=y2;i++){
			sum+=arr[i][j];
		}

	}
	cout<<sum;

}