#include<iostream>
using namespace std;
int main(){
  int count=0;
int n;
cin>>n;
int k;
cin>> k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
    
        }
    }
cout<<count<<endl;
    
return 0;
}