#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  char a,b,c;
  int x=0;
  while(n--){
    
    cin>>a>>b>>c;

 if(b=='+'){
      x++;
    }
    else if(b=='-'){
      x--;
    }
  }
  cout<<x<<endl;
  return 0;
}