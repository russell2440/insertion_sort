#include <iostream>
#include <vector>
#include <list>


void insertion_sort(const int *pinput, const int *pend){
  // Construct list from input
  std::list<int> input(pinput, pend);

  // current working element loop
  for (std::list<int>::iterator cwit = input.begin(); cwit != input.end(); cwit++){
    // search loop
    for (std::list<int>::iterator sit = input.begin(); sit != cwit; sit++){
      if(*cwit < *sit){
        input.splice(sit, input, cwit);   
        break;
      }
    }
  }

  for (std::list<int>::iterator cwit = input.begin(); cwit != input.end(); cwit++){
    printf(" %d",*cwit);
  }
  
}

//console.log(numbers);

int main() {
  const int numbers[] = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
  void insertion_sort(const int *pinput, const int *pend);

  std::cout << "Hello Russ! insert_sort() test\n";

  insertion_sort(numbers, numbers+(sizeof(numbers)/sizeof(*numbers)));
}