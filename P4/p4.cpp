#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class preparatCafea
{
private:
	string tipCafea;
	int cantitateZahar;
	char marimePahar; // G pentru Grande , T pentru tall, M pentru Medium si S pentru Short
	float pretCafea;
	bool adaugatiAromaCafea;
	const string monedaPlata;
	static int grame_cofeina_standard;

	char* numeCafenea;
	int numarIngrediente;
	string* listaIngrediente;
	float* gramajIngrediente;


public:
	//constructor cu toti parametrii

	preparatCafea(string tipCafea, int cantitateZahar, char marimePahar, float pretCafea, bool adaugatiAromaCafea, string monedaPlata, const char* numeCafenea, int numarIngrediente, string*listaIngrediente, float* gramajIngrediente):monedaPlata("RON")
	{
		this->tipCafea = tipCafea;
		this->cantitateZahar = cantitateZahar;
		this->marimePahar = marimePahar;
		this->pretCafea = pretCafea;
		this->adaugatiAromaCafea = adaugatiAromaCafea;
		this->numeCafenea = new char[strlen(numeCafenea) + 1];
		strcpy(this->numeCafenea, numeCafenea);
		this->numarIngrediente = numarIngrediente;
		this->listaIngrediente = new string[this->numarIngrediente];
		this->gramajIngrediente = new float[this->numarIngrediente];

		for (int i = 0; i < numarIngrediente; i++)
		{
			this->listaIngrediente[i] = listaIngrediente[i];
			this->gramajIngrediente[i] = gramajIngrediente[i];
		}


	}

	//constructor fara parametri

	preparatCafea():monedaPlata("Necunoscuta")
	{
		this->tipCafea = "Necunoscut";
		this->cantitateZahar = 0;
		this->marimePahar = 'n';
		this->pretCafea = 0;
		this->adaugatiAromaCafea = false;
		this->numeCafenea = new char[strlen("Necunoscut") + 1];
		strcpy(this->numeCafenea, "Necunoscut");
		this->numarIngrediente = 0;
		this->listaIngrediente = NULL;
		this->gramajIngrediente = NULL;

		
	}

	//getteri

	string getTipCafea()
	{
		return this->tipCafea;
	}

	float getPretCafea()
	{
		return this->pretCafea;
	}

	int getCantitateZahar()
	{
		return this->cantitateZahar;
	}

	char getMarimePahar()
	{
		return this->marimePahar;
	}

	bool getAdaugatiAromaCafea()
	{
		return this->adaugatiAromaCafea;
	}

	char* getNumeCafenea()
	{
		return this->numeCafenea;
	}

	int getNumarIngrediente()
	{
		return this->numarIngrediente;
	}

	string getMonedaPlata()
	{
		return this->monedaPlata;
	}

	string* getListaIngrediente()
	{
		return this->listaIngrediente;
	}

	float* getGramajIngrediente()
	{
		return this->gramajIngrediente;
	}
	//setteri

	void setTipCafea(string TipNouCafea)
	{
		this->tipCafea = TipNouCafea;
	}

	void setCantitateZahar(int CantitateNouaZahar)
	{
		this->cantitateZahar = CantitateNouaZahar;
	}

	void setMarimePahar(char MarimeNouaPahar)
	{
		this->marimePahar = MarimeNouaPahar;
	}

	void setPretCafea(float PretNouCafea)
	{
		this->pretCafea = PretNouCafea;
	}

	void setAdaugatiAromaCafea(bool AdaugatiAromaCafeaValNoua)
	{
		this->adaugatiAromaCafea = AdaugatiAromaCafeaValNoua;
	}


	void setNumeCafenea(const char* numeCafeneaNou)
	{
		if (this->numeCafenea != NULL)
		{
			delete[]this->numeCafenea;
		}
		this->numeCafenea = new char[strlen(numeCafeneaNou) + 1];
		strcpy(this->numeCafenea, numeCafeneaNou);

	}

	void setIngrediente(int numarIngredienteValNoua, string* listaIngredienteNou, float* gramajIngredienteNou)
	{
		if (this->listaIngrediente != NULL)
		{
			delete[]this->listaIngrediente;
		}

		if (this->gramajIngrediente != NULL)
		{
			delete[]this->gramajIngrediente;
		}


		this->numarIngrediente = numarIngredienteValNoua;

		this->listaIngrediente = new string[this->numarIngrediente];
		this->gramajIngrediente = new float[this->numarIngrediente];

		for (int i = 0; i < numarIngrediente; i++)
		{
			this->listaIngrediente[i] = listaIngredienteNou[i];
			this->gramajIngrediente[i] = gramajIngredienteNou[i];
		}

	}

	void afiseaza() 
	{
		cout << "Tipul de cafea este: " << this->tipCafea << endl;
		cout << "Cantitatea de zahar este : " << this->cantitateZahar << endl;
		cout << "Marimea paharului este :" << this->marimePahar << endl;
		cout << "Pretul cafelei este :" << this->pretCafea << endl;
		cout << "Adaugati Aroma Cafea? " << (this->adaugatiAromaCafea? "DA":"NU") << endl;
		cout << "Continutul standard de cafeina este : " <<preparatCafea::grame_cofeina_standard << "mg" << endl;
		cout << "Moneda plata Cafea : " << this->monedaPlata << endl;
		cout << "Nume cafenea : " << this->numeCafenea << endl;
		cout << "Numar Ingrediente : " << this->numarIngrediente << endl;
		cout << "Ingrediente si gramaje: " << endl << endl;
		for (int i = 0; i < numarIngrediente; i++)
		{
			cout << "Ingrediente: " << this->listaIngrediente[i] << endl;
			cout << "GramajIngrediente:  " << this->gramajIngrediente[i] << " ml " <<endl;
		} 

		cout << endl << endl;

	}

	~preparatCafea()
	{
		if (this->numeCafenea != NULL)
		{
			delete[]this->numeCafenea;
		}

		if (this->listaIngrediente != NULL)
		{
			delete[]this->listaIngrediente;
		}

		if (this->gramajIngrediente != NULL)
		{
			delete[]this->gramajIngrediente;
		}

	}

	// cosntructorul de copiere

	preparatCafea(preparatCafea& obiectExistent):monedaPlata("RON")
	{

		this->tipCafea = obiectExistent.tipCafea;
		this->cantitateZahar = obiectExistent.cantitateZahar;
		this->marimePahar = obiectExistent. marimePahar;
		this->pretCafea = obiectExistent.pretCafea;
		this->adaugatiAromaCafea = obiectExistent.adaugatiAromaCafea;
		this->numeCafenea = new char[strlen(obiectExistent.numeCafenea) + 1];
		strcpy(this->numeCafenea, obiectExistent.numeCafenea);
		this->numarIngrediente = obiectExistent.numarIngrediente;
		this->listaIngrediente = new string[obiectExistent.numarIngrediente];
		this->gramajIngrediente = new float[obiectExistent.numarIngrediente];

		for (int i = 0; i < numarIngrediente; i++)
		{
			this->listaIngrediente[i] = obiectExistent.listaIngrediente[i];
			this->gramajIngrediente[i] = obiectExistent.gramajIngrediente[i];
		}

	}
	//operatorul =

	preparatCafea& operator=(preparatCafea& obiectMatrice)
	{
		if (this->numeCafenea != NULL)
		{
			delete[]this->numeCafenea;
		}

		if (this->listaIngrediente != NULL)
		{
			delete[]this->listaIngrediente;
		}

		if (this->gramajIngrediente != NULL)
		{
			delete[]this->gramajIngrediente;
		}
		this->tipCafea = obiectMatrice.tipCafea;
		this->cantitateZahar = obiectMatrice.cantitateZahar;
		this->marimePahar = obiectMatrice.marimePahar;
		this->pretCafea = obiectMatrice.pretCafea;
		this->adaugatiAromaCafea = obiectMatrice.adaugatiAromaCafea;
		this->numeCafenea = new char[strlen(obiectMatrice.numeCafenea) + 1];
		strcpy(this->numeCafenea, obiectMatrice.numeCafenea);
		this->numarIngrediente = obiectMatrice.numarIngrediente;
		this->listaIngrediente = new string[obiectMatrice.numarIngrediente];
		this->gramajIngrediente = new float[obiectMatrice.numarIngrediente];

		for (int i = 0; i < numarIngrediente; i++)
		{
			this->listaIngrediente[i] = obiectMatrice.listaIngrediente[i];
			this->gramajIngrediente[i] = obiectMatrice.gramajIngrediente[i];
		}

		return *this;

	}



};

 int preparatCafea::grame_cofeina_standard = 10;

void main()
{   
		string ingrediente1[] = {"lapte","expreso","zahar"};
		float gramaj1[] = { 100.0f, 50.0f,5.0f };

	preparatCafea p1("latte", 5, 'G', 15, 1, "RON", "5togo",3,ingrediente1,gramaj1 );
	cout << "Denumire Preparat Cafea : " << p1.getTipCafea() << endl;
	cout << "Cantitate Zahar: " << p1.getCantitateZahar() << endl;
	cout << "Marime Pahar: " << p1.getMarimePahar() << endl;
	cout << " Pret Cafea: " << p1.getPretCafea() << endl;
	cout << "Adaugati Aroma la Cafea? : " << p1.getAdaugatiAromaCafea()<< endl;
	cout << " Moneda de plata este: " << p1.getMonedaPlata() << endl;
	cout << "Nume cafenea : " << p1.getNumeCafenea() << endl;
	cout << "Numar Ingrediente : " << p1.getNumarIngrediente() << endl;
	cout << "Ingrediente si gramaje: " << endl << endl;
	for (int i = 0; i < p1.getNumarIngrediente(); i++)
	{
		cout << "Ingrediente: " << p1.getListaIngrediente()[i] << endl;
		
		cout << "GramajIngredient:  " << p1.getGramajIngrediente()[i] << endl;
		
	}

	cout << endl << endl;

	string ingrediente2[] = { "lapte","expreso","zahar" };
	float gramaj2[] = { 100.0f, 50.0f,5.0f };

	preparatCafea p2("expreso", 5, 'T', 10, 0, "RON", "5togo", 2,ingrediente2, gramaj2);



	cout << "............Obiectul p2 inainte de modificari.............." << endl;

	p2.afiseaza();
	

	p2.setTipCafea("expresso");
	p2.setCantitateZahar(0);
	p2.setMarimePahar('M');
	p2.setPretCafea(10.00);
	p2.setAdaugatiAromaCafea(0);
	p2.setNumeCafenea("tucano");
	string ingrediente3[] = { "cafea", "apa" };
	float gramaj3[] = { 50,50 };
	p2.setIngrediente(2, ingrediente3, gramaj3);

	cout << "............Obiectul p2 dupa modificari.............." << endl;

	p2.afiseaza();


	preparatCafea p4(p2);

	cout << "............Obiectul p4...................." << endl;
	p4.afiseaza();

	cout << "............Obiectul p2...................." << endl;
	
	p2.afiseaza();
	cout << "............Obiectul p1...................." << endl;
	p1.afiseaza();
	
	p2 = p1;

	cout << "............Obiectul p2...................." << endl;
	p2.afiseaza();

}
