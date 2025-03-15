#include <stdio.h>

// Function to modify local variable
void updateValue(int* ptr) { 
  *ptr = 50;  // Modifying the original variable
}

int main() {
    int num = 10;
    updateValue(&num);
    printf("Updated Value: %d\n", num);
    return 0;
}
