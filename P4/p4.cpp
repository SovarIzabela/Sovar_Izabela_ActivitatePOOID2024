#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<fstream>
using namespace std;

class preparatCafea
{
protected:
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


	float gramajMinim()
	{
		int gramajMinim = this->gramajIngrediente[0];
		for (int i = 1; i < this->numarIngrediente; i++)
		{
			if (this-> gramajIngrediente[i]<gramajMinim)
			{
				gramajMinim = this->gramajIngrediente[i];
			}
		}
		return gramajMinim;
	}

	float sumaGramajingrediente()
	{

		float suma = 0;
		for (int i = 0; i < this->numarIngrediente; i++)
		{
			 suma = suma + this->gramajIngrediente[i];
		}
		return suma;
	}

	float mediagramaj()
	{
		float media = this->sumaGramajingrediente() / this->numarIngrediente;
		return media;
	}


	void adaugaIngredient(string IngredientNou, float GarmajNou)
	{
		preparatCafea copie(*this);
		
		
		delete[]this->listaIngrediente;
	    delete[]this->gramajIngrediente;

		numarIngrediente++;
		this->listaIngrediente = new string[this->numarIngrediente];
		this->gramajIngrediente = new float[this->numarIngrediente];

		for (int i = 0; i < copie.numarIngrediente; i++)
		{
			this->listaIngrediente[i] = copie.listaIngrediente[i];
			this->gramajIngrediente[i] = copie.gramajIngrediente[i];


		}
		

		this->listaIngrediente[numarIngrediente - 1] = IngredientNou;
		this->gramajIngrediente[numarIngrediente - 1] = GarmajNou;

	}



	void eliminaElement(int pozitie)
	{
		preparatCafea copie(*this);
		delete[]this->listaIngrediente;
		delete[]this->gramajIngrediente;

		this->numarIngrediente--;

		this->listaIngrediente = new string[copie.numarIngrediente];
		this->gramajIngrediente = new float[copie.numarIngrediente];


		for (int i = 0; i < pozitie; i++)
		{
			this->listaIngrediente[i] = copie.listaIngrediente[i];
			this->gramajIngrediente[i] = copie.gramajIngrediente[i];

		}

		for (int i = pozitie; i < copie.numarIngrediente; i++)
		{
			this->listaIngrediente[i-1] = copie.listaIngrediente[i];
			this->gramajIngrediente[i-1] = copie.gramajIngrediente[i];
	   }


	}


	bool operator<=(const preparatCafea& c)
	{
		bool rezultat=0;
		if (this->pretCafea <= c.pretCafea)
		{
			return rezultat;
		}
		else
		{
			return 0;
		}

	}


	bool operator==(const preparatCafea& p)
	{
		bool ok = 1;
		if ((this->tipCafea == p.tipCafea) && (this->cantitateZahar == p.cantitateZahar) && (this->marimePahar == p.marimePahar) && (this->pretCafea == p.pretCafea)
			&& (this->adaugatiAromaCafea == p.adaugatiAromaCafea) && (strcmp(this->numeCafenea ,p.numeCafenea)==0) && (this->numarIngrediente == p.numarIngrediente))
		{
			for (int i = 0; i < this->numarIngrediente; i++)
			{
				if ((this->listaIngrediente[i] == p.listaIngrediente[i]) && (this->gramajIngrediente[i] == p.gramajIngrediente[i]))
				{

				}
				else
				{
					ok = 0;
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
	}



	friend ostream& operator<<(ostream& out, const preparatCafea& p)
	{

		out << "Tipul de cafea este : " << p.tipCafea << endl;
		out << "Cantitatea de zahar adaugat este: " << p.cantitateZahar << endl;
		out << "Marimea paharului de cafea este: " << p.marimePahar << endl;
		out << "Pretul cafelei este: " << p.pretCafea << endl;
		out << "Doriti sa adaugati o aroma ? " <<( p.adaugatiAromaCafea ? "DA" : "NU" )<< endl;
		out << "Numele cafenelei este : " << p.numeCafenea << endl;
		out << "Numarul de ingrediente este : " << p.numarIngrediente << endl;
		out << "Ingrediente si gramaj: " << endl;
		for (int i = 0; i < p.numarIngrediente; i++)
		{
			out << "Ingredient: " << p.listaIngrediente[i] << endl;
			out << "Gramaj ingredient:" << p.gramajIngrediente[i] << endl;
		}
		out << endl << endl;

		return out;

	}


	friend istream& operator>>(istream& in, preparatCafea& p)
	{
		if (p.numeCafenea != NULL)
		{
			delete[]p.numeCafenea;
		}

		if (p.listaIngrediente != NULL)
		{
			delete[]p.listaIngrediente;
		}

		if (p.gramajIngrediente != NULL)
		{
			delete[]p.gramajIngrediente;
		}

		cout << "Introduceti tipul cafelei: ";
		in >> p.tipCafea;
		cout << "Introduceti cantitatea de zahar: ";
		in >> p.cantitateZahar;
		cout << "Introduceti marimea paharului: ";
		in >> p.marimePahar;
		cout << "Introduceti pretul cafelei: ";
		in >> p.pretCafea;
		cout << "Adaugati aroma cafea? ";
		in >> p.adaugatiAromaCafea;
		cout << "Numele cafenelei este : ";
		char aux[100];
		in >> aux;
		p.numeCafenea = new char[strlen(aux) + 1];
		strcpy(p.numeCafenea, aux);

		cout << "Numarul de ingrediente este : ";
		in >> p.numarIngrediente;
		p.listaIngrediente = new string[p.numarIngrediente];
		p.gramajIngrediente = new float[p.numarIngrediente];
		for (int i = 0; i < p.numarIngrediente; i++)
		{
			cout << "	Introduceti ingrediente : ";
			in >> p.listaIngrediente[i];
			
		}

		for (int i = 0; i < p.numarIngrediente; i++)
		{
			cout << "Introduceti gramajul ingrediente=ilui : ";
			in >> p.gramajIngrediente[i];
		}


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
			return"Pozitia nu este corecta!";
		}
	}


	float operator()(float discount)
	{
		if (discount <= 0.0f || discount > 1.0f)
		{
			throw exception("Discount incorect");
		}

		this->pretCafea = this->pretCafea - discount * pretCafea;
		return pretCafea;
	}


	friend void operator!(preparatCafea& p)
	{
		if (p.adaugatiAromaCafea == 0)
		{
			p.adaugatiAromaCafea = 1;
		}
		else if (p.adaugatiAromaCafea == 1)
		{
			p.adaugatiAromaCafea = 0;
		}

}

 preparatCafea& operator+=(string IngredientNou)
	{
		preparatCafea copie(*this);


		delete[]this->listaIngrediente;
		delete[]this->gramajIngrediente;

		numarIngrediente++;
		this->listaIngrediente = new string[this->numarIngrediente];
		this->gramajIngrediente = new float[this->numarIngrediente];

		for (int i = 0; i < copie.numarIngrediente; i++)
		{
			this->listaIngrediente[i] = copie.listaIngrediente[i];
			this->gramajIngrediente[i] = copie.gramajIngrediente[i];

		}


		this->listaIngrediente[numarIngrediente - 1] = IngredientNou;
		this->gramajIngrediente[numarIngrediente - 1] = 0;

		return (*this);

	}


 preparatCafea& operator-=(int pozitie)
 {
	 preparatCafea copie(*this);
	 delete[]this->listaIngrediente;
	 delete[]this->gramajIngrediente;

	 this->numarIngrediente--;

	 this->listaIngrediente = new string[copie.numarIngrediente];
	 this->gramajIngrediente = new float[copie.numarIngrediente];


	 for (int i = 0; i < pozitie; i++)
	 {
		 this->listaIngrediente[i] = copie.listaIngrediente[i];
		 this->gramajIngrediente[i] = copie.gramajIngrediente[i];

	 }

	 for (int i = pozitie; i < copie.numarIngrediente; i++)
	 {
		 this->listaIngrediente[i - 1] = copie.listaIngrediente[i];
		 this->gramajIngrediente[i - 1] = copie.gramajIngrediente[i];
	 }

	 return (*this);
 }



//Operatorul de cast
//FISERE TEXT SI FISIERE BINARE

 friend ofstream& operator<<(ofstream& file, const preparatCafea& p)
 {
	 file << p.tipCafea << endl;
	 file <<  p.cantitateZahar << endl;
	 file << p.marimePahar << endl;
	 file << p.pretCafea << endl;
	 file << p.adaugatiAromaCafea << endl;
	 file <<  p.numeCafenea << endl;
	 file  << p.numarIngrediente << endl;
	 for (int i = 0; i < p.numarIngrediente; i++)
	 {
		 file  << p.listaIngrediente[i] << endl;
		 file  << p.gramajIngrediente[i] << endl;
	 }
	

	 return file;
 }

 friend ifstream& operator>>(ifstream& file, preparatCafea& p)
 {
	 if (p.numeCafenea != NULL)
	 {
		 delete[]p.numeCafenea;
	 }

	 if (p.listaIngrediente != NULL)
	 {
		 delete[]p.listaIngrediente;
	 }

	 if (p.gramajIngrediente != NULL)
	 {
		 delete[]p.gramajIngrediente;
	 }

	 
	 file >> p.tipCafea;
	 
	 file >> p.cantitateZahar;
	
	 file >> p.marimePahar;
	 
	 file >> p.pretCafea;
	
	 file >> p.adaugatiAromaCafea;
	 
	 char aux[100];
	 file >> aux;
	 p.numeCafenea = new char[strlen(aux) + 1];
	 strcpy(p.numeCafenea, aux);

	
	 file >> p.numarIngrediente;

	 p.listaIngrediente = new string[p.numarIngrediente];
	 p.gramajIngrediente = new float[p.numarIngrediente];

	 for (int i = 0; i < p.numarIngrediente; i++)
	 {
		 
		 file >> p.listaIngrediente[i];
		 file >> p.gramajIngrediente[i];

	 }

	

	 return file;

 }

 void scriereBinar (fstream& fisierBinar)
 {
	 //string tipCafea;
	 int numarLitereTipCafea = this->tipCafea.size();
	 fisierBinar.write((char*)&numarLitereTipCafea, sizeof(int));
	 fisierBinar.write(this->tipCafea.c_str(), numarLitereTipCafea);
		 
	//int cantitateZahar;
	 fisierBinar.write((char*)&this->cantitateZahar, sizeof(int));
	 //char marimePahar; 
	 fisierBinar.write((char*)&this->marimePahar, sizeof(char));
	 //float pretCafea;
	 fisierBinar.write((char*)&this->pretCafea, sizeof(float));
	 //bool adaugatiAromaCafea;
	 fisierBinar.write((char*)&this->adaugatiAromaCafea, sizeof(bool));

	// char* numeCafenea;
	 int numarLitereNumeCafenea = strlen(this->numeCafenea);
	 fisierBinar.write((char*)&numarLitereNumeCafenea, sizeof(int));
	 for (int i = 0; i < numarLitereNumeCafenea; i++)
	 {
		 fisierBinar.write((char*)&this->numeCafenea[i], sizeof(char));
	 }

	 //int numarIngrediente;
	 fisierBinar.write((char*)&this->numarIngrediente, sizeof(int));
	 //string* listaIngrediente;
	 for (int i = 0; i < this->numarIngrediente; i++)
	 {
		 int numarLiterelista = this->listaIngrediente[i].size();
		 fisierBinar.write((char*)&numarLiterelista, sizeof(int));
		 fisierBinar.write(this->listaIngrediente[i].c_str(), numarLiterelista);
	 }

	 //float* gramajIngrediente;
	 for (int i = 0; i < this->numarIngrediente; i++)
	 {
		 fisierBinar.write((char*)&this->gramajIngrediente, sizeof(float));
	 }
 }

 void citireBinar(fstream& fisierBinar)
 {
	 delete[]this->numeCafenea;
	 delete[]this->listaIngrediente;
	 delete[]this->gramajIngrediente;
	// string tipCafea;
	 int numarLitereCafea;
	 fisierBinar.read((char*)&numarLitereCafea, sizeof(int));
	 string aux1;
	 aux1.resize(numarLitereCafea);
	 fisierBinar.read((char*)aux1.c_str(), numarLitereCafea);
	 this->tipCafea = aux1;

	 //int cantitateZahar;
	 fisierBinar.read((char*)&this->cantitateZahar, sizeof(int));
	 //char marimePahar;
	 fisierBinar.read((char*)&this->marimePahar, sizeof(char));
	 //float pretCafea;
	 fisierBinar.read((char*)&this->pretCafea, sizeof(float));
	 //bool adaugatiAromaCafea;
	 fisierBinar.read((char*)&this->adaugatiAromaCafea, sizeof(bool));


	// char* numeCafenea;
	 int numarLitereCafenea;
	 fisierBinar.read((char*)&numarLitereCafenea, sizeof(int));
	 this->numeCafenea = new char[numarLitereCafenea + 1];
	 for (int i = 0; i < numarLitereCafenea; i++)
	 {
		 fisierBinar.read((char*)&this->numeCafenea[i], sizeof(char));
	 }
	 this->numeCafenea[numarLitereCafenea] = '\0';

	// int numarIngrediente;
	 fisierBinar.read((char*)&this->numarIngrediente, sizeof(int));
	 //string* listaIngrediente;
	 this->listaIngrediente = new string[this->numarIngrediente];
	 for (int i = 0; i < this->numarIngrediente; i++)
	 {
		 int numarLitereIngrediente;
		 fisierBinar.read((char*)&numarLitereIngrediente, sizeof(int));
		 string aux2;
		 aux2.resize(numarLitereIngrediente);
		 fisierBinar.read((char*)aux2.c_str(), numarLitereIngrediente);
		 this->tipCafea = aux2;
	 }

	// float* gramajIngrediente;
	 this->gramajIngrediente = new float[this->numarIngrediente];
	 for (int i = 0; i < this->numarIngrediente; i++)
	 {
		 fisierBinar.read((char*)&this->gramajIngrediente[i], sizeof(float));
	 }

 }


};

 int preparatCafea::grame_cofeina_standard = 10;

 class preparatCafeaSpeciala :public preparatCafea
 {
	 int numarCafeaSpeciala;
	 string* denumireCafeaSpeciala;
 public:
	 preparatCafeaSpeciala() :preparatCafea()
	 {
		 this->numarCafeaSpeciala = 0;
		 this->denumireCafeaSpeciala = NULL;
	 }

	 preparatCafeaSpeciala(int numarCafeaSpeciala, string* denumireCafeaSpeciala, string tipCafea, int cantitateZahar, char marimePahar, float pretCafea, bool adaugatiAromaCafea, string monedaPlata, const char* numeCafenea, int numarIngrediente, string* listaIngrediente, float* gramajIngrediente) :preparatCafea(tipCafea, cantitateZahar, marimePahar, pretCafea, adaugatiAromaCafea, monedaPlata, numeCafenea, numarIngrediente, listaIngrediente, gramajIngrediente)
	 {
		 this->numarCafeaSpeciala = numarCafeaSpeciala;
		 this->denumireCafeaSpeciala = new string[this->numarCafeaSpeciala];
		 for (int i = 0; i < this->numarCafeaSpeciala; i++)
		 {
			 this->denumireCafeaSpeciala[i] = denumireCafeaSpeciala[i];
		 }
	 }

	 int getNumarCafeaSpeciala()
	 {
		 return this->numarCafeaSpeciala;
	 }

	 string* getDenumireCafeaSpeciala()
	 {
		 return this->denumireCafeaSpeciala;
	 }


	 void setCafeaSpeciala(int numarCafeaSpeciala, string* denumireCafeaSpeciala)
	 {
		 delete[] this->denumireCafeaSpeciala;

		 this-> numarCafeaSpeciala = numarCafeaSpeciala;
		 this->denumireCafeaSpeciala = new string[this->numarCafeaSpeciala];
		 for (int i = 0; i < this->numarCafeaSpeciala; i++)
		 {
			 this->denumireCafeaSpeciala[i] = denumireCafeaSpeciala[i];
			 }
	 }


	 ~preparatCafeaSpeciala()
	 {
		 if (this->denumireCafeaSpeciala != NULL)
		 {
			 delete[]this->denumireCafeaSpeciala;
		 }
	 }
 };

 class cafenea
 {
	 string denumirecafenea;
	 int nrPrepaartCafea;
	 preparatCafea** vectorPointer;
 public:
	 cafenea()
	 {
		 this->denumirecafenea = "necunoscut";
		 this->nrPrepaartCafea = 0;
		 this->vectorPointer = NULL;
	 }

	 cafenea(string denumirecafenea, int nrPrepaartCafea, preparatCafea** vectorPointer)
	 {
		 this->denumirecafenea = denumirecafenea;
		 this->nrPrepaartCafea = nrPrepaartCafea;
		 this->vectorPointer = new preparatCafea * [this->nrPrepaartCafea];
		 for (int i = 0; i < this->nrPrepaartCafea; i++)
		 {
			 this->vectorPointer[i] = new preparatCafea(*vectorPointer[i]);
		 }

	 }

	 string getDenumireCafenea()
	 {
		 return this->denumirecafenea;
	 }
	 int getnrPrepaartCafea()
	 {
		 return this->nrPrepaartCafea;
	 }

	 preparatCafea** getvectorPointer()
	 {
		 return this->vectorPointer;
	 }

	 void setdenumirecafenea(string denumireCafeneaNoua)
	 {
		 this->denumirecafenea = denumireCafeneaNoua;
	 }

	 void setVectorCafea(int nrPrepaartCafeaNou, preparatCafea** vectorPointerNou)
	 {
		 for (int i = 0; i < this->nrPrepaartCafea; i++)
		 {
			 delete this->vectorPointer[i];
		 }

		 delete[]this->vectorPointer;

		 this->nrPrepaartCafea = nrPrepaartCafeaNou;

		 this->vectorPointer = new preparatCafea * [this->nrPrepaartCafea];

		 for (int i = 0; i < this->nrPrepaartCafea; i++)
		 {
			 this->vectorPointer[i] = new preparatCafea(*vectorPointerNou[i]);
		 }


	 }

	 cafenea(const cafenea& c)
	 {
		 this->denumirecafenea = c.denumirecafenea;
		 this->nrPrepaartCafea = c.nrPrepaartCafea;
		 this->vectorPointer = new preparatCafea * [this->nrPrepaartCafea];
		 for (int i = 0; i < this->nrPrepaartCafea; i++)
		 {
			 this->vectorPointer[i] = new preparatCafea(*c.vectorPointer[i]);
		 }
	 }


	 cafenea&operator = (const cafenea&c)
	 {
		 if(this!=&c)
		 {
			 for (int i = 0; i < this->nrPrepaartCafea; i++)
			 {
				 delete this->vectorPointer[i];
			 }

			 delete[]this->vectorPointer;
			 this->denumirecafenea = c.denumirecafenea;
			 this->nrPrepaartCafea = c.nrPrepaartCafea;
			 this->vectorPointer = new preparatCafea * [this->nrPrepaartCafea];
			 for (int i = 0; i < this->nrPrepaartCafea; i++)
			 {
				 this->vectorPointer[i] = new preparatCafea(*c.vectorPointer[i]);
			 }
		 }

		 return *this;

	 }

	 ~cafenea()
	 {
		 for (int i = 0; i < this->nrPrepaartCafea; i++)
		 {
			 delete this->vectorPointer[i];
		 }

		 delete[]this->vectorPointer;

	 }

	 void adaugaElement(preparatCafea* p)
	 {
		 cafenea copie = *this;
		 for (int i = 0; i < this->nrPrepaartCafea; i++)
		 {
			 delete this->vectorPointer[i];
		 }

		 delete[]this->vectorPointer;

		this->nrPrepaartCafea++;

		this->vectorPointer = new preparatCafea * [this->nrPrepaartCafea];

		for (int i = 0; i < copie.nrPrepaartCafea; i++)
		{
			this->vectorPointer[i] = new preparatCafea(*copie.vectorPointer[i]);
		}

		this->vectorPointer[this->nrPrepaartCafea - 1] = new preparatCafea(*p);



	 }

	 friend ostream& operator<<(ostream& out, cafenea& c)
	 {
		 cout << "Numele cafenenelei este : " << c.denumirecafenea << endl;
		 cout << "Numarul de preparate este : " << c.nrPrepaartCafea << endl;
		 cout << "Preparatele sunt : " << endl;

		 for (int i = 0; i < c.nrPrepaartCafea; i++)
		 {
			 cout << *c.vectorPointer[i];
		 }
		 return out;
	 }

	 friend istream& operator>>(istream& in, cafenea& c)
	 {
		 cout << "Introduceti numele cafenelei : ";
		 in >> c.denumirecafenea;
		 cout << "Introduceti numarul de preparate : ";
		 in >> c.nrPrepaartCafea;
		 cout << "Introduceti preparatele : ";

		 for (int i = 0; i < c.nrPrepaartCafea; i++)
		 {
			 delete c.vectorPointer[i];
		 }

		 delete[]c.vectorPointer;

		 c.vectorPointer = new preparatCafea * [c.nrPrepaartCafea];

		 for (int i = 0; i < c.nrPrepaartCafea; i++)
		 {
			 c.vectorPointer[i] = new preparatCafea();
			 in >>(*c.vectorPointer[i]);
		 }

		 return in;


	 }

	 cafenea& operator-=(int pozitieDeEliminat)
	 {
		 cafenea copie = *this;

		 for (int i = 0; i < this->nrPrepaartCafea; i++)
		 {
			 delete this->vectorPointer[i];
		 }

		 delete[]this->vectorPointer;

		 this->nrPrepaartCafea--;

		 this->vectorPointer = new preparatCafea * [this->nrPrepaartCafea];

		 for (int i = 0; i < pozitieDeEliminat; i++)
		 {
			 this->vectorPointer[i] = new preparatCafea(*copie.vectorPointer[i]);
		 }

		 for (int i = pozitieDeEliminat + 1; i < copie.nrPrepaartCafea; i++)
		 {
			 this->vectorPointer[i-1] = new preparatCafea(*copie.vectorPointer[i]);
		 }

		 return *this;
	 }


 };

 void main()
 {
	 string ingrediente1[] = { "lapte","expreso","zahar" };
	 float gramaj1[] = { 100.0f, 50.0f,5.0f };

	 preparatCafea p1("latte", 5, 'G', 15, 1, "RON", "5togo", 3, ingrediente1, gramaj1);
	 cout << "Denumire Preparat Cafea : " << p1.getTipCafea() << endl;
	 cout << "Cantitate Zahar: " << p1.getCantitateZahar() << endl;
	 cout << "Marime Pahar: " << p1.getMarimePahar() << endl;
	 cout << " Pret Cafea: " << p1.getPretCafea() << endl;
	 cout << "Adaugati Aroma la Cafea? : " << p1.getAdaugatiAromaCafea() << endl;
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

	 preparatCafea p2("expreso", 5, 'T', 10, 0, "RON", "5togo", 2, ingrediente2, gramaj2);

	 string ingrediente7[] = { "expreso","zahar","frisca"};
	 float gramaj7[] = { 150.0f, 5.0f,0.5f };

	 preparatCafea p3("frapucino", 5, 'T', 10, 0, "RON", "Starbucks", 2, ingrediente7, gramaj7);

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

	 cout << "------Operatorul<<-----------" << endl << endl;

	 cout << p2;

	 cout << "------Operatorul>>-----------" << endl << endl;
	 //cin >> p4;

	 cout << "------Obiectul p4 dupa ce a fost introdus de la tastatura-------" << endl << endl;

	 cout << p2[1] << endl;

	 cout << "Gramajul minim al obiectului p1 este :" << p1.gramajMinim() << endl;
	 cout << p1;
	 cout << "Suma gramajului ingredientelor obiectului p1 este :" << p1.sumaGramajingrediente() << endl;
	 cout << "Media gramajului ingredientelor obiectului p1 este :" << p1.mediagramaj() << endl;
	 cout << "Este pretul p1<=p2? :" << (p1 <= p2) << endl;

	 cout << p1;
	 cout << p4;
	 cout << "p1 este egal in totalitate cu p2? :" << (p1 == p4) << endl;

	 p1.adaugaIngredient("scortisoara", 5);

	 cout << p1;

	 cout << "Obiectul p2 inainte de eliminare ingredient din vector" << endl;
	 cout << p2;

	 p2.eliminaElement(3);

	 cout << "Obiectul p2 dupa eliminare ingredient din vector" << endl;
	 cout << p2;
	 cout << "------------operator !-----------" << endl << endl;
	 cout << p1;
	 !p1;
	 cout << p1;

	 cout << endl << endl;
	 cout << "Inainte de aplicare discount" << p1.getPretCafea() << endl;
	 try
	 {
		 p1(1.5);
	 }
	 catch (exception e)
	 {
		 cout << "eroare";
	 }

	 cout << "Aplicare discount" << p1.getPretCafea() << endl;

	 cout << p2;
	 p2 += "frisca";
	 cout << p2;



	 cout << p2;
	 p2 -= 1;
	 cout << p2;


	 cout << "-----------------------FisiereTEXT--------------" << endl;
	 ofstream f1("fisierTXT.txt", ios::out);
	 f1 << p2;
	 f1.close();
	 ifstream f2("fisierTXT.txt", ios::in);
	 f2 >> p4;
	 f2.close();

	 cout << p4;

	 cout << "-----------------------Fisiere binare-------------" << endl << endl;

	 fstream f3("fisierBinar.bin", ios::binary | ios::out);
	 p1.scriereBinar(f3);
	 f3.close();

	 fstream f4("fisierBinar.bin", ios::binary | ios::in);
	 p4.citireBinar(f4);
	 f4.close();

	 cout << p4;


	 preparatCafeaSpeciala ps1;

	 cout << "Numarul de preparate cafea speciale este : " << ps1.getNumarCafeaSpeciala() << endl;
	 cout << "Denumirile preparatelor de cafea speciala sunt : " << endl;
	 for (int i = 0; i < ps1.getNumarCafeaSpeciala(); i++)
	 {
		 cout << "Denumire: " << ps1.getDenumireCafeaSpeciala()[i];
	 }
	 cout << endl << endl;
	 
	 string denumire1[] = { "Soy Latte", "Frapucino" };
	 string lista1[] = { "cafea boabe", "lapte soia", "frisca" };
	 float gramaj4[] = { 50,100,10 };
	 preparatCafeaSpeciala ps2(2, denumire1, "arabica", 0, 'l', 15, 0, "RON", "Starbucks", 3, lista1, gramaj4);

	 cout << "Numarul de preparate cafea speciale este : " << ps2.getNumarCafeaSpeciala() << endl;
	 cout << "Denumirile preparatelor de cafea speciala sunt : " << endl;
	 for (int i = 0; i < ps2.getNumarCafeaSpeciala(); i++)
	 {
		 cout << "Denumire: " << ps2.getDenumireCafeaSpeciala()[i];
	 }
	 cout << "Denumire Preparat Cafea : " << ps2.getTipCafea() << endl;
	 cout << "Cantitate Zahar: " << ps2.getCantitateZahar() << endl;
	 cout << "Marime Pahar: " << ps2.getMarimePahar() << endl;
	 cout << " Pret Cafea: " << ps2.getPretCafea() << endl;
	 cout << "Adaugati Aroma la Cafea? : " << ps2.getAdaugatiAromaCafea() << endl;
	 cout << " Moneda de plata este: " << ps2.getMonedaPlata() << endl;
	 cout << "Nume cafenea : " << ps2.getNumeCafenea() << endl;
	 cout << "Numar Ingrediente : " << ps2.getNumarIngrediente() << endl;
	 cout << "Ingrediente si gramaje: " << endl << endl;
	 for (int i = 0; i < ps2.getNumarIngrediente(); i++)
	 {
		 cout << "Ingrediente: " << ps2.getListaIngrediente()[i] << endl;

		 cout << "GramajIngredient:  " << ps2.getGramajIngrediente()[i] << endl;

	 }

	 cout << endl << endl;
	 string denCafea[] = { "capucinno caramel", "vegan latte" };
	 ps1.setCafeaSpeciala(2, denCafea);

	 cout << "Numarul de preparate cafea speciale este : " << ps1.getNumarCafeaSpeciala() << endl;
	 cout << "Denumirile preparatelor de cafea speciala sunt : " << endl;
	 for (int i = 0; i < ps1.getNumarCafeaSpeciala(); i++)
	 {
		 cout << "Denumire: " << ps1.getDenumireCafeaSpeciala()[i];

	 }

	 cout << "------------Clasa Cafenea relatia HAS-A (vector de pointeri la obiecte)-----------" << endl << endl;

	 cafenea c1;
	 cout << "-----obiectul c1--------------" << endl << endl;
	 cout << "Denumirea cafenelei este : " << c1.getDenumireCafenea() <<endl;
	 cout << "Numarul de preparate este  :" << c1.getnrPrepaartCafea() << endl;
	 cout << "Preparatele sunt : ";
	 for (int i = 0; i < c1.getnrPrepaartCafea(); i++)
	 {
		 cout << *c1.getvectorPointer() << endl;
	 }
	 cout << endl << endl;

	 preparatCafea** vectorpreparatcafea1;
	 vectorpreparatcafea1 = new preparatCafea * [2];
	 vectorpreparatcafea1[0] = new preparatCafea(p1);
	 vectorpreparatcafea1[1] = new preparatCafea(p2);

	 cafenea c2 = { "tucano", 2, vectorpreparatcafea1 };

	 cout << "-----obiectul c2--------------" << endl << endl;
	 cout << "Denumirea cafenelei este : " << c2.getDenumireCafenea() << endl;
	 cout << "Numarul de preparate este  :" << c2.getnrPrepaartCafea() << endl;
	 cout << "Preparatele sunt : ";
	 for (int i = 0; i < c2.getnrPrepaartCafea(); i++)
	 {
		 cout << *c2.getvectorPointer()[i] << endl;
	 }
	 cout << endl << endl;

	 preparatCafea** vectorpreparatcafea2;
	 vectorpreparatcafea2 = new preparatCafea * [2];
	 vectorpreparatcafea2[0] = new preparatCafea(p1);
	 vectorpreparatcafea2[1] = new preparatCafea(p2);

	 cafenea c3 = { "ABC", 2, vectorpreparatcafea2 };

	 cout << "-----obiectul c3--------------" << endl << endl;
	 cout << "Denumirea cafenelei este : " << c3.getDenumireCafenea() << endl;
	 cout << "Numarul de preparate este  :" << c3.getnrPrepaartCafea() << endl;
	 cout << "Preparatele sunt : ";
	 for (int i = 0; i < c3.getnrPrepaartCafea(); i++)
	 {
		 cout << *c3.getvectorPointer()[i] << endl;
	 }
	 cout << endl << endl;


	 c1.setdenumirecafenea("iza");

	 preparatCafea** vectorpreparatcafea3;
	 vectorpreparatcafea3 = new preparatCafea * [2];
	 vectorpreparatcafea3[0] = new preparatCafea(p1);
	 vectorpreparatcafea3[1] = new preparatCafea(p3);
	 c1.setVectorCafea(2, vectorpreparatcafea3);

	 cout << "-----obiectul c1 dupa modificari --------------" << endl << endl;
	 cout << "Denumirea cafenelei este : " << c1.getDenumireCafenea() << endl;
	 cout << "Numarul de preparate este  :" << c1.getnrPrepaartCafea() << endl;
	 cout << "Preparatele sunt : ";
	 for (int i = 0; i < c1.getnrPrepaartCafea(); i++)
	 {
		 cout << *c1.getvectorPointer()[i] << endl;
	 }
	 cout << endl << endl;


	 cafenea c4(c1);
	 cout << "-----obiectul c4 dupa ce a fost copiat dupa c1 --------------" << endl << endl;
	 cout << "Denumirea cafenelei este : " << c4.getDenumireCafenea() << endl;
	 cout << "Numarul de preparate este  :" << c4.getnrPrepaartCafea() << endl;
	 cout << "Preparatele sunt : ";
	 for (int i = 0; i < c4.getnrPrepaartCafea(); i++)
	 {
		 cout << *c4.getvectorPointer()[i] << endl;
	 }
	 cout << endl << endl;
	 cout << "-----obiectul c1 inainte de copiere --------------" << endl << endl;
	 cout << "Denumirea cafenelei este : " << c1.getDenumireCafenea() << endl;
	 cout << "Numarul de preparate este  :" << c1.getnrPrepaartCafea() << endl;
	 cout << "Preparatele sunt : ";
	 for (int i = 0; i < c1.getnrPrepaartCafea(); i++)
	 {
		 cout << *c1.getvectorPointer()[i] << endl;
	 }
	 cout << endl << endl;

	 c1 = c3;
	 cout << "-----obiectul c1 dupa ce a fost copiat --------------" << endl << endl;
	 cout << "Denumirea cafenelei este : " << c1.getDenumireCafenea() << endl;
	 cout << "Numarul de preparate este  :" << c1.getnrPrepaartCafea() << endl;
	 cout << "Preparatele sunt : ";
	 for (int i = 0; i < c1.getnrPrepaartCafea(); i++)
	 {
		 cout << *c1.getvectorPointer()[i] << endl;
	 }
	 cout << endl << endl;

	 cout << "----operatorul <<-----" << endl << endl;
	 cout << c1;

	 cout << "----operatorul >>-----" << endl << endl;
	/* cin >> c3;*/
	 cout << "-----obiectul c3 dupa ce a fost introdus de la tastatura --------------" << c3<<endl << endl;
	 cout << "-----obiectul c1 inainte de a fi adaugat un element --------------" << endl << endl;
	 c1.adaugaElement(&p3);

	 cout << "-----obiectul c1 dupa ce a fost adaugat un element --------------" << endl << c1<<endl;



	 cout << "-----obiectul c1 inainte de a fi sters un element --------------" << endl << endl;
	 c1 -= (1);
	 
	 cout << "-----obiectul c1 dupa ce a fost sters un element --------------" << endl <<c1<< endl;

 }