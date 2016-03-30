#include<stdio.h>
#include<stdlib.h>
int min(int x, int y){
    return (x < y ? x : y);
}
void MergeSort(int nums[], int len){
    int* a = nums;
    int* b = (int*)malloc(len * sizeof(int*));
    int far, start;
    for (far = 1; far < len; far += far) {
        for (start = 0 ; start < len ; start += far + far) {
            int low = start, mid = min(start + far, len), high = min(start + far + far ,len);
            int k = low;
            int start1 = low ,end1 = mid,start2 = mid ,end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        int* temp = a;
        a = b;
        b = temp;
    }
    if (a != nums){
        int i;
        for (i = 0; i < len ; i++)
            b[i] = a[i];
            b = a;
    }
    free(b);
}
int main(){
    int abc[10] = {5,3,6,7,2,1,9,10,4,8};
    MergeSort(abc, 10);
    int i;
    for ( i = 0; i < 10; i++) {
        printf("%d\n",abc[i] );
    }
    return 0;
}
