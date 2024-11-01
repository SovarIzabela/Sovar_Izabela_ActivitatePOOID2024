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

	TraseuMontan&operator=(TraseuMontan&obiectMatrice)
	{
		if(this!= &obiectMatrice)
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
		cout << " Numarul de puncte altitudine este : " <<this->numarPuncteAltitudine<< endl;
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

		int media = suma /this-> numarPuncteAltitudine;

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
		

		if (altitudini == NULL||numarPuncteAltitudine==0)
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
	

}