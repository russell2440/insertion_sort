#include <iostream>
#include <vector>
#include <list>
//#include "~/doublelinkedlist/double_linked_list.h"

const int numbers[] = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};

void insertion_sort(const int *pinput, const int *pend){
  //double_linked_list dll(input,length);
  std::list<int> input(pinput, pend);
  for (std::list<int>::iterator it = input.begin(); it != input.end(); it++){
    printf("%d ",*it);
  }
  
}

//console.log(numbers);

int main() {
  void insertion_sort(const int *pinput, const int *pend);
  std::cout << "Hello World!\n";
  insertion_sort(numbers, numbers+(sizeof(numbers)/sizeof(*numbers)));

}