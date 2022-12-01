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
    std::cout << "Choose an Option \n1)For One lakh data \n2)For Two lakh data \n3)For Three lakh data \n4)For Four lakh data \n5)For Five lakh data \n6)For Six lakh data \n7)Enter any number 'n' for 'n' lakh data\n ->";
    std::cin >> option;

    for (int i = 0; i < option * 100000; i++)
    {
        temp = rand();
        sort.vect.push_back(temp);
    }

    time(&start);
    sort.insertionSort();
    time(&ending);
    // to print data
    //  for (int x : sort.vect)
    //      cout << x << " ";

    cout << "\nTotal time required for insertionSort for " << option << " lakh data is = "
         << difftime(ending, start)
         << " seconds " << endl;
};
