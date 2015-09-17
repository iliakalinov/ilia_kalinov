
#include <iostream>
using namespace std;

class BoolMatrix{
private:
	bool a[7][7];

public:
	BoolMatrix(); 
	~BoolMatrix();
	void BoolMatrixSum(BoolMatrix);
	//void 
	void  BoolMatrixRand();
	void BoolMatrixPrint();
	void BoolMatrixProizvedenie(BoolMatrix);
	void BoolMatrixInvercia();
	void BoolMatrixSkolkoEdinic();
	void BoolMatrixLekcika();
	void BoolMatrixMinANDMax(BoolMatrix, BoolMatrix, BoolMatrix, BoolMatrix, BoolMatrix);
	void BoolMatrixRavnoEdINol(BoolMatrix, BoolMatrix, BoolMatrix, BoolMatrix, BoolMatrix, BoolMatrix);
	int BoolMatrixNolIEd();
};














