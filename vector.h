#ifndef VECTOR_H
#define VECTOR_H

using namespace std;


class vector {
  
 private:

  int *vec_ptr;
  int vec_size, vec_capacity;
  

 public:
  vector();
  vector(const vector &other);
  ~vector();
  
  vector& operator=(const vector &other);

  int size();
  int capacity();

  void push_back(int element);
  void reserve(int n);

  int& operator[](unsigned int index);
  
  
};






#endif
