#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern void test();


//��7��(�����)��Ŀ����:
//������
//��Ŀ����
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��
//����Ϊ4�����ɷ��Ĺ���
//A˵ : �����ҡ�//1
//B˵ : ��C��//1
//c˵ : ��D��//0
//D˵ : C�ں�˵  //1
//1��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������

int main()
{
	
	//test();

	int killer = 0;

	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("������:%c", killer);
		}
	}

	return 0;
}