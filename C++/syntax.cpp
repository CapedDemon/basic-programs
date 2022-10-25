#include <bits/stdc++.h>
using namespace std;

// pass vector's reference in functions unless u don't mean to change it
// coz sending a copy is expensive --> O(N) 
void printVector(vector<int> &v) {
    // size() --> O(1) !!!!!!!!!!!!!!!!!!!
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main()
{
    /*

    // << insertion operator
    // >> extraction operator

    cout << "cout doesn't have \\n as default end operator :) ";
    cout << "Hello guys\n";          // more preferred
    cout << "Hello guys" << endl;

    int amount1, amount2;
    cout << "Enter two numbers to find sum: ";
    cin >> amount1 >> amount2;
    cout << "Sum = ";
    cout << amount1 + amount2 << endl;


    int a, b, c;
    cout << "Enter three numbers to be arranged in ascending order: ";
    cin >> a >> b >> c;

    if (a < b) {
        if (b < c) {
            cout << a << b << c << endl;
        } else {
            if (c < a) {
                cout << c << a << b << endl;
            } else {
                cout << a << c << b << endl;
            }
        }
    }
    else {
        if (b < c) {
            if (c < a) {
                cout << b << c << a << endl;
            } else {
                cout << b << a << c << endl;
            }
        } else{
            cout << c << b << a << endl;
        }
    }




    // i++ post incrementer --> first use then change
    // ++i pre incrementer --> first change then use
    int i = 10;
    cout << --i;                    // 9
    cout << i--;                    // 9
    cout << ++i;                    // 9
    cout << i++ << endl;            // 9                  


    // i is now 10
    cout << --i - i-- << endl;      // -1
    // i is now 8
    cout << ++i + i++ << endl;      // 19


            //9   //9   //9   //9
    cout << --i - i-- + ++i + i++;  // 17
    cout << i;                      // 10
    


    int i = 10, j = 20, k;
        //10  //9   //19  //19  //9   //20  //10  //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout << i << endl; //10
    cout << j << endl; //20
    cout << k << endl; //-20


    // precedence of postfix > prefix
    // associativity of postfix is left to right (normal)
    // associativity of prefix is right to left !!!

    int i = 10, j;
    j = ++i + i++;
    cout << i << endl;              // 12
    cout << j << endl;              // 23 ???
    

    // PAIRS

    pair<int, string> p1;
    // p1 = make_pair(1, "prince");
    p1 = {1, "prince"};
    cout << p1.first << " " << p1.second << endl;

    // copy p1 by value
    pair <int, string> p2 = p1;
    p2.second = "raowl";            // doesn't modifies p1
    cout << p1.second << endl;

    // copy p1 by reference
    pair <int, string> &p3 = p1;
    p3.second = "coding crow";      // modifies p1 as well
    cout << p1.second << endl;


    // VECTORS
    vector<int> v(5, 1000);
    v.push_back(21);            // O(1)
    printVector(v);
    v.pop_back();               // O(1)
    printVector(v);

    // arrays can be copied by reference only which is not true copy
    // vectors can be copied by value
    vector<int> v2 = v;         // O(N) --> copies each element one by one internally

    printVector(v2);
    // v2.clear();

    v2 = {1, 2, 3, 4, 5};

    reverse(v2.begin(), v2.end());
    printVector(v2);

   // ITERATORS
   vector<int> prince = {5, 2, 6, 7754, 23};
   vector<int>::iterator it = prince.begin();
   // iterators are pointers and their value can be extracted using *
   cout << *it << endl;
   // iterators, vectors, arrays are contiguous
   cout << *(it + 1) << endl;


    // ******************************************LOWER BOUND******************************************
    // only possible operator between two iterators is *minus*
    vector<int> v = {1, 2, 4, 5};
    auto it = lower_bound(v.begin(), v.end(), 3);   // returns iterator just >= value
    int index = it - v.begin();
    cout << index << endl;

    

    int arrayHuBisi[10];                // mujhe use na kariyo beta
    vector<int> vectorHuBisi(10, 69);   // array with variable size
    pair<int, bool> pairHuBisi;         // structure for storing 2 connected pieces
    set<int> setHuBisi;                 // sorted, no duplicates, no indexing
    multiset<int> multiSetHuBisi;       // may contain duplicates
    map<int, int> mapHuBisi;            // contains one extra information

    set<int> s1 = {9, 3, 5, 1, 2, 6, 6, 6, 69};
    s1.insert(243);
    for (auto ele : s1) cout << ele << " ";
    cout << endl;

    // cout << s1.lower_bound(3) - s1.begin() << endl;
    
    

    map<int, int> m;
    m[4] = 69;
    m[3] = 4;
    m[3] = 41;
    m[-169] = 961;

    for (auto ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }
    cout << endl;
    for (auto it = m.begin(); it != m.end(); it++) {
        // cout << (*it).first << " " << (*it).second << endl;
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    cout << m.find(3)->second << endl;
    cout << (*m.find(4)).second << endl;

    */

    int N;
    cout << "How many numbers you want to enter: ";
    cin >> N;
    map<int, int> m1;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        m1[num]++;
    }
    cout << "Number of distinct elements are " << m1.size() << endl;
    
    for (auto it = m1.begin(); it != m1.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
}

