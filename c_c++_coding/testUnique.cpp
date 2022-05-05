#include <iostream>     // std::cout
#include <algorithm>    // std::merge, std::sort
#include <vector>       // std::vector
using namespace std;
int main () {
  string name = "lethanhtuannnnnnn";
  auto first = name.begin();
  auto last = name.end();
  auto it = unique(first, last);
  cout<<*it;
}
