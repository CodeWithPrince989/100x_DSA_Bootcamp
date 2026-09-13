// Vector    => Similer like array but Vector size is not
//  fixed Can be changed at Run Time(Dynamic/resize)

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
  // vector<int> vec;    //0

  // cout<<vec.size()<<endl;     //Size of Vector

  // function of Vector
  // - size & capacity
  // - push_back & pop_back
  // - emplace_back
  // - at() or []
  // - front &
  // - erase    - costly function   O(n)
  // vec.erase(start, end)

  // - insert    -  costly function O(n)
  // vec.insert(position, value)

  // - clear
  // vec.clear is clear all element

  // - empty

  // Push back - add element at last
  //  vec.push_back(1);
  //  vec.push_back(2);
  //  vec.push_back(3);
  //  vec.push_back(4);
  //  vec.push_back(5);
  //  vec.emplace_back(6);  //- Add element at last

  // vec.pop_back();  //-Remove element from last

  // cout<<vec.capacity()<<endl;
  // cout<<vec.size()<<endl;

  // vector<int> vec = {1, 2, 3, 4, 5};
  vector<int> vec(10, -1); // make a 10 element of -1 => Dynamic Programming - tabulation DP[][]

  vector<int> vec1(vec2);

  for (int val : vec)
  {
    cout << val << " ";
  }

  cout << endl;

  cout << "Value at idx 2" << vec[2] << " or " << vec.at(2) << endl;
  cout << "front" << vec.front() << endl;
  cout << "back" << vec.back() << endl;

  -- -- -- -- -- -- -- -- -- -- -- -- -- --xx Vector(Iterators) xx-- -- -- -- -- -- -- -- -- -- -- -

                                         // - vec.begin
                                         // - vec.end

                                         cout
      << "vec.begin : " << *(vec.begin()) << endl;
  cout << "vec.end : " << *(vec.end()) << endl;

  // Iterator - Loops
  vector<int>::iterator it;
  for (auto it = vec.begin(); it != vec.end(); it++)
  { // Forward Iterator
    cout << *(it) << " ";
  }
  for (auto it = vec.rbegin(); it != vec.rend(); it++)
  { // Backward Iterator
    cout << *(it) << endl;
  }

  -- -- -- -- -- -- -- -- -- -- -- -- -- --xx List(Doubly Linked List) xx-- -- -- -- -- -- -- -- -- -- -- -
