#include "sorting.h"
#include <bits/stdc++.h>
using namespace std;

void sorting::insertionSort()
{
    int n = vect.size();
    for (int i = 0; i <= n - 1; i++)
    {
        int temp = vect[i];
        int j = i - 1;
        while (j >= 0 && vect[j] > temp)
        {
            vect[j + 1] = vect[j];
            j--;
        }
        vect[j + 1] = temp;
    }
}