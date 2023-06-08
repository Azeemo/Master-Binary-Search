#include<bits/stdc++.h>
using namespace std;
int binary_min(int arr[] , int n ){
      int start = 0;
      int end = n-1;
      int mid = 0;
        if(arr[0] <= arr[n - 1]) return 0;
      while(start<=end)
      {  
          int mid = start + (end - start)/2  ;
          int next = (mid +1)%n;
          int prev = (mid +n-1)%n;
          if(arr[mid]<arr[next]&&arr[mid]<arr[prev]){
              return mid;
          }
          else if (arr[0]>arr[mid]){
              end = mid -1;
          }
          else{
              start = mid +1;
          }
      }
      return mid ;
  }
int main(){
int t=1;

while(t--)
{
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; ++i)  {
      cin>>arr[i];
     }
   cout<<(binary_min(arr,n))<<endl;

}
return 0 ;
}