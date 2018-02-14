/*
 * Testing merge sort
 *
 */
#include "merge_sort.h"
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    merge_sort sorter;
    vector<int*> a;
    unsigned int n = 1000;

    srand(time(NULL));

    //Fill the vector with random values between 0-100
    for(unsigned int i=0; i<n; ++i){
        int* x = new int(rand() % 100+1);
        a.push_back(x);
    }

    cout<<endl;
    cout<<"List to be sorted: "<<endl<<endl;

    for(unsigned int i=0; i<n; ++i) cout<<*a[i]<<"  ";

    sorter.sort(a, 0, n-1);

    cout<<endl<<endl;
    cout<<"Sorted list:"<<endl<<endl;
    for(unsigned int i=0; i<n; ++i) cout<<*a[i]<<"  ";

    cout<<endl;

    return 0;

}
