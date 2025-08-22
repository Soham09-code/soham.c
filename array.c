/*Find the largest in the array*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element: %d\n", max);
    return 0;

    /*Find second largest element*/

    #include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], second = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        } else if(arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    printf("Largest element: %d\n", max);
    if(n < 2) {
        printf("Second largest element not found.\n");
    } else {
        printf("Second largest element: %d\n", second);
    }
    return 0;
}

/*Move all zeros to end of the array*/

#include <stdio.h>

int main() {
    int n, i, j = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to front
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    // Fill remaining positions with zero
    while(j < n) {
        arr[j++] = 0;
    }

    printf("Array after moving zeros to end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/*Rotate array by one position to the right*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int last = arr[n-1];
    for(i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;

    printf("Array after rotating by one:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    /*Check if array is sorted in ascending order*/

#include <stdio.h>

int main() {
    int n, i, sorted = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            sorted = 0;
            break;
        }
    }

    if(sorted)
        printf("Array is sorted in ascending order.\n");
    else
        printf("Array is not sorted.\n");

    return 0;
}

/*Reverse a string in C*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}

/*Check if a string is palindrome in C*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int isPalindrome = 1;
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    return 0;
}

/*Count frequency of array elements in C*/

#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    for(i = 0; i < n; i++) {
        count = 1;
        if(freq[i] != 0) {
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark as counted
                }
            }
            freq[i] = count;
        }
    }

    printf("Frequency of each element:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}

