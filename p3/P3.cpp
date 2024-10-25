#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


class Preparat
{
private:
	string denumirePreparat;
	char tipMancare; // F pentru fel principal , M pentru mic dejun , A pentru aperitiv, D pentru desert
	float pretPreparat;
	bool contineAlergeni;
	const int codPreparat;
	static string OriginePreparat;
    char* numeRestaurant;
	int numarIngrediente;
	string* listaIngrediente;
	float* pretIngrediente;
	 

public:
	Preparat(string denumirePreparat, char tipMancare, float pretPreparat, bool contineAlergeni, int codPreparat, const char*numeRestaurant, int numarIngrediente, string* listaIngrediente, float*pretIngrediente):codPreparat(codPreparat)
	{
		this->denumirePreparat = denumirePreparat;
		this->tipMancare = tipMancare;
		this->pretPreparat = pretPreparat;
		this->contineAlergeni = contineAlergeni;
		this->numeRestaurant = new char[strlen(numeRestaurant) + 1];
		strcpy(this->numeRestaurant, numeRestaurant);
		this->numarIngrediente = numarIngrediente;
		this->listaIngrediente = new string[this->numarIngrediente];
		this->pretIngrediente = new float[this->numarIngrediente];

		for (int i = 0; i < this->numarIngrediente; i++)
		{

			this->listaIngrediente[i] = listaIngrediente[i];
			this->pretIngrediente[i] = pretIngrediente[i];
		}


	}

	Preparat():codPreparat(0)
	{
		this->denumirePreparat = "Anonim";
		this->tipMancare = 'u';
		this->pretPreparat = 0;
		this->contineAlergeni = 0;
		this->numeRestaurant = new char[strlen("necunoscut") + 1];
		strcpy(this->numeRestaurant, "necunoscut");
		this->numarIngrediente = 0;
		this->listaIngrediente = NULL;
		this->pretIngrediente = NULL;

	}
	//getteri
	string getDenumirePreparat()
	{
		return this->denumirePreparat;
	}

	char getTipMancare()
	{
		return this->tipMancare;
	}

	

	float getPretPreparat()
	{
		return this->pretPreparat;
	}

	bool getContineAlergeni()
	{
		return this->contineAlergeni;
	}

	int getCodPreparat()
	{
		return this->codPreparat;
	}

	char* getNumeRestaurant()
	{
		return this->numeRestaurant;
	}

	int getNumarIngrediente()
	{
		return this->numarIngrediente;
	}

	string* getListaIngrediente()
	{
		return this->listaIngrediente;
	}
	float* getPretIngrediente()
	{
		return this->pretIngrediente;
	}

	//seteri
	void setDenumirePreparat(string DenumireNouaPreparat)
	{
		this->denumirePreparat = DenumireNouaPreparat;
	}

	void setTipMancare(char TipNouMancare)
	{
		this->tipMancare = TipNouMancare;
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
		cout << "Pretul preparatului este : " << this->pretPreparat << endl;
		cout << "Contine Alergeni ? " << (this->contineAlergeni? "DA":"NU") << endl;
		cout << "Cod preparat: " << this->codPreparat << endl;
		cout << "Numele restaurantului este : " << this->numeRestaurant << endl;
		cout << "Numarul de ingrediente este : " << this->numarIngrediente << endl;
		cout << "Lista de ingrediente si pretul acestora: " << endl;
		for (int i = 0; i < this->numarIngrediente; i++)
		{
			cout << "Ingredient : " << this->listaIngrediente[i] << endl;
			cout << "Pret Ingredient: " << this->pretIngrediente[i] << endl;
		}
		cout << endl << endl;
	}



};

string Preparat::OriginePreparat = "Romania";

void main()
{
	string listaingrediente1[] = { "oua", "ulei", "sare" };
	float pretIngredient1[] = { 5.0, 1.0, 0.10 };
	Preparat m1("Omleta", 'M', 25,0,123, "UrbanHouse", 3,listaingrediente1,pretIngredient1 );


	string listaingrediente2[] = { "rosii", "castraveti", "pui", "branza", "ceapa", "dressing"};
	float pretIngredient2[] = { 1.0, 1.0, 5.10, 2.0, 0.5, 2 };
	Preparat m2("salata Cesar", 'A', 35,1, 124,"Mahala",6, listaingrediente2, pretIngredient2);
	cout << "denumire preparat " << m2.getDenumirePreparat() << endl;
	cout << "Tip mancare: " << m2.getTipMancare() << endl;
	cout << "Pretul Preparatului: " << m2.getPretPreparat() << endl;
	cout << "Contine alergeni? " << m2.getContineAlergeni() << endl;
	cout << "Codul preparatului este: " << m2.getCodPreparat() << endl;
	cout << "Numele restaurantului este : " << m2.getNumeRestaurant() << endl;
	cout << "Numarul de ingrediente este : " << m2.getNumarIngrediente() << endl;
	cout << "Lista de ingrediente si pretul acestora: " << endl;
	for (int i = 0; i < m2.getNumarIngrediente(); i++)
	{
		cout<<"Ingredient : " << m2.getListaIngrediente()[i] << endl;
		cout<<"Pret Ingredient: " << m2.getPretIngrediente()[i] << endl;
	}

	cout << endl << endl;

	Preparat m3;

	m1.afisare();
	
	m3.afisare();

	m1.setPretpreparat(30);
	m1.setContineAlergeni(1);
	m1.setDenumirePreparat("Omleta cu cascaval");
	m1.setTipMancare('A');
	cout << "......Valoare modificata m1..............." << endl;
	m1.afisare();

}