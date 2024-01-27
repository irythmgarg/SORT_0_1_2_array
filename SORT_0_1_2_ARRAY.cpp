/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent,
with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
*/
#include <iostream>
using namespace std;
#include <vector>
void sortColors(vector<int> &v)
{
     int s = 0;
     int e = v.size() - 1;
     int mid = 0;
     while (mid <= e)
     {
          if (v[mid] == 0)
          {
               swap(v[mid], v[s]);
               s++;
               mid++;
          }
          else if (v[mid] == 1)
          {
               mid++;
          }
          else if (v[mid] == 2)
          {
               swap(v[mid], v[e]);
               e--;
          }
     }
}
int main()
{
     int n;
     cin >> n;
     vector<int> v(n);
     for (int i = 0; i < n; i++)
     {
          cin >> v[i];
     }
     sortColors(v);
     for (int i = 0; i < n; i++)
     {
          cout << v[i] << " ";
     }
}
