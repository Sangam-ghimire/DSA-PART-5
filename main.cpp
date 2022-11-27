#include "sorting.h"
using namespace std;
#include <cstdlib>
#include <ctime>
#include <time.h>
int main()
{
    sorting sort;
    time_t start, ending;

    int temp, option = 0;
    int seed = time(0);
    srand(seed);

    for (int i = 0; i < 100000; i++)
    {
        temp = rand();
        sort.vect.push_back(temp);
    }

    time(&start);
    sort.insertionSort();
    time(&ending);

    // for (int x : sort.vect)
    //     cout << x << " ";

    cout << "\nTotal time required = "
         << difftime(ending, start)
         << " seconds " << endl;
};
