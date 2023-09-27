#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>

using namespace std;

// Binary Search implementation

int binarySearch(vector<int> arr, int l, int r, int x){

if (r >= l) {

int mid = l + (r - l) / 2;
if (arr[mid] == x)

return mid;

if (arr[mid] > x)

return binarySearch(arr, l, mid - 1, x);
return binarySearch(arr, mid + 1, r, x);

}

return -1;

}



int main(){


vector<int> vec(100000);

for (int i = 0; i < vec.size(); i++){

vec[i] = rand() % 1000000000;

}

sort(vec.begin(), vec.end());
int searchNum = rand() % 1000000000;
auto start = chrono::steady_clock::now();

int res = binarySearch(vec, 0, vec.size() - 1, searchNum);
auto end = chrono::steady_clock::now();
auto diff = end - start;

cout << "Time taken for Binary Search: " << chrono::duration <double, milli> (diff).count() << " ms" << endl;

auto start2 = chrono::steady_clock::now();
auto result = find(vec.begin(), vec.end(), searchNum);
auto end2 = chrono::steady_clock::now();
auto diff2 = end2 - start2;

cout << "Time taken for STL Find: " << chrono::duration <double, milli> (diff2).count() << " ms" << endl;
cout << "Binary Search was faster by " << chrono::duration <double, milli> (diff2 - diff).count() <<" ms.\n";

return 0;

}