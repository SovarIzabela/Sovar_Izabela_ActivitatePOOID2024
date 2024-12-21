#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>

using namespace std;


class Preparat
{
protected:
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


	void eliminaElement(int pozitie)
	{
		Preparat copie(*this);

		delete[]this->listaIngrediente;
		delete[] this->pretIngrediente;

		numarIngrediente--;

		this->listaIngrediente = new string[this->numarIngrediente];
		this->pretIngrediente = new float[this->numarIngrediente];
		for (int i = 0; i < pozitie; i++)
		{
			this->listaIngrediente[i] = copie.listaIngrediente[i];
			this->pretIngrediente[i] = copie.pretIngrediente[i];

		}

		for (int i = pozitie; i < copie.numarIngrediente; i++)
		{
			this->listaIngrediente[i - 1] = copie.listaIngrediente[i];
			this->pretIngrediente[i - 1] = copie.pretIngrediente[i];
		}

		



	}

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
	
	bool operator==(Preparat& p)
	{
		bool ok = 1;

		if ((this->denumirePreparat == p.denumirePreparat) && (this->tipMancare == p.tipMancare) && (this->pretPreparat == p.pretPreparat)
			&& (this->contineAlergeni == p.contineAlergeni) && (strcmp(this->numeRestaurant, p.numeRestaurant) == 0) && (this->numarIngrediente == p.numarIngrediente))
		{
			for (int i = 0; i < this->numarIngrediente; i++)
			{
				if ((this->listaIngrediente == p.listaIngrediente) && (this->pretIngrediente == p.pretIngrediente))
				{

				}
				else
				{
					ok = 0;
				}
			}
			if (ok == 1)
			{
				return 1;
			 }
			else
			{
				return 0;
			}

		}


	}

	friend ostream& operator<<(ostream& out, const Preparat& h)
	{
		out << "Denumirea Preparatului este: " << h.denumirePreparat << endl;
		out << "Tipul de mancare este : " << h.tipMancare << endl;
		out << "Pretul preparatului este : " << h.pretPreparat << endl;
		out << "Contine Alergeni ? " << (h.contineAlergeni ? "DA" : "NU") << endl;
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


	float operator()(float TVA)
	{
		return this->pretPreparat = pretPreparat + pretPreparat * TVA;

	}



	friend void operator!(Preparat&p)
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

	
	Preparat& operator+=(string	ingredientNou)
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

		this->listaIngrediente[numarIngrediente - 1] = ingredientNou;
		this->pretIngrediente[numarIngrediente - 1] = 0;

		return(*this);

	}

	
	Preparat& operator-=(int pozitie)
	{
		Preparat copie(*this);
		
		delete[]this->listaIngrediente;
		delete[] this->pretIngrediente;

		numarIngrediente--;

		this->listaIngrediente = new string[this->numarIngrediente];
		this->pretIngrediente = new float[this->numarIngrediente];
		for (int i = 0; i < pozitie; i++)
		{
			this->listaIngrediente[i] = copie.listaIngrediente[i];
			this->pretIngrediente[i] = copie.pretIngrediente[i];

		}

		for (int i = pozitie; i < copie.numarIngrediente; i++)
		{
			this->listaIngrediente[i-1] = copie.listaIngrediente[i];
			this->pretIngrediente[i-1] = copie.pretIngrediente[i];
		}

		return(*this);



	}
	//Operatorul de cast
	//FISERE TEXT SI FISIERE BINARE
	friend ofstream& operator<<(ofstream& file, const Preparat& h)
	{
		file <<  h.denumirePreparat << endl;
		file <<  h.tipMancare << endl;
		file << h.pretPreparat << endl;
		file <<  h.contineAlergeni <<endl;
		file << h.numeRestaurant << endl;
		file << h.numarIngrediente << endl;
		
		for (int i = 0; i < h.numarIngrediente; i++)
		{
			file <<h.listaIngrediente[i] << endl;
			file << h.pretIngrediente[i] << endl;
		}
	

		return file;


	}

	friend ifstream& operator>>(ifstream& file, Preparat& p)
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
		

		file >> p.denumirePreparat;
		file >> p.tipMancare;
		file >> p.pretPreparat;
		file >> p.contineAlergeni;

		char aux[100];
		file >> aux;
		p.numeRestaurant = new char[strlen(aux) + 1];
		strcpy(p.numeRestaurant, aux);

