#include "stdio.h"
#include "stdlib.h"
int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    for (int i = 0; i < studentsSize; ++i) {
        if(students[i] == sandwiches[i]) {
            int studs[studentsSize];
            int sands[sandwichesSize];
            for (int j = 1; j < studentsSize; ++j) {
                studs[j] = students[j];
                sands[j] = sandwiches[j];
            }
            int* students = &studs;
            int* sandwiches = &sands;
            studentsSize -= 1;
            sandwichesSize -= 1;
        }
        if(studentsSize == 0){
            return 10;
        }
    }
    return 20;
}
int main(){
    int* students = (int*) malloc(4 * sizeof(int));
    int* sandwiches = (int*) malloc(4 * sizeof(int));
    students[0] = 1;
    students[1] = 1;
    students[2] = 0;
    students[3] = 0;
    sandwiches[0] = 1;
    sandwiches[1] = 1;
    sandwiches[2] = 0;
    sandwiches[3] = 0;

    int lenstud = sizeof(students) / sizeof(students[0]);
    int lensand = sizeof(sandwiches) / sizeof(sandwiches[0]);
    printf("%d", countStudents(students, lenstud, sandwiches,lensand));
    return 0;
}