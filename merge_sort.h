/*
 * At this point only for sorting vectors
 * including pointers to integers.
 *
 * Going to improve it using templates at
 * some point
 *
 */

#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

class merge_sort
{
public:
    merge_sort();
    void sort(std::vector<int*>& a, int low, int high);
private:
    void merge(std::vector<int*>& a, int low, int mid, int high);
};

#endif // MERGE_SORT_H
