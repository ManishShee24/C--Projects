#include<iostream>
#include<array>
#include<string.h>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace std;

void FAST_IO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void IO_FILE() {
    FAST_IO();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

// bool comp(pair<int, int> p1, pair<int, int> p2) {
// 	if(p1.second < p2.second)
// 		return true;
// 	else if(p1.second > p2.second)
// 		return false;
// 	else {
// 		if(p1.first < p2.first)
// 			return true;
// 		else
// 			return false;
// 	}
// }


// int var = 10;   // Global Variable
// auto lambda = []() {
// 	return 2 * var;
// };

// auto lambda2 = [](int var) {
// 	return 2 * var;
// };


int main() {

	// IO_FILE();

	// ARRAYS

	// int basic[3] ={1, 2, 3};
	// array<int, 5> a = {1, 2, 3, 4, 5};

	// for(int i = 0;i < a.size(); i++ ) {
	// 	cout << a[i] << " ";
	// }

	// cout << endl << "Size of array(a) -> " << a.size() << endl;
	// cout << "Element at 3rd Index-> " << a.at(2) << endl;
	// cout << "Empty or not-> " << a.empty() << endl;
	// cout << "First Element-> " << a.front() << endl;   // a.at(0)
	// cout << "Last Element-> " << a.back() << endl;     // a.at(a.size()-1)


	// STRINGS

	// string str("Manish Shee");
	// getline(cin, str);

	// cout << "Length of the string-> " << str.length() << endl;  // str.size()

	// str.push_back('M');
	// str.push_back('a');
	// str.push_back('n');
	// str.push_back('i');
	// str.push_back('s');
	// str.push_back('h');

	// str.pop_back();
	// str.pop_back();
	// str.pop_back();

	// str.insert(str.begin()+3, 'n');
	// str.insert(str.begin()+3, 2, 'n');

	// string s = str;   // s(str)
	// s.insert(s.begin(), str.begin(), str.end());

	// copy(str.begin(), str.begin()+6, back_inserter(s));
	// str.copy(char arr[], 4(length), 3(position of string));

	// s.resize(10);
	// str.swap(s);

	// s.clear();
	// s.erase(2, 5);
	// s.erase(s.begin()+2);
	// s.erase(s.begin()+2, s.begin()+7);
	// cout << "String is Empty or Not-> " << s.empty() << endl;

	// cout << "Substring of string-> " << s.substr(2, 6) << endl;

	// cout << "New String-> " << str.append(s) << endl;   // str += s
	// str3 = str1 + str2;

	// cout << "Compare two strings-> " << str.compare(s) << endl;

	// s.replace(1, 5, "ANISH");

	// cout << "\'e\' is found at " << str.find("e") << endl;    // str.find_first_of("e")
	// cout << "\'e\' is last found at " << str.find_last_of("e") << endl;
	// cout << "\'e\' is first not found at " << str.find_first_not_of("e") << endl;
	// cout << "\'e\' is last not found at " << str.find_last_not_of("e") << endl;


	// VECTORS

	// vector<int> v;

	// v.emplace_back(1);
	// v.emplace_back(2);
	// v.emplace_back(3);
	// v.emplace_back(4);
	// v.emplace_back(5);

	// cout << "Size of vector-> " << v.size() << endl;

	// vector<int>::iterator it;
	// for(it = v.begin();it != v.end(); it++) {
	// 	cout << *it << " ";
	// }

	// cout << endl;

	// for(it = v.end()-1;it != v.begin()-1; it--) {
	// 	cout << *it << " ";
	// }

	// vector<int>::reverse_iterator it;
	// for(it = v.rbegin();it != v.rend(); it++)
	// 	cout << *it << " ";

	// for(auto it : v) {    // for-each loop
		// 	cout << it << " ";
	// }


	// PAIRS

	// pair<int,int> p{1, 2};
	// cout << p.first << " " << p.second << endl;

	// pair<int, pair<int,int>> p = {1, {2, 3}};     // nested-pair
	// cout << p.first << " " << p.second.first << " " << p.second.second << endl;

	// pair<int,int> arr[] = {{1, 2}, {3, 4}, {5, 6}};     // pair array
	// cout << arr[1].second << " " << arr[2].first << endl;


	// LISTS

	// list<int> ls(3, 10);

	// ls.push_front(1);
	// ls.push_front(2);
	// ls.push_front(3);
	// ls.push_front(4);
	// ls.push_front(5);

	// ls.pop_front();
	// ls.pop_front();
	// ls.pop_front();

	// ls.sort();
	// ls.unique();
	// ls.merge(l);
	// ls.remove(10);    // delete all occurences of 10
	// ls.reverse();


	// DEQUES

	// deque<int> dq(5, 10);

	// dq.push_front(1);
	// dq.push_front(2);
	// dq.push_front(3);
	// dq.push_front(4);
	// dq.push_front(5);

	// dq.pop_front();
	// dq.pop_front();
	// dq.pop_front();


	// STACKS --> LIFO

	// stack<int> st;

	// st.push(10);
	// st.push(20);
	// st.push(30);
	// st.push(40);
	// st.emplace(50);
	// st.emplace(60);

	// st.pop();
	// st.pop();
	// st.pop();

	// printing technique
	// while(!st.empty()) {
	// 	cout << st.top() << " ";
	// 	st.pop();
	// }


	// QUEUES --> FIFO

	// queue<int> q;

	// while(!q.empty()) {
	// 	cout << q.front() << " ";
	// 	q.pop();
	// }


	// PRIORITY QUEUES(HEAP)

	// Maximum Heap
	// priority_queue<int> pq;     // descending order

	// while(!pq.empty()) {
	// 	cout << pq.top() << " ";
	// 	pq.pop();
	// }

	// Minimum Heap
	// priority_queue<int, vector<int>, greater<int>> pq2;     // ascending order


	// FORWARD LISTS

	// forward_list<int> fl;

	// fl.assign({10, 20, 30});
	// fl.assign(3, 10);
	// fl.assign(l.begin(), l.end());

	// update iterator
	// auto it = fl.begin();
	// it = fl.insert_after(it, {1, 2, 3, 4, 5});
	// it = fl.insert_after(it, {15, 25, 35});    // emplace_after
	// it = fl.erase_after(it);


	// SETS --> Both Sorted & Unique

	// set<int> s;

	// s.insert(1);
	// s.insert(2);
	// s.insert(4);
	// s.insert(2);
	// s.emplace(3);
	// s.insert(6);
	// s.emplace(5);

	// auto it = s.find(3);
	// s.erase(4);
	// s.erase(it, s.end());
	// s.clear();

	// cout << s.count(3) << endl;

	// auto it = s.lower_bound(4);
	// auto it = s.upper_bound(4);


	// MULTISETS --> Sorted But Not Unique

	// multiset<int> ms;
	// all functions same like as set


	//UNOREDERD SET --> Unique But Not Sorted

	// unordered_set<int> us;
	// all functions same like as set
	// but lower_bound, upper_bound function does not work


	// MAPS --> Key(Both Sorted & Unique)-Value Pair

	// map<int, int> mp;
	// map<int, pair<int,int>> mp2;
	// map<pair<int,int>, int> mp3;

	// mp.insert({2, 3});
	// mp.insert({1, 3});
	// mp.insert({3, 1});
	// mp.insert({5, 3});
	// mp.insert({4, 5});
	// mp.insert({6, 6});
	// mp.insert({2, 5});

	// for(auto it : mp) {
	// 	cout << it.first << " " << it.second << endl;
	// } cout << endl;

	// auto it = mp.find(4);
	// mp.erase(it, mp.end());
	// cout << (*it).second << endl;

	// mp[4] = 2;   // mp[key] = value
	// cout << mp[3] << endl;


	// MULTIMAPS --> Key(Sorted But Not Unique)-Value Pair

	// multimap<int, int> mmp;
	// all functions same like as map
	// mmp[key] does not work
	

	// UNORDERED MAP --> Key(Unique But Not Sorted)-Value Pair

	// unordered_map<int, int> ump;
	// all functions same like as map
	// but lower_bound, upper_bound function does not work


	// ALGORITHMS

	// sort(arr, arr + n);
	// sort(v.begin(), v.end());

	// Descending Order
	// sort(arr, arr + n, greater<int>());

	// According to User Order
	// sort(p, p + n, comp);

	// Chech if Array is sorted or not
	// cout << is_sorted(arr, arr + n) << endl;
	// cout << is_sorted(arr, arr + n, comp);
	
	// Give the no of set bits
	// cout << __builtin_popcount(7) << endl;
	// cout << __builtin_popcountll(26563892949) << endl;

	// Find GCD of two numbers
	// cout << __gcd(8, 36) << endl;

	// Permutation of Strings
	// string str = "BOOK";
	// string temp(str);

	// while(prev_permutation(temp.begin(), temp.end())) {
	// 	cout << temp << endl;
	// }

	// cout << str << endl;
	// while(next_permutation(str.begin(), str.end())) {
	// 	cout << str << endl;
	// }

	// int maximum = *max_element(arr, arr + n);   // Maximum Element
	// int minimum = *min_element(arr, arr + n);   // Minimum Element

	// Reverse the Array
	// reverse(arr, arr + n);

	// Search Any Element using Binary Search Algorithm
	// cout << binary_search(arr, arr + n, 8) << endl;

	// Fill the Array with one number
	// fill(arr, arr + n, 10);

	// Remove all occurences of a number
	// it doesn't reduce the size of array
	// auto it = remove(arr, arr + n, val);
	// auto it = remove_if(arr, arr + n, comp);

	// Count of any number in Array
	// cout << count(arr, arr + n, 5) << endl;

	// Find first occurence of any number
	// cout << find(arr, arr + n, 5) - arr << endl;
	// cout << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;

	// Find last occurence of any number
	// cout << find_end(arr, arr + n, arr + 2, arr + 3) - arr << endl;
	// cout << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

	// Sum of all Array elements
	// cout << accumulate(arr, arr + n, 0) << endl;
	// cout << accumulate(arr, arr + n, 100, [](int first, int second)
	// {
	// 	return first - second;
	// });

	// Merge two arrys in sorted order
	// auto it = merge(arr1, arr1 + size, arr2, arr2 + size, new_arr);

	// Replace old value with new value
	// replace(arr, arr + n, old_val, new_val);

	// Rotate the array i times
	// rotate(arr, arr + i,arr + n);

	// Find unique element in range
	// auto it = unique(arr, arr + n);

	// Some set functions:- set_union, set_intersection, set_difference, set_symmetric_difference
	// auto it = set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), new_set);


	// LAMBDA FUNCTION
	// int var = 20;   // Local Variable
	// cout << lambda() << " " << lambda2(var) << endl;

	return 0;
}
