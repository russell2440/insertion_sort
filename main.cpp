#include <iostream>
#include <vector>
#include <list>

void display_list(std::list<int> &l, std::list<int>::iterator &cwit){
  for(std::list<int>::iterator it = l.begin(); it != l.end(); it++){
    if(cwit == it){
      printf(" (%d)", *it);
    }else{
      printf(" %d", *it);  
    }
  }
  printf("\n");
}

void display_list(std::list<int> &l){
  for(std::list<int>::iterator it = l.begin(); it != l.end(); it++){
      printf(" %d", *it);  
  }
  printf("\n");
}

//
// Insertion sort:
// Using std list, initializing with pointers to input array
// ends and output array start.
// Algorithm uses outer loop for the current working element
// and innter loop for search/insertion loop.
//
void insertion_sort(const int *pinput, const int *pend, int *poutput){

  // Construct list from input
  std::list<int> input(pinput, pend);

  // current working element loop
  for (std::list<int>::iterator cwit = input.begin(); cwit != input.end();){
    // Insertion loop
    bool spliced = false;
    for (std::list<int>::iterator sit = input.begin(); sit != cwit; sit++){
      if(*cwit < *sit){
        // Keep cw iteration continuity
        std::list<int>::iterator tmpit =  cwit; cwit++;
        // Transfer lesser in
        input.splice(sit, input, tmpit);
        spliced = true;   
        break;
      }
    }
    if(!spliced){
      cwit++;
    }
  }

  // Store sorted list into output
  for (std::list<int>::iterator it = input.begin(); it != input.end(); it++){
    *(poutput++) = *it;
  }
}


int main() {
  int numbers[] = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
  unsigned int numbers_len = (sizeof(numbers)/sizeof(*numbers));

  std::cout << "Hello Russ! insert_sort() test\n";

  for (int *p = numbers; p < numbers+numbers_len; p++){
    printf(" %d", *p);
  }
  printf("\n\n");

  ::insertion_sort(numbers, numbers+numbers_len, numbers);

  printf("\n");

  for (int *p = numbers; p < numbers+numbers_len; p++){
    printf(" %d", *p);
  }
  printf("\n");
}