#include <iostream>
using namespace std;

int gcd(int n1, int n2){
  if(n1>n2) return gcd(n1-n2,n2);
  if(n2>n1) return gcd(n1,n2-n1);
  if(n2==0) return n1;
}
int main(){
  int n1,n2;
  cout<<"Give a positive number: ";
  cin>>n1;
  while(n1<0){
    do{
    cout<<"\nThe number that you provide it's not positive, try again: ";
    cin>>n1;
  }while(n1<=1);
}
  cout<<"Give another positive number: ";
  cin>>n2;
  while(n2<0){
    do{
    cout<<"\nThe number that you provide it's not positive, try again: ";
    cin>>n2;
  }while(n2<=1);
}
  cout<<"The greatest comun divisor is: " <<gcd(n1,n2)<<endl;


  return 0;
}
