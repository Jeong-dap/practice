#include <stdio.h>
typedef int element; // 데이터 타입을 간단히 표현하기 위해 element 타입을 정의

// 순차 검색 함수
void sequentialSearch1(element a[], int n, int key) {
    int i = 0; // 인덱스 변수 초기화
    printf("\n %d를 검색하라! >> ", key); // 검색할 키 값 출력
    while (i < n && a[i] != key) { // 배열의 끝까지 또는 키 값을 찾을 때까지 반복
        i++; // 인덱스 증가
    }
    if (i < n) { // 키 값을 찾은 경우
        printf("%d번째에 검색 성공! \n\n", i + 1); // 검색 성공 메시지 출력
    }
    else { // 키 값을 찾지 못한 경우
        printf("%d번째에 검색 실패! \n\n", i + 1); // 검색 실패 메시지 출력
    }
}
void main() {
    element a[] = { 8, 30, 1, 9, 11, 19, 2 }; // 검색할 배열
    int n = 7; // 배열의 크기

    sequentialSearch1(a, n, 9); // 키 값 9 검색
    sequentialSearch1(a, n, 6); // 키 값 6 검색

    getchar(); // 프로그램 종료 전 입력 대기
}