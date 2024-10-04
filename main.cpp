#include <iostream>
#include <list>

int main(int argc, char* argv[]) {
    
  std::list<int> num_list;
  for(unsigned int i=1; i<argc; i++) {
    num_list.push_back(std::atoi(argv[i]));
  }

  for(std::list<int>::iterator it = num_list.begin(); it != num_list.end(); ++it) {
    std::cout << *it << " ";
  }

  return 0;
}