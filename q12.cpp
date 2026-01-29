#include<iostream>
#include<string>
using namespace std;
int main(){
int count=0;
string name;
cin>>name;
 for(int i=0;i<name.length();i++){
  int f=0;
  for(int j=i-1;j>=0;j--){
  if(name[i]==name[j]){
   f=1;
    break;
  }
 }
 if(f==0){
count++;

 }
 }

  if(count%2==0){
    cout<<"CHAT WITH HER!";
      }
      else{
cout<<"IGNORE HIM!";
      }
 
    return 0;
    }