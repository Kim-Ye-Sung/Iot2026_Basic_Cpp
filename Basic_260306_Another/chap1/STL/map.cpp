#include <iostream>
#include <map>
using namespace std;

int main() {

    // map은 키-값 쌍으로 데이터를 저장하는 연관 컨테이너 입니다.
    // 내부적으로 정렬된 상태로 저장
    // 키는 고유
    map<string, int> m;

    m["apple"] = 100;
    m["banana"] = 200;
    m["orange"] = 300;

    //iterator를 이용한 순회 (전통적인 방법)
    for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }
    //auto iterator (C++11 이후)
    for (auto it = m.begin(); it != m.end(); ++it) { //
        cout << it->first << " : " << it->second << endl;
    }
    //range-based for (가장 많이 사용)
    for (auto& p : m) { //range-based for (가장 많이 사용)
        cout << p.first << " : " << p.second << endl;
    }
    //구조 분해 방식 (C++17) 
    for (auto& [key, value] : m) {
        cout << key << " : " << value << endl;
    }


    // 값 찾기
    if (m.find("apple") != m.end())
    {
        cout << "존재" << endl;
    }

    m.erase("banana");

    if (m.count("banana") == 0)  // banana라는 키가 몇개 존재하는지 확인하는 여부. 키값은 중복되지 않기때문에, 있으면 무조건1개 즉, 1. 없으면 0개 즉, 0이 된다.
    {
        cout << "존재하지 않음.";
    }

    // vlaue 존재 여부 확인(map은 키로 검색하므로, value로 검색하려면 순회해야함)
    bool valueExists = false;
    for (const auto& p : m)
    {
        if (p.second == 300)
        {
            valueExists = true;
            break;
        }
    }

    // 키-값 쌍 추가
    m.insert({ "grape", 400 });

    // 맵 초기화
    map<string, int> m2 =
    {
        {"kim", 90},
        {"lee", 85},
        {"park",95}
    };


    //**std::map** 은 내부적으로 정렬된 상태로 저장
    //순회 결과
    //apple
    //banana
    //orange

}