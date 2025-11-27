#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(4);
    
    cout << "정수 4개를 입력하시오: ";
    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    }

    // 최대값 위치
    auto max_it = max_element(v.begin(), v.end());
    int max_val = *max_it;
    int max_pos = distance(v.begin(), max_it) + 1;  // (1번째, 2번째...)

    // 최소값 위치
    auto min_it = min_element(v.begin(), v.end());
    int min_val = *min_it;
    int min_pos = distance(v.begin(), min_it) + 1;

    cout << "최대값은 " << max_pos << "번째 값 " << max_val << endl;
    cout << "최소값은 " << min_pos << "번째 값 " << min_val << endl;

    // 오름차순 정렬
    vector<int> asc = v;
    sort(asc.begin(), asc.end());

    cout << "오름차순 결과는 ";
    for (size_t i = 0; i < asc.size(); i++) {
        cout << asc[i];
        if (i != asc.size() - 1) cout << ", ";
    }
    cout << endl;

    // 내림차순 정렬
    vector<int> desc = v;
    sort(desc.begin(), desc.end(), greater<int>());

    cout << "내림차순 결과는 ";
    for (size_t i = 0; i < desc.size(); i++) {
        cout << desc[i];
        if (i != desc.size() - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
