#include <iostream>
using namespace std;

int main(){
  int age;
  cout << "Give your age :";
  cin >> age;
  if(age>18){
    cout << "You are eligible for VOTE";
  }else{
    cout << "You are not eligible for VOTE";
  }
  return 0;
}