// 백준_11758.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <math.h>
int x[3], y[3];
int main()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
        for (j = 0; j < i; j++)
        {
            if (x[i] == x[j] && y[i] == y[j])
                return 0;
        }
    }
    
    float m_1 = (float)((float)(y[1] - y[0]) / (float)(x[1] - x[0]));
    float m_2 = (float)((float)(y[2] - y[1]) / (float)(x[2] - x[1]));
    int a = x[1] - x[0];
    int b = x[2] - x[1];
    int c = y[1] - y[0];
    int d = y[2] - y[1];
    if (m_1 == m_2)
    {
        printf("0\n");
        return 0;
    }
    if (m_1 > 0 && a * b * c * d > 0)
    {
        printf("1\n");
        return 0;
    }
    if (m_1 > 0 && a * b * c * d < 0)
    {
        printf("-1\n");
        return 0;
    }
    if (m_1 < 0 && a * b * c * d > 0)
    {
        printf("-1\n");
        return 0;
    }
    if (m_1 < 0 && a * b * c * d < 0)
    {
        printf("1\n");
        return 0;
    }

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
