#include "../include/store.h"
#include <arpa/inet.h>
#include <cstring>

uint64_t KVStore::htonll(uint64_t value) {
    int n = 1; 
    if (*(char *)&n == 1) { // little endian
        return (((uint64_t)htonl(uint32_t)value) << 32) | htonl((uint32_t)(value >> 32));
    } else { // big endian
        return value
    }
}

uint64_t KVStore::ntohll(uint64_t value){
    return htonll(value); // ta sama operacja
}

KVStore::KVStore(const std::string &path) : data_file_path_(path){
    // na pozniej
}
