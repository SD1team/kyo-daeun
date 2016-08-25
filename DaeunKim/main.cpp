#include <algorithm>
#include <fstream> // c++���� ����� ���� Ŭ����
#include <iostream>

#include "Random.h"

using namespace std;

int main(int argc, const char * argv[])
{
	int A[a], B[b], *C;
	int i, j, index=0, k=0;
	ofstream aout, bout, rout, kyout;		// �ؽ�Ʈ���� �����ϱ�
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


	//������ �������ϱ�
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			if(A[i] == B[j]){
				index += 1;
			}
		}
	}

	cout << "������ ����: " << index << endl;


	//�����迭 ���� ��, �������� C�迭�� ����

	C = new int[index];

	kyout.open("kyo.txt");

	for(i=0; i<a; i++){ // ������ ã��
		for(j=0; j<b; j++){
			if(A[i] == B[j]){
				C[k] = A[i];
				kyout << C[k] <<endl;
				k++;
			}
		}
	}
	kyout.close();


	//��������
	sort(C, C+index);

	rout.open("R.txt");

	// ���������� �迭 ���
	for(i=0; i<index; i++){ 
		rout << C[i] << endl;
	}
	rout.close();

	delete []C;

	return 0;
}