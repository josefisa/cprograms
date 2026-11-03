// In this program I wil explore the different data types C does offer.


#include <stdio.h>

void main() {

    // Integers
    char c = 'A';
    short s = 1000;
    int i = 32767;
    long l = 2147483646;
    long long longer = -9223372036854775807;
    

    // Flotaing
    float f = 3.14159;
    double d = 3.141592658979L;
    long double ld = 132133123.11132456789;

    // Characters
    char letter = 'B';
    char newline = '\n';

    //Arrays and vectors
    int numbers[5] = {1, 2, 3, 4, 5};
    char name[] = "Alvaraco";

    // Pointers
    int x = 10;
    int *ptr = &x;


    // Struct
    struct Person{
        char name[50];
        int age;
        float height;
    };
    struct Person p1 = {"Pepe", 27, 1.81f};
    
    
    // Unions
    union Data {
        int i;
        float f;
        char c;
    };
    union Data data;
    data.i = 10;
    data.f = 12.32;
    data.c = 'P';

    // So basically unsigned variables work only for positive numbers, whitin the limits of their type scope.
    unsigned int positive = 40000;
    signed int normal = -20000;

    // Combinig variables.
    short int small = -100;
    long int big = 1000000000;

    // Constants
    const float PI = 3.14159f;

    //Volatile
    volatile int hardware_register;    

    //Restrict Optimization hint for pointers.
    int *restrict res_ptr;
    printf("Pointer address: %p\n", (void*)res_ptr);

    //Void type
    void function();  // Function returns nothing
    void *v_ptr;   // Generic pointer

    //Conversion
    short new_s = 135;
    double new_d = s;
    printf("Conversion result: from short %d to a double %.1f\n ", new_s, new_d);

    double ppi = 3.15159;
    int n = (int)ppi; // Explicit cast. Note: Check in deept.

}