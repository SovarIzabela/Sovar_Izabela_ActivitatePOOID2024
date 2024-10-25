#include<iostream>
#include<string>
using namespace std;


class Preparat
{
private:
	string denumirePreparat;
	char tipMancare; // F pentru fel principal , M pentru mic dejun , A pentru aperitiv, D pentru desert
	int numarIngrediente;
	float pretPreparat;
	bool contineAlergeni;
public:
	Preparat(string denumirePreparat, char tipMancare, int numarIngrediente, float pretPreparat, bool contineAlergeni)
	{
		this->denumirePreparat = denumirePreparat;
		this->tipMancare = tipMancare;
		this->numarIngrediente = numarIngrediente;
		this->pretPreparat = pretPreparat;
		this->contineAlergeni = contineAlergeni;
	}

	Preparat()
	{
		this->denumirePreparat = "Anonim";
		this->tipMancare = 'u';
		this->numarIngrediente = 0;
		this->pretPreparat = 0;
		this->contineAlergeni = 0;
	}

	string getDenumirePreparat()
	{
		return this->denumirePreparat;
	}

	char getTipMancare()
	{
		return this->tipMancare;
	}

	int getNumarIngrediente()
	{
		return this->numarIngrediente;
	}

	float getPretPreparat()
	{
		return this->pretPreparat;
	}

	bool getContineAlergeni()
	{
		return this->contineAlergeni;
	}

	void setDenumirePreparat(string DenumireNouaPreparat)
	{
		this->denumirePreparat = DenumireNouaPreparat;
	}

	void setTipMancare(char TipNouMancare)
	{
		this->tipMancare = TipNouMancare;
	}

	void setNumarIngrediente(int NumarNouIngrediente)
	{
		this->numarIngrediente = NumarNouIngrediente;
	}

	void setPretpreparat(float PretNouPreparat)
	{
		this->pretPreparat = PretNouPreparat;
	}

	void setContineAlergeni(bool ContineAlergeniValoareNOUA)
	{
		this->contineAlergeni = ContineAlergeniValoareNOUA;
	}

	void afisare()
	{
		cout << "Denumirea Preparatului este: " << this->denumirePreparat << endl;
		cout << "Tipul de mancare este : " << this->tipMancare << endl;
		cout << "Numarul de Ingrediente este : " << this->numarIngrediente << endl;
		cout << "Pretul preparatului este : " << this->pretPreparat << endl;
		cout << "Contine Alergeni ? " << (this->contineAlergeni? "DA":"NU") << endl;
		cout << endl << endl;
	}



};

void main()
{
	Preparat m1("Omleta", 'M', 5, 25,0);
	Preparat m2("salata Cesar", 'A', 7, 35,1);
	Preparat m3;

	m1.afisare();
	m2.afisare();
	m3.afisare();

	m1.setPretpreparat(30);
	m1.setContineAlergeni(1);
	m1.setDenumirePreparat("Omleta cu cascaval");
	m1.setNumarIngrediente(6);
	m1.setTipMancare('A');
	cout << "......Valoare modificata m1..............." << endl;
	m1.afisare();

}