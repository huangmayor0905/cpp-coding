#include <iostream>
using namespace std;

int main() {
    int num = 2;

    printf("�o�O�ܼ� num ���ȡG%d\n", num);

    //  & ��ܡu���}�v
    //  &b ��ܡu�� b ���O�����}�v
    printf("�o�O�ܼ� num ���O�����m�G%p\n", &num);

    // \* ��� [����]
    // \*&num ��� [�� num �O�����m����] => �]�N�O num ��
    printf("�o�O�ܼ� num ���O�����m�����ȡG%d\n", *&num);

    // int* ��� pointer �O�s���O�����m���ܼ�
    int* pointer = &num;

    printf("�o�O�ܼ� pointer ���ȡG%p\n", pointer);

    printf("�o�O�ܼ� pointer ���O�����m�G%p\n", &pointer);

    printf("�o�O�ܼ� pointer ���Ȩ��ȡG%d\n", *pointer);
    return 0;
}
