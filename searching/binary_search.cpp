#include <bits/stdc++.h>
using namespace std;

int search(vector<int> v, int target)
{
  int L = 0, R = v.size() - 1;
  while (L <= R)
  {
    int mid = L + (R - L) / 2;
    if (v[mid] == target)
    {
      return mid;
    }
    else if (v[mid] > target)
    {
      R = mid - 1;
    }
    else
    {
      L = mid + 1;
    }
  }
  return -1;
}

int findUpperBound(vector<int> v, int target)
{
  int L = 0, R = v.size() - 1;
  int ans = -1;

  while (L <= R)
  {
    int mid = L + (R - L) / 2;

    if (v[mid] > target)
    {
      ans = mid;
      R = mid - 1;
    }
    else
    {
      L = mid + 1;
    }
  }
  return ans;
}

int findLowerBound(vector<int> v, int target)
{
  int L = 0, R = v.size() - 1;
  int ans = -1;

  while (L <= R)
  {
    int mid = L + (R - L) / 2;

    if (v[mid] < target)
    {
      ans = mid;
      L = mid + 1;
    }
    else
    {
      R = mid - 1;
    }
  }
  return ans;
}

int main()
{
  vector<int> vec{2, 3, 5, 6, 8, 10, 12};
  int key = 4;
  cout << findUpperBound(vec, key);
}