#include <algorithm>
#include <fstream> // c++파일 입출력 제공 클래스
#include <iostream>

#include "Random.h"

using namespace std;

int main(int argc, const char * argv[])
{
	int A[a], B[b], *C;
	int i, j, index=0, k=0;
	ofstream aout, bout, rout, kyout;		// 텍스트파일 생성하기
	ifstream aopen, bopen;
	
	random r;

	aout.open("A.txt");		
	r.cNum(a);
	for(i=0; i<a; i++){
		A[i] = r.rArr[i];
		aout << r.rArr[i] << endl;
	}
	aout.close();


	bout.open("B.txt");
	r.cNum(b);
	for(i=0; i<b; i++){
		B[i] = r.rArr[i];
		bout << r.rArr[i] << endl;
	}
	bout.close();


	//교집합 갯수구하기
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			if(A[i] == B[j]){
				index += 1;
			}
		}
	}

	cout << "교집합 갯수: " << index << endl;


	//동적배열 생성 후, 교집합을 C배열에 저장

	C = new int[index];

	kyout.open("kyo.txt");

	for(i=0; i<a; i++){ // 교집합 찾기
		for(j=0; j<b; j++){
			if(A[i] == B[j]){
				C[k] = A[i];
				kyout << C[k] <<endl;
				k++;
			}
		}
	}
	kyout.close();


	//오름차순
	sort(C, C+index);

	rout.open("R.txt");

	// 오름차순된 배열 출력
	for(i=0; i<index; i++){ 
		rout << C[i] << endl;
	}
	rout.close();

	delete []C;

	return 0;
}