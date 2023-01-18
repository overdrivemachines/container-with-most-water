#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
  int front, rear; // pointers
  int currentArea = 0;
  int maxArea = 0;

  if (height.size() == 2) {
    return (min(height[0], height[1]));
  }

  for (int i = 0; i < height.size(); i++) {


    // setting pointers
    front = 0;
    rear = height.size() - 1;

    while (front < i) {
      currentArea = min(height[front], height[i]) * (i - front);
      if (currentArea > maxArea)
        maxArea = currentArea;
      front++;
    }

    // while (rear > i) {

    // }

  }


  return maxArea;
}

int main(int argc, char const *argv[]) {
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  // vector<int> height = {1, 8};

  cout << maxArea(height) << "\n";
  return 0;
}
