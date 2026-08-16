#include <iostream>
#include "include/store.h"

// [CRC32] [Timestamp] [Key Size] [Value Size] [Key] [Value]

int main(void){
    printf("%zu\n", sizeof(RecordHeader));
}