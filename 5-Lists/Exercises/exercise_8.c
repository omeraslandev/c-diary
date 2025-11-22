#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int LIST_SIZE = 10;

int random_list(int *list) {
    for (int i = 0; i <= LIST_SIZE; i++) {
        list[i] = rand() % 100;
    }
}

int main() {
    srand( time(NULL) );

    int list[LIST_SIZE];

    random_list(list);

    for (int i = 0; i < LIST_SIZE; i++) {
        if (list[i] % 2 != 0)
            printf("Taaak! Tek sayi yakaladim kral... Iste o sansli cocuk: %d !", list[i]);
    }

    return 0;
}