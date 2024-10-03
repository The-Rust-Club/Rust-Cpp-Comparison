#include <stdint.h>
#include <stdio.h>

#define ARRAY_COUNT(arr) (sizeof(arr)/sizeof((arr)[0]))
typedef uint32_t U32;

int main(){
    U32 arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    U32 sumResult = 0;
    for(U32 i = 0; i < ARRAY_COUNT(arr); i++){
        arr[i] *= 2;
        sumResult += arr[i];
    }
    for(U32 i = 0; i < ARRAY_COUNT(arr); i++){
        printf("%u ", arr[i]);
    }
    printf("\n%u\n", sumResult);
}
