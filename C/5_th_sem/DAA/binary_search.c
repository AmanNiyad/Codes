#include <stdio.h>

int binary_search_leftmost(int arr[], int n, int target, int *comparisons) {
    int left = 0, right = n - 1, position = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        (*comparisons)++;
        
        if (arr[mid] == target) {
            position = mid;
            right = mid - 1;  // Continue searching on the left side
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return position;
}

int main() {
    int sorted_array[] = {2, 4, 4, 4, 6, 8, 10, 12};
    int n = sizeof(sorted_array) / sizeof(sorted_array[0]);
    int target_element = 4;
    
    int comparisons = 0;
    int position = binary_search_leftmost(sorted_array, n, target_element, &comparisons);
    
    if (position != -1) {
        printf("Element %d found at position %d\n", target_element, position);
    } else {
        printf("Element %d not found in the array\n", target_element);
    }

    printf("Number of comparisons made: %d\n", comparisons);
    
    return 0;
}

