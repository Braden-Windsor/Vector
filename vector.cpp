#include "vector.h"
#include <iostream>
#include <fstream>

using namespace std;

vector::vector(){
  //Sets all values to 0 to initalize them
  vec_ptr = NULL;
  vec_size = 0;
  vec_capacity = 0;
  
}

vector::vector(const vector &other){
  // Copy the size and capacity from the other object
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;

  // Allocate memory and copy data from the other object
  vec_ptr = new int[vec_capacity];
  
  for (int i = 0; i < vec_size; i++) {
    vec_ptr[i] = other.vec_ptr[i];
  }
}
  

vector::~vector(){
  //clears out all data by setting them to 0 and deallocates array memory
  delete[] vec_ptr;
  vec_size = 0;
  vec_capacity = 0;
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


int vector::size(){
  return vec_size;
}

int vector::capacity(){
  return vec_capacity;
}

void vector::reserve(int n){
  if(n > vec_capacity){
    vec_capacity = n;
  }
}

void vector::push_back(int element){
  int spot = vec_size + 1;
  if(spot > vec_capacity){
    reserve(vec_capacity * 2);
  }
  vec_ptr[spot] = element;
}