		file >> p.numarIngrediente;

		p.listaIngrediente = new string[p.numarIngrediente];
		p.pretIngrediente = new float[p.numarIngrediente];

		for (int i = 0; i < p.numarIngrediente; i++)
		{
			file >> p.listaIngrediente[i];
			file >> p.pretIngrediente[i];
		}

	

		return file;
	}

	void scriereBinar(fstream& fisier)
	{
		//string denumirePreparat;
		int numereDenumirePreparat = denumirePreparat.size();
		fisier.write((char*)&numereDenumirePreparat, sizeof(int));
		fisier.write(this->denumirePreparat.c_str(), numereDenumirePreparat);
		//char tipMancare; 
		fisier.write((char*)&this->tipMancare, sizeof(char));
		//float pretPreparat;
		fisier.write((char*)&this->pretPreparat, sizeof(float));
		//bool contineAlergeni;
		fisier.write((char*)&this->contineAlergeni, sizeof(bool));
		//char* numeRestaurant;
		int numarNumeRestaurant = strlen(this->numeRestaurant);
		fisier.write((char*)&numarNumeRestaurant, sizeof(int));
		for (int i = 0; i < numarNumeRestaurant; i++)
		{
			fisier.write((char*)&this->numeRestaurant[i], sizeof(char));
		}

		//int numarIngrediente;
		fisier.write((char*)&this->numarIngrediente, sizeof(int));
		//string* listaIngrediente;
		for (int i = 0; i < this->numarIngrediente; i++)
		{
			int numerelistaIng = listaIngrediente[i].size();
			fisier.write((char*)&numerelistaIng, sizeof(int));
			fisier.write(this->listaIngrediente[i].c_str(), numerelistaIng);
		}
		//float* pretIngrediente;

		for (int i = 0; i < this->numarIngrediente; i++)
		{
			fisier.write((char*)&this->pretIngrediente[i], sizeof(float));
		}

	}

	void citireBinar(fstream& fisier)
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

		//string denumirePreparat;
		int numereDenumirePreparat;
		fisier.read((char*)&numereDenumirePreparat, sizeof(int));
		string aux;
		aux.resize(numereDenumirePreparat);
		fisier.read(&aux[0], numereDenumirePreparat);
		this->denumirePreparat = aux;
		//char tipMancare; 
		fisier.read((char*)&this->tipMancare, sizeof(char));
		//float pretPreparat;
		fisier.read((char*)&this->pretPreparat, sizeof(float));
		//bool contineAlergeni;
		fisier.read((char*)&this->contineAlergeni, sizeof(bool));
		//char* numeRestaurant;
		int numarNumeRestaurant;
		fisier.read((char*)&numarNumeRestaurant, sizeof(int));
		this->numeRestaurant = new char[numarNumeRestaurant + 1];
		for (int i = 0; i < numarNumeRestaurant; i++)
		{
			fisier.read((char*)&this->numeRestaurant[i], sizeof(char));
		}
		this->numeRestaurant[numarNumeRestaurant] = '\0';
		//int numarIngrediente;
		fisier.read((char*)&this->numarIngrediente, sizeof(int));
		//string* listaIngrediente;
		this->listaIngrediente = new string[this->numarIngrediente];
		for (int i = 0; i < this->numarIngrediente; i++)
		{
			int numerelistaing;
			fisier.read((char*)&numerelistaing, sizeof(int));
			string aux;
			aux.resize(numerelistaing);
			fisier.read((char*)aux.c_str(), numerelistaing);
			this->listaIngrediente[i] = aux;
		}
		//float* pretIngrediente;
		this->pretIngrediente = new float[this->numarIngrediente];
		for (int i = 0; i < this->numarIngrediente; i++)
		{
			fisier.read((char*)&this->pretIngrediente[i], sizeof(float));
		}

	}




};

string Preparat::OriginePreparat = "Romania";

class preparatIndian:public Preparat
{
	int nrIngredienteIndiene;
	string* denumireCondimenteIndiene;
	float* cantitateIngredienteIndiene;
public:
	preparatIndian() :Preparat()
	{
		this->nrIngredienteIndiene = 0;
		this->denumireCondimenteIndiene = NULL;
		this->cantitateIngredienteIndiene = NULL;

	}

