
#include <iostream>
#include "vector.h"
using namespace std;

int main() {
  vector myVector;

  myVector.reserve(10);
  for(int i = 0; i < 10; i++){
    myVector.push_back(i);
  }

  for (int i = 0; i < myVector.size(); i++) {
    cout << myVector[i] << " ";
  }
  
  return 0;
}
