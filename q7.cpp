#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int arr[5][5];
  int i,j,c,r;
  for(i=0;i<5;i++){
   for(j=0;j<5;j++){
    cin>>arr[i][j];
if(arr[i][j]==1){
  r=abs(i-2);
  c=abs(j-2);
   }
 }
}
   cout<<r+c<<endl;

  return 0;
}