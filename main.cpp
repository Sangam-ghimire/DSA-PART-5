#include "sorting.h"
using namespace std;
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <bits/stdc++.h>
#include <chrono>

int main()
{
    srand(time(0));

    sorting sort;
    time_t start1, ending1;

    int temp, option = 0;
    int seed = time(0);
    srand(seed);
<<<<<<< HEAD

    std::cout << "Choose Time"<<
    "\n1.For One lakh data "<<
    "\n2.For Two lakh data "<<
    "\n3.For Three lakh data "<<
    "\n4.For Four lakh data "<<
    "\n5)For Six lakh data "<<
    "\n6)For Five lakh data "<<
    "\n7)Enter any number 'n' for 'n' lakh data\n ->";

=======
    std::cout << "Choose an Option \n1)For One lakh data \n2)For Two lakh data \n3)For Three lakh data \n4)For Four lakh data \n5)For Six lakh data \n6)For Five lakh data \n7)Enter any number 'n' for 'n' lakh data\n ->";
>>>>>>> 96f215a4385fe4db8b61b8fecc1aabacc3131eb7
    std::cin >> option;

    for (int i = 0; i < option * 100000; i++)
    {
        temp = rand() % 5234144;
        sort.vect1.push_back(temp);
        sort.vect2.push_back(temp);
    }


<<<<<<< HEAD
    // time(&start1);
    // sort.insertionSort();
    // time(&ending1);


    // cout << "\nThe time taken by the Inserttion Sorting is: "
    //      << difftime(ending1, start1)
    //      << " seconds " << endl;


    int size;

    size = sort.vect2.size();

    auto start =  chrono::system_clock::now();

    sort.quick_sorting(0 , size - 1);

    auto end  = chrono::system_clock::now();

    chrono::duration<double> elapsed_second = end - start;

    cout<<"The time taken by Quick Sorting sort is: "<<elapsed_second.count()<<endl;



=======
    cout << "\nTotal time required for insertionSort for " << option << " lakh data is = "
         << difftime(ending, start)
         << " seconds " << endl;
>>>>>>> 96f215a4385fe4db8b61b8fecc1aabacc3131eb7
};
