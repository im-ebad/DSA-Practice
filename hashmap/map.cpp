#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {

  map<string, int> um;

  pair<string, int> p1("aamir", 120);
  pair<string, int> p2 = make_pair("pd", 121);

  um["saqib"] = 118;
  um["kk"] = 101;
  um.insert(p1);
  um.insert(p2);

  cout << "Through Loop" << endl;

  for (auto it : um) {
    cout << it.first << " " << it.second << endl;
  }

  map<string, int>::iterator it = um.begin();

  cout << "Through Iterator" << endl;

  while (it != um.end()) {
    cout << it->first << " " << it->second << endl;
    it++;
  }

  return 0;
}