	preparatIndian(int nrIngredienteIndiene, string* denumireCondimenteIndiene, float* cantitateIngredienteIndiene, string denumirePreparat, char tipMancare, float pretPreparat, bool contineAlergeni, int codPreparat, const char* numeRestaurant, int numarIngrediente, string* listaIngrediente, float* pretIngrediente) :Preparat(denumirePreparat, tipMancare, pretPreparat, contineAlergeni, codPreparat, numeRestaurant, numarIngrediente, listaIngrediente, pretIngrediente)
	{
		this->nrIngredienteIndiene = nrIngredienteIndiene;
		this->denumireCondimenteIndiene = new string[this->nrIngredienteIndiene];
		this->cantitateIngredienteIndiene = new float[this->nrIngredienteIndiene];
		for (int i = 0; i < this->nrIngredienteIndiene; i++)
		{
			this->denumireCondimenteIndiene[i] = denumireCondimenteIndiene[i];
			this->cantitateIngredienteIndiene[i] = cantitateIngredienteIndiene[i];
		}

	}
	int getNumarIngredienteIndiene()
	{
		return this->nrIngredienteIndiene;
	}
	string* getDenumireCondimenteIndiene()
	{
		return this->denumireCondimenteIndiene;
	}
	float* getCantitateCondimenteIndiene()
	{
		return this->cantitateIngredienteIndiene;
	}

	void setIngredienteIndiene(int nrIngredienteIndiene, string*denumireCondimenteIndiene, float*cantitateIngredienteIndiene)
	{
		if (this->denumireCondimenteIndiene != NULL)
		{
			delete[]this->denumireCondimenteIndiene;
		}

		if (this->cantitateIngredienteIndiene != NULL)
		{
			delete[] this->cantitateIngredienteIndiene;
		}
		this->nrIngredienteIndiene = nrIngredienteIndiene;
		this->denumireCondimenteIndiene = new string[nrIngredienteIndiene];
		this->cantitateIngredienteIndiene = new float[nrIngredienteIndiene];
		for (int i = 0; i < this->nrIngredienteIndiene; i++)
		{
			this->denumireCondimenteIndiene[i] = denumireCondimenteIndiene[i];
			this->cantitateIngredienteIndiene[i] = cantitateIngredienteIndiene[i];
		}

	}

	~preparatIndian()
	{
		if (this->denumireCondimenteIndiene != NULL)
		{
			delete[]this->denumireCondimenteIndiene;
		}

		if (this->cantitateIngredienteIndiene != NULL)
		{
			delete[] this->cantitateIngredienteIndiene;
		}
	}


	preparatIndian(preparatIndian& pi):Preparat(pi)
	{
		this->nrIngredienteIndiene = pi.nrIngredienteIndiene;
		this->denumireCondimenteIndiene = new string[this->nrIngredienteIndiene];
		this->cantitateIngredienteIndiene = new float[this->nrIngredienteIndiene];
		for (int i = 0; i < this->nrIngredienteIndiene; i++)
		{
			this->denumireCondimenteIndiene[i] = pi.denumireCondimenteIndiene[i];
			this->cantitateIngredienteIndiene[i] =pi.cantitateIngredienteIndiene[i];
		}

	}

	preparatIndian& operator=(preparatIndian& pi)
	{
		if(this!= (&pi))
		{
			Preparat::operator=(pi);
			if (this->denumireCondimenteIndiene != NULL)
			{
				delete[]this->denumireCondimenteIndiene;
			}

			if (this->cantitateIngredienteIndiene != NULL)
			{
				delete[] this->cantitateIngredienteIndiene;
			}

			this->nrIngredienteIndiene = pi.nrIngredienteIndiene;
			this->denumireCondimenteIndiene = new string[this->nrIngredienteIndiene];
			this->cantitateIngredienteIndiene = new float[this->nrIngredienteIndiene];
			for (int i = 0; i < this->nrIngredienteIndiene; i++)
			{
				this->denumireCondimenteIndiene[i] = pi.denumireCondimenteIndiene[i];
				this->cantitateIngredienteIndiene[i] = pi.cantitateIngredienteIndiene[i];
			}
		}

		return *this;

	}

