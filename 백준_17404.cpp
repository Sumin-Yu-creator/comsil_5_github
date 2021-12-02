// 백준_17404.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>
int Min_2(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int** dp;
int** arr;
int** Arr;
int main()
{
    int N, i, j;
    scanf("%d", &N);
    arr = (int**)malloc(sizeof(int**) * N);
    dp = (int**)malloc(sizeof(int**) * N);
    Arr = (int**)malloc(sizeof(int**) * N);
    for (int i = 0; i < N; i++)
    {
    
        arr[i] = (int*)malloc(sizeof(int) * 3);
        dp[i] = (int*)malloc(sizeof(int*) * 3);
        Arr[i] = (int*)malloc(sizeof(int*) * 3);
     
    }
    int min = 98765432;
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];
    int temp, Temp;
    for (int i = 1; i < N; i++)
    {
       dp[i][0] = Min_2(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
       if (Min_2(dp[i - 1][1], dp[i - 1][2]) == dp[i - 1][1])
       {
           Arr[i - 1]
       }
       dp[i][1] = Min_2(dp[i-1][0], dp[i-1][2])+arr[i][1];
       dp[i][2] = Min_2(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];     
    }
    for (int x = 0; x < 3; x++)
    {
        if (x == i)
            continue;
        min = Min_2(min, dp[N-1][x]);
    }
    
    for (int i = 0; i < N; i++)
        free(arr[i]);
    free(arr);
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
