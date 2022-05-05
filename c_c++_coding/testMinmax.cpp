
#include <iostream>     // std::cout
#include <algorithm>    // std::merge, std::sort
#include <vector>       // std::vector
using namespace std;
int main () {
  int arr[] = {5,10,15,20,25};
  auto res = minmax_element(arr,arr+5);
  cout<<*res.first<<" "<<*res.second;
}

