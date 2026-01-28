#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n][4];
for(int i=0;i<n;i++){
  for(int j=0;j<4;j++){
    cin>>arr[i][j];
  }
}
for (int i=0;i<n;i++){

      if(arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2] && arr[i][2]==arr[i][3]){
        cout<<"YES"<<endl;
      
      }
      else{
        cout<<"NO"<<endl;
       
      }
    }
return 0;
}