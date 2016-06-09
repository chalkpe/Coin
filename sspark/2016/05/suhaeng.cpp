#include <stdio.h>

int main()
{
    int running = 1;
    int runCount = 0;

    int i, n, sum;

    char menu;
    int input;

    while(running)
    {
        if(runCount == 0)
        {
            menu = '?';
            printf("WP15 박준영 1413\n정말 간단한 계산기\n\n>>> ?\n");
        }
        else
        {
            printf(">>> ");
            scanf(" %c", &menu);
        }

        switch(menu)
        {
            default:
            case '?':
                printf("A - 평균 구하기\n");
                printf("D - 약수 구하기\n");
                printf("M - 배수 구하기\n");
                printf("? - 도움말\n");
                printf("! - 종료\n");
                break;

            case '!':
                printf("<<< 총 %d번 사용함\n", runCount);
                running = 0;
                break;

            case 'a':
            case 'A':
                do
                {
                    scanf("%d", &n);
                }
                while(n <= 0);

                sum = 0;
                for(i = 0; i < n; i++){
                    scanf("%d", &input);
                    sum += input;
                }
                printf("<<< %.2lf (합 %d)\n", sum / (n + 0.0), sum);
                break;

            case 'd':
            case 'D':
                do
                {
                    scanf("%d", &input);
                }
                while(input <= 0);

                printf("<<< ");
                for(i = 1; i <= input; i++)
                {
                    if(input % i == 0)
                    {
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;

            case 'm':
            case 'M':
                do
                {
                    scanf("%d", &input);
                }
                while(input <= 0);

                printf("<<< ");
                for(i = 1; i <= 16; i++)
                {
                    printf("%d ", i * input);
                }
                printf("...\n");
                break;
        }

        runCount++;
        printf("\n");
    }
}