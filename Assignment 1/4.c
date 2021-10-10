#include<stdio.h>
#include<time.h>
#include<stdlib.h>
 
void swap( int* x,  int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int a[],  int n)
{
	for ( int i = 0; i < n - 1; i++) {
		for ( int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}

void selectionSort( int arr[],  int n)
{
	 int  min;
	for (int i = 0; i < n - 1; i++) {
		  min = i;
		  for (int j = i + 1; j < n; j++){
			  if (arr[j] < arr[min]){
				  min = j;
		      swap(&arr[min], &arr[i]);
        }
      }
	}
}

int main()
{
    printf("Enter no. of elements in array: ");
    long long int n;
    scanf("%lld", &n);
    printf("Elements of array:\n");
    long long int arr[n];
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i]);
    }

    clock_t start2, end2;
    long int t2;
    start2 = clock();
    bubbleSort(arr, n);
    end2 = clock();
    t2=end2-start2;
    printf("total time elapsed for bubble sort: %f\n", (double)t2/(double)CLOCKS_PER_SEC);
  
    clock_t start1, end1;
    long int t1;
    start1=clock();
    selectionSort(arr, n);
    end1=clock();
    t1=end1-start1;
    printf("total time elapsed for selection sort: %f\n", (double)t1/(double)CLOCKS_PER_SEC);


    return 0;
}
