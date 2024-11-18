#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class apartamentDeInchiriat
{
private:
	string adresa;
	float chirie;
	int durataAnContract;
	int numarLuniInchirire;
	float* cheltuieliLunareIntretinere;
	static int NR_MAXIM_LOCATARI;
public:

	apartamentDeInchiriat()
	{
		this->adresa = "Necunoscut";
		this->chirie = 0;
		this->durataAnContract = 0;
		this->numarLuniInchirire = 0;
		this->cheltuieliLunareIntretinere = NULL;


	}

	apartamentDeInchiriat(string adresa, float chirie, int durataAnContract, int numarLuniInchirire, float* cheltuieliLunareIntretinere)
	{
		this->adresa = adresa;
		this->chirie = chirie;
		this->durataAnContract = durataAnContract;
		this->numarLuniInchirire = numarLuniInchirire;
		this->cheltuieliLunareIntretinere = new float[this->numarLuniInchirire];
		for (int i = 0; i < this->numarLuniInchirire; i++)
		{
			this->cheltuieliLunareIntretinere[i] = cheltuieliLunareIntretinere[i];
		}


	}


	string getAdresa()
	{
		return this->adresa;
	}
	float getchirie()
	{
		return this->chirie;
	}
	int getDurataAniContract()
	{
		return this->durataAnContract;
	}

	int getNumarLuniPerioadaInchiriere()
	{
		return this->numarLuniInchirire;
	}

	float* getCheltuieliLunareIntretinere()
	{
		return this->cheltuieliLunareIntretinere;
	}



	apartamentDeInchiriat(const apartamentDeInchiriat& obj)
	{
		this->adresa = obj.adresa;
		this->chirie = obj.chirie;
		this->durataAnContract = obj.durataAnContract;
		this->numarLuniInchirire = obj.numarLuniInchirire;
		this->cheltuieliLunareIntretinere = new float[obj.numarLuniInchirire];
		for (int i = 0; i < obj.numarLuniInchirire; i++)
		{
			this->cheltuieliLunareIntretinere[i] = obj.cheltuieliLunareIntretinere[i];
		}



	}

	void adaugaIntretinereLunara(float cheltuialaNoua)
	{
		apartamentDeInchiriat apartamentCopie(*this);

		if (this->cheltuieliLunareIntretinere != NULL)
		{
			delete[] this->cheltuieliLunareIntretinere;
		}

		this->numarLuniInchirire++;


		this->cheltuieliLunareIntretinere = new float[this->numarLuniInchirire];


		for (int i = 0; i < apartamentCopie.numarLuniInchirire; i++)
		{
			this->cheltuieliLunareIntretinere[i] = apartamentCopie.cheltuieliLunareIntretinere[i];
		}

		this->cheltuieliLunareIntretinere[apartamentCopie.numarLuniInchirire] = cheltuialaNoua;


	}

	apartamentDeInchiriat& operator=(apartamentDeInchiriat& obiectMacheta)
	{

		if (this != &obiectMacheta)
		{
			if (this->cheltuieliLunareIntretinere != NULL)
			{
				delete[] this->cheltuieliLunareIntretinere;
			}

			this->adresa = obiectMacheta.adresa;
			this->chirie = obiectMacheta.chirie;
			this->durataAnContract = obiectMacheta.durataAnContract;
			this->numarLuniInchirire = obiectMacheta.numarLuniInchirire;
			this->cheltuieliLunareIntretinere = new float[obiectMacheta.numarLuniInchirire];
			for (int i = 0; i < obiectMacheta.numarLuniInchirire; i++)
			{
				this->cheltuieliLunareIntretinere[i] = obiectMacheta.cheltuieliLunareIntretinere[i];
			}

			return*this;
		}

	}

	int durataRamasaContract()
	{
		return this->durataAnContract * 12 - this->numarLuniInchirire;
	}

	friend ostream& operator<<(ostream& out, const apartamentDeInchiriat& obj)
	{
		out << "Adresa apartamentului este: " << obj.adresa << endl;
		out << "Chiria este: " << obj.chirie << endl;
		out << "Durata an contract este: " << obj.durataAnContract << endl;
		out << "Numar luni de inchiriere: " << obj.numarLuniInchirire << endl;
		for (int i = 0; i < obj.numarLuniInchirire; i++)
		{
			out << "Cheltuieli lunare intretinere: " << obj.cheltuieliLunareIntretinere[i] << endl;
		}

		return out;

	}

	friend istream& operator>>(istream& in, apartamentDeInchiriat& obj)
	{
		cout << "Introduceti adresa: ";
		in >> obj.adresa;

		cout << "Introduceti valoarea chiriei: ";
		in >> obj.chirie;

		cout << "Introduceti durata an contract : ";
		in >> obj.durataAnContract;

		cout << "Introduceti numar luni de inchiriere: ";
		in >> obj.numarLuniInchirire;

		delete[] obj.cheltuieliLunareIntretinere;
		obj.cheltuieliLunareIntretinere = new float[obj.numarLuniInchirire];

		cout << "Introduceti cheltuieli lunare:  ";
		for (int i = 0; i < obj.numarLuniInchirire; i++)
		{
			in >> obj.cheltuieliLunareIntretinere[i];
		}

		return in;
	}
	apartamentDeInchiriat& operator+=(float cheltuialaNoua)
	{
		apartamentDeInchiriat apartamentCopie(*this);

		if (this->cheltuieliLunareIntretinere != NULL)
		{
			delete[] this->cheltuieliLunareIntretinere;
		}

		this->numarLuniInchirire++;


		this->cheltuieliLunareIntretinere = new float[this->numarLuniInchirire];


		for (int i = 0; i < apartamentCopie.numarLuniInchirire; i++)
		{
			this->cheltuieliLunareIntretinere[i] = apartamentCopie.cheltuieliLunareIntretinere[i];
		}

		this->cheltuieliLunareIntretinere[apartamentCopie.numarLuniInchirire] = cheltuialaNoua;

		return *this;
	}

	float operator[](int pozitieCautata)
	{
		float err = -1;
		if (pozitieCautata > 0 && pozitieCautata < numarLuniInchirire)
		{
			return this->cheltuieliLunareIntretinere[pozitieCautata];
		}
		else
		{
			return err;
		}


	}



	~apartamentDeInchiriat()
	{
		if (this->cheltuieliLunareIntretinere != NULL)
		{
			delete[] this->cheltuieliLunareIntretinere;
		}
	}

};

int apartamentDeInchiriat::NR_MAXIM_LOCATARI = 4;

void main()
{

	apartamentDeInchiriat a1;


	float* cheltuieliLunareIntretinere;
	cout << "Adresa apartamentului este: " << a1.getAdresa() << endl;
	cout << "Valoarea chiriei lunare este: " << a1.getchirie() << endl;
	cout << "Durata ani contract este: " << a1.getDurataAniContract() << endl;
	cout << "Numar luni inchiriate: " << a1.getNumarLuniPerioadaInchiriere() << endl;
	cout << "Cheltuielile lunare: ";
	for (int i = 0; i < a1.getNumarLuniPerioadaInchiriere(); i++)
	{
		cout << "Chiriile sunt : " << a1.getCheltuieliLunareIntretinere()[i] << endl;
	}

	cout << endl << endl;




	cout << "Apartamentul A2" << endl;
	float cheltuieli1[] = { 300.0, 400, 200.0 };
	apartamentDeInchiriat a2("bd-ul timisoara nr58j", 2000, 2, 3, cheltuieli1);
	cout << "Adresa apartamentului este: " << a2.getAdresa() << endl;
	cout << "Valoarea chiriei lunare este: " << a2.getchirie() << endl;
	cout << "Durata ani contract este: " << a2.getDurataAniContract() << endl;
	cout << "Numar luni inchiriate: " << a2.getNumarLuniPerioadaInchiriere() << endl;
	cout << "Cheltuielile lunare: " << endl;
	for (int i = 0; i < a2.getNumarLuniPerioadaInchiriere(); i++)
	{
		cout << "Chiriile sunt : " << a2.getCheltuieliLunareIntretinere()[i] << endl;
	}
	cout << endl << endl;


	cout << "Constructorul de copiere" << endl << endl;
	apartamentDeInchiriat a3 = a2;
	cout << "......Obiectul a3 dupa ce a fost copiat................" << endl << endl;
	cout << "Adresa apartamentului este: " << a3.getAdresa() << endl;
	cout << "Valoarea chiriei lunare este: " << a3.getchirie() << endl;
	cout << "Durata ani contract este: " << a3.getDurataAniContract() << endl;
	cout << "Numar luni inchiriate: " << a3.getNumarLuniPerioadaInchiriere() << endl;
	cout << "Cheltuielile lunare: " << endl;
	for (int i = 0; i < a3.getNumarLuniPerioadaInchiriere(); i++)
	{
		cout << "Chiriile sunt : " << a3.getCheltuieliLunareIntretinere()[i] << endl;
	}
	cout << endl << endl;

	cout << ".....Apelare Metoda AdaugaIntretinereLunara...." << endl << endl;

	a3.adaugaIntretinereLunara(500);
	cout << "......Obiectul a3 dupa adaugare intretinere lunara........" << endl << endl;

	cout << "Adresa apartamentului este: " << a3.getAdresa() << endl;
	cout << "Valoarea chiriei lunare este: " << a3.getchirie() << endl;
	cout << "Durata ani contract este: " << a3.getDurataAniContract() << endl;
	cout << "Numar luni inchiriate: " << a3.getNumarLuniPerioadaInchiriere() << endl;
	cout << "Cheltuielile lunare: " << endl;
	for (int i = 0; i < a3.getNumarLuniPerioadaInchiriere(); i++)
	{
		cout << "Chiriile sunt : " << a3.getCheltuieliLunareIntretinere()[i] << endl;
	}
	cout << endl << endl;


	cout << ".........Operatorul =..................." << endl << endl;

	cout << "...........obiectul a2 inainte de modificare.................." << endl << endl;
	cout << "Adresa apartamentului este: " << a2.getAdresa() << endl;
	cout << "Valoarea chiriei lunare este: " << a2.getchirie() << endl;
	cout << "Durata ani contract este: " << a2.getDurataAniContract() << endl;
	cout << "Numar luni inchiriate: " << a2.getNumarLuniPerioadaInchiriere() << endl;
	cout << "Cheltuielile lunare: " << endl;
	for (int i = 0; i < a2.getNumarLuniPerioadaInchiriere(); i++)
	{
		cout << "Chiriile sunt : " << a2.getCheltuieliLunareIntretinere()[i] << endl;
	}
	cout << endl << endl;

	a2 = a3;

	cout << "...........obiectul a2 dupa modificare.................." << endl << endl;

	cout << "Adresa apartamentului este: " << a2.getAdresa() << endl;
	cout << "Valoarea chiriei lunare este: " << a2.getchirie() << endl;
	cout << "Durata ani contract este: " << a2.getDurataAniContract() << endl;
	cout << "Numar luni inchiriate: " << a2.getNumarLuniPerioadaInchiriere() << endl;
	cout << "Cheltuielile lunare: " << endl;
	for (int i = 0; i < a2.getNumarLuniPerioadaInchiriere(); i++)
	{
		cout << "Chiriile sunt : " << a2.getCheltuieliLunareIntretinere()[i] << endl;
	}
	cout << endl << endl;

	cout << "......Metoda Durata ramasa contract.........." << endl << endl;

	cout << "Durata ramasa contract este : " << a3.durataRamasaContract() << endl << endl;

	cout << endl << endl;

	cout << "//...............Apelare operator <<..............//" << endl << endl;

	cout << "Obiectul a3: " << a3 << endl << endl;

	/*cout << "//...............Apelare operator >>..............//" << endl << endl;
	cout << a1;
	cout << endl << endl;
	cin >> a1;
	cout << endl << endl;
	cout << a1;*/
	cout << ".........Operator +=..................................." << endl << endl;
	a3 += 100;
	cout << a3;
	cout << "Intretinere: " << a3[4] << endl;
}



