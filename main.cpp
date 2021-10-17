#include <iostream>
#include <vector>
#include <list>


void insertion_sort(const int *pinput, const int *pend, int *poutput){

  // Construct list from input
  std::list<int> input(pinput, pend);

  // current working element loop
  for (std::list<int>::iterator cwit = input.begin(); cwit != input.end(); cwit++){
    // search loop
    for (std::list<int>::iterator sit = input.begin(); sit != cwit; sit++){
      if(*cwit < *sit){
        // swap lesser in
        input.splice(sit, input, cwit);   
        break;
      }
    }
  }

  // Store sorted list into output
  for (std::list<int>::iterator it = input.begin(); it != input.end(); it++){
    *(poutput++) = *it;
  }
}

int main() {
  int numbers[] = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
  void insertion_sort(const int *pinput, const int *pend, int *poutput);

  std::cout << "Hello Russ! insert_sort() test\n";

  for (int *p = numbers; p < numbers+(sizeof(numbers)/sizeof(*numbers)); p++){
    printf(" %d", *p);
  }
  printf("\n");

  insertion_sort(numbers, numbers+(sizeof(numbers)/sizeof(*numbers)), numbers);

  for (int *p = numbers; p < numbers+(sizeof(numbers)/sizeof(*numbers)); p++){
    printf(" %d", *p);
  }
  printf("\n");
}