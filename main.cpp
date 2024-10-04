#include <iostream>
#include <list>

int main(int argc, char* argv[]) {
    
  std::list<int> num_list;
  for(unsigned int i=0; i< argc; i++) {
    num_list.push_back(std::atoi(argv[i]));
  }
  std::list<int>::iterator it = num_list.end();
  while (it != num_list.begin()) {
        std::cout << *it*2 << " ";
        it--;
  }

  return 0;
}