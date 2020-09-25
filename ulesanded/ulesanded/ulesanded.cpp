#include <iostream>
#include <list>

using namespace std;

float hinded()
{
	float hinne;
	float max = -1, min = 11;
	float summa = 0;
	for (int i = 1; i <= 5; i++) {
		do {
			cout << "sisesta hinne vahemikus 0 - 10 " << endl;

			cin >> hinne;
		} while (hinne < 0 || hinne>10);

		if (hinne < min) {
			min = hinne;
		}
		if (hinne > max) {
			max = hinne;
		}
		summa += hinne;


	}
	summa = summa - max - min;
	//float keskmine = summa % 3;
	cout << summa << endl;
	cout << "Hello World!\n";

	return 0;

}

int kaugusKuust()
{
	float pakkumine;
	float const kaugus = 100;

	cout << "Sisesta vahemaaa kuu ja maa vahel, v2ljumiseks 0" << endl;




	do {


		cin >> pakkumine;

		if (pakkumine == 0) {
			break;
		}

		if (pakkumine < kaugus) {
			cout << "su pakkumine oli v2ike" << endl;
		}
		else if (pakkumine > kaugus) {
			cout << "su pakkumine oli suur" << endl;

		}

	} while (fabs(kaugus - pakkumine) >= kaugus * 0.03);


	if (pakkumine == 0) {

		cout << "Cya" << endl;
	}
	else {
		cout << "u did well " << endl;

	}


	return 0;


}

void degusteerimine() {
	float degusteerijainput;
	float summa = 0;
	float summakeskmine;
	int n = 7;
	float hinnetearray[8];
	float erinevusKeskmisest[8];
	int erinevusejarjekorranr[8];
	float max = -1, min = 11;
	float erinevus;



	for (int i = 0; i < n; i++) {

		do {
			cout << "sisesta oma hinne toidule(0-10)" << endl;
			cin >> degusteerijainput;
			hinnetearray[i] = degusteerijainput;
			cout << "Array kohal" << i << "pandi number" << hinnetearray[i] << endl;

		} while (degusteerijainput < 0 || degusteerijainput>10);
		summa += degusteerijainput;
		cout << i + 1 << ". " << "degusteerija sisestas: " << degusteerijainput << endl;
		cout << " hinnete summa on hetkel: " << summa << endl;

	}
	cout << "Elements In The Array Are " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << hinnetearray[i] << " ";
	}
	cout << endl;
	summakeskmine = summa / n;

	int nr = 0;
	int a = 0;

	for (int i = 0; i < n; i++){
	
		erinevus = fabs(hinnetearray[i] - summakeskmine);
		erinevusKeskmisest[i] = erinevus;
		cout <<i+1<< "erinevus keskmisest on : " << erinevusKeskmisest[i] << endl;

		++nr;


		if (erinevus > max) {
			
			max = erinevus;
			//cout << "max on erinevus on : " << max << endl;
			erinevusejarjekorranr[a] = nr;

			cout << "NR                        :  " << nr << endl;
			cout << "A                        :  " << a << endl;
			cout << "MAX                        :  " << max << endl;

			a++;
		}



		
		
		
		





	}
	cout <<"keskmine on : "<< summakeskmine << endl;
	cout << "degusteerimine lõppes " << endl;
	cout << endl;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
	cout<< "PRINDIN ERINEVUSTE ARRAY     "<< erinevusejarjekorranr[i]<< endl;

		cout << i+1 <<". kohtunik andis hinde:"<< hinnetearray[i] << " "<< "tulemus erines keskmisest"<< erinevusKeskmisest[i]<<" punkti võrra" <<endl;
	}
}




int main() {
	cout << "Algab Degusteerimine" << endl;
	degusteerimine();
	cout << "Kuu kaugus" << endl;


	kaugusKuust();
	cout << "hinded" << endl;

	hinded();

}
