// 행맨.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MY_DIC_SIZE 5   //사이즈와 길이를 마음대로 입력해 보세요!
#define MY_WORD_LEN 20
char g_dic[MY_DIC_SIZE][MY_WORD_LEN] = { "mother", "father", "sister", "brother", "uncle" };
int g_step = 0;
void IniGame(char* com, char* p)
{
    int index, i, len;
    srand(time(NULL));
    index = rand() % MY_DIC_SIZE;
    strcpy(com, g_dic[index]);
    len = strlen(com);
    for (i = 0; i < len; i++)
        p[i] = '*';
    p[i] = '\0';
}
int InputChar(char com[MY_WORD_LEN], char p[MY_WORD_LEN])
{
    char msg[5];
    char key;
    int len, check, i;
    printf("Hints;%s\n", p);
    printf("input char:");
    scanf("%s", msg);
    key = msg[0];
    len = strlen(p);
    check = 0;
    for (i = 0; i < len; i++)
    {
        if (com[i] == key && p[i] == '*')
        {
            p[i]=key;
            check = 1;
        }
    }
    return check;
}
void GoNextStep()
{
    g_step++;
    printf("hang man step : %d\n", g_step);
}
void ShowHangman()
{
    switch (g_step)
    {
    case 0:
        printf("    ┌───┐\n");
        printf("            │\n");
        printf("            │\n");
        printf("            │\n");
        printf("            │\n");
        printf("            │\n");
        break;
    case 1:
        printf("    ┌───┐\n");
        printf("    ●      │\n");
        printf("            │\n");
        printf("            │\n");
        printf("            │\n");
        printf("            │\n");
        break;
    case 2:
        printf("    ┌───┐\n");
        printf("    ●      │\n");
        printf("  ┏╋┓    │\n");
        printf("            │\n");
        printf("            │\n");
        printf("            │\n");
        break;
    case 3:
        printf("    ┌───┐\n");
        printf("    ●      │\n");
        printf("  ┏╋┓    │\n");
        printf("    ┃      │\n");
        printf("            │\n");
        printf("            │\n");
        break;
    case 4:
        printf("    ┌───┐\n");
        printf("    ●      │\n");
        printf("  ┏╋┓    │\n");
        printf("    ┃      │\n");
        printf("  ┏┻┓    │\n");
        printf("            │\n");
        break;
    default:
        break;
    }

}
int CheckGameOver(char* com, char* p)
{
    if (4 == g_step)
    {
        return 1;
    }
    if (0 == strcmp(com, p))
    {
        return 1;
    }
    return 0;
}
int main()
{
    char com[MY_WORD_LEN];
    char p[MY_WORD_LEN];
    IniGame(com, p);
    while (1)
    {
        if (0 == InputChar(com, p))
        {
            GoNextStep();
            ShowHangman();
        }
        if (1 == CheckGameOver(com, p))
            break;
    }
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
