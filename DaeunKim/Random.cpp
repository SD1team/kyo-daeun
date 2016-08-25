#include <cstdlib> // 랜덤함수 쓰기위한 
#include <ctime> 
#include "Random.h"

void random::cNum(int num)		//난수생성 함수
{
	
	srand((unsigned int)time(NULL));

	rArr = new int[num];

	for(int i=0; i<num; i++){
		int nansoo = (((rand() << 15) | rand()) % 1000000 + 1);

		rArr[i] = nansoo;

		for(int j=0; j<i; j++){			//중복 제거
			if(rArr[i] == rArr[j])
			{
				i--;
				break;
			}
		}
	}	
}