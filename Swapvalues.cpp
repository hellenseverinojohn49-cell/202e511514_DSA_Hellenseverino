#include <iostream>

// Function to swap two numbers using pointers
void swap(int* a, int* b) {
    int temp = *a; 
    *a = *b;   
    *b = temp;     
}

int main() {
    int  num1 = 10;
    int  num2 = 20;
    int *ptr = &num1;

    std::cout << "Before swap: a = " << num1 << " " << num2 << std::endl;
    swap(&num1, &num2);

    std::cout << "After swap:  a = " << num1<< " " <<num2 << std::endl;
    return 0;
}

  
