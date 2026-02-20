#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<string> device_logs) {
    unordered_map<string, int> interrupt_map;

    // 여기를 채워보세요!
    // 1. 장치별 횟수 카운트
    for (const auto& item: device_logs) {
        interrupt_map[item]++;
    }
    // 2. 가장 큰 횟수 찾기
    int max_count = 0;
    for (const auto& item: interrupt_map) {
        if (item.second > max_count) {
            max_count = item.second;
        }
    }

    return max_count;
}