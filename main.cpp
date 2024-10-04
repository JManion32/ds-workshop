#include <iostream>
#include <list>

int main(int argc, char* argv[]) {
    
  std::list<int> num_list;
  for(unsigned int i=1; i<argc; i++) {
    num_list.push_back(std::atoi(argv[i]));
  }
  std::list<int>::reverse_iterator it = num_list.end();
  for(--it; it != num_list.begin(); --it) {
    std::cout << *it << " ";
  }

  return 0;
}