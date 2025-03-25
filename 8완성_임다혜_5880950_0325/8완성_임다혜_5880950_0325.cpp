/*
    // 첫 번째 2x2 행렬 입력 받기
    PRINT "첫 번째 2x2 행렬 입력 : "
    FOR i = 0 TO 1
        FOR j = 0 TO 1
            READ arr1[i][j]  // 첫 번째 행렬의 각 원소 입력
        END FOR
    END FOR

    // 두 번째 2x2 행렬 입력 받기
    PRINT "두 번째 2x2 행렬 입력 : "
    FOR i = 0 TO 1
        FOR j = 0 TO 1
            READ arr2[i][j]  // 두 번째 행렬의 각 원소 입력
        END FOR
    END FOR

    // 행렬 덧셈 수행
    FOR i = 0 TO 1
        FOR j = 0 TO 1
            result[i][j] = arr1[i][j] + arr2[i][j]  // 두 행렬의 원소 덧셈
        END FOR
    END FOR

    // 행렬 덧셈 결과 출력
    PRINT "행렬 덧셈 결과 : "
    FOR i = 0 TO 1
        FOR j = 0 TO 1
            PRINT result[i][j]  // 덧셈 결과 출력
        END FOR
        PRINT newline  // 한 줄씩 출력
    END FOR
*/

#include <stdio.h>

int main() {
	int arr1[2][2];
	int arr2[2][2];
	int result[2][2];

	printf("첫 번째 2x2 행렬 입력 : \n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			scanf_s("%d", &arr1[i][j]);
		}
	}

	printf("두 번째 2x2 행렬 입력 : \n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			scanf_s("%d", &arr2[i][j]);
		}
	}

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			result[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	printf("행렬 덧셈 결과 : \n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}