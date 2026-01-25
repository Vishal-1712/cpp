#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int arr[5][5];
  int i,j,c,r;
  for(i=1;i<=5;i++){
   for(j=1;j<=i;j++){
    cin>>arr[i][j];
if(arr[i][j]==1){
  r=abs(i-3);
  c=abs(j-3);
   }
 }
 cout<<r+c<<endl;
  }
  
  return 0;
}