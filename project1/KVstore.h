#ifndef __KVSTORE_H__
#define __KVSTORE_H__

#include <string>
#include <unordered_map>
#include <mutex>
#include <optional>

class KVStore {
private:
    std::unordered_map<std::string, std::string> store;// 存数据的dict
    std::mutex mtx;// 锁

public:
    bool put(const std::string& key, const std::string& value); // 写入
    std::optional<std::string> get(const std::string& key);// 读取
    bool remove(const std::string& key);// 删除
};

#endif