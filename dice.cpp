#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(){
  int a = 0,b = 0,i = 0;
  string name;

  while(i < 2){
    cout << "what is your name?" << "\n";
    cout << ">";
    cin >> name;
    cout << "Hello, " << name << "!\n";

    srand(time(NULL));
    a = rand() % 6 + 1;
    b = rand() % 6 + 1;
    cout << "Rolling the dice ...\n";
    cout << "Die 1: " << a << "\n";
    cout << "Die 2: " << b << "\n";
    cout << "Total value: " << a + b << "\n";

    if(a + b > 7) cout << name << ",Won!\n";
    else cout << name << ",Lost!\n";
    i++;
  }

  return 0;
}
