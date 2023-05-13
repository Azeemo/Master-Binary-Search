#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n , int element ){
	for(int i=0;i<n;i++){
		if(arr[i]==element){
			return i;
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k ;
	cin>>k;
	int index = linear_search(arr,n,k);
	cout<<index<<endl;
	
}
