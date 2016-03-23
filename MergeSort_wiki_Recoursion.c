void merge_sort_recursive(int arr[], int reg[], int start, int end) {
	if (start >= end)
		return;
	int len = end - start, mid = (len >> 1) + start;
	int start1 = start, end1 = mid;
	int start2 = mid + 1, end2 = end;
	merge_sort_recursive(arr, reg, start1, end1);
	merge_sort_recursive(arr, reg, start2, end2);
	int k = start;
	while (start1 <= end1 && start2 <= end2)
		reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
	while (start1 <= end1)
		reg[k++] = arr[start1++];
	while (start2 <= end2)
		reg[k++] = arr[start2++];
	for (k = start; k <= end; k++)
		arr[k] = reg[k];
}
void merge_sort(int arr[], const int len) {
	int reg[len];
	merge_sort_recursive(arr, reg, 0, len - 1);
}
int main(){
    int abc[10] = {5,3,6,7,2,1,9,10,4,8};
    merge_sort_recursive(abc, 10);
    printf("%d\n",abc[3] );
    return 0;
}
