#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <class InputIterator, class T>
InputIterator find_my (InputIterator first, InputIterator last, const T& value)
{
   while (first!=last) 
   {
       if (*first==value) return first;
       ++first;
   }
   return last;
}

template <class InputIterator, class Predicate>
InputIterator find_if_my (InputIterator first, InputIterator last, Predicate pred)
{
   while (first!=last) 
   {
       if (pred(*first)) return first;
       ++first;
   }
   return last;
}

template <class InputIterator, class Predicate>
InputIterator find_if_not_my (InputIterator first, InputIterator last, Predicate pred)
{
   while (first!=last) 
   {
       if (!pred(*first)) return first;
       ++first;
   }
   return last;
}

int main()
{
   vector<int> myvector;
   for (int i=1; i<10; i++) myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

   cout << "myvector contains:";
   for (vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
       cout << ' ' << *it;
   cout << '\n';

   vector<int>::iterator it = find_my(myvector.begin(), myvector.end(), 5);
   if (it != myvector.end())
       cout << "Element found in myvector: " << *it << '\n';
   else
       cout << "Element not found\n";

   return 0;
}