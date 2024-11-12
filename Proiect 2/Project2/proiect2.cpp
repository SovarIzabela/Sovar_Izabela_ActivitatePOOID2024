#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class TraseuMontan {
private:
	string denumireTraseu;
	int lungimeKmTraseu;
	float durataTraseuOre;
	bool prezintaRiscAvalansa;
	const int altitudineMaxima;
	static string taraTraseelor;

	char* dificultateTraseu;
	int nrEchipeSalvare;
	string* echipeSalvare;
	int numarPuncteAltitudine;
	int* altitudini;

public:
	//constructor cu toti parametrii

	TraseuMontan(string denumireTraseu, int lungimeKmTraseu, float durataTraseuOre, bool prezintaRiscAvalansa, int altitudineMaxima, const char* dificultateTraseu, int nrEchipeSalvare, string* echipeSalvare, int numarPuncteAltitudine, int* altitudini) :altitudineMaxima(altitudineMaxima)
	{
		this->denumireTraseu = denumireTraseu;
		this->lungimeKmTraseu = lungimeKmTraseu;
		this->durataTraseuOre = durataTraseuOre;
		this->prezintaRiscAvalansa = prezintaRiscAvalansa;
		this->dificultateTraseu = new char[strlen(dificultateTraseu) + 1];
		strcpy(this->dificultateTraseu, dificultateTraseu);

		this->nrEchipeSalvare = nrEchipeSalvare;


		this->echipeSalvare = new string[this->nrEchipeSalvare];
		for (int i = 0; i < this->nrEchipeSalvare; i++)
		{
			this->echipeSalvare[i] = echipeSalvare[i];
		}

		this->numarPuncteAltitudine = numarPuncteAltitudine;
		this->altitudini = new int[this->numarPuncteAltitudine];

		for (int i = 0; i < this->numarPuncteAltitudine; i++)
		{
			this->altitudini[i] = altitudini[i];
		}

	}
	//constructor fara parametri

	TraseuMontan() :altitudineMaxima(0)
	{
		this->denumireTraseu = "Anonim";
		this->lungimeKmTraseu = 0;
		this->durataTraseuOre = 0;
		this->prezintaRiscAvalansa = 0;

		this->dificultateTraseu = new char[strlen("necunoscut") + 1];
		strcpy(this->dificultateTraseu, "necunoscut");
		this->nrEchipeSalvare = 0;
		this->echipeSalvare = NULL;
		this->numarPuncteAltitudine = 0;
		this->altitudini = NULL;


	}
	//constructor cu un parametru

	TraseuMontan(string denumireTraseu) :altitudineMaxima(0)
	{
		this->denumireTraseu = denumireTraseu;
		this->lungimeKmTraseu = 0;
		this->durataTraseuOre = 0;
		this->prezintaRiscAvalansa = 0;
		this->dificultateTraseu = new char[strlen("necunoscut") + 1];
		strcpy(this->dificultateTraseu, "necunoscut");
		this->nrEchipeSalvare = 0;
		this->echipeSalvare = NULL;
		this->numarPuncteAltitudine = 0;
		this->altitudini = NULL;
	}
	//constructor cu 2 parametri

	TraseuMontan(string denumireTraseu, int lungimeKmTraseu) :altitudineMaxima(0)
	{
		this->denumireTraseu = denumireTraseu;
		this->lungimeKmTraseu = lungimeKmTraseu;
		this->durataTraseuOre = 0;
		this->prezintaRiscAvalansa = 0;
		this->dificultateTraseu = new char[strlen("necunoscut") + 1];
		strcpy(this->dificultateTraseu, "necunoscut");
		this->nrEchipeSalvare = 0;
		this->echipeSalvare = NULL;
		this->numarPuncteAltitudine = 0;
		this->altitudini = NULL;
	}
	//constructor cu 3 parametri

	TraseuMontan(string denumireTraseu, int lungimeKmTraseu, float durataTraseuOre) :altitudineMaxima(0)

	{
		this->denumireTraseu = denumireTraseu;
		this->lungimeKmTraseu = lungimeKmTraseu;
		this->durataTraseuOre = durataTraseuOre;
		this->prezintaRiscAvalansa = 0;
		this->dificultateTraseu = new char[strlen("necunoscut") + 1];
		strcpy(this->dificultateTraseu, "necunoscut");
		this->nrEchipeSalvare = 0;
		this->echipeSalvare = NULL;
		this->numarPuncteAltitudine = 0;
		this->altitudini = NULL;
	}

	//getteri

	string getDenumireTraseu()
	{
		return this->denumireTraseu;
	}

	int getLungimeKmTraseu()
	{
		return this->lungimeKmTraseu;
	}

	float getDurataTraseuOre()
	{
		return this->durataTraseuOre;
	}

	bool getPrezintaRiscAvalansa()
	{
		return this->prezintaRiscAvalansa;
	}

	int getAltitudineMaxima()
	{
		return this->altitudineMaxima;
	}

	char* getDificultateTraseu()
	{
		return this->dificultateTraseu;
	}

	int getNrEchipeSalvare()
	{
		return this->nrEchipeSalvare;
	}

	string* getEchipeSalvare()
	{
		return this->echipeSalvare;
	}
	int getNumarPuncteAltitudini()
	{
		return this->numarPuncteAltitudine;
	}

	int* getAltitudini()
	{
		return this->altitudini;
	}
	//setteri

	void setDenumireTraseu(string DenumireNouaTraseu)
	{
		this->denumireTraseu = DenumireNouaTraseu;
	}

	void setLungimeKmTraseu(int LungimeNouaTraseu)
	{
		this->lungimeKmTraseu = LungimeNouaTraseu;
	}


	void setDurataTraseuOre(float DurataNouaTraseuOre)
	{
		this->durataTraseuOre = DurataNouaTraseuOre;
	}


	void setPrezintaRiscAvalansa(bool PrezintaRiscAvalansaValNoua)
	{
		this->prezintaRiscAvalansa = PrezintaRiscAvalansaValNoua;
	}

	void setDificultateTraseu(const char* dificultateTraseuValNoua)
	{
		if (this->dificultateTraseu != NULL)
		{
			delete[]this->dificultateTraseu;
		}

		this->dificultateTraseu = new char[strlen(dificultateTraseuValNoua) + 1];
		strcpy(this->dificultateTraseu, dificultateTraseuValNoua);

	}

	void setEchipeSalvare(int NumarEchipeSalvareValNou, string* echipeSalvareNou)
	{
		if (this->echipeSalvare != NULL)
		{
			delete[]this->echipeSalvare;
		}

		this->nrEchipeSalvare = NumarEchipeSalvareValNou;
		this->echipeSalvare = new string[this->nrEchipeSalvare];
		for (int i = 0; i < this->nrEchipeSalvare; i++)
		{
			this->echipeSalvare[i] = echipeSalvareNou[i];
		}


	}

	void setAltitudini(int numarPuncteAltitudineValNou, int* AltitudiniNoi)
	{

		if (this->altitudini != NULL)
		{
			delete[]this->altitudini;
		}

		this->numarPuncteAltitudine = numarPuncteAltitudineValNou;

		this->altitudini = new int[this->numarPuncteAltitudine];

		for (int i = 0; i < this->numarPuncteAltitudine; i++)
		{
			this->altitudini[i] = AltitudiniNoi[i];
		}

	}


	//destructor
	~TraseuMontan()
	{
		if (this->dificultateTraseu != NULL)
		{
			delete[]this->dificultateTraseu;
		}

		if (this->echipeSalvare != NULL)
		{
			delete[]this->echipeSalvare;
		}

		if (this->altitudini != NULL)
		{
			delete[]this->altitudini;
		}
	}


	//constructorul de copiere
	TraseuMontan(const TraseuMontan& obiectExistent) :altitudineMaxima(altitudineMaxima)
	{
		this->denumireTraseu = obiectExistent.denumireTraseu;
		this->lungimeKmTraseu = obiectExistent.lungimeKmTraseu;
		this->durataTraseuOre = obiectExistent.durataTraseuOre;
		this->prezintaRiscAvalansa = obiectExistent.prezintaRiscAvalansa;
		this->dificultateTraseu = new char[strlen(obiectExistent.dificultateTraseu) + 1];
		strcpy(this->dificultateTraseu, obiectExistent.dificultateTraseu);

		this->nrEchipeSalvare = obiectExistent.nrEchipeSalvare;


		this->echipeSalvare = new string[obiectExistent.nrEchipeSalvare];
		for (int i = 0; i < this->nrEchipeSalvare; i++)
		{
			this->echipeSalvare[i] = obiectExistent.echipeSalvare[i];
		}

		this->numarPuncteAltitudine = obiectExistent.numarPuncteAltitudine;
		this->altitudini = new int[obiectExistent.numarPuncteAltitudine];

		for (int i = 0; i < this->numarPuncteAltitudine; i++)
		{
			this->altitudini[i] = obiectExistent.altitudini[i];
		}

	}

	//operatorul =

	TraseuMontan& operator=(TraseuMontan& obiectMatrice)
	{
		if (this != &obiectMatrice)
		{
			if (this->dificultateTraseu != NULL)
			{
				delete[]this->dificultateTraseu;
			}

			if (this->echipeSalvare != NULL)
			{
				delete[]this->echipeSalvare;
			}

			if (this->altitudini != NULL)
			{
				delete[]this->altitudini;
			}

			this->denumireTraseu = obiectMatrice.denumireTraseu;
			this->lungimeKmTraseu = obiectMatrice.lungimeKmTraseu;
			this->durataTraseuOre = obiectMatrice.durataTraseuOre;
			this->prezintaRiscAvalansa = obiectMatrice.prezintaRiscAvalansa;
			this->dificultateTraseu = new char[strlen(obiectMatrice.dificultateTraseu) + 1];
			strcpy(this->dificultateTraseu, obiectMatrice.dificultateTraseu);

			this->nrEchipeSalvare = obiectMatrice.nrEchipeSalvare;


			this->echipeSalvare = new string[obiectMatrice.nrEchipeSalvare];
			for (int i = 0; i < this->nrEchipeSalvare; i++)
			{
				this->echipeSalvare[i] = obiectMatrice.echipeSalvare[i];
			}

			this->numarPuncteAltitudine = obiectMatrice.numarPuncteAltitudine;
			this->altitudini = new int[obiectMatrice.numarPuncteAltitudine];

			for (int i = 0; i < this->numarPuncteAltitudine; i++)
			{
				this->altitudini[i] = obiectMatrice.altitudini[i];
			}
		}


		return *this;

	}

	void afiseaza()
	{
		cout << "Denumirea traseului este : " << this->denumireTraseu << endl;
		cout << "Lungimea traseului in km este : " << this->lungimeKmTraseu << endl;
		cout << "Durata traseului / ore : " << this->durataTraseuOre << endl;
		cout << " Traseul prezinta risc de avalansa? " << (this->prezintaRiscAvalansa ? "DA" : "NU") << endl;
		cout << "Altitidinea maxima este : " << this->altitudineMaxima << endl;
		cout << "Dificultatea traseului este : " << this->dificultateTraseu << endl;
		cout << "Numarul echipelor de salvare este : " << this->nrEchipeSalvare << endl;
		cout << "Echipele de salvare sunt " << endl;
		for (int i = 0; i < nrEchipeSalvare; i++)
		{
			cout << "Echipa : " << this->echipeSalvare[i] << endl;
		}
		cout << " Numarul de puncte altitudine este : " << this->numarPuncteAltitudine << endl;
		for (int i = 0; i < numarPuncteAltitudine; i++)
		{
			cout << "Altitudini: " << this->altitudini[i] << endl;
		}

		cout << endl << endl;

	}

	//sa se creeze o metoda care identifica care este altitudinea medie a unui traseu;

	int altitudineMedie()
	{

		if (numarPuncteAltitudine == 0)
		{
			return 0;
		}
		int suma = 0;

		for (int i = 0; i < this->numarPuncteAltitudine; i++)
		{
			suma = suma + this->altitudini[i];
		}

		int media = suma / this->numarPuncteAltitudine;

		return media;
	}
	// sa se calculeze o metoda care calculeaza durata medie pe km tinand cont de lungimea traseului

	float duratamedieKM()
	{
		if (lungimeKmTraseu == 0)
		{
			return 0;
		}

		float medie = durataTraseuOre / lungimeKmTraseu;
		return medie;
	}

	//sa se implementeze o metoda care va identifica daca s-a depasit o anumita altitudine pe un traseu montan

	int verificareAltitudine(int pragAltitudine)
	{


		if (altitudini == NULL || numarPuncteAltitudine == 0)
		{
			return 0;
		}

		for (int i = 0; i < this->numarPuncteAltitudine; i++)
		{
			if (altitudini[i] > pragAltitudine)
			{
				return altitudini[i];
			}

		}

		return 0;

	}

	// sa se inlocuiasca ultima echipa de salvare din vector cu o echipa noua primita ca parametru
	void inlocuiesteUltimaEchipaSalvare(string echipaNoua)
	{
		//facem o copie a obiectului this
		TraseuMontan copie(*this);
		// dezalocam memoria pentru this
		if (this->echipeSalvare != NULL)
		{
			delete[]this->echipeSalvare;
		}
		//aloc memorie noua pentru noul vector
		this->echipeSalvare = new string[this->nrEchipeSalvare];
		//copiez valorile din copie mai putin ultimul element

		for (int i = 0; i < copie.nrEchipeSalvare - 1; i++)
		{
			this->echipeSalvare[i] = copie.echipeSalvare[i];
		}
		//atribui ultimul element din noul  vector cu elementul care va fi modificat
		this->echipeSalvare[this->nrEchipeSalvare - 1] = echipaNoua;


	}

	//sa se adauge o noua echipa in vector la inceputul listei

	void adaugaEchipaLaInceput(string echipaNoua)
	{
		TraseuMontan copie(*this);

		// dezalocam memoria pentru this
		if (this->echipeSalvare != NULL)
		{
			delete[]this->echipeSalvare;
		}

		this->nrEchipeSalvare++;

		this->echipeSalvare = new string[this->nrEchipeSalvare];

		for (int i = 0; i < copie.nrEchipeSalvare; i++)
		{
			this->echipeSalvare[i + 1] = copie.echipeSalvare[i];
		}

		this->echipeSalvare[0] = echipaNoua;


	}
	// operator <=
	// sa compare 2 obiecte pe baza atributului lungimeKmTraseu

	bool operator<=(const TraseuMontan&obj)
	{
		if (this->lungimeKmTraseu <= obj.lungimeKmTraseu)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	//operator == // sa se compare 2 obiecte in intregime

	bool operator==(TraseuMontan& obj)
	{

		bool ok = 1;
		if ((this->denumireTraseu == obj.denumireTraseu) && (this->lungimeKmTraseu == obj.lungimeKmTraseu) && (this->durataTraseuOre == obj.durataTraseuOre)
			&& (this->prezintaRiscAvalansa == obj.prezintaRiscAvalansa) && (strcmp(this->dificultateTraseu, obj.dificultateTraseu) == 0)
			&& (this->nrEchipeSalvare == obj.nrEchipeSalvare) && (this->numarPuncteAltitudine == obj.numarPuncteAltitudine))
		{
			for (int i = 0; i < this->nrEchipeSalvare; i++)
			{
				if (this->echipeSalvare[i] == obj.echipeSalvare[i])
				{
					ok = 1;
				}
				else
				{
					ok = 0;
				}
			}


			for (int i = 0; i < this->numarPuncteAltitudine; i++)
			{
				if (this->altitudini[i] == obj.altitudini[i])
				{
					ok = 1;
				}
				else
				{
					ok = 0;
				}
			}
		}
		else
		{
			ok = 0;
		}
		return ok;
	}


	//operatorul << de afisare obiect pe consola

	 

	friend ostream& operator<<(ostream& out, const TraseuMontan& obj)
	{
		out << "Denumirea traseului este : " << obj.denumireTraseu << endl;
		out << "Lungimea traseului in km este : " << obj.lungimeKmTraseu << endl;
		out << "Durata traseului / ore : " << obj.durataTraseuOre << endl;
		out << " Traseul prezinta risc de avalansa? " << (obj.prezintaRiscAvalansa ? "DA" : "NU") << endl;
		out << "Altitidinea maxima este : " << obj.altitudineMaxima << endl;
		out << "Dificultatea traseului este : " << obj.dificultateTraseu << endl;
		out << "Numarul echipelor de salvare este : " << obj.nrEchipeSalvare << endl;
		out << "Echipele de salvare sunt " << endl;
		for (int i = 0; i < obj.nrEchipeSalvare; i++)
		{
			out << "Echipa : " << obj.echipeSalvare[i] << endl;
		}
		out << " Numarul de puncte altitudine este : " << obj.numarPuncteAltitudine << endl;
		for (int i = 0; i < obj.numarPuncteAltitudine; i++)
		{
			out << "Altitudini: " << obj.altitudini[i] << endl;
		}

		return out;
	}

	friend istream& operator >>(istream& in, TraseuMontan& obj)
	{
		if (obj.dificultateTraseu != NULL)
		{
			delete[]obj.dificultateTraseu;
		}

		if (obj.echipeSalvare != NULL)
		{
			delete[]obj.echipeSalvare;
		}

		if (obj.altitudini != NULL)
		{
			delete[]obj.altitudini;
		}

		cout << "Introduceti de la tastatura denumirea traseului";
		in >> obj.denumireTraseu;

		cout << "Introduceti lungime km traseu";
		in >> obj.lungimeKmTraseu;


		cout << "Introduceti de la tastatura durata traseu ore";
		in >> obj.durataTraseuOre;

		cout << "Introduceti de la tastatura daca prezinta risc de avalansa, 1 pentru DA //0 pentru NU: ";
		in >> obj.prezintaRiscAvalansa;

		cout << "Introduceti dificultatea traseului : ";
		char aux[100];
		in >> aux;
		obj.dificultateTraseu = new char[strlen(aux) + 1];
		strcpy(obj.dificultateTraseu, aux);

		cout << "Introduceti de la tastatura numarul de echipe salvare:";
		in >> obj.nrEchipeSalvare;
		obj.echipeSalvare = new string[obj.nrEchipeSalvare];

		cout << "Introduceti echipele de salvare: ";
		for (int i = 0; i < obj.nrEchipeSalvare; i++)
		{
			in >> obj.echipeSalvare[i];
		}

		cout << "Introduceti de la tastatura numarul Puncte de Altitudine: ";
		in >> obj.numarPuncteAltitudine;
		obj.altitudini = new int[obj.numarPuncteAltitudine];

		cout << "Introduceti altitudinile: ";
		for (int i = 0; i < obj.numarPuncteAltitudine; i++)
		{
			in >> obj.altitudini[i];
		}


		return in;
		
	


	}


};

string TraseuMontan::taraTraseelor = "Romania";

void main()
{


	string echipeSalvare1[] = { "SalvamontSinaia", "SalvamontBrasov" };
	int altitudini1[] = { 1500,2500 };

	TraseuMontan tm1(" Fagaras ", 15, 5, 0, 2500, "mediu", 2, echipeSalvare1, 2, altitudini1);
	cout << "Denumirea traseului:" << tm1.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tm1.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tm1.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tm1.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tm1.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tm1.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tm1.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tm1.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tm1.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tm1.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tm1.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tm1.getAltitudini()[i] << endl;
	}

	cout << endl << endl;



	tm1.setDenumireTraseu("Ceahlau");
	tm1.setLungimeKmTraseu(17);
	tm1.setDurataTraseuOre(7);
	tm1.setPrezintaRiscAvalansa(1);
	tm1.setDificultateTraseu("Mare");
	string echipeSalvare3[] = { "SalvamontBucegi", "SalvamontCeahlau" };
	tm1.setEchipeSalvare(2, echipeSalvare3);
	int altitudini3[] = { 1500, 2200 };
	tm1.setAltitudini(2, altitudini3);

	cout << "............................Valoare tm1 dupa modificari..........................................." << endl << endl;

	tm1.afiseaza();


	cout << "............................Valoare tm2..........................................." << endl << endl;

	string echipeSalvare2[] = { "SalvamontNeamt", "SalvamontBrasov" };
	int altitudini2[] = { 1200,2000 };
	TraseuMontan tm2(" Neamt ", 20, 10, 1, 2500, "mica", 2, echipeSalvare2, 2, altitudini2);

	tm2.afiseaza();

	cout << "............................Valoare tm3 d..............................................." << endl << endl;
	TraseuMontan tm3;

	tm3.afiseaza();

	cout << "............................Valoare tm4...................................................." << endl << endl;

	TraseuMontan tm4("Fagaras");

	tm4.afiseaza();

	cout << "............................Valoare tm5......................................................" << endl << endl;
	TraseuMontan tm5("Sinaia", 19);

	tm5.afiseaza();

	cout << "............................Valoare tm6....................................................." << endl << endl;

	TraseuMontan tm6("Bucegi", 25, 10);

	tm6.afiseaza();

	TraseuMontan tm10(tm6);

	cout << ".....................Valoare obiect copiat tm10 dupa tm6............................." << endl<<endl;

	tm10.afiseaza();

	cout << ".......................Obiectul tm1......................................." << endl << endl;
	tm1.afiseaza();

	cout << ".......................Obiectul tm5 inainte de modificare......................................." << endl << endl;
	tm5.afiseaza();

	tm5 = tm1;

	cout << ".......................Obiectul tm5 dupa modificare ......................................." << endl << endl;
	tm5.afiseaza();

	cout << "Altitudinea medie pentru obiectul tm5 este : " << tm5.altitudineMedie() << endl << endl;

	cout << "Durata medie pe kilometru a traseului tm5 este : " << tm5.duratamedieKM() << endl << endl;

	cout << "Altitudini mai mari de 2000 m : " << tm5.verificareAltitudine(2000) << endl << endl;
	cout << "Altitudini mai mari de 2500 m : " << tm5.verificareAltitudine(2500) << endl << endl;
	
	cout << ".......................Obiectul tm5 inainte de modificare ultimei echipe......................................." << endl << endl;
	tm5.afiseaza();
	tm5.inlocuiesteUltimaEchipaSalvare("SALVAMONT NEAMT");
	cout << endl;
	cout << ".......................Obiectul tm5 dupa modificarea ultimei echipe......................................." << endl << endl;
	tm5.afiseaza();
	cout << endl << endl;


	cout << "....tm1 inainte..........." << endl << endl;
	tm1.afiseaza();
	cout << endl << endl;
	tm1.adaugaEchipaLaInceput("SalvamontSinaia");

	cout << ".........tm1 dupa..........." << endl << endl;
	tm1.afiseaza();
	cout << endl << endl;
	tm1.adaugaEchipaLaInceput("SalvamontSinaia");
	tm1.afiseaza();
	cout << endl << endl;

	//operatori

	cout << "Lungimea traseului pentru obiectul tm1: " << tm1.getLungimeKmTraseu() << endl << endl;
	cout << "Lungimea traseului pentru obiectul tm5 : " << tm5.getLungimeKmTraseu() << endl << endl;
	cout << "Lungimea traseului pentru Obiectul tm1 <= decat lungimea traseului m5 ? " << ((tm1 <= tm5) ? "DA" : "NU" )<< endl << endl;


	cout << ".......................Obiectul tm10 ......................................................" << endl << endl;
	tm10.afiseaza();
	cout << ".......................Obiectul tm5 ......................................................." << endl << endl;
	tm1.afiseaza();
	cout << "Tm1 si tm10 sunt egale ? " << ((tm10 == tm1) ? "DA" : "NU") << endl << endl;
	cout << "...................................operatorul <<........................................................."<<endl<<endl;
	cout << "Obiectul tm10" << endl << tm10 << endl << endl;
	cout << "...................................operatorul >>........................................................." << endl << endl;
	cout << "obiectul tm5 inainte sa fie citit de la tastatura........." << endl;
	cin >> tm5;
	cout << "obiectul tm5 dupa ce a fost citit de la tastatura........." <<endl<<tm5<< endl;
}

