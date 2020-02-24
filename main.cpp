#include <stdio.h>
#include <stdlib.h>

struct numbers{
    int* numbers;
    int count;
} typedef numbers;


void fill(numbers* num){
    for(auto i = 0; i < num->count; ++i){
        num->numbers[i] = i + 1;
    }
}

void print(numbers* num){
    for(auto i = 0; i < num->count; ++i){
        printf("%d\n", num->numbers[i]);
    }
}


int main(){
    int count = 100;

    numbers num1;
    num1.count = count;
    num1.numbers = (int*)malloc(count * sizeof(int));

    fill(&num1);
    print(&num1);

    return 0;
}