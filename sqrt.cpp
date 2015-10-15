#include <iostream>
using namespace std;

float sqr (float a){
  float x = a / 2;
  for (int i=0; i <20; i++){
    x = .5*(x+(a/x));
  }
  return x;
}

int main (){
  float a, r;
  cout << "Give a number: ";
  cin >> a;
  float s = sqr (a);
  cout << "The square root of " << a << " is: "<< s << endl;
  return 0;
}