// int doubly LL we can add element at front and back both
// -push_back & push_front
// - emplace_back & emplace_front
// - pop_back & pop_front
#include <list>

                                         list<int>
                                             l;

  l.push_back(1);
  l.push_back(2);
  l.push_front(3);
  l.push_front(5);

  for (int val : l)
  {
    cout << val << " ";
  }
  cout << endl;

  -- -- -- -- -- -- -- -- -- -- -- -- -- --xx Deque : Double Ended Queue xx-- -- -- -- -- -- -- -- -- -- -- -

                                                      deque<int>
                                                          d = {1, 2, 3};
  // -push_back & push_front
  // - emplace_back & emplace_front
  // - pop_back & pop_front

  d.push_back(4);

  list<int> l = {1, 2, , 3, 4, 5};

  for (int val : l)
  {
    cout << val << " ";
  }
  cout << endl;
  cout << l[2] << endl;

  -- -- -- -- -- -- -- -- -- -- -- -- -- --xx Here We Studied the Non Sequence Containers : Vector, List, Deque xx-- -- -- -- -- -- -- -- -- -- -- -

                                                                                                              -- -- -- -- -xx Pairs In C++ xx-- -- -- -- -in this we have 2 values both type be same or
                                                                                                              different

                                                                                                                  pair<int, int>
                                                                                                                      p = {1, 5};
  cout << p.first << " " << p.second << endl; // 1 5

  pair<string, int> p = {"Prince", 5};
  cout << p.first << " " << p.second << endl;

  // Pair of Pair
  pair<int, pair<char, int>> p = { 1. {"prince", 3} } cout << p.first << " " << p.second.first << endl;

  // Vector of Pair
  vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};
  // to insert
  vec.push_back({4, 5});    // make a pair and insert
  vec.emplace_back({4, 5}); // in-place object creation
  for (pair<int, int> val : vec)
  {
    cout << val.first << " " << val.second << endl;
  }

  -- -- -- -- -xx Stack In C++ xx-- -- -- -- -stack<int> s;
  // - push, emplace
  // - top
  // - pop
  // - size
  // - empty
  // - swap
  // Last in first out

  s.push(1);
  s.push(2);
  s.push(3);

  cout << "top = " << s.top() << endl;

  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  -- -- -- -- -xx Queue In C++ xx-- -- -- -- -queue<int> q;

  // - push, emplace
  // - front
  // - pop
  // - size
  // - empty
  // - swap

  q.push(1);
  q.push(2);
  q.push(3);

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop;
  }
  cout << endl;

  -- -- -- -- -xx Priority Queue In C++ xx-- -- -- -- -priority_queue<int> q;
  priority_queue<int, vector<int>, greater<int>> q;

  // - push, emplace  --> O(Log n)
  // - top  --> O(1)
  // - pop  --> O(log n)
  // - size
  // - empty

  while (!q.empty)
  {
    cout << q.top() << " ";
    q.pop();
  }
  cout << endl;

  -- -- -- -- -xx Map In C++ xx-- -- -- -- -
              // USe to store Key and Value
              map<string, int>
                  m;
  m[key] = value;

  // - insert, emplace
  // - count
  // - erase
  // - find
  // - size, empty, erase

  m["tv"] = 100;
  m["laptop"] = 100;
  m["headphones"] = 50;
  m["tablet"] = 120;
  m["watch"] = 50;

  m.insert({"camera", 25});
  m.emplace({"drone", 10});
  m.erase({"tv"});
  m.find({"tv"});

  for (auto p :, )
  {
    cout << p.first << " " << p.second << endl;
  }

  if (m.find("camera") != m.end())
  {
    cout << "found\n";
  }
  else
  {
    cout << "Not Found\n";
  }
  cout << "count = " << m.count("laptop") << endl;

  // Others Maps
  //  - Multi Map
  multimap<string, int> m;

  // - Unordered Map
  unordered_map<string, int> m;

  // creating Multi Map
  multimap<string, int> m;

  m.emplace({"Fan", 100});
  m.emplace({"Fan", 100});
  m.emplace({"Fan", 100});
  m.emplace({"Fan", 100});
  m.emplace({"Fan", 100});

  m.erase(m.find("Fan"));

  for (auto p : m)
  {
    cout << p.first << " " << p.second << endl;
  }

  // - Unordered Map - Most USed
  unordered_map<string, int> m;

  m.emplace({"tv", 10});
  m.emplace({"laptop", 10});
  m.emplace({"fridge", 10});
  m.emplace({"watch", 10});

  for (auto p : m)
  {
    cout << p.first << " " << p.second << endl;
  }

  //////////////////Set///--///Store Unique Value in Sorted Order
  set<int> s;

  // -insert, emplace
  // -erase
  // -find
  // -size, empty, erase

  s.insert(1);
  s.insert(2);
  s.insert(3);

  for (auto val : s)
  {
    cout << val << " ";
  }
  cout << endl;

    Two Types of Set Are -> 1) Multi Set: multiset<int> s;
    2) Unordered Set: unordered_set<int> s;

    -- -- -- -- -- -- -xxxxxxx Algorithm xxxxxxx-- -- -- -- -- -- --
                      // Sorting

                      // - sort(arr, arr+n)
                      // - sort(arr, arr+n, greater<int>())
                      // - sort(v.begin(), v,end())

  // int arr[5] = {3, 5, 1, 8, 2};
     sort(arr, arr + 5) for (int val : arr)
    {
      cout << val << " ";
    }
    cout << endl;


    vector<int> vec = {3, 5, 1, 8, 2};
    sort(vec.begin(), vec.end());
    for(int val : vec){
      cout<<val<<" ";
    }
    cout<<endl;

    
    
    
    //Algorithm - Reverse
    reverse(v.brgin(), v.end())
    
    //Algorithm - Next Permutation
    next_permutation(v.begin(), v.end())

    //Algorithm - swap, min, max
    //Algorithm - Max & Min Element
    max.element(v.begin(), v.end())
    min.element(v.begin(), v.end())

    //Algorithm - Binary Search
    binary_search(v.begin(), v.end(), target)

    //Algorithm - Count Set Bits
    __builtin_popcount()
    __builtin_popcountl()
    __builtin_popcountll()


    return 0;
}