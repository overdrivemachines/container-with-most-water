#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxArea_slow(vector<int>& height) {
  int front;//, rear; // pointers
  int currentArea = 0;
  int maxArea = 0;

  if (height.size() == 2) {
    return (min(height[0], height[1]));
  }

  for (int i = 0; i < height.size(); i++) {

    // setting pointers
    front = 0;
    // rear = height.size() - 1;

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

// optimized
int maxArea(vector<int>& height) {
  int currentArea = 0;
  int maxArea = 0;
  int front, rear; // pointers

  if (height.size() == 2) {
    return (min(height[0], height[1]));
  }

  front = 0;
  rear = height.size() - 1;

  // 1, 8, 6, 2, 5, 4, 8, 3, 7

  while (front < rear) {
    // cout << "[" << front << "," << rear << "] ";
    currentArea = min(height[front], height[rear]) * (rear - front);
    if (currentArea > maxArea) {
      maxArea = currentArea;
      // cout << "maxArea: " << maxArea << "\n";
    }

    if ((rear - front) == 1)
      return maxArea;

    // Always move the pointer that points to the lower line.
    if (height[front] < height[rear])
      front++;
    else
      rear--;
  }
  return maxArea;
}

int main(int argc, char const *argv[]) {
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

  cout << maxArea(height) << "\n";
  return 0;
}
