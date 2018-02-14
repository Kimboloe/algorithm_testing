#include "merge_sort.h"

merge_sort::merge_sort(){}

void merge_sort::sort(std::vector<int*>& a, int low, int high)
{
    int mid;
    if(low<high){
        mid = low + (high-low)/2;
        sort(a, low,mid);
        sort(a, mid+1,high);
        merge(a, low,mid,high);
    }
}

void merge_sort::merge(std::vector<int*>& a, int low, int mid, int high)
{
    std::vector<int*> b = a;
    int h,i,j,k;
    h=low;
    i=low;
    j=mid+1;

    while((h<=mid)&&(j<=high)){

        if(*a[h]<=*a[j]){
            b[i]=a[h];
            h++;
        }
        else{
            b[i]=a[j];
            j++;
        }
        i++;
    }

    if(h>mid){
        for(k=j;k<=high;k++){
            b[i]=a[k];
            i++;
        }
    }
    else{
        for(k=h;k<=mid;k++){
            b[i]=a[k];
            i++;
        }
    }

    for(k=low;k<=high;k++) a[k]=b[k];
}
