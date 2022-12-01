#include "sorting.h"
#include <bits/stdc++.h>
using namespace std;

void sorting::insertionSort()
{
    int n = vect1.size();
    for (int i = 0; i <= n - 1; i++)
    {
        int temp = vect1[i];
        int j = i - 1;
        while (j >= 0 && vect1[j] > temp)
        {
            vect1[j + 1] = vect1[j];
            j--;
        }
        vect1[j + 1] = temp;
    }
}

int sorting :: partition(int low , int high){

    int pi,i,j;

    pi = vect2[low];

    i = low;
    j = high + 1;

    while (i < j) {

        do
        {
            j=j-1;

        } while (vect2[j] > pi);
        

        do
        {
            i = i+1;

        } while (vect2[i] < pi);
        

        if (i < j){

            swap(vect2[i] , vect2[j]);

        }

    }

    swap(vect2[low] , vect2[j]);

    return j;


}

void sorting :: quick_sorting(int low , int high){

    int pivot;

    if(low < high){

        pivot = partition(low,high);
        quick_sorting(low , pivot -1);
        quick_sorting(pivot + 1 , high);

    }

    
}

void sorting :: display(int high){

    for(int i = 0 ; i<high ; i++){

        cout<<vect2[i]<<endl;

    }

}