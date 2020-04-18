// https://open.kattis.com/problems/parking

#include <iostream>
#include <vector>

int main()
{
  int A, B, C;
  std::cin >> A >> B >> C;

  int numTrucks = 3;
  std::vector<std::vector<int>> intervals(numTrucks, std::vector<int>(2, 0));

  int minTime, maxTime;

  minTime = 999;
  maxTime = -999;

  for (int i = 0; i < numTrucks; i++)
  {
    int start, end;
    std::cin >> start >> end;
    intervals[i][0] = start;
    intervals[i][1] = end;

    if (start < minTime)
    {
      minTime = start;
    }

    if (end > maxTime)
    {
      maxTime = end;
    }
  }

  std::vector<int> timeline = std::vector<int>(maxTime - minTime + 1, 0); // initilize a vector filled with zeros

  for (int i = 0; i < intervals.size(); i++)
  {
    std::vector<int> interval = intervals[i];
    int start = interval[0];
    int end = interval[1];

    for (int j = start; j < end; j++)
    {
      int index = j - minTime;
      timeline[index]++;
    }
  }

  int total = 0;

  for (int i = 0; i < timeline.size(); i++)
  {
    int val = timeline[i];

    switch (val)
    {
    case 1:
      total += (val * A);
      break;

    case 2:
      total += (val * B);
      break;

    case 3:
      total += (val * C);

    default:
      break;
    }
  }

  std::cout << total;
}