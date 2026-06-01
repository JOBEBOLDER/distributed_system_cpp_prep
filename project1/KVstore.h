#ifndef __KVSTORE_H__
#define __KVSTORE_H__

#include <string>
#include <unordered_map>
#include <mutex>
#include <optional>

class KVStore {
private:
    std::unordered_map<std::string, std::string> store;
    std::mutex mtx;

public:
    bool put(const std::string& key, const std::string& value);
    std::optional<std::string> get(const std::string& key);
    bool remove(const std::string& key);
};

#endif