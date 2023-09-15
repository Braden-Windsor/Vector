#include "vector.h"
#include <iostream>
#include <fstream>

using namespace std;

vector::vector(){
  vec_ptr = NULL;
  vec_size = 0;
  vec_capacity = 0;
  
}

vector::vector(const vector &other){
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;

  vec_ptr = new int[vec_capacity];

  for (int i = 0; i < vec_size; i++) {
    vec_ptr[i] = other.vec_ptr[i];
  }
}

vector& vector::operator=(const vector &other) {
  // Check for self-assignment
  if (this == &other) {
    return *this;
  }

  // Delete the current data
  delete[] vec_ptr;

  // Copy the size and capacity from the other object
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;

  // Allocate memory and copy data from the other object
  vec_ptr = new int[vec_capacity];
  for (int i = 0; i < vec_size; i++) {
    vec_ptr[i] = other.vec_ptr[i];
  }

  return *this;
}
