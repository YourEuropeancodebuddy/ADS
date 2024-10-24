#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
typedef vector<int> IntVec;
IntVec a, b, c;
a.push_back(2);
a.push_back(3);
b.insert(b.end(), 2); 
b.insert(b.end(), 4);
set_union(a.begin(),a.end(), b.begin(), b.end(),inserter(c, c.begin()));
IntVec::const_iterator pos;
for (pos=c.begin();pos!=c.end(); ++pos) {
cout << *pos << " ";
}
  cout << endl;
 return 0;
 }
