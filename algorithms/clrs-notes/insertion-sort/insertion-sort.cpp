#include "../std_lib_facilities.h"

vector<int> insertionSort (vector<int> array) {
  for (int j = 1; j < array.size() - 1; j++) {
    int key = array[j];
    int i = j - 1;
    
    while (i >= 0 && array[i] > key) {
      array[i + 1] = array[i];
      i = i - 1;
    }

    array[i + 1] = key;
  }

  return array;
}

int main  () {
  vector<int> array = {3, 2, 5, 1, 4, 6, 7};

  array = insertionSort(array);

  for (int i = 0; i < array.size() -1; i++) {
     cout << array[i] << "\n";
  }

  return 1;
}