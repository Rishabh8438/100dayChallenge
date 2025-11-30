/*
Question: Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>

enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1 = {"Rishabh", 22, MALE};
    struct Person p2 = {"Ananya", 20, FEMALE};
    struct Person p3 = {"Alex", 25, OTHER};

    printf("Name: %s | Age: %d | Gender: ", p1.name, p1.age);
    switch (p1.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    printf("Name: %s | Age: %d | Gender: ", p2.name, p2.age);
    switch (p2.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    printf("Name: %s | Age: %d | Gender: ", p3.name, p3.age);
    switch (p3.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    return 0;
}