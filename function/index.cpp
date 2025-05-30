#include <iostream>
using namespace std;


int mul(int a,int b){
  return a * b;
}
// function should be declerated before main
int main(){
  
  int c=mul(2, 3);
  cout << c;
}