#include <bits/stdc++.h>

using namespace std;


class sorting
{
private:
    /* data */
public:
    sorting() {}
    ~sorting() {}
    vector<int> vect1;
    vector<int> vect2;

    void insertionSort();

    int partition(int low , int high);
    void quick_sorting(int low, int high);
    void display(int high);

};



