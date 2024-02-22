//WAP in C to Insert the element in an aaray at the given position
#include <stdio.h>

int main() {
    int arr[100], size, pos, value;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position and value to insert
    printf("Enter the position to insert (1 to %d): ", size + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > size + 1) { //Position value 1 se kam nhi honi chahiye aur array ke size se matlab ki (size+1) se badi nahi honi chahiye warna printf me print karwa denge wrong choice otherwise move to the new condition...
        printf("Invalid position. Please enter a position between 1 and %d.\n", size + 1);
        return 1; // Exit the program with an error code
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to make space for the new element
    for (int i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[pos - 1] = value;

    // Increment the size of the array
    size++;

    // Display the updated array
    printf("Array after Insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d \n", arr[i]);
    }
    printf("New Element is: %d and Successfully Inserted on the position: %d\n ",value,pos);

    return 0; // Exit the program successfully
}