	friend ostream& operator<<(ostream& out, preparatIndian& pi)
	{
		/*int nrIngredienteIndiene;
		string* denumireCondimenteIndiene;
		float* cantitateIngredienteIndiene;*/

		
		out << "Numarul de ingrediente este : " << pi.nrIngredienteIndiene << endl;
		out << "Denumirea ingredientelor si cantitatea acestora este : " << endl;
		for (int i = 0; i < pi.nrIngredienteIndiene; i++)
		{
			out << pi.denumireCondimenteIndiene[i] << endl;
			out << pi.cantitateIngredienteIndiene[i] << endl;
		}

		out << (Preparat&)pi;

		return out;
	}
		
	friend istream& operator>>(istream& in, preparatIndian& pi)
	{

		cout << "Introduceti numarul de ingrediente : ";
		in >> pi.nrIngredienteIndiene;
		cout << "Ingtroduceti denumirea ingredientelor si cantitatea acestora : " << endl;
		for (int i = 0; i < pi.nrIngredienteIndiene; i++)
		{
			cout << "Introduceti denumirea : ";
			in >> pi.denumireCondimenteIndiene[i];
			cout << "Introduceti cantitatea: ";
			in >> pi.cantitateIngredienteIndiene[i];
		}

		in >> (Preparat&)pi;

		return in;
	}

};

