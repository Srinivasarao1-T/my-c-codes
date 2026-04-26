#include<stdio.h>

// Function to print a combination
void printCombination(int arr[], int data[], int start, int end, int index, int k) {
    if (index == k) {
        for (int j = 0; j < k; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }

    for (int i = start; i <= end && end - i + 1 >= k - index; i++) {
        data[index] = arr[i];
        printCombination(arr, data, i + 1, end, index + 1, k);
    }
}

// Function to generate combinations of size k from an array arr[] of size n
void generateCombinations(int arr[], int n, int k) {
    int data[k];  // Temporary array to store current combination

    printCombination(arr, data, 0, n - 1, 0, k);
}

int main() {
  //  int arr[] = {1, 2, 3, 4, 5};
    //int n = sizeof(arr) / sizeof(arr[0]);
    int k; // Size of combinations

        int a;
        scanf("%d",&a);
        printf("enter the values");
        int arr[a];
        for(int i=0;i<a;i++){

        scanf("%d",&arr[i]);
        }
        int d=0,o=a;
        for(int i=0;i<a;i++){
          //      d=0;

             for(int j=i+1;j<a;j++){
                     //if(arr[i]==0)
                       //      continue;
                     if(arr[i]==arr[j])
                     {
                        d++;
                         //arr[j]=0;
	                  for(int k=j;k<a;k++){
				  arr[j]=arr[j+1];
			  }
			  a--;
			  i--;
                     }
             }
	}
	printf("enter the number of combinations\n");
	scanf("%d",&k);
    printf("Combinations of size %d from the array:\n", k);
    //generateCombinations(arr, n, k);
    generateCombinations(arr, o-d, k);

    return 0;
}
