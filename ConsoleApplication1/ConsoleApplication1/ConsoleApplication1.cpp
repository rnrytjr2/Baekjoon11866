// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;
int main()
{
    queue<int> josephus;
    int N=0, K=0;
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        josephus.push(i);
    }
    cout << "<";
    while (josephus.size() > 0)
    {
        for (int i = 0; i < K - 1; i++)
        {
            josephus.push(josephus.front());
            josephus.pop();
        }
        cout << josephus.front();
        josephus.pop();
        if (josephus.size() > 0)
        {
            cout << ", ";
        }
    }
    cout << ">";
}