void main()
{
	string listaingrediente1[] = { "oua", "ulei", "sare" };
	float pretIngredient1[] = { 5.0, 1.0, 0.10 };
	Preparat m1("Omleta", 'M', 25, 0, 123, "UrbanHouse", 3, listaingrediente1, pretIngredient1);


	string listaingrediente2[] = { "rosii", "castraveti", "pui", "branza", "ceapa", "dressing" };
	float pretIngredient2[] = { 1.0, 1.0, 5.10, 2.0, 0.5, 2 };
	Preparat m2("salata Cesar", 'A', 35, 1, 124, "Mahala", 6, listaingrediente2, pretIngredient2);
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
		cout << "Ingredient : " << m2.getListaIngrediente()[i] << endl;
		cout << "Pret Ingredient: " << m2.getPretIngrediente()[i] << endl;
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
	cout << "......Valoare modificata m1..............." << endl << endl;
	m1.afisare();

	Preparat m4(m1);

	cout << "......Valoare m4..............." << endl << endl;
	m4.afisare();

	cout << "......Valoare m1..............." << endl << endl;
	m1.afisare();
	cout << "......Valoare m3 inainte..............." << endl << endl;
	m3.afisare();
	m3 = m1;
	cout << "......Valoare m3 dupa modificare..............." << endl << endl;
	m3.afisare();

	cout << "m1" << endl << m1 << endl << endl;

	/*cin >> m4;*/

	cout << "m4 dupa ce a fost introdus de la tastatura" << endl << m4 << endl << endl;
	cout << m1 << endl << endl;
	cout << "Pretul minim al obiectului M1 este:" << m1.pretMinim() << endl;
	cout << "Suma preturilor obiectului M1 este:" << m1.SumaPret() << endl;
	cout << "Media preturilor obiectului M1 este:" << m1.mediaPret() << endl;

	cout << m1.getPretPreparat() << endl;
	m1.discount(0.2);
	cout << m1.getPretPreparat() << endl;
	try {

		m1.discount(1.5f);
	}
	catch (exception e)
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


	m2 += ("sare");
	cout << m2;
	cout << m1;
	m1 -= (2);
	cout << m1;


	cout << m4;
	m4.eliminaElement(1);
	cout << m4;

	cout << "Obictul m1 este egal in totalitate cu m2? (0-NU, 1-DA)" << (m1 == m2) << endl << endl;

	cout << m4;
	cout << "Pretul cu TVA al obectului m4 este : " << m4(0.19) << endl;


	ofstream f1("FisierText.txt", ios::out);
	f1 << m2;
	f1.close();

	cout << m1;

	ifstream f2("FisierText.txt", ios::in);
	f2 >> m1;
	f2.close();

	cout << m1;

	fstream f3("fisierBin.bin", ios::binary | ios::out);
	m1.scriereBinar(f3);
	f3.close();
	cout << m1;

	fstream f4("fisierBin.bin", ios::binary | ios::in);
	m2.citireBinar(f4);
	f4.close();
	cout << m2;

	preparatIndian pi1;
	cout << "Numarul de ingrediente indiene este : " << pi1.getNumarIngredienteIndiene() << endl;
	cout << "denumirea ingredientelor si pretul acestora : " << endl;
	for (int i = 0; i < pi1.getNumarIngredienteIndiene(); i++)
	{
		cout << "Denumire ingredient: " << pi1.getDenumireCondimenteIndiene()[i] << endl;
		cout << "Gramaj ingredient: " << pi1.getCantitateCondimenteIndiene()[i] << endl;
	}
	cout << "denumire preparat " << pi1.getDenumirePreparat() << endl;
	cout << "Tip mancare: " << pi1.getTipMancare() << endl;
	cout << "Pretul Preparatului: " << pi1.getPretPreparat() << endl;
	cout << "Contine alergeni? " << pi1.getContineAlergeni() << endl;
	cout << "Codul preparatului este: " << pi1.getCodPreparat() << endl;
	cout << "Numele restaurantului este : " << pi1.getNumeRestaurant() << endl;
	cout << "Numarul de ingrediente este : " << pi1.getNumarIngrediente() << endl;
	cout << "Lista de ingrediente si pretul acestora: " << endl;
	for (int i = 0; i < pi1.getNumarIngrediente(); i++)
	{
		cout << "Ingredient : " << pi1.getListaIngrediente()[i] << endl;
		cout << "Pret Ingredient: " << pi1.getPretIngrediente()[i] << endl;
	}

	cout << endl << endl;

	string denumirecondimente[] = { "chimion", "curry" };
	float cantitateingrrdiente[] = { 10,10 };
	string listaIn[] = { "pui","ceapa","ulei" };
	float pretIn[] = { 10.0,0.5,1.0 };
	preparatIndian p2(2, denumirecondimente, cantitateingrrdiente, "pui cu curry", 'f', 35, 1, 255, "ganesha", 3, listaIn, pretIn);
	cout << "Numarul de ingrediente indiene este : " << p2.getNumarIngredienteIndiene() << endl;
	cout << "denumirea ingredientelor si pretul acestora : " << endl;
	for (int i = 0; i < p2.getNumarIngredienteIndiene(); i++)
	{
		cout << "Denumire ingredient: " << p2.getDenumireCondimenteIndiene()[i] << endl;
		cout << "Gramaj ingredient: " << p2.getCantitateCondimenteIndiene()[i] << endl;
	}
	cout << "denumire preparat " << p2.getDenumirePreparat() << endl;
	cout << "Tip mancare: " << p2.getTipMancare() << endl;
	cout << "Pretul Preparatului: " << p2.getPretPreparat() << endl;
	cout << "Contine alergeni? " << p2.getContineAlergeni() << endl;
	cout << "Codul preparatului este: " << p2.getCodPreparat() << endl;
	cout << "Numele restaurantului este : " << p2.getNumeRestaurant() << endl;
	cout << "Numarul de ingrediente este : " << p2.getNumarIngrediente() << endl;
	cout << "Lista de ingrediente si pretul acestora: " << endl;
	for (int i = 0; i < p2.getNumarIngrediente(); i++)
	{
		cout << "Ingredient : " << p2.getListaIngrediente()[i] << endl;
		cout << "Pret Ingredient: " << p2.getPretIngrediente()[i] << endl;
	}

	cout << endl << endl;

	string ingredient3[] = { "masala", "chili", "curry" };
	float cantitate2[] = { 2,5,7 };
	pi1.setIngredienteIndiene(3, ingredient3, cantitate2);
	cout << "Numarul de ingrediente indiene este : " << pi1.getNumarIngredienteIndiene() << endl;
	cout << "denumirea ingredientelor si pretul acestora : " << endl;
	for (int i = 0; i < pi1.getNumarIngredienteIndiene(); i++)
	{
		cout << "Denumire ingredient: " << pi1.getDenumireCondimenteIndiene()[i] << endl;
		cout << "Gramaj ingredient: " << pi1.getCantitateCondimenteIndiene()[i] << endl;
	}

	cout << "-------obiectul pi1-------" << endl;

	cout << "Numarul de ingrediente indiene este : " << pi1.getNumarIngredienteIndiene() << endl;
	cout << "denumirea ingredientelor si pretul acestora : " << endl;
	for (int i = 0; i < pi1.getNumarIngredienteIndiene(); i++)
	{
		cout << "Denumire ingredient: " << pi1.getDenumireCondimenteIndiene()[i] << endl;
		cout << "Gramaj ingredient: " << pi1.getCantitateCondimenteIndiene()[i] << endl;
	}
	cout << "denumire preparat " << pi1.getDenumirePreparat() << endl;
	cout << "Tip mancare: " << pi1.getTipMancare() << endl;
	cout << "Pretul Preparatului: " << pi1.getPretPreparat() << endl;
	cout << "Contine alergeni? " << pi1.getContineAlergeni() << endl;
	cout << "Codul preparatului este: " << pi1.getCodPreparat() << endl;
	cout << "Numele restaurantului este : " << pi1.getNumeRestaurant() << endl;
	cout << "Numarul de ingrediente este : " << pi1.getNumarIngrediente() << endl;
	cout << "Lista de ingrediente si pretul acestora: " << endl;
	for (int i = 0; i < pi1.getNumarIngrediente(); i++)
	{
		cout << "Ingredient : " << pi1.getListaIngrediente()[i] << endl;
		cout << "Pret Ingredient: " << pi1.getPretIngrediente()[i] << endl;
	}

	cout << endl << endl;

	preparatIndian p13 = pi1;

	cout << "--------------Obiectul nou creat P13-----------" << endl;
	cout << "Numarul de ingrediente indiene este : " << p13.getNumarIngredienteIndiene() << endl;
	cout << "denumirea ingredientelor si pretul acestora : " << endl;
	for (int i = 0; i < p13.getNumarIngredienteIndiene(); i++)
	{
		cout << "Denumire ingredient: " << p13.getDenumireCondimenteIndiene()[i] << endl;
		cout << "Gramaj ingredient: " << p13.getCantitateCondimenteIndiene()[i] << endl;
	}
	cout << "denumire preparat " << p13.getDenumirePreparat() << endl;
	cout << "Tip mancare: " << p13.getTipMancare() << endl;
	cout << "Pretul Preparatului: " << p13.getPretPreparat() << endl;
	cout << "Contine alergeni? " << p13.getContineAlergeni() << endl;
	cout << "Codul preparatului este: " << p13.getCodPreparat() << endl;
	cout << "Numele restaurantului este : " << p13.getNumeRestaurant() << endl;
	cout << "Numarul de ingrediente este : " << p13.getNumarIngrediente() << endl;
	cout << "Lista de ingrediente si pretul acestora: " << endl;
	for (int i = 0; i < p13.getNumarIngrediente(); i++)
	{
		cout << "Ingredient : " << p13.getListaIngrediente()[i] << endl;
		cout << "Pret Ingredient: " << p13.getPretIngrediente()[i] << endl;
	}

	cout << endl << endl;


	p13 = p2;

	cout << "Obiectul p13 dupa ce a fost copiat dupa obiectul p2" << endl;

	cout << "Numarul de ingrediente indiene este : " << p13.getNumarIngredienteIndiene() << endl;
	cout << "denumirea ingredientelor si pretul acestora : " << endl;
	for (int i = 0; i < p13.getNumarIngredienteIndiene(); i++)
	{
		cout << "Denumire ingredient: " << p13.getDenumireCondimenteIndiene()[i] << endl;
		cout << "Gramaj ingredient: " << p13.getCantitateCondimenteIndiene()[i] << endl;
	}
	cout << "denumire preparat " << p13.getDenumirePreparat() << endl;
	cout << "Tip mancare: " << p13.getTipMancare() << endl;
	cout << "Pretul Preparatului: " << p13.getPretPreparat() << endl;
	cout << "Contine alergeni? " << p13.getContineAlergeni() << endl;
	cout << "Codul preparatului este: " << p13.getCodPreparat() << endl;
	cout << "Numele restaurantului este : " << p13.getNumeRestaurant() << endl;
	cout << "Numarul de ingrediente este : " << p13.getNumarIngrediente() << endl;
	cout << "Lista de ingrediente si pretul acestora: " << endl;
	for (int i = 0; i < p13.getNumarIngrediente(); i++)
	{
		cout << "Ingredient : " << p13.getListaIngrediente()[i] << endl;
		cout << "Pret Ingredient: " << p13.getPretIngrediente()[i] << endl;
	}

	cout << endl << endl;
	cout << "------operatorul<< din clasa derivata----------" << endl;
	cout << p13;

	cout << "------operatorul>> din clasa derivata----------" << endl;
	/*cin >> p13;*/

	cout << "-----Obiectul p13 dupa ce a fost reintrodus de la tastatura-------" << endl;
	cout << p13;
}