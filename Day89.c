/*
Question: Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum Status {
    SUCCESS = 10,   
    FAILURE,       
    TIMEOUT = 20    
};

int main() {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}