#include <iostream>
#include <string>
#include <vector>
#include <queue> //for priority_queue

using namespace std;

typedef pair<int, int> node;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size());

    priority_queue<node, vector<node>, greater<node>> pq;
    pq.push(make_pair(numbers[0], 0));

    for (int i = 1; i < numbers.size(); i++) {

        while ((!pq.empty()) && (pq.top().first < numbers[i])) {
            answer[pq.top().second] = numbers[i];
            pq.pop();
        }

        pq.push(make_pair(numbers[i], i));
    }
    
    while (!pq.empty()) {
        answer[pq.top().second] = -1;
        pq.pop();
    }

    return answer;
}

int main() {
    //vector<int> t = {2, 3, 3, 5};
    vector<int> t = {9, 1, 5, 3, 6, 2};
    vector<int> v = solution(t);
    for (int i : v)
        cout << i << ' ';
    cout << '\n';
    return 0;
}
