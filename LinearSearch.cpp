#include <iostream>
using namespace std;

int LinearSearch(int arr[], int val, int size) {
  bool find = true;
  int index = -1;
  for(int i = 0;i < size && find;i++) {
    if(arr[i] == val){
      find = false;
      index = i;
    }
  }
  return index;
}

int main() {
  int size;
  cout<<"Enter Size Of Array: ";
  cin>>size
  int arr[size];

  cout << "Array values:";
  for(int i=0;i < size;i++) {
    arr[i]=rand()%100;
    cout << " " << arr[i];
  }
  cout << endl;

  int val;
  cout<<"Enter Number: ";
  cin>>val;

  val = LinearSearch(arr, val, size);
  if (val==-1)
    cout << "Value is not there" << endl;
  else
    cout << val << endl;
}