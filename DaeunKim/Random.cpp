#include <cstdlib> // �����Լ� �������� 
#include <ctime> 
#include "Random.h"

void random::cNum(int num)		//�������� �Լ�
{
	
	srand((unsigned int)time(NULL));

	rArr = new int[num];

	for(int i=0; i<num; i++){
		int nansoo = (((rand() << 15) | rand()) % 1000000 + 1);

		rArr[i] = nansoo;

		for(int j=0; j<i; j++){			//�ߺ� ����
			if(rArr[i] == rArr[j])
			{
				i--;
				break;
			}
		}
	}	
}