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

	int getDurataTraseuOre()
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

	cout << "............................Valoare tm1 dupa modificari..........................................." << endl << endl;


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

	cout << "............................Valoare tm2..........................................." << endl << endl;

	string echipeSalvare2[] = { "SalvamontNeamt", "SalvamontBrasov" };
	int altitudini2[] = { 1200,2000 };
	TraseuMontan tm2(" Neamt ", 20, 10, 1, 2500, "mica", 2, echipeSalvare2, 2, altitudini2);

	cout << "Denumirea traseului:" << tm2.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tm2.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tm2.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tm2.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tm2.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tm2.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tm2.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tm2.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tm2.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tm2.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tm2.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tm2.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	cout << "............................Valoare tm3 d..............................................." << endl << endl;
	TraseuMontan tm3;

	cout << "Denumirea traseului :" << tm3.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tm3.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tm3.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tm3.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tm3.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tm3.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tm3.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tm3.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tm3.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tm3.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tm3.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tm3.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	cout << "............................Valoare tm4...................................................." << endl << endl;

	TraseuMontan tm4("Fagaras");

	cout << "Denumirea traseului :" << tm4.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tm4.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tm4.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tm4.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tm4.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tm4.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tm4.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tm4.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tm4.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tm4.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tm4.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tm4.getAltitudini()[i] << endl;
	}


	cout << endl << endl;

	cout << "............................Valoare tm5......................................................" << endl << endl;
	TraseuMontan tm5("Sinaia", 19);

	cout << "Denumirea traseului :" << tm5.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tm5.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tm5.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tm5.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tm5.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tm5.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tm5.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tm5.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tm5.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tm5.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tm5.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tm5.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

	cout << "............................Valoare tm6....................................................." << endl << endl;

	TraseuMontan tm6("Bucegi", 25, 10);

	cout << "Denumirea traseului :" << tm6.getDenumireTraseu() << endl;
	cout << "Lungime traseu:" << tm6.getLungimeKmTraseu() << endl;
	cout << "Durata Traseu ore:" << tm6.getDurataTraseuOre() << endl;
	cout << "Prezinta Risc Avalansa? (0-NU/1-DA) " << tm6.getPrezintaRiscAvalansa() << endl;
	cout << "Altitudinea Maxima este " << tm6.getAltitudineMaxima() << endl;
	cout << "Dificultate traseu" << tm6.getDificultateTraseu() << endl;
	cout << "Numar echipe Salvare" << tm6.getNrEchipeSalvare() << endl;
	cout << "Echipe Salvare : " << endl;
	for (int i = 0; i < tm6.getNrEchipeSalvare(); i++)
	{
		cout << "echipe" << tm6.getEchipeSalvare()[i] << endl;
	}
	cout << "Numar puncte altitudine" << tm6.getNumarPuncteAltitudini() << endl;

	cout << "Altitudini " << endl;
	for (int i = 0; i < tm6.getNumarPuncteAltitudini(); i++)
	{
		cout << "Altitudini" << tm6.getAltitudini()[i] << endl;
	}

	cout << endl << endl;

}