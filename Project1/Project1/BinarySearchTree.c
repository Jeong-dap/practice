#include <stdio.h>
typedef int element; // ������ Ÿ���� ������ ǥ���ϱ� ���� element Ÿ���� ����

// ���� �˻� �Լ�
void sequentialSearch1(element a[], int n, int key) {
    int i = 0; // �ε��� ���� �ʱ�ȭ
    printf("\n %d�� �˻��϶�! >> ", key); // �˻��� Ű �� ���
    while (i < n && a[i] != key) { // �迭�� ������ �Ǵ� Ű ���� ã�� ������ �ݺ�
        i++; // �ε��� ����
    }
    if (i < n) { // Ű ���� ã�� ���
        printf("%d��°�� �˻� ����! \n\n", i + 1); // �˻� ���� �޽��� ���
    }
    else { // Ű ���� ã�� ���� ���
        printf("%d��°�� �˻� ����! \n\n", i + 1); // �˻� ���� �޽��� ���
    }
}
void main() {
    element a[] = { 8, 30, 1, 9, 11, 19, 2 }; // �˻��� �迭
    int n = 7; // �迭�� ũ��

    sequentialSearch1(a, n, 9); // Ű �� 9 �˻�
    sequentialSearch1(a, n, 6); // Ű �� 6 �˻�

    getchar(); // ���α׷� ���� �� �Է� ���
}