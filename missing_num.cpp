#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the range starting from 1: ";
	cin>>n;

	int arr[n-1]={0};
	cout<<"\nEnter the numbers in the range starting from 1 to n: ";
	for(int i= 0; i<n; i++){
		cin>>arr[i];
	}

	int sum=0;
	for(int i = 0; i<n-1; i++){
		sum+=arr[i];
	}

	int totalSum=0;
	for(int i = 1; i<=n; i++ ){
		totalSum+=i;
	}

	cout<<"\nNumber missing from the array= ";
	cout<<totalSum-sum<<endl;


  
return 0;
}