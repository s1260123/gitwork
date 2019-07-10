#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
  int a = 0,b = 0;

  srand(time(NULL));
  a = rand() % 6 + 1;
  b = rand() % 6 + 1;
  cout << "Die 1: " << a << "\n";
  cout << "Die 2: " << b << "\n";
  cout << "Total value: " << a + b << "\n";

  if(total > 7) cout << name << "Won!\n";
  else cout << name << "Lost!\n";

  return 0;
}
