// 백준_3665.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include<iostream>
#include<vector>
#include<queue>
#define endl "\n"
#define MAX 501
using namespace std;
int arr[MAX];
int Entry[MAX] = {0,};
vector<int> Node[MAX]; //2차원벡터 선언!
void Input()
{
    int i, T, N, M, a, b;
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (i = 0; i < N; i++)
        {
            cin>>arr[i];

        }
        cin >> M;
        for (i = 0; i < M; i++)
        {
            cin >> a >> b;
            Entry[b]++;
            Node[a].push_back(b);
        }
    }
}
void Solution()
{
    queue<int> Q; //데이터들을 집어넣을 큐를 하나 만들자!
    for (int i = 1; i <= N; i++)
        if (Entry[i] == 0) Q.push(i); //카운트가 0인걸 먼저 세우자!!
    while (Q.empty() == 0)//아직 큐가 안 비어 있을 경우,
    {
        int Cur = Q.front(); //큐의 가장 앞에 있는 즉, 가장 최근에 넣은 값!
        Q.pop();             //그걸 빼자!
        cout << Cur << " ";
        for (int i = 0; i < Node[Cur].size(); i++)
        {
            int Next = Node[Cur][i]; : 가리키는 것->그 큐에 넣은 수!
                Entry[Next]--;   //Entry는 그 큐에 넣은 수 개수 저장 중,하나씩 값 빼자!
            if (Entry[Next] == 0)
                Q.push(Next);  //다음 큐 대 빼게 front에 푸쉬한다!
        }
    }
    cout << endl;
}
void Solve()
{
    Input();
    Solution();
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solve();
    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
