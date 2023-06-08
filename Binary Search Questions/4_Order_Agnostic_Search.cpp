#include<bits/stdc++.h>
using namespace std;
bool binary_inc(int arr[],int n,int x , int l , int r){
while (l <= r) {
		int m = l + (r - l) / 2;
		// we do this because in one of the test case
    /// if start and end value are very large
		// then in start + end
		// condition of overflow can occur
	// so we prefer this statement

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}

bool binary_dec(int arr[],int n,int x,int l,int r){
  
  while (l <= r) {
		int m = l + (r - l) / 2;
		// we do this because in one of the test case
    /// if start and end value are very large
		// then in start + end
		// condition of overflow can occur
	// so we prefer this statement


		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			r = m - 1;

		// If x is smaller, ignore right half
		else
			l = m + 1;
	}

	// if we reach here, then element was
	// not present
	return -1;


}

int main(){
// in this we are unknown by fact 
// whether array is sorted in increasing or decreasing form
// so what we can do is 
// we will compare the first and last elemet of index
//-> if first> last dec sort
// else if first<last inc sort
//-> first = last  all elemets are same
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; ++i)
{
	/* code */
	cin>>arr[i];
}

int l;
cin>>l;
 if (arr[0]>arr[n-1])
 {
 	// array is in decreasing order
 	if(binary_dec(arr,n,l,0,n-1)){
 		cout<<"element is present"<<endl;
 	}
 	else{
 		cout<<" not present"<<endl;
 	}
 }
 else if(arr[0]<arr[n-1]){
 	// array is in incresing order
 	if(binary_inc(arr,n,l,0,n-1)){
 		cout<<"element is present"<<endl;
 	}
 	else{
 		cout<<"not present"<<endl;
 	}
 }

 else{
 	// all elements are same
 	if (arr[0]==l)
 	{
 		cout<<"element is present"<<endl;
 	}
 	else{
 		cout<<"not present"<<endl;
 	}

 }

return 0;
}