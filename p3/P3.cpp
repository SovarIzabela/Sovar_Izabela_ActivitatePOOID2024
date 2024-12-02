#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>

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

	void setNumeRestaurant(const char* numeRestaurantNou)
	{
		if (this->numeRestaurant != NULL)
		{
			delete[]this->numeRestaurant;
		}
		this->numeRestaurant = new char[strlen(numeRestaurantNou) + 1];
		strcpy(this->numeRestaurant, numeRestaurantNou);
	}

	void setIngrediente(int numarIngredienteNou, string* listaIngredienteNou, float* pretIngredienteNou)
	{
		if (this->listaIngrediente != NULL)
		{
			delete[]this->listaIngrediente;
		}

		if (this->pretIngrediente != NULL)
		{
			delete[]this->pretIngrediente;
		}


		this->numarIngrediente = numarIngredienteNou;

		this->listaIngrediente = new string[this->numarIngrediente];
		this->pretIngrediente = new float[this->numarIngrediente];

		for (int i = 0; i < this->numarIngrediente; i++)
		{

			this->listaIngrediente[i] = listaIngredienteNou[i];
			this->pretIngrediente[i] = pretIngredienteNou[i];
		}


	}

	~Preparat()
	{
		if (this->numeRestaurant != NULL)
		{
			delete[]this->numeRestaurant;
		}
		if (this->listaIngrediente != NULL)
		{
			delete[]this->listaIngrediente;
		}

		if (this->pretIngrediente != NULL)
		{
			delete[]this->pretIngrediente;
		}


	}


	Preparat(Preparat&obiectExistent) :codPreparat(codPreparat)
	{
		this->denumirePreparat = obiectExistent.denumirePreparat;
		this->tipMancare = obiectExistent.tipMancare;
		this->pretPreparat = obiectExistent.pretPreparat;
		this->contineAlergeni = obiectExistent.contineAlergeni;
		this->numeRestaurant = new char[strlen(obiectExistent.numeRestaurant) + 1];
		strcpy(this->numeRestaurant, obiectExistent.numeRestaurant);
		this->numarIngrediente = obiectExistent.numarIngrediente;
		this->listaIngrediente = new string[obiectExistent.numarIngrediente];
		this->pretIngrediente = new float[obiectExistent.numarIngrediente];

		for (int i = 0; i < this->numarIngrediente; i++)
		{

			this->listaIngrediente[i] = obiectExistent.listaIngrediente[i];
			this->pretIngrediente[i] = obiectExistent.pretIngrediente[i];
		}
	}
	

	Preparat& operator=(Preparat& obiectMatrice)
	{

		if (this->numeRestaurant != NULL)
		{
			delete[]this->numeRestaurant;
		}
		if (this->listaIngrediente != NULL)
		{
			delete[]this->listaIngrediente;
		}

		if (this->pretIngrediente != NULL)
		{
			delete[]this->pretIngrediente;
		}

		this->denumirePreparat = obiectMatrice.denumirePreparat;
		this->tipMancare = obiectMatrice.tipMancare;
		this->pretPreparat = obiectMatrice.pretPreparat;
		this->contineAlergeni = obiectMatrice.contineAlergeni;
		this->numeRestaurant = new char[strlen(obiectMatrice.numeRestaurant) + 1];
		strcpy(this->numeRestaurant, obiectMatrice.numeRestaurant);
		this->numarIngrediente = obiectMatrice.numarIngrediente;
		this->listaIngrediente = new string[obiectMatrice.numarIngrediente];
		this->pretIngrediente = new float[obiectMatrice.numarIngrediente];

		for (int i = 0; i < this->numarIngrediente; i++)
		{

			this->listaIngrediente[i] = obiectMatrice.listaIngrediente[i];
			this->pretIngrediente[i] = obiectMatrice.pretIngrediente[i];
		}

		return *this;


	}


	float pretMinim()
	{
		
		float rezultat;
		rezultat = this->pretIngrediente[0];
		for (int i = 1; i < this->numarIngrediente; i++)
		{
			if (this->pretIngrediente[i]<rezultat)
			{
				rezultat = this->pretIngrediente[i];
			}
		}

		return rezultat;

	}

	float SumaPret()
	{
		float suma = 0;
		for (int i = 0; i < this->numarIngrediente; i++)
		{
			suma = suma + this->pretIngrediente[i];
		}
		return suma;
	}

	float mediaPret()
	{
		float media;
		media = SumaPret() / numarIngrediente;
		return media;
	}


	void discount(float discount)
	{
		if (discount < 0.0f || discount>1.0f)
		{
			throw exception("discountul nu este corect");
		}
		pretPreparat = pretPreparat - pretPreparat * discount;
	}
	
	//METODA DE ADAUGARE ELEMENT IN VECTOR
	void adaugaElement(string IngredientNou, float PretNou)
	{
		Preparat copie(*this);

		
		delete[]this->listaIngrediente;
		delete[] this->pretIngrediente;

		numarIngrediente++;

		this->listaIngrediente = new string[this->numarIngrediente];
		this->pretIngrediente = new float[this->numarIngrediente];

		for (int i = 0; i < copie.numarIngrediente; i++)
		{
			this->listaIngrediente[i] = copie.listaIngrediente[i];
			this->pretIngrediente[i] = copie.pretIngrediente[i];
		}

		this->listaIngrediente[numarIngrediente - 1] = IngredientNou;
		this->pretIngrediente[numarIngrediente - 1] = PretNou;

	}

	//METODA DE ELIMINARE DIN VECTOR
	//Operatorul <= . Sa se verifice daca pretul unui preparat <= decat pretul altui preparat

	bool operator<=(const Preparat& p)
	{
		if (this->pretPreparat <= p.pretPreparat)
		{
			return true;
		}
		else
		{
			return false;
		}


	}
	//Operatorul ==

	friend ostream& operator<<(ostream& out, const Preparat& h)
	{
		out << "Denumirea Preparatului este: " << h.denumirePreparat << endl;
		out << "Tipul de mancare este : " << h.tipMancare << endl;
		out << "Pretul preparatului este : " << h.pretPreparat << endl;
		out << "Contine Alergeni ? " << (h.contineAlergeni ? "DA" : "NU") << endl;
		out << "Cod preparat: " << h.codPreparat << endl;
		out << "Numele restaurantului este : " << h.numeRestaurant << endl;
		out << "Numarul de ingrediente este : " << h.numarIngrediente << endl;
		out << "Lista de ingrediente si pretul acestora: " << endl;
		for (int i = 0; i < h.numarIngrediente; i++)
		{
			out << "Ingredient : " << h.listaIngrediente[i] << endl;
			out << "Pret Ingredient: " << h.pretIngrediente[i] << endl;
		}
		out << endl << endl;

		return out;
	}


	
	friend istream& operator>>(istream& in, Preparat& p)
	{
		if (p.numeRestaurant != NULL)
		{
			delete[]p.numeRestaurant;
		}
		if (p.listaIngrediente != NULL)
		{
			delete[]p.listaIngrediente;
		}

		if (p.pretIngrediente != NULL)
		{
			delete[]p.pretIngrediente;
		}
		cout << "Introduceti denumirea Preparatului : ";
		in >> p.denumirePreparat;
		cout << "Introduceti tipul de mancare: ";
		in >> p.tipMancare;
		cout << "Introduceti Pretul preparatului : ";
		in >> p.pretPreparat;
		cout << "Contine Alergeni ? ";
		in >> p.contineAlergeni;
		cout << "Introduceti numele restaurantului : ";
		char aux[100];
		in >> aux;
		p.numeRestaurant = new char[strlen(aux) + 1];
		strcpy(p.numeRestaurant, aux);
		
		cout << "Introduceti numarul de ingrediente : ";
		in >> p.numarIngrediente;
		cout << "Introduceti lista de ingrediente si pretul acestora: ";
		cout << "Introduceti ingredientele : ";
		p.listaIngrediente = new string[p.numarIngrediente];
		p.pretIngrediente = new float[p.numarIngrediente];
		for (int i = 0; i < p.numarIngrediente; i++)
		{
			
			in >> p.listaIngrediente[i];
			
		}
		cout << "Introduceti preturile";
		for (int i = 0; i < p.numarIngrediente; i++)
		{
			
			
			in >> p.pretIngrediente[i];
		}
		cout << endl << endl;

		return in;


	}


	//Opertaorul [] - de indexare
	string operator[](int pozitieCautata)
	{
		if (pozitieCautata >= 0 && pozitieCautata < this->numarIngrediente)
		{
			return this->listaIngrediente[pozitieCautata];
		}
		else
		{
			return "Pozitia a fost introdusa gresit;";
		}


	}

	//Operatorul () - functie
	//Operatorul ! - de negatie

	friend void operator!( Preparat& p)
	{
		
		if (p.contineAlergeni == 1)
		{
			p.contineAlergeni = 0;
		}
		else if(p.contineAlergeni==0)
		{
			p.contineAlergeni = 1;
		}
	}

	//Operatorul de autoasignare +=
	//Operatorul -=
	//Operatorul de cast
	//FISERE TEXT SI FISIERE BINARE
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
	m1.setNumeRestaurant("Duman");
	string lista1[] = { "oua", "cascaval", "sare", "condimente" };
	float pret1[] = { 2,1,0.5,0.5 };
	m1.setIngrediente(4, lista1, pret1);
	cout << "......Valoare modificata m1..............." << endl<<endl;
	m1.afisare();

	Preparat m4(m1);
	
	cout << "......Valoare m4..............." << endl<<endl;
	m4.afisare();
	
	cout << "......Valoare m1..............." << endl << endl;
	m1.afisare();
	cout << "......Valoare m3 inainte..............." << endl << endl;
	m3.afisare();
	m3 = m1;
	cout << "......Valoare m3 dupa modificare..............." << endl << endl;
	m3.afisare();

	cout << "m1" <<endl<< m1 << endl << endl;

	/*cin >> m4;*/

	cout << "m4 dupa ce a fost introdus de la tastatura" << endl << m4 << endl << endl;
	cout << m1 << endl << endl;
	cout << "Pretul minim al obiectului M1 este:" << m1.pretMinim() << endl;
	cout << "Suma preturilor obiectului M1 este:" << m1.SumaPret() << endl;
	cout << "Media preturilor obiectului M1 este:" << m1.mediaPret() << endl;

	cout << m1.getPretPreparat() << endl;
	m1.discount(0.2);
	cout << m1.getPretPreparat() << endl;
	try{
	
			m1.discount(1.5f);
	}catch (exception e)
	{
		cout << "eroare" << endl;
	}

	m1.adaugaElement("marar", 0.5);

	cout << m1 << endl << endl;

	if (m1 <= m2)
	{
		cout << "Pretul Preparatului m1<= pretul preparatului m2";

	}
	else
	{
		cout << "Pretul Preparatului m1 > pretul preparatului m2";
	}

	cout << m1[2] << endl;

	cout << m2.getContineAlergeni() << endl << endl;

	!m2;
	cout << m2.getContineAlergeni() << endl << endl;
}