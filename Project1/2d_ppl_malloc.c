#include <stdio.h>
#include <malloc.h>

int main() {

    int ages, member, temp, sum;
    unsigned char limit_table[3] = { 4, 2, 3 };
    unsigned char* p[3];   

    for (ages = 0; ages < 3; ages++) {
        printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", ages + 2);
        printf("이 연령대는 몇 명입니까? >>> ");

        scanf_s("%d", &temp);
        limit_table[ages] = (unsigned char)temp;

    
        p[ages] = (unsigned char*)malloc(sizeof(unsigned char) * limit_table[ages]);

        for (member = 0; member < limit_table[ages]; member++) {
            printf("멤버 #%d: ", member + 1);

            scanf_s("%d", &temp);
            p[ages][member] = (unsigned char)temp;   
        }
    }

    printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");

    for (ages = 0; ages < 3; ages++) {
        sum = 0;
        printf("%d0대: ", ages + 2);

        for (member = 0; member < limit_table[ages]; member++) {
            sum += p[ages][member];     
        }

        float avg = (float)sum / limit_table[ages];
        printf("%5.2f\n", avg);

        free(p[ages]);
    }

    return 0;
}
