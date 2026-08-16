#include <cstdint>
#include <string>
#include <vector>
#include <chrono>

#pragma pack(push, 1)
// ^by uniknac paddingu na struct po CRC
struct RecordHeader {
    uint32_t crc; //4
    uint64_t timestamp; //8 
    uint32_t key_size; //4 
    int32_t value_size; //4; int32t by moc napisac -1 dla usunietych kluczy
    // = 20 bajtow
};
#pragma pack(pop)


class KVStore{
    private:
        std::string data_file_path_;

        uint64_t htonll(uint64_t value);
        uint64_t ntohll(uint64_t value);

    public:
        KVStore(const std::string &path);

        std::vector<uint8_t> serialize_record(const std::string &keyy, const std::string &value, bool is_tombstone = false);
};