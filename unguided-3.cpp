#include <iostream>
#include <map>

int main() {
  std::map<int, std::string> map;

  map[1] = "satu";
  map[2] = "dua";
  map[3] = "tiga";

  for (auto it = map.begin(); it != map.end(); it++) {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
  }

  return 0;
}