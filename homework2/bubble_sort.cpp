#include <iostream>
#define size 16

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[size])
{
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {
			#pragma HLS PIPELINE II=2
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

int main()
{
    int arr[size] = {7,4,5,2,15,10,1,16,8,11,14,3,9,13,6,12};

    bubbleSort(arr);

	int errors = 0;
	for (int i = 0; i<size; i++){
		if (arr[i] != i+1)
			errors++;
	}
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
    return errors;
}
