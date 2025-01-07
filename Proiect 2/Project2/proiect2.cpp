#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class TraseuMontan {
protected:
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


	
	TraseuMontan(const TraseuMontan& obiectExistent) :altitudineMaxima(obiectExistent.altitudineMaxima)
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

	

	TraseuMontan& operator=(const TraseuMontan& obiectMatrice)
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

	float altitudineMedie()
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

	bool verificareAltitudine(int pragAltitudine)
	{
		bool rezultat = 0;

		if (altitudini == NULL || numarPuncteAltitudine == 0)
		{
			return rezultat;
		}

		for (int i = 0; i < this->numarPuncteAltitudine; i++)
		{
			if (altitudini[i] > pragAltitudine)
			{
				rezultat = 1;
			}

		}

		return rezultat;

	}

	// sa se inlocuiasca ultima echipa de salvare din vector cu o echipa noua primita ca parametru
	void inlocuiesteUltimaEchipaSalvare(string echipaNoua)
	{
		
		TraseuMontan copie(*this);
		
		if (this->echipeSalvare != NULL)
		{
			delete[]this->echipeSalvare;
		}
		
		this->echipeSalvare = new string[this->nrEchipeSalvare];
		

		for (int i = 0; i < copie.nrEchipeSalvare - 1; i++)
		{
			this->echipeSalvare[i] = copie.echipeSalvare[i];
		}
		
		this->echipeSalvare[this->nrEchipeSalvare - 1] = echipaNoua;


	}

	//sa se adauge o noua echipa in vector la inceputul listei

	void adaugaEchipaLaInceput(string echipaNoua)
	{
		TraseuMontan copie(*this);

		
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

	friend ofstream& operator<<(ofstream& file, const TraseuMontan& obj)
	{
		file << obj.denumireTraseu << endl;
		file << obj.lungimeKmTraseu << endl;
		file << obj.durataTraseuOre << endl;
		file << obj.prezintaRiscAvalansa << endl;
		file << obj.dificultateTraseu << endl;
		file << obj.nrEchipeSalvare << endl;
		for (int i = 0; i < obj.nrEchipeSalvare; i++)
		{
			file << obj.echipeSalvare[i] << endl;
		}
		file << obj.numarPuncteAltitudine << endl;
		for (int i = 0; i < obj.numarPuncteAltitudine; i++)
		{
			file << obj.altitudini[i] << endl;
		}

		return file;
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

	friend ifstream& operator >>(ifstream& file, TraseuMontan& obj)
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
		file >> obj.denumireTraseu;
		file >> obj.lungimeKmTraseu;
		file >> obj.durataTraseuOre;
		file >> obj.prezintaRiscAvalansa;

		char aux[100];
		file >> aux;
		obj.dificultateTraseu = new char[strlen(aux) + 1];
		strcpy(obj.dificultateTraseu, aux);
		file >> obj.nrEchipeSalvare;
		obj.echipeSalvare = new string[obj.nrEchipeSalvare];
		for (int i = 0; i < obj.nrEchipeSalvare; i++)
		{
			file >> obj.echipeSalvare[i];
		}

		file >> obj.numarPuncteAltitudine;
		obj.altitudini = new int[obj.numarPuncteAltitudine];

		for (int i = 0; i < obj.numarPuncteAltitudine; i++)
		{
			file >> obj.altitudini[i];
		}

		return file;

	}

	

	//sa se afiseza denumirea unui echipe de salvare indicand pozitia vectorului

	string operator[](int pozitieCautata)
	{
		if (pozitieCautata >= 0 && pozitieCautata < this->nrEchipeSalvare)
		{
			return this->echipeSalvare[pozitieCautata];
		}
		else
		{
			return "Pozitie gresita";
		}
	}

	
	// sa se implementeze o functie care va afisa pe baza unui prag setat ca parametru daca traseul este periculos
	bool operator()(int pragAltitudine)
	{
		if (altitudineMaxima > pragAltitudine && prezintaRiscAvalansa)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


	
	//sa se schimbe starea traseului din 'prezinta' risc de avalansa in 'nu prezinta risc de avalansa' si invers

	friend void operator!(TraseuMontan&obj)
	{
		if (obj.prezintaRiscAvalansa == 1)
		{
			obj.prezintaRiscAvalansa == 0;
		
		}
		else if (obj.prezintaRiscAvalansa == 0)
		{
			obj.prezintaRiscAvalansa == 1;

		}
	}

	
	//sa se adauge o noua echipa in vector la inceputul listei

	TraseuMontan& operator+=(string echipaNoua)
	{
		TraseuMontan copie(*this);

		if (this->echipeSalvare != NULL)
		{
			delete[]this->echipeSalvare;
		}

		this->nrEchipeSalvare++;

		this->echipeSalvare = new string[this->nrEchipeSalvare];

		for (int i = 0; i < copie.nrEchipeSalvare; i++)
		{
			this->echipeSalvare[i] = copie.echipeSalvare[i];
		}

		this->echipeSalvare[0] = echipaNoua;

		return *this;

	}

	//fisiere binare
	void scriereBinar(fstream& file)
	{
		//string denumireTraseu;
		int numarLitereDenumireTraseu = this->denumireTraseu.size();
		file.write((char*)&numarLitereDenumireTraseu, sizeof(int));
		file.write(this->denumireTraseu.c_str(),numarLitereDenumireTraseu);
		
		//int lungimeKmTraseu;
		file.write((char*)&this->lungimeKmTraseu, sizeof(int));

		//float durataTraseuOre;
		file.write((char*)&this->durataTraseuOre, sizeof(float));

		//bool prezintaRiscAvalansa;
		file.write((char*)&this->prezintaRiscAvalansa, sizeof(bool));

		//char* dificultateTraseu;
		int numarLitere = strlen(this->dificultateTraseu);
		file.write((char*)&numarLitere, sizeof(int));
		for (int i = 0; i < numarLitere; i++)
		{
			file.write((char*)&this->dificultateTraseu[i], sizeof(char));
		}

		//int nrEchipeSalvare;
		file.write((char*)&this->nrEchipeSalvare, sizeof(int));

		//string* echipeSalvare;
		for(int i=0;i<this->nrEchipeSalvare;i++)
		{
			int numarLitereEchipeSalvare = this->echipeSalvare[i].size();
			file.write((char*)&numarLitereEchipeSalvare, sizeof(int));
			file.write(this->echipeSalvare[i].c_str(), numarLitereEchipeSalvare);
		}
		
		//int numarPuncteAltitudine;
		file.write((char*)&this->numarPuncteAltitudine, sizeof(int));
	
		//int* altitudini;
		for (int i = 0; i < numarPuncteAltitudine; i++)
		{
			file.write((char*)&this->altitudini[i], sizeof(int));
		}

	}

	void citireBinar(fstream& binar)
	{
		
			delete[]this->dificultateTraseu;
			delete[]this->echipeSalvare;
			delete[]this->altitudini;
	
			//string denumireTraseu;
			int numarLitereDenumireTraseu;
			binar.read((char*)&numarLitereDenumireTraseu, sizeof(int));
			string aux;
			aux.resize(numarLitereDenumireTraseu);
			binar.read((char*)aux.c_str(), numarLitereDenumireTraseu);
			this->denumireTraseu = aux;

			//int lungimeKmTraseu;
			binar.read((char*)&this->lungimeKmTraseu, sizeof(int));

			//float durataTraseuOre;
			binar.read((char*)&this->durataTraseuOre, sizeof(float));

			//bool prezintaRiscAvalansa;
			binar.read((char*)&this->prezintaRiscAvalansa, sizeof(bool));

			//char* dificultateTraseu;
			int numarLitere;
			binar.read((char*)&numarLitere, sizeof(int));
			this->dificultateTraseu = new char[numarLitere + 1];
			for (int i = 0; i < numarLitere; i++)
			{
				binar.read((char*)&this->dificultateTraseu[i], sizeof(char));
			}
			this->dificultateTraseu[numarLitere] = '\0';

			//int nrEchipeSalvare;
			binar.read((char*)&this->nrEchipeSalvare, sizeof(int));

			//string* echipeSalvare;

			this->echipeSalvare = new string[nrEchipeSalvare];
			for (int i = 0; i < this->nrEchipeSalvare; i++)
			{
				int numarLitereDenumireTraseu;
				binar.read((char*)&numarLitereDenumireTraseu, sizeof(int));
				string aux;
				aux.resize(numarLitereDenumireTraseu);
				binar.read((char*)aux.c_str(), numarLitereDenumireTraseu);
				this->echipeSalvare[i] = aux;
			}

			//int numarPuncteAltitudine;
			binar.read((char*)&this->numarPuncteAltitudine, sizeof(int));

			//int* altitudini;
			this->altitudini = new int[this->numarPuncteAltitudine];
			for (int i = 0; i < numarPuncteAltitudine; i++)
			{
				binar.read((char*)&this->altitudini[i], sizeof(int));
			}


	}
	


};

string TraseuMontan::taraTraseelor = "Romania";


class TraseuMontanCultural:public TraseuMontan
{
	int numarPuncteCulturale;
	string* denumirePuncteCulturale;

public:
	TraseuMontanCultural() :TraseuMontan()
	{
		this->numarPuncteCulturale  = 0;
		this->denumirePuncteCulturale = NULL;
	}

	TraseuMontanCultural(int numarPuncteCulturale, string* denumirePuncteCulturale, string denumireTraseu, int lungimeKmTraseu, float durataTraseuOre, bool prezintaRiscAvalansa, int altitudineMaxima, const char* dificultateTraseu, int nrEchipeSalvare, string* echipeSalvare, int numarPuncteAltitudine, int* altitudini) :TraseuMontan(denumireTraseu, lungimeKmTraseu, durataTraseuOre, prezintaRiscAvalansa, altitudineMaxima, dificultateTraseu, nrEchipeSalvare, echipeSalvare, numarPuncteAltitudine, altitudini)
	{
		this->numarPuncteCulturale = numarPuncteCulturale;
		this->denumirePuncteCulturale = new string[this->numarPuncteCulturale];
			for (int i = 0; i < this->numarPuncteCulturale; i++)
			{
				this->denumirePuncteCulturale[i] = denumirePuncteCulturale[i];
		    }
	}

	TraseuMontanCultural(int numarPuncteCulturale, string* denumirePuncteCulturale, string denumireTraseu) :TraseuMontan(denumireTraseu)
	{
		this->numarPuncteCulturale = numarPuncteCulturale;
		this->denumirePuncteCulturale = new string[this->numarPuncteCulturale];
		for (int i = 0; i < this->numarPuncteCulturale; i++)
		{
			this->denumirePuncteCulturale[i] = denumirePuncteCulturale[i];
		}
	}

	int getNumarPuncteCulturale()
	{
		return this->numarPuncteCulturale;
	}

	string* getDenumirePuncteCulturale()
	{
		return this->denumirePuncteCulturale;
	}

	void setDenumirePuncteCulturale(int numarPuncteCulturaleNou, string* denumirePuncteCulturaleNou)
	{
		if (this->denumirePuncteCulturale != NULL)
		{
			delete[]this->denumirePuncteCulturale;
		}

		this->numarPuncteCulturale = numarPuncteCulturaleNou;
		this->denumirePuncteCulturale = new string[this->numarPuncteCulturale];
		for (int i = 0; i < this->numarPuncteCulturale; i++)
		{
			this->denumirePuncteCulturale[i] = denumirePuncteCulturaleNou[i];
		}
	}

	~TraseuMontanCultural()
	{
		if (this->denumirePuncteCulturale != NULL)
		{
			delete[]this->denumirePuncteCulturale;
		}
	}


	TraseuMontanCultural(const TraseuMontanCultural& tmc):TraseuMontan(tmc)
	{
		

		this->numarPuncteCulturale = tmc.numarPuncteCulturale;
		this->denumirePuncteCulturale = new string[this->numarPuncteCulturale];
		for (int i = 0; i < this->numarPuncteCulturale; i++)
		{
			this->denumirePuncteCulturale[i] = tmc.denumirePuncteCulturale[i];
		}


	}

	TraseuMontanCultural& operator=(const TraseuMontanCultural&tmc)
	{
		if(this!=&tmc)
		{
			TraseuMontan::operator=(tmc);

			if (this->denumirePuncteCulturale != NULL)
			{
				delete[]this->denumirePuncteCulturale;
			}

			this->numarPuncteCulturale = tmc.numarPuncteCulturale;
			this->denumirePuncteCulturale = new string[this->numarPuncteCulturale];
			for (int i = 0; i < this->numarPuncteCulturale; i++)
			{
				this->denumirePuncteCulturale[i] = tmc.denumirePuncteCulturale[i];
			}
		}

		return *this;

	}

	TraseuMontanCultural(const TraseuMontan& tmc1) :TraseuMontan(tmc1)
	{
		this->numarPuncteCulturale = 3;
		this->denumirePuncteCulturale = new string[3];
		this->denumirePuncteCulturale[0] = "castel 1 ";
		this->denumirePuncteCulturale[1] = "castel 2 ";
		this->denumirePuncteCulturale[2] = "castel 3 ";

	}

	friend ostream& operator<<(ostream& out, TraseuMontanCultural& obj)
	{

		out << "Numar puncte culturale este: " << obj.numarPuncteCulturale << endl;
		out << "Denumirea punctelor culturale : ";
		for (int i = 0; i < obj.numarPuncteCulturale; i++)
		{
			out << obj.denumirePuncteCulturale[i]<<endl;
		}
		out << (TraseuMontan&)obj;

		return out;


	}

	friend istream& operator>>(istream& in, TraseuMontanCultural& obj)
	{
		if (obj.denumirePuncteCulturale != NULL)
		{
			delete[]obj.denumirePuncteCulturale;
		}

		cout << "Introduceti numar puncte culturale ";
		in >> obj.numarPuncteCulturale;
		cout << "Introduceti denumirea punctelor culturale de pe traseu: " << endl;
		obj.denumirePuncteCulturale = new string[obj.numarPuncteCulturale];
		for (int i = 0; i < obj.numarPuncteCulturale; i++)
		{
			in >> obj.denumirePuncteCulturale[i];
		}

		in >> (TraseuMontan&)obj;

		return in;

	}




};

class excursiiMontane
{
	string numeAgentie;
	int nrTraseeMontane;
	TraseuMontan** vectorPointerTraseu;
public:
	excursiiMontane()
	{
		this->numeAgentie = "anonim";
		this->nrTraseeMontane = 0;
		this->vectorPointerTraseu = nullptr;
	}

	excursiiMontane(string numeAgentie, int nrTraseeMontane, TraseuMontan** vectorPointerTraseu)
	{
		this->numeAgentie = numeAgentie;
		this->nrTraseeMontane = nrTraseeMontane;
		this->vectorPointerTraseu = new TraseuMontan*[this->nrTraseeMontane];
		for (int i = 0; i < this->nrTraseeMontane; i++)
		{
			this->vectorPointerTraseu[i] = new TraseuMontan(*vectorPointerTraseu[i]); 
		}
	}

	~excursiiMontane()
	{

		for (int i = 0; i < this->nrTraseeMontane; i++)
		{
			delete this->vectorPointerTraseu[i];
		}
		
		delete[] this->vectorPointerTraseu;
		
	}

	string getnumeAgentie()
	{
		return this->numeAgentie;
	}
	int getnrTraseeMontane()
	{
		return this->nrTraseeMontane;
	}

	TraseuMontan** getvectorPointerTraseu()
	{
		return this->vectorPointerTraseu;
	}


	void setNumeAgentie(string NumeNouAgentie)
	{
		this->numeAgentie = NumeNouAgentie;
	}

	void setPointeriTraseeMontane(int nrTraseeMontaneNou, TraseuMontan** vectorPointerTraseuNou)
	{
		for (int i = 0; i < this->nrTraseeMontane; i++)
		{
			delete this->vectorPointerTraseu[i];
		}

		delete[] this->vectorPointerTraseu;

		this->nrTraseeMontane = nrTraseeMontaneNou;
		this->vectorPointerTraseu = new TraseuMontan*[this->nrTraseeMontane];

		for (int i = 0; i < this->nrTraseeMontane; i++)
		{
			this->vectorPointerTraseu[i] = new TraseuMontan(*vectorPointerTraseuNou[i]);
		}
	}

	excursiiMontane(const excursiiMontane& obj)
	{
		this->numeAgentie = obj.numeAgentie;
		this->nrTraseeMontane = obj.nrTraseeMontane;
		this->vectorPointerTraseu = new TraseuMontan * [this->nrTraseeMontane];
		for (int i = 0; i < this->nrTraseeMontane; i++)
		{
			this->vectorPointerTraseu[i] = new TraseuMontan(*obj.vectorPointerTraseu[i]);
		}
	}
	

	excursiiMontane& operator=(excursiiMontane& obj)
	{
		if(this!=&obj)
		{
			for (int i = 0; i < this->nrTraseeMontane; i++)
			{
				delete this->vectorPointerTraseu[i];
			}

			delete[] this->vectorPointerTraseu;

			this->numeAgentie = obj.numeAgentie;
			this->nrTraseeMontane = obj.nrTraseeMontane;
			this->vectorPointerTraseu = new TraseuMontan * [this->nrTraseeMontane];
			for (int i = 0; i < this->nrTraseeMontane; i++)
			{
				this->vectorPointerTraseu[i] = new TraseuMontan(*obj.vectorPointerTraseu[i]);
			}
		}

		return *this;
	}

	void adaugaElementNou(TraseuMontan* traseuNou)
	{
		excursiiMontane copie = *this;
		for (int i = 0; i < this->nrTraseeMontane; i++)
		{
			delete this->vectorPointerTraseu[i];
		}

		delete[] this->vectorPointerTraseu;

		this->nrTraseeMontane++;
		this->vectorPointerTraseu = new TraseuMontan*[this->nrTraseeMontane];
		for (int i = 0; i < copie.nrTraseeMontane; i++)
		{
			this->vectorPointerTraseu[i] = new TraseuMontan(*copie.vectorPointerTraseu[i]);
		}
		this->vectorPointerTraseu[this->nrTraseeMontane - 1] = new TraseuMontan(*traseuNou);
	}

};
	

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

	cout << ".....................Valoare obiect copiat tm10 dupa tm6............................." << endl << endl;

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

	cout << "Exista altitudini mai mari de 2000 m pe traseul tm5 (1-DA ; 0-NU): " << tm5.verificareAltitudine(2000) << endl << endl;
	cout << "Exista altitudini mai mari de 2500 m pe traseul tm5 (1-DA ; 0-NU): " << tm5.verificareAltitudine(2500) << endl << endl;

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

	cout << "Lungimea traseului pentru obiectul tm1: " << tm1.getLungimeKmTraseu() << endl << endl;
	cout << "Lungimea traseului pentru obiectul tm5 : " << tm5.getLungimeKmTraseu() << endl << endl;
	cout << "Lungimea traseului pentru Obiectul tm1 <= decat lungimea traseului m5 ? " << ((tm1 <= tm5) ? "DA" : "NU") << endl << endl;


	cout << ".......................Obiectul tm10 ......................................................" << endl << endl;
	tm10.afiseaza();
	cout << ".......................Obiectul tm5 ......................................................." << endl << endl;
	tm1.afiseaza();
	cout << "Tm1 si tm10 sunt egale ? " << ((tm10 == tm1) ? "DA" : "NU") << endl << endl;
	cout << "...................................operatorul <<........................................................." << endl << endl;
	cout << "Obiectul tm10" << endl << tm10 << endl << endl;
	cout << "...................................operatorul >>........................................................." << endl << endl;
	cout << "obiectul tm5 inainte sa fie citit de la tastatura........." << endl;
	/*cin >> tm5*/;
	cout << "obiectul tm5 dupa ce a fost citit de la tastatura........." << endl << tm5 << endl;

	cout << "Operator []" << endl << endl;

	cout << tm5 << endl << endl;
	cout << "Echipa de salvare tm5 de pe pozitia 1 se numeste " << tm5[1] << endl;

	cout << endl;

	cout << ".................................Operator().........................." << endl << endl;
	cout << tm1 << endl << endl;
	cout << "Traseul este periculos? " << tm1(2200) << endl;


	cout << ".................................Operator!.........................." << endl << endl;
	!tm1;
	cout << tm1.getPrezintaRiscAvalansa() << endl;

	cout << "-------------------------------------Fisiere Text-----------------------------" << endl << endl;

	cout << endl << endl;

	ofstream f1("FisierTXT", ios::out);
	f1 << tm2;
	f1.close();
	cout << tm2 << endl << endl;

	ifstream f2("FisierTXT", ios::in);
	f2 >> tm5;
	cout << "-----traseul tm2 dupa ce a fost modificat--------- " << endl;
	cout << tm5 << endl << endl;

	cout << "-------------------------------------Fisiere binare-----------------------------" << endl << endl;

	fstream f3("FisierBinar.bin", ios::binary | ios::out);
	tm2.scriereBinar(f3);
	f3.close();

	fstream f4("FisierBinar.bin", ios::binary | ios::in);
	cout << "tm3 inainte " << tm3 << endl << endl;;

	tm3.citireBinar(f4);
	f4.close();
	cout << "tm3 dupa " << tm3 << endl << endl;

	cout << "-------------------------Traseu montan cultural----------------------" << endl << endl;

	TraseuMontanCultural tmc1;
	cout << "Numarul de puncte culturale este: " << tmc1.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : ";
	for (int i = 0; i < tmc1.getNumarPuncteCulturale(); i++)
	{
		cout << tmc1.getDenumirePuncteCulturale()[i];
	}
	cout << "Denumirea traseului:" << tmc1.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc1.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc1.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc1.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc1.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc1.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc1.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc1.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc1.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc1.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc1.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc1.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	string denumiri[] = { "cabana1", "cabana2" };
	string denumireEchipaSalvare[] = { "salvamont bucegi", "salvamont Fagaras" };
	int altitudine4[] = { 500, 1000 };

	TraseuMontanCultural tmc2(2, denumiri, "Bucegi", 20, 7, 0, 1000, "mica", 2, denumireEchipaSalvare, 2, altitudine4);
	cout << "Numarul de puncte culturale este: " << tmc2.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : " << endl;
	for (int i = 0; i < tmc2.getNumarPuncteCulturale(); i++)
	{
		cout << tmc2.getDenumirePuncteCulturale()[i] << endl;
	}
	cout << "Denumirea traseului:" << tmc2.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc2.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc2.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc2.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc2.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc2.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc2.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc2.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc2.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc2.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc2.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc2.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	string puncteCulturale[] = { "castel peles", "castel pelisor" };
	tmc1.setDenumirePuncteCulturale(2, puncteCulturale);
	tmc1.setDenumireTraseu("Bucegi");
	tmc1.setLungimeKmTraseu(12);
	tmc1.setDurataTraseuOre(5);
	tmc1.setPrezintaRiscAvalansa(0);
	tmc1.setDificultateTraseu("Mica");
	string echipeSalvare4[] = { "SalvamontFagaras", "SalvamontNeamt" };
	tmc1.setEchipeSalvare(2, echipeSalvare4);
	int altitudini7[] = { 1200, 2000 };
	tmc1.setAltitudini(2, altitudini7);

	cout << "Numarul de puncte culturale este: " << tmc1.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : ";
	for (int i = 0; i < tmc1.getNumarPuncteCulturale(); i++)
	{
		cout << tmc1.getDenumirePuncteCulturale()[i] << endl;
	}
	cout << "Denumirea traseului:" << tmc1.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc1.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc1.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc1.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc1.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc1.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc1.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc1.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc1.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc1.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc1.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc1.getAltitudini()[i] << endl;
	}

	cout << endl << endl;



	cout << "-----------------------Constructorul de copiere-----------" << endl;
	cout << "-----Obiectul tmc1------- " << endl << endl;
	cout << "Numarul de puncte culturale este: " << tmc1.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : ";
	for (int i = 0; i < tmc1.getNumarPuncteCulturale(); i++)
	{
		cout << tmc1.getDenumirePuncteCulturale()[i] << endl;
	}
	cout << "Denumirea traseului:" << tmc1.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc1.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc1.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc1.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc1.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc1.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc1.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc1.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc1.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc1.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc1.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc1.getAltitudini()[i] << endl;
	}

	cout << endl << endl;
	TraseuMontanCultural tmc3 = tmc1;

	cout << "-----Obiectul tmc3------- " << endl << endl;

	cout << "Numarul de puncte culturale este: " << tmc3.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : ";
	for (int i = 0; i < tmc3.getNumarPuncteCulturale(); i++)
	{
		cout << tmc3.getDenumirePuncteCulturale()[i] << endl;
	}
	cout << "Denumirea traseului:" << tmc3.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc3.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc3.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc3.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc3.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc3.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc3.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc3.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc3.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc3.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc3.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc3.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	cout << "-----------------------Operatorul =-----------" << endl;

	cout << "--------------Obiectul tmc2----------------" << endl << endl;
	cout << "Numarul de puncte culturale este: " << tmc2.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : " << endl;
	for (int i = 0; i < tmc2.getNumarPuncteCulturale(); i++)
	{
		cout << tmc2.getDenumirePuncteCulturale()[i] << endl;
	}
	cout << "Denumirea traseului:" << tmc2.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc2.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc2.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc2.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc2.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc2.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc2.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc2.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc2.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc2.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc2.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc2.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	tmc3 = tmc2;

	cout << "-------------------------------Obiectul tmc3 copiat dupa tmc2--------------" << endl << endl;
	cout << "Numarul de puncte culturale este: " << tmc3.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : " << endl;
	for (int i = 0; i < tmc3.getNumarPuncteCulturale(); i++)
	{
		cout << tmc3.getDenumirePuncteCulturale()[i] << endl;
	}
	cout << "Denumirea traseului:" << tmc3.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc3.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc3.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc3.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc3.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc3.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc3.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc3.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc3.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc3.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc3.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc3.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	cout << "------------------upcasting-----------------------------" << endl;

	cout << "-------------obiectul tm1 inainte de upcasting----------- " << endl;
	cout << tm1;
	cout << "-------------------------------Obiectul tmc3 inainte de upcasting--------------" << endl << endl;
	cout << "Numarul de puncte culturale este: " << tmc3.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : " << endl;
	for (int i = 0; i < tmc3.getNumarPuncteCulturale(); i++)
	{
		cout << tmc3.getDenumirePuncteCulturale()[i] << endl;
	}
	cout << "Denumirea traseului:" << tmc3.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc3.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc3.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc3.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc3.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc3.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc3.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc3.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc3.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc3.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc3.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc3.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	tm1 = tmc3;


	cout << "-------------obiectul tm1 dupa de upcasting----------- " << endl;
	cout << tm1;
	cout << "-------------------------------Obiectul tmc3 dupa upcasting--------------" << endl << endl;
	cout << "Numarul de puncte culturale este: " << tmc3.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : " << endl;
	for (int i = 0; i < tmc3.getNumarPuncteCulturale(); i++)
	{
		cout << tmc3.getDenumirePuncteCulturale()[i] << endl;
	}
	cout << "Denumirea traseului:" << tmc3.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc3.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc3.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc3.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc3.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc3.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc3.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc3.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc3.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc3.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc3.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc3.getAltitudini()[i] << endl;
	}

	cout << endl << endl;


	cout << "--------------Downcasting---------------------" << endl << endl;
	cout << "----------Obiectul tm1----------------" << endl;
	cout << tm1;
	TraseuMontanCultural tmc4 = tm1;

	cout << "----------Obiectul tmc4 dupa downcasting----------------" << endl;
	cout << "Numarul de puncte culturale este: " << tmc4.getNumarPuncteCulturale() << endl;
	cout << "Denumirea puctelor culturale este : " << endl;
	for (int i = 0; i < tmc4.getNumarPuncteCulturale(); i++)
	{
		cout << tmc4.getDenumirePuncteCulturale()[i] << endl;
	}
	cout << "Denumirea traseului:" << tmc4.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tmc4.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tmc4.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tmc4.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tmc4.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tmc4.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tmc4.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tmc4.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tmc4.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tmc4.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tmc4.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tmc4.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	cout << "Traseul este periculos? " << tmc4(1200) << endl;
	cout << "Traseul tmc4 este complet egal cu tmc1? " << ((tmc4 == tmc1)) << endl << endl;

	cout << "------Obiectul tmc1-------" << endl;
	cout << tmc1;

	/*cin >> tmc1;*/

	cout << "------Obiectul tmc1 dupa ce a fost intreodus de la tastatura-------" << endl;
	cout << tmc1;
	cout << "---------------Relatia HAS-A(Vector de pointeri la obiecte)--------------- " << endl << endl;
	/*string numeAgentie;
	int nrTraseeMontane;
	TraseuMontan** vectorPointerTraseu;*/
	excursiiMontane e1;
	cout << "-----------------Obiectul e1-----------------" << endl << endl;
	cout << "Nume Agentie: " << e1.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e1.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e1.getnrTraseeMontane(); i++)
	{
		cout << *e1.getvectorPointerTraseu()[i] << endl << endl;
	}

	cout << endl << endl;
	TraseuMontan** vector1;
	vector1 = new TraseuMontan * [2];
	vector1[0] = new TraseuMontan(tm1);
	vector1[1] = new TraseuMontan(tm10);
	excursiiMontane e2("ExcursiiMontaneDe1ZI", 2, vector1);

	cout << "-----------------Obiectul e2-----------------" << endl << endl;
	cout << "Nume Agentie: " << e2.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e2.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e2.getnrTraseeMontane(); i++)
	{
		cout << *e2.getvectorPointerTraseu()[i] << endl << endl;
	}

	e1.setNumeAgentie("ExcursiiMontane");

	TraseuMontan** vector2;
	vector2 = new TraseuMontan * [3];
	vector2[0] = new TraseuMontan(tm3);
	vector2[1] = new TraseuMontan(tm5);
	vector2[2] = new TraseuMontan(tm1);
	e1.setPointeriTraseeMontane(3, vector2);


	cout << "-----------------Obiectul e1 dupa modificare-----------------" << endl << endl;
	cout << "Nume Agentie: " << e1.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e1.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e1.getnrTraseeMontane(); i++)
	{
		cout << *e1.getvectorPointerTraseu()[i] << endl << endl;
	}
	cout << "-----------------Obiectul macheta e1 -----------------" << endl << endl;
	cout << "Nume Agentie: " << e1.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e1.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e1.getnrTraseeMontane(); i++)
	{
		cout << *e1.getvectorPointerTraseu()[i] << endl << endl;
	}
	excursiiMontane e3 = e1;

	cout << "-----------------Obiectul nou creat e3 -----------------" << endl << endl;
	cout << "Nume Agentie: " << e3.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e3.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e3.getnrTraseeMontane(); i++)
	{
		cout << *e3.getvectorPointerTraseu()[i] << endl << endl;
	}
	cout << "-----------------Obiectul e2 inainte de modificare -----------------" << endl << endl;
	cout << "Nume Agentie: " << e2.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e2.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e2.getnrTraseeMontane(); i++)
	{
		cout << *e2.getvectorPointerTraseu()[i] << endl << endl;

	}
	cout << "-----------------Obiectul macheta e3 -----------------" << endl << endl;
	cout << "Nume Agentie: " << e3.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e3.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e3.getnrTraseeMontane(); i++)
	{
		cout << *e3.getvectorPointerTraseu()[i] << endl << endl;
		

	}

	e2 = e3;

	cout << "-----------------Obiectul e2 dupa modificare -----------------" << endl << endl;
	cout << "Nume Agentie: " << e2.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e2.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e2.getnrTraseeMontane(); i++)
	{
		cout << *e2.getvectorPointerTraseu()[i] << endl << endl;

	}

	cout << "-----------------Obiectul e2 inainte de a adauga un nou element-----------------" << endl << endl;
	cout << "Nume Agentie: " << e2.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e2.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e2.getnrTraseeMontane(); i++)
	{
		cout << *e2.getvectorPointerTraseu()[i] << endl << endl;

	}
	e2.adaugaElementNou(&tm3);

	cout << "-----------------Obiectul e2 dupa modificare -----------------" << endl << endl;
	cout << "Nume Agentie: " << e2.getnumeAgentie() << endl;
	cout << "Numarul de trasee Montane este: " << e2.getnrTraseeMontane() << endl;
	cout << "Traseele Montane sunt " << endl;
	for (int i = 0; i < e2.getnrTraseeMontane(); i++)
	{
		cout << *e2.getvectorPointerTraseu()[i] << endl << endl;

	}

}
