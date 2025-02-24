#include <stdio.h>

void findTwoSum(int arr[], int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Two numbers that sum up to %d are: %d and %d\n", target, arr[i], arr[j]);
                return;  // Exit once a valid pair is found
            }
        }
    }
    printf("No two numbers add up to %d\n", target);
}

int main() {
    int arr[] = {1, 4, 7, 12, 15, 3};
    int target = 19;
    int size = sizeof(arr) / sizeof(arr[0]);

    findTwoSum(arr, size, target);

    return 0;
}
