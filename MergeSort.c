#include<stdio.h>
int main(int argc, char const *argv[]) {
    int a[] = {1,2,3};
    int b[] = {5,3,4,3};
    int longth = (sizeof(a)/sizeof(a[0])) + (sizeof(b)/(sizeof(b[0])));
    return 0;
}
void MergeSort(int nums[], int lef, int righ, int mid){
    int length = sizeof(nums)/sizeof(nums[0]);
    int numss[length];
    int i,l,r;
    for (i = 1; i < (,length + 1); i++) {
        for (size_t i = 0; i < count; i++) {
            /* code */
        }
    }















    // 分两堆
    int mid = length/2;
    // 对左一堆MergeSort
    int left[] = MergeSort left mid
    // 对右一堆MergeSort
    int right[] = MergeSort mid right
    // 合并

    for (i = 0,l = 0, r = 0; i < length; i++) {
        if (left[l] <= right[r]) {
            nums[i] = left[l];
            l++;
        }
        else {
            nums[i] = right[r];
            r++;
        }
    }

    return nums;
}
void MergeSortOperation(int arr[], int start, int end){
    int
}
