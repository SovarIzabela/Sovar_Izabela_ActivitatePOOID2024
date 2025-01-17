#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<fstream>
#include<vector>
#include<list>
#include<map>
#include<set>
using namespace std;



class Hotel
{

protected:

	string denumireHotel;
	string adresaHotel;
	int numarAngajati;
	int numarCamere;
	bool areMicDejunInclus;
	float pretCameraPeZi;
	const int anDeschidereHotel;
	static int clasaCAENHotel; //55

	char* numeManagerHotel;
	int numarServiciiDisponibile; //numarator
	float* preturiServicii;
	string* numeServicii;

public:


	Hotel(string denumireHotel, string adresaHotel, int numarAngajati, int numarCamere, bool areMicDejunInclus, float pretCameraPeZi, int anDeschidereHotel, int numarServiciiDisponibile, float* preturiServicii, string* numeServicii, const char* numeManagerHotel) :anDeschidereHotel(anDeschidereHotel)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = numarAngajati;
		this->numarCamere = numarCamere;
		this->areMicDejunInclus = areMicDejunInclus;
		this->pretCameraPeZi = pretCameraPeZi;

		
		this->numeManagerHotel = new char[strlen(numeManagerHotel) + 1];
		
		strcpy(this->numeManagerHotel, numeManagerHotel);

		this->numarServiciiDisponibile = numarServiciiDisponibile;
		
		this->preturiServicii = new float[this->numarServiciiDisponibile];
		this->numeServicii = new string[this->numarServiciiDisponibile];

		
		for (int i = 0; i < this->numarServiciiDisponibile; i++)
		{
			this->preturiServicii[i] = preturiServicii[i];
			this->numeServicii[i] = numeServicii[i];

		}




	}

	

	Hotel() :anDeschidereHotel(0)
	{
		this->denumireHotel = "anonima";
		this->adresaHotel = "anonima";
		this->numarAngajati = 0;
		this->numarCamere = 0;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
		
		this->numeManagerHotel = new char[strlen("anonim") + 1];
		
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;
	}

	
	Hotel(string denumireHotel) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = "anonima";
		this->numarAngajati = 0;
		this->numarCamere = 0;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
		this->numeManagerHotel = new char[strlen("anonim") + 1];
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;


	}
	

	Hotel(string denumireHotel, string adresaHotel) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = 0;
		this->numarCamere = 0;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
	
		this->numeManagerHotel = new char[strlen("anonim") + 1];
		
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;


	}

	Hotel(string denumireHotel, string adresaHotel, int numarAngajati) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = numarAngajati;
		this->numarCamere = 0;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
		
		this->numeManagerHotel = new char[strlen("anonim") + 1];
	
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;

	}

	Hotel(string denumireHotel, string adresaHotel, int numarAngajati, int numarCamere) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = numarAngajati;
		this->numarCamere = numarCamere;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
		
		this->numeManagerHotel = new char[strlen("anonim") + 1];
		
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;


	}


	Hotel(string denumireHotel, string adresaHotel, int numarAngajati, int numarCamere, bool areMicDejunInclus) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = numarAngajati;
		this->numarCamere = numarCamere;
		this->areMicDejunInclus = areMicDejunInclus;
		this->pretCameraPeZi = 0;
		
		this->numeManagerHotel = new char[strlen("Anonim") + 1];
		
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;


	}


	string getDenumireHotel()
	{
		return this->denumireHotel;
	}

	string getAdresaHotel()
	{

		return this->adresaHotel;
	}

	int getNumarAngajati()
	{
		return this->numarAngajati;
	}

	int getNumarCamere()
	{
		return this->numarCamere;
	}

	bool getAreMicDejunInclus()
	{
		return this->areMicDejunInclus;
	}

	float getPretCameraPeZi()
	{
		return this->pretCameraPeZi;
	}


	int getAnDeschidereHotel()
	{
		return this->anDeschidereHotel;
	}

	char* getNumeManagerHotel() {
		return this->numeManagerHotel;
	}

	int getnumarServiciiDisponibile() {
		return this->numarServiciiDisponibile;
	}
	float* getpreturiServicii()
	{
		return this->preturiServicii;
	}

	string* getNumeServicii()
	{
		return this->numeServicii;
	}

	void setDenumireHotel(string DenumireNouaHotel)
	{
		this->denumireHotel = DenumireNouaHotel;
	}

	void setAdresaHotel(string AdresaNouaHotel)
	{
		this->adresaHotel = AdresaNouaHotel;
	}

	void setNumarAngajati(int NumarNouAngajati)
	{
		this->numarAngajati = NumarNouAngajati;
	}

	void setNumarCamere(int NumarNouCamere)
	{
		this->numarCamere = NumarNouCamere;
	}

	void setAreMicDejunInclus(bool AreMicDejunInclusNou)
	{
		this->areMicDejunInclus = AreMicDejunInclusNou;
	}

	void setPretCameraZi(float PretNouCameraZi)
	{
		this->pretCameraPeZi = PretNouCameraZi;
	}
	

	void setNumeManagerHotel(const char* numeManagerHotelNou)
	{
		
		if (this->numeManagerHotel != NULL)
		{
			delete[] this->numeManagerHotel;
		}

		this->numeManagerHotel = new char[strlen(numeManagerHotelNou) + 1];
		
		strcpy(this->numeManagerHotel, numeManagerHotelNou);

	}
	
	void setServicii(int numarServiciiDisponibileNou, float* preturiServiciiNoi, string* numeServiciiNoi)
	{
		
		if (this->preturiServicii != NULL)
		{
			delete[] this->preturiServicii;
		}

		if (this->numeServicii != NULL)

		{
			delete[] this->numeServicii;
		}
		
		this->numarServiciiDisponibile = numarServiciiDisponibileNou;
		
		this->preturiServicii = new float[this->numarServiciiDisponibile];
		this->numeServicii = new string[this->numarServiciiDisponibile];
		

		for (int i = 0; i < this->numarServiciiDisponibile; i++)
		{
			this->preturiServicii[i] = preturiServiciiNoi[i];
			this->numeServicii[i] = numeServiciiNoi[i];
		}

	}




	~Hotel()
	{
		
		if (this->numeManagerHotel != NULL)
		{
			delete[] this->numeManagerHotel;
		}

		if (this->preturiServicii != NULL)
		{
			delete[] this->preturiServicii;
		}

		if (this->numeServicii != NULL)

		{
			delete[] this->numeServicii;
		}
		
	}

	
	Hotel(const Hotel& obiectExistent) :anDeschidereHotel(obiectExistent.anDeschidereHotel)
	{

		this->denumireHotel = obiectExistent.denumireHotel;
		this->adresaHotel = obiectExistent.adresaHotel;
		this->numarAngajati = obiectExistent.numarAngajati;
		this->numarCamere = obiectExistent.numarCamere;
		this->areMicDejunInclus = obiectExistent.areMicDejunInclus;
		this->pretCameraPeZi = obiectExistent.pretCameraPeZi;

		this->numeManagerHotel = new char[strlen(obiectExistent.numeManagerHotel) + 1];

		strcpy(this->numeManagerHotel, obiectExistent.numeManagerHotel);

		this->numarServiciiDisponibile = obiectExistent.numarServiciiDisponibile;

		this->preturiServicii = new float[obiectExistent.numarServiciiDisponibile];
		this->numeServicii = new string[obiectExistent.numarServiciiDisponibile];


		for (int i = 0; i < this->numarServiciiDisponibile; i++)
		{
			this->preturiServicii[i] = obiectExistent.preturiServicii[i];
			this->numeServicii[i] = obiectExistent.numeServicii[i];

		}


	}



	Hotel& operator=(const Hotel& obiectMacheta)
	{
		if (this != &obiectMacheta)
		{
			if (this->numeManagerHotel != NULL)
			{
				delete[] this->numeManagerHotel;
			}

			if (this->preturiServicii != NULL)
			{
				delete[] this->preturiServicii;
			}

			if (this->numeServicii != NULL)

			{
				delete[] this->numeServicii;
			}

		

			this->denumireHotel = obiectMacheta.denumireHotel;
			this->adresaHotel = obiectMacheta.adresaHotel;
			this->numarAngajati = obiectMacheta.numarAngajati;
			this->numarCamere = obiectMacheta.numarCamere;
			this->areMicDejunInclus = obiectMacheta.areMicDejunInclus;
			this->pretCameraPeZi = obiectMacheta.pretCameraPeZi;

			this->numeManagerHotel = new char[strlen(obiectMacheta.numeManagerHotel) + 1];

			strcpy(this->numeManagerHotel, obiectMacheta.numeManagerHotel);

			this->numarServiciiDisponibile = obiectMacheta.numarServiciiDisponibile;

			this->preturiServicii = new float[obiectMacheta.numarServiciiDisponibile];
			this->numeServicii = new string[obiectMacheta.numarServiciiDisponibile];


			for (int i = 0; i < this->numarServiciiDisponibile; i++)
			{
				this->preturiServicii[i] = obiectMacheta.preturiServicii[i];
				this->numeServicii[i] = obiectMacheta.numeServicii[i];

			}
		}
		

		return*this;



	}

	//sa se implementeze o metoda proprie clasei care sa determine serviciul cu pretul cel mai mic

	float PretMinim()
	{
		float rezultat;
		rezultat = this->preturiServicii[0];
		for (int i = 1; i < numarServiciiDisponibile; i++)
		{
			if (this->preturiServicii[i] < rezultat)
			{
				rezultat = this->preturiServicii[i];
			}
		}
		return rezultat;

	}


	//sa se implementeze o metoda proprie clasei care sa aplice un discount de 20% pe unul din servicii disponibile.

	void discount(float ProcentDiscount, int pozitieProdus)
	{
		if (pozitieProdus >= 0 && pozitieProdus < this->numarServiciiDisponibile)
		{
			this->preturiServicii[pozitieProdus] = this->preturiServicii[pozitieProdus] - ProcentDiscount * this->preturiServicii[pozitieProdus];
		}

	}

	// sa se implementeze o metoda care ofera un discount ales pentru toate serviciile disponibile dintr-un hotel.

	void discountIntegral(float discount)
	{
		if (numarServiciiDisponibile != 0)
		{
			for (int i = 0; i < numarServiciiDisponibile; i++)
			{
				this->preturiServicii[i] = preturiServicii[i] - discount * preturiServicii[i];
			}
		}



	}
	//sa se implementeze o metoda care sa calculeze profitul total estimat pe un anumit interval de timp avand un grad de ocuparee de 100%

	float ProfitEstimat(int numarZile)
	{
		float cifra = 0;
		cifra = numarCamere * numarZile * pretCameraPeZi;
		float profit = 0;
		profit = cifra * 0.16;
		return profit;
	}
	//sa se implementeze o metoda care sa calculeze profitul total estimat pe un anumit interval de timp avand un anumit grad de ocupare estimat
	float ProfitEstimatGrad(int numarZile, float gradOcupare)
	{
		float cifra = 0;
		cifra = numarCamere * numarZile * pretCameraPeZi * gradOcupare;
		float profit = 0;
		profit = cifra * 0.16;
		return profit;
	}
	//sa se adauge un serviciu nou + pret nou la sfarsitul listei curente
	void adaugaServiciuNou(float pretServiciuNou, string numeServiciuNou)
	{

		Hotel copieObiect(*this);
		
		
		if (this->preturiServicii != NULL)
		{
			delete[] this->preturiServicii;
		}
		if (this->numeServicii != NULL)
		{
			delete[]this->numeServicii;
		}

		this->numarServiciiDisponibile++;

		this->preturiServicii = new float[this->numarServiciiDisponibile];
		this->numeServicii = new string[this->numarServiciiDisponibile];

for (int i = 0; i < copieObiect.numarServiciiDisponibile; i++)
{
	this->preturiServicii[i] = copieObiect.preturiServicii[i];
	this->numeServicii[i] = copieObiect.numeServicii[i];
}

	this->preturiServicii[copieObiect.numarServiciiDisponibile] = pretServiciuNou;
	this->numeServicii[copieObiect.numarServiciiDisponibile] = numeServiciuNou;



	}

	// sa se elimine un serviciu si denumirea din vector tinand cont de pozitia lui in vector

	void eliminaServiciu(int pozitie)
	{
		Hotel copieHotel(*this);

		if (this->preturiServicii != NULL)
		{
			delete[] this->preturiServicii;
		}
		if (this->numeServicii != NULL)
		{
			delete[]this->numeServicii;
		}

		this->numarServiciiDisponibile--;
		this->preturiServicii = new float[this->numarServiciiDisponibile];
		this->numeServicii = new string[this->numarServiciiDisponibile];

		for (int i = 0; i < pozitie; i++)
		{
			this->preturiServicii[i] = copieHotel.preturiServicii[i];
			this->numeServicii[i] = copieHotel.numeServicii[i];
		}

		for (int i = pozitie + 1; i < copieHotel.numarServiciiDisponibile; i++)
		{
			this->preturiServicii[i - 1] = copieHotel.preturiServicii[i];
			this->numeServicii[i - 1] = copieHotel.numeServicii[i];
		}

	}


	// sa se adauge un pret nou + un nou serviciu la inceputul listei 

	void adaugaServiciuNouInceput(string numeServiciuNou, float pretServiciuNou)
	{

		Hotel copieObiect(*this);


		if (this->preturiServicii != NULL)
		{
			delete[] this->preturiServicii;
		}
		if (this->numeServicii != NULL)
		{
			delete[]this->numeServicii;
		}

		this->numarServiciiDisponibile++;

		this->preturiServicii = new float[this->numarServiciiDisponibile];
		this->numeServicii = new string[this->numarServiciiDisponibile];

		for (int i = 0; i < copieObiect.numarServiciiDisponibile; i++)
		{
			this->preturiServicii[i + 1] = copieObiect.preturiServicii[i];
			this->numeServicii[i + 1] = copieObiect.numeServicii[i];
		}

		this->preturiServicii[0] = pretServiciuNou;
		this->numeServicii[0] = numeServiciuNou;




	}

	bool operator<=(const Hotel& obj)
	{
		if (this->numarAngajati <= obj.numarAngajati)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	bool operator==(const Hotel& obj)
	{

		bool ok = 1;
		if ((this->denumireHotel == obj.denumireHotel) && (this->adresaHotel == obj.adresaHotel) && (this->numarAngajati == obj.numarAngajati) && (this->numarCamere == obj.numarCamere) && (this->areMicDejunInclus == obj.areMicDejunInclus) && (this->pretCameraPeZi == obj.pretCameraPeZi) && (strcmp(this->numeManagerHotel, obj.numeManagerHotel) == 0) && (this->numarServiciiDisponibile == obj.numarServiciiDisponibile))
		{

			for (int i = 0; i < this->numarServiciiDisponibile; i++)
			{
				if ((this->preturiServicii[i] == obj.preturiServicii[i]) && (this->numeServicii[i] == obj.numeServicii[i]))
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


			}


		}
		else 
		{
			return 0;
		}
	
	
		
		

	}

	virtual void afiseazaObiect()
	{
		cout << "Numele hotelului este : " << this->denumireHotel << endl;
		cout << "Adresa Hotelului este: " << this->adresaHotel << endl;
		cout << "Numarul de angajati este : " << this->numarAngajati << endl;
		cout << " Numarul de camere este : " << this->numarCamere << endl;
		cout << "Hotelul are mic dejun inclus ? " << (this->areMicDejunInclus ? "DA" : "NU") << endl;
		cout << "Pretul unei camere pe zi este: " << this->pretCameraPeZi << endl;
		cout << "Anul deschiderii hotelului este : " << this->anDeschidereHotel << endl;
		cout << "Managerul hotelui este : " << this->numeManagerHotel << endl;
		cout << "Numarul servicii disponibile: " << this->numarServiciiDisponibile << endl;

		cout << "Servicii si preturi: " << endl;
		for (int i = 0; i < numarServiciiDisponibile; i++)
		{
			cout << "Preturile sunt: " << this->preturiServicii[i] << endl;
			cout << "Nume serviciu: " << this->numeServicii[i] << endl;
		}


	}


	friend ostream& operator<<(ostream& out, const Hotel& h)
	{
		out << "Numele hotelului este : " << h.denumireHotel << endl;
		out << "Adresa Hotelului este: " << h.adresaHotel << endl;
		out << "Numarul de angajati este : " << h.numarAngajati << endl;
		out << " Numarul de camere este : " << h.numarCamere << endl;
		out << "Hotelul are mic dejun inclus ? " << (h.areMicDejunInclus ? "DA" : "NU") << endl;
		out << "Pretul unei camere pe zi este: " << h.pretCameraPeZi << endl;
		out << "Managerul hotelui este : " << h.numeManagerHotel << endl;
		out << "Numarul servicii disponibile: " << h.numarServiciiDisponibile << endl;

		out << "Servicii si preturi: " << endl;
		for (int i = 0; i < h.numarServiciiDisponibile; i++)
		{
			out << "Preturile sunt: " << h.preturiServicii[i] << endl;
			out << "Nume serviciu: " << h.numeServicii[i] << endl;
		}
		return out;

	}
	

	friend istream& operator>>(istream& in, Hotel& h)
	{

		if (h.numeManagerHotel != NULL)
		{
			delete[] h.numeManagerHotel;
		}

		if (h.preturiServicii != NULL)
		{
			delete[] h.preturiServicii;
		}

		if (h.numeServicii != NULL)

		{
			delete[] h.numeServicii;
		}

		cout << "Introduceti denumirea hotelului : " << endl;
		in >> h.denumireHotel;
		cout << "introduceti adresa hotelului: " << endl;
		in >> h.adresaHotel;
		cout << "Introduceri numarul de angajati: " << endl;
		in >> h.numarAngajati;
		cout << "introduceti numarul de camere : " << endl;
		in >> h.numarCamere;
		cout << "Are mic dejun inclus?" << endl;
		in >> h.areMicDejunInclus;
		cout << "Numele managerului hotelului este  :" << endl;
		char aux[100];
		in >> aux;
		h.numeManagerHotel = new char[strlen(aux)+1];
		strcpy(h.numeManagerHotel, aux);

		cout << "Numarul de servicii disponibile : " << endl;
		in >> h.numarServiciiDisponibile;
		h.preturiServicii = new float[h.numarServiciiDisponibile];
		h.numeServicii = new string[h.numarServiciiDisponibile];
		cout << "Introduceti preturile serviciilor: " << endl;
		for (int i = 0; i < h.numarServiciiDisponibile; i++)
		{
			in >> h.preturiServicii[i];
			

		}
		cout << "Introduceti Numele serviciilor: " << endl;
		for (int i = 0; i < h.numarServiciiDisponibile; i++)
		{
			in >> h.numeServicii[i];
		}

		return in;

	}

	friend ofstream& operator<<(ofstream& file, const Hotel& h)
	{
		file << h.denumireHotel << endl;
		file  << h.adresaHotel << endl;
		file  << h.numarAngajati << endl;
		file << h.numarCamere << endl;
		file  << h.areMicDejunInclus << endl;
		file  << h.pretCameraPeZi << endl;
		file << h.numeManagerHotel << endl;
		file  << h.numarServiciiDisponibile << endl;
		for (int i = 0; i < h.numarServiciiDisponibile; i++)
		{
			file  << h.preturiServicii[i] << endl;
			file  << h.numeServicii[i] << endl;
		}
		return file;

	}
	friend ifstream& operator>>(ifstream& file, Hotel& h)
	{

		if (h.numeManagerHotel != NULL)
		{
			delete[] h.numeManagerHotel;
		}

		if (h.preturiServicii != NULL)
		{
			delete[] h.preturiServicii;
		}

		if (h.numeServicii != NULL)

		{
			delete[] h.numeServicii;
		}

		
		file >> h.denumireHotel;
		file >> h.adresaHotel;
		file >> h.numarAngajati;
		file >> h.numarCamere;
		file >> h.areMicDejunInclus;
		file >> h.pretCameraPeZi;
		char aux[100];
		file >> aux;
		h.numeManagerHotel = new char[strlen(aux) + 1];
		strcpy(h.numeManagerHotel, aux);
		file >> h.numarServiciiDisponibile;
		h.preturiServicii = new float[h.numarServiciiDisponibile];
		h.numeServicii = new string[h.numarServiciiDisponibile];
		for (int i = 0; i < h.numarServiciiDisponibile; i++)
		{
			file >> h.preturiServicii[i];
			file >> h.numeServicii[i];

		}
		

		return file;

	}

	void scriereBinar(fstream &fb)
	{
		//string denumireHotel;
		int numarLitereDenumire = this->denumireHotel.size();
		fb.write((char*)&numarLitereDenumire, sizeof(int));
		fb.write(this->denumireHotel.c_str(), numarLitereDenumire);
		
		//string adresaHotel;
		int numarLitereAdresa = this->adresaHotel.size();
		fb.write((char*)&numarLitereAdresa, sizeof(int));
		fb.write(this->adresaHotel.c_str(), numarLitereAdresa);

		//int numarAngajati;
		fb.write((char*)&this->numarAngajati, sizeof(int));
		
		//int numarCamere;
		fb.write((char*)&this->numarCamere, sizeof(int));
		//bool areMicDejunInclus;
		fb.write((char*)&this->areMicDejunInclus, sizeof(bool));
	
		//float pretCameraPeZi;
		fb.write((char*)&this->pretCameraPeZi, sizeof(float));
		

		//char* numeManagerHotel;
		int numarLitereMnager = strlen(this->numeManagerHotel);
		fb.write((char*)&numarLitereMnager, sizeof(int));
		for (int i = 0; i < numarLitereMnager; i++)
		{
			fb.write((char*)&this->numeManagerHotel[i], sizeof(char));
		}

		//int numarServiciiDisponibile; 
		fb.write((char*)&this->numarServiciiDisponibile, sizeof(int));

		//float* preturiServicii;
		
		for (int i = 0; i < this->numarServiciiDisponibile; i++)
		{
			fb.write((char*)&this->preturiServicii[i], sizeof(float));
		}

		//string* numeServicii;

		for (int i = 0; i < this->numarServiciiDisponibile; i++)
		{
			int numarLitereNumeServiccii = this->numeServicii[i].size();
			fb.write((char*)&numarLitereNumeServiccii, sizeof(float));
			fb.write(this->numeServicii[i].c_str(), numarLitereNumeServiccii);
		}
	}

	void citireBinar(fstream& fb)
	{
		delete[] this->numeManagerHotel;
		delete[] this->preturiServicii;
		delete[] this->numeServicii;
		//string denumireHotel;

		int numarLitereDenHotel;
		fb.read((char*)&numarLitereDenHotel, sizeof(int));
		string aux;
		aux.resize(numarLitereDenHotel);
		fb.read((char*)aux.c_str(), numarLitereDenHotel);
		this->denumireHotel = aux;
		

		//string adresaHotel;
		int numarLitereHotel;
		fb.read((char*)&numarLitereHotel, sizeof(int));
		string aux3;
		aux3.resize(numarLitereHotel);
		fb.read((char*)aux3.c_str(), numarLitereHotel);
		this->adresaHotel = aux3;

		//int numarAngajati;
		fb.read((char*)&this->numarAngajati, sizeof(int));

		//int numarCamere;
		fb.read((char*)&this->numarCamere, sizeof(int));
		//bool areMicDejunInclus;
		fb.read((char*)&this->areMicDejunInclus, sizeof(bool));

		//float pretCameraPeZi;
		fb.read((char*)&this->pretCameraPeZi, sizeof(float));


		//char* numeManagerHotel;
		int numarLitereManagerHotel;
		fb.read((char*)&numarLitereManagerHotel, sizeof(int));
		this->numeManagerHotel = new char[numarLitereManagerHotel+1];
		for (int i = 0; i < numarLitereManagerHotel; i++)
		{
			fb.read((char*)&this->numeManagerHotel[i], sizeof(char));
		}
		this->numeManagerHotel[numarLitereManagerHotel] = '\0';
		

		//int numarServiciiDisponibile; 
		fb.read((char*)&this->numarServiciiDisponibile, sizeof(int));

		//float* preturiServicii;
		this->preturiServicii = new float[this->numarServiciiDisponibile];
		for (int i = 0; i < this->numarServiciiDisponibile; i++)
		{
			fb.read((char*)&this->preturiServicii[i], sizeof(float));
		}

		//string* numeServicii;
		this->numeServicii = new string[this->numarServiciiDisponibile];

		for (int i = 0; i < this->numarServiciiDisponibile; i++)
		{
			int numarLiterenumeServ;
			fb.read((char*)&numarLiterenumeServ, sizeof(int));
			string aux1;
			aux1.resize(numarLiterenumeServ);
			fb.read((char*)aux1.c_str(), numarLiterenumeServ);
			this->numeServicii[i] = aux1;
			
		}
	}

	virtual void afiseazamesaj()
	{
		cout << "Sunt in clasa Hotel" << endl;
	}

};

int Hotel::clasaCAENHotel = 55;

class HotelCuAllInclusive:public Hotel 
{

	int numarMeseIncluse;
	string* listaMeseIncluse;
public:
	HotelCuAllInclusive():Hotel()
	{
		this->numarMeseIncluse = 0;
		this->listaMeseIncluse = NULL;
	}

	HotelCuAllInclusive(int numarMeseIncluse, string* listaMeseIncluse, string denumireHotel, string adresaHotel, int numarAngajati, int numarCamere, bool areMicDejunInclus, float pretCameraPeZi, int anDeschidereHotel, int numarServiciiDisponibile, float* preturiServicii, string* numeServicii, const char* numeManagerHotel) :Hotel(denumireHotel,adresaHotel, numarAngajati, numarCamere, areMicDejunInclus, pretCameraPeZi, anDeschidereHotel, numarServiciiDisponibile, preturiServicii, numeServicii, numeManagerHotel)
	{
		this->numarMeseIncluse = numarMeseIncluse;
		this->listaMeseIncluse = new string[this->numarMeseIncluse];
		for (int i = 0; i < this->numarMeseIncluse; i++)
		{
			this->listaMeseIncluse[i] = listaMeseIncluse[i];
		}



	}

	
	HotelCuAllInclusive(string denumireHotel, string adresaHotel):Hotel( denumireHotel, adresaHotel)
	{
		this->numarMeseIncluse = 0;
		this->listaMeseIncluse = NULL;
	}

	HotelCuAllInclusive(int numarMeseIncluse, string* listaMeseIncluse, string denumireHotel, string adresaHotel, int numarAngajati):Hotel( denumireHotel,  adresaHotel, numarAngajati)
	{
		this->numarMeseIncluse = numarMeseIncluse;
		this->listaMeseIncluse = new string[this->numarMeseIncluse];
		for (int i = 0; i < this->numarMeseIncluse; i++)
		{
			this->listaMeseIncluse[i] = listaMeseIncluse[i];
		}
	}

	int getNumarMeseIncluse()
	{
		return this->numarMeseIncluse;
	}

	string* getListaMeseIncluse()
	{
		return this->listaMeseIncluse;
	}

	void setMeseIncuse(int numarMeseIncluseNou, string* listaMeseIncluseNou)
	{
		if(this->listaMeseIncluse!=NULL)
		{
			delete[] this->listaMeseIncluse;
		}
		this->numarMeseIncluse = numarMeseIncluseNou;
		this->listaMeseIncluse = new string[this->numarMeseIncluse];
		for (int i = 0; i < this->numarMeseIncluse; i++)
		{
			this->listaMeseIncluse[i] = listaMeseIncluseNou[i];
		}

	}

	~HotelCuAllInclusive()
	{
		if (this->listaMeseIncluse != nullptr)
		{
			delete[]this->listaMeseIncluse;
		}
	}

	HotelCuAllInclusive(const HotelCuAllInclusive& objA):Hotel(objA)
	{
		

		this->numarMeseIncluse = objA.numarMeseIncluse;
		this->listaMeseIncluse = new string[this->numarMeseIncluse];
		for (int i = 0; i < this->numarMeseIncluse; i++)
		{
			this->listaMeseIncluse[i] = objA.listaMeseIncluse[i];
		}
		


	}

	HotelCuAllInclusive(const Hotel& obj) :Hotel(obj)
	{

		this->numarMeseIncluse = 3;
		this->listaMeseIncluse = new string[3];
		this->listaMeseIncluse[0] = " mic dejun";
		this->listaMeseIncluse[1] = " pranz";
		this->listaMeseIncluse[2] = " cina";
		
	}

	HotelCuAllInclusive& operator=(const HotelCuAllInclusive& obj)
	{
		if (this != &obj)
		{
			Hotel::operator=(obj);

			if (this->listaMeseIncluse != nullptr)
			{
				delete[]this->listaMeseIncluse;
			}

			this->numarMeseIncluse = obj.numarMeseIncluse;
			this->listaMeseIncluse = new string[this->numarMeseIncluse];
			for (int i = 0; i < this->numarMeseIncluse; i++)
			{
				this->listaMeseIncluse[i] = obj.listaMeseIncluse[i];
			}
		}

		return *this;
	}


	friend ostream& operator<<(ostream& out, const HotelCuAllInclusive& h)
	{

	/*	int numarMeseIncluse;
		string* listaMeseIncluse;*/
		out << "Numar mese incluse " << h.numarMeseIncluse << endl;
		out << "Lista ";
		for (int i = 0; i < h.numarMeseIncluse; i++)
		{
			out << h.listaMeseIncluse[i] << endl;
		}
		
		out << (Hotel&)h;

		return out;

	}


	friend istream& operator>>(istream& in, HotelCuAllInclusive& h)
	{
		if (h.listaMeseIncluse != nullptr)
		{
			delete[]h.listaMeseIncluse;
		}
		cout << "Introduceti numarul de mese incluse";
		in >> h.numarMeseIncluse;
		h.listaMeseIncluse = new string[h.numarMeseIncluse];
		cout << "Introduceti lista de mese incluse";
		for (int i = 0; i < h.numarMeseIncluse; i++)
		{
			in >> h.listaMeseIncluse[i];
		}

		in >> (Hotel&)h;


		return in;

	}

	 void afiseazamesaj()
	{
		cout << "Sunt in clasa Hotel cu All inclusive" << endl;
	}

	 void afiseazaObiect()
	 {
		 
		 cout << "Numarul de mese incluse este" << this->numarMeseIncluse << endl;
		 for (int i = 0; i < this->numarMeseIncluse; i++)
		 {
			 cout << "Numarul de mese incluse: " << this->listaMeseIncluse[i] << endl;
		 }
		 cout << "Numele hotelului este : " << this->denumireHotel << endl;
		 cout << "Adresa Hotelului este: " << this->adresaHotel << endl;
		 cout << "Numarul de angajati este : " << this->numarAngajati << endl;
		 cout << " Numarul de camere este : " << this->numarCamere << endl;
		 cout << "Hotelul are mic dejun inclus ? " << (this->areMicDejunInclus ? "DA" : "NU") << endl;
		 cout << "Pretul unei camere pe zi este: " << this->pretCameraPeZi << endl;
		 cout << "Anul deschiderii hotelului este : " << this->anDeschidereHotel << endl;
		 cout << "Managerul hotelui este : " << this->numeManagerHotel << endl;
		 cout << "Numarul servicii disponibile: " << this->numarServiciiDisponibile << endl;

		 cout << "Servicii si preturi: " << endl;
		 for (int i = 0; i < numarServiciiDisponibile; i++)
		 {
			 cout << "Preturile sunt: " << this->preturiServicii[i] << endl;
			 cout << "Nume serviciu: " << this->numeServicii[i] << endl;
		 }
	 }




};

//has-a de tipul one-to-many (vector de obiecte)

class agentieTurism
{
private:
	string numeAgentie;
	int nrHotel;
	Hotel* vectorHotel;
public:
	agentieTurism()
	{
		this->numeAgentie = "necunoscut";
		this->nrHotel = 0;
		this->vectorHotel = nullptr;

	}

	agentieTurism(string numeAgentie, int nrHotel, Hotel* vectorHotel)
	{
		this->numeAgentie = numeAgentie;
		this->nrHotel = nrHotel;
		this->vectorHotel = new Hotel[this->nrHotel];
		for (int i = 0; i < this->nrHotel; i++)
		{
			this->vectorHotel[i] = vectorHotel[i];
		}

	}

	string getNumeAgentie()
	{
		return this->numeAgentie;
	}

	int getNrHotel()
	{
		return this->nrHotel;
	}

	Hotel* getvectorHotel()
	{
		return this->vectorHotel;
	}

	void setNumeAgentie(string NumeNouAgentie)
	{
		this->numeAgentie = NumeNouAgentie;
	}

	void setHoteluri(int nrHotelNou, Hotel* vectorHotelNou)
	{
		if (this->vectorHotel != NULL)
		{
			delete[] this->vectorHotel;
		}

		this->nrHotel = nrHotelNou;

		this->vectorHotel = new Hotel[this->nrHotel];
		for (int i = 0; i < this->nrHotel; i++)
		{
			this->vectorHotel[i] = vectorHotelNou[i];
		}

	}

	agentieTurism(const agentieTurism& a)
	{
		this->numeAgentie = a.numeAgentie;
		this->nrHotel = a.nrHotel;
		this->vectorHotel = new Hotel[this->nrHotel];
		for (int i = 0; i < this->nrHotel; i++)
		{
			this->vectorHotel[i] = a.vectorHotel[i];
		}

	}

	agentieTurism& operator=(const agentieTurism& a)
	{
		if (this != &a)
		{
			if (this->vectorHotel != NULL)
			{
				delete[] this->vectorHotel;
			}

			this->numeAgentie = a.numeAgentie;
			this->nrHotel = a.nrHotel;
			this->vectorHotel = new Hotel[this->nrHotel];
			for (int i = 0; i < this->nrHotel; i++)
			{
				this->vectorHotel[i] = a.vectorHotel[i];
			}
		}

		return *this;
	}

	~agentieTurism()
	{
		if (this->vectorHotel != NULL)
		{
			delete[] this->vectorHotel;
		}
	}


	void adaugaHotelInAgentie(Hotel HotelNou)
	{
		agentieTurism copie= *this;



		if (this->vectorHotel != NULL)
		{
			delete[] this->vectorHotel;
		}

		this->nrHotel++;

		this->vectorHotel = new Hotel[this->nrHotel];

		for (int i = 0; i < copie.nrHotel; i++)
		{
			this->vectorHotel[i] = copie.vectorHotel[i];
		}

		this->vectorHotel[this->nrHotel - 1] = HotelNou;
	}

	friend ostream&operator<<(ostream& out,const agentieTurism& a)
	{
		out << "Nume: " << a.numeAgentie << endl;
		out << "Numar Hotel: " << a.nrHotel;
		out << "hoteluri" << endl << endl;
		for (int i = 0; i < a.nrHotel; i++)
		{
			cout << a.vectorHotel[i] << endl << endl;
		}

		return out;

	}

	friend istream& operator>>(istream& in, agentieTurism& a)
	{
		cout << "introduceti numele agentiei: " << endl;
		in >> a.numeAgentie;

		if (a.vectorHotel != NULL)
		{
			delete[] a.vectorHotel;
		}
		cout << "introduceti numaru de hoteluri: " << endl;
		in >> a.nrHotel;
		a.vectorHotel = new Hotel[a.nrHotel];
		cout << " Introduceti hotelurile : " << endl;
		
		for (int i = 0; i < a.nrHotel; i++)
		{
			in >> a.vectorHotel[i];
		}

		return in;
	}

	agentieTurism& operator-=(int pozitieDeEliminat)
	{
		agentieTurism copie = *this;
		if (this->vectorHotel != NULL)
		{
			delete[] this->vectorHotel;
		}

		this->nrHotel--;

		this->vectorHotel = new Hotel[this->nrHotel];

		for (int i = 0; i < pozitieDeEliminat; i++)
		{
			this->vectorHotel[i] = copie.vectorHotel[i];
		}
		for (int i = pozitieDeEliminat+1; i < copie.nrHotel; i++)
		{
			this->vectorHotel[i-1] = copie.vectorHotel[i];
		}

		return *this;
	}

};

template<typename tipdata>
class tara
{
	int nrElemente;
	tipdata* vectorElemente;
	string denumireTara;

public:
	tara()
	{
		this->nrElemente = 0;
		this->vectorElemente = nullptr;
		this->denumireTara = "necunoscut";

	}


	tara(int nrElemente, tipdata* vectorElemente, string denumireTara)
	{
		this->nrElemente = nrElemente;
		this->vectorElemente = new tipdata[this->nrElemente];
		for (int i = 0; i < this->nrElemente; i++)
		{
			this->vectorElemente[i] = vectorElemente[i];
		}

		this->denumireTara = denumireTara;
	}

	~tara()
	{
		if (vectorElemente != NULL)
		{
			delete[]this->vectorElemente;
		}
	}

	int getnrElemente()
	{
		return this->nrElemente;
	}

	tipdata* getvectorElemente()
	{
		return this->vectorElemente;
	};
	string getDenumireTara()
	{
		return this->denumireTara;
	}


	void setDenumiretara(string denumireTaraNoua)
	{
		this->denumireTara = denumireTaraNoua;
	}

	void setVectorElemente(int nrElementeNou, tipdata* vectorElementeNou)
	{
		if (vectorElemente != NULL)
		{
			delete[]this->vectorElemente;
		}

		this->nrElemente = nrElementeNou;
		this->vectorElemente = new tipdata[this->nrElemente];
		for (int i = 0; i < this->nrElemente; i++)
		{
			this->vectorElemente[i] = vectorElementeNou[i];
		}



	}

	tara(const tara& t)
	{
		this->nrElemente = t.nrElemente;
		this->vectorElemente = new tipdata[this->nrElemente];
		for (int i = 0; i < this->nrElemente; i++)
		{
			this->vectorElemente[i] = t.vectorElemente[i];
		}

		this->denumireTara = t.denumireTara;
	}

	tara& operator=(const tara& t)
	{
		if(this!=&t)
		{
			if (vectorElemente != NULL)
			{
				delete[]this->vectorElemente;
			}

			this->nrElemente = t.nrElemente;
			this->vectorElemente = new tipdata[this->nrElemente];
			for (int i = 0; i < this->nrElemente; i++)
			{
				this->vectorElemente[i] = t.vectorElemente[i];
			}

			this->denumireTara = t.denumireTara;
		}

		return*this;
	}

	friend ostream& operator<<(ostream& out, tara& t)
	{
		out << "Numarul de elemente este : " << t.nrElemente << endl;
		out << "Elementele sunt : " << endl;
		for (int i = 0; i < t.nrElemente; i++)
		{
			out << t.vectorElemente[i] << endl;
		}

		out << "Denumirea tarii este : " << t.denumireTara << endl;
		out << endl << endl;
		
		return out;

	}


	friend istream& operator>>(istream& in, tara& t)
	{

		if (t.vectorElemente != NULL)
		{
			delete[]t.vectorElemente;
		}
		cout << "Introduceti numarul de elemente : " << endl;
		in >> t.nrElemente;
		t.vectorElemente = new tipdata[t.nrElemente];
		cout << "Introduceti elementele :" << endl;

		for (int i = 0; i < t.nrElemente; i++)
		{
			in >> t.vectorElemente[i];
		}

		cout << "Introduceti denumirea tarii : " << endl;
		in >> t.denumireTara;

		return in;
	}

};


void main() {

	float preturi1[] = { 100.20, 50.6 };
	string nume1[] = { "spalatorie", "spa" };

	Hotel h1("RAMADA", "BD-UL UNIRII", 100, 150, 1, 900.5, 2000, 2, preturi1, nume1, "Popescu Ion");

	cout << "Denumirea hotelului este: " << h1.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << h1.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << h1.getNumarAngajati() << endl;
	cout << "Numar camere :" << h1.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h1.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h1.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate: " << h1.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h1.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h1.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h1.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h1.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h1.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;


	Hotel h4;
	h4.afiseazaObiect();

	Hotel h5("LIDO");
	h5.afiseazaObiect();

	Hotel h6("LARA", "BD-UL TIMISOARA");
	h6.afiseazaObiect();

	Hotel h7("RIVIERA", "BD-UL MAGHERU", 75);
	h7.afiseazaObiect();

	Hotel h8("CARO", "BD-UL CONSTRUCTORILOR", 155, 175);
	h8.afiseazaObiect();

	Hotel h9("MARA", "BD-UL UNIRII", 101, 160, 1);
	h9.afiseazaObiect();

	cout << "------------------Obiectul h1 inainte de modificare" << endl;

	h1.afiseazaObiect();


	cout << "//.......Apelare setteri........//" << endl << endl;

	h1.setNumarAngajati(55);
	h1.setPretCameraZi(2500);
	h1.setAdresaHotel("bd-ul Unirii, nr5");
	h1.setAreMicDejunInclus(0);
	h1.setNumeManagerHotel("Ionescu Maria");

	float preturi2[] = { 450.20, 100.5, 200.0 };
	string nume2[] = { "manichiura", "masaj", "jacuzzi" };

	h1.setServicii(3, preturi2, nume2);



	cout << "------------------Obiectul h1 dupa de modificare" << endl;

	h1.afiseazaObiect();

	cout << ".............Apel Constructor Copiere (obj h10 copiat pe baza obj h7) ......................" << endl << endl;
	Hotel h10(h7);

	cout << ".................Obiectul h7............................" << endl << endl;

	h7.afiseazaObiect();

	cout << ".................Obiectul h10............................" << endl << endl;

	h7.afiseazaObiect();

	cout << ".............Apel OPERATOR = (obj h4 copiat h1) ......................" << endl << endl;

	cout << "...................Obiectul h4 inainte de a fi modificat..............." << endl << endl;
	h4.afiseazaObiect();


	h4 = h1;

	cout << "...................Obiectul macheta h1........................" << endl << endl;
	h1.afiseazaObiect();

	cout << "...................Obiectul h4 dupa modificare..............." << endl << endl;
	h4.afiseazaObiect();

	cout << "--------------------METODE-------------------------" << endl << endl;

	cout << "...................Obiectul h1........................" << endl << endl;
	h1.afiseazaObiect();

	cout << "Pretul minim al h1 este: " << h1.PretMinim() << endl;

	h1.discount(0.2, 0);
	cout << "...................Obiectul h1........................" << endl << endl;
	h1.afiseazaObiect();

	h1.discountIntegral(0.50);
	cout << "...................Obiectul h1........................" << endl << endl;
	h1.afiseazaObiect();


	cout << "Profitul estimat al h1 pe 7 zile este: " << h1.ProfitEstimat(7) << endl;
	cout << "Profitul estimat al h1 pe 7 zile si un grad de ocupare de 70 % este: " << h1.ProfitEstimatGrad(7, 0.7) << endl;

	cout << "...................Obiectul h1 inainte de a adauga un serviciu nou........................" << endl << endl;

	

	h1.afiseazaObiect();
	h1.adaugaServiciuNou(100, "masaj");
	
	cout << "...................Obiectul h1 dupa ce adaugam serviciu nou ........................" << endl << endl;
	h1.afiseazaObiect();
	cout << endl << endl;

	cout << "...................Obiectul h1 inainte de a elimina un serviciu......................." << endl << endl;



	h1.afiseazaObiect();
	h1.eliminaServiciu(2);
	cout << endl << endl;

	cout << "...................Obiectul h1 dupa ce am eliminat un serviciu ........................" << endl << endl;
	h1.afiseazaObiect();
	cout << endl << endl;

	cout << "...................Obiectul h1 inainte de a adauga un serviciu+pret la inceputul listei ........................" << endl << endl;
	h1.afiseazaObiect();
	h1.adaugaServiciuNouInceput("roomService", 200);
	cout << "...................Obiectul h1 dupa ce am adaugat un serviciu+pret la inceputul listei ........................" << endl << endl;
	cout << endl<< endl;
	h1.afiseazaObiect();
	cout << endl << endl;

	cout << ".........................................................Operatorul <=.............................................." << endl << endl;
	cout << "Numarul de angajati pentru h7 este : " << h7.getNumarAngajati() << endl;
	cout << "Numarul de angajati pentru h5 este : " << h5.getNumarAngajati() << endl;
	cout << "este numarul de angajati din obiectul h7 <= decat h5 ? " << ((h7 <= h5) ? "DA" : "NU" )<< endl << endl;

	cout << ".........................................................Operatorul ==.............................................." << endl << endl;
	cout << "......Obiectul h5............" << endl;
	h5.afiseazaObiect();
	cout << endl << endl;

	cout << "......Obiectul h7............" << endl;
	h7.afiseazaObiect();
	cout << endl << endl;

	cout << "Este obiectul h5 identic cu h7? " << ((h5 == h7) ? "DA" : "NU") << endl;

	cout << "--------------------------------------Operator <<----------------------" << endl;
	cout << h5;

	cout << "--------------------------------------Operator >>----------------------" << endl;
	/*cin >> h4;*/

	cout << endl << endl << endl;

	cout << "-------------------------------Fisiere text----------------------" << endl;

	ofstream f1("HotelFisierTXT.txt", ios::out);
	f1 << h1;
	f1.close();

	ifstream f2("HotelFisierTXT.txt", ios::in);
	cout << "Obiectul h7 inainte de citirea din fisier" << endl<<h7<<endl;
	f2 >> h7;
	cout << "Obiectul h7 dupa citirea din fisier" << endl<<h7<<endl;
	f2.close();

	cout << "-------------------------------Fisiere binar----------------------" << endl;
	fstream f3("fisierBIN.bin", ios::binary | ios::out);
	h1.scriereBinar(f3);
	f3.close();

	fstream f4("fisierBIN.bin", ios::binary | ios::in);
	cout << "Obiectul H5 inainte de citire din fisier binar" << endl << h5 << endl << endl;
	h5.citireBinar(f4);

	cout << "Obiectul H5 dupa citire din fisier binar" << endl << h5 << endl << endl;
	f4.close();

	cout << "-------------------HotelCuAllInclusive---------------" << endl << endl;
	HotelCuAllInclusive hai1;
	cout << "Numarul de mese incluse este : " << hai1.getNumarMeseIncluse() << endl << endl;
	cout << "Lista de mese incluse este: " << endl << endl;
	for(int i=0;i<hai1.getNumarMeseIncluse();i++)
	{
		cout<< hai1.getListaMeseIncluse()[i] << endl << endl;
	}

	string lista1[] = { "micdejun", "pranz", "cina" };

	float preturia1[] = { 100, 50,200,300,55 };
	string serviciia1[] = { "masaj", "jacuzzi","room service", "spa", "spalatorie" };



	HotelCuAllInclusive hai2(3, lista1, "RamadaResort", "bdul Unirii", 150, 220, 1, 1100.0, 2010, 5, preturia1, serviciia1,"Popescu Ion");
	
	cout << "----------------------------Obiectul hai2 ------------------" << endl << endl;
	cout << "Numarul de mese incluse este : " << hai2.getNumarMeseIncluse() << endl << endl;
	cout << "Lista de mese incluse este: " << endl << endl;
	for (int i = 0; i < hai2.getNumarMeseIncluse(); i++)
	{
		cout << hai2.getListaMeseIncluse()[i] << endl << endl;
	}
	cout << "Denumirea hotelului este: " << hai2.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << hai2.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << hai2.getNumarAngajati() << endl;
	cout << "Numar camere :" << hai2.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai2.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << hai2.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate: " << hai2.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << hai2.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << hai2.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < hai2.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << hai2.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << hai2.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	string listamese[] = { "micdejun", "gustare", "pranz","cina" };
	hai1.setMeseIncuse(4, listamese);
	hai1.setDenumireHotel("Lido");
	hai1.setAdresaHotel("bd Timisoara");
	hai1.setNumarAngajati(55);
	hai1.setNumarCamere(100);
	hai1.setAreMicDejunInclus(1);
	hai1.setPretCameraZi(1200);
	hai1.setNumeManagerHotel("Ionescu Maria");
	float pret[] = { 100 };
	string nume[] = { "spa" };
	hai1.setServicii(1, pret, nume);

	cout << "----------------Obiectul hai1 dupa modificare---------" << endl;

	cout << "Numarul de mese incluse este : " << hai1.getNumarMeseIncluse() << endl << endl;
	cout << "Lista de mese incluse este: " << endl << endl;
	for (int i = 0; i < hai1.getNumarMeseIncluse(); i++)
	{
		cout << hai1.getListaMeseIncluse()[i] << endl << endl;
	}
	cout << "Denumirea hotelului este: " << hai1.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << hai1.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << hai1.getNumarAngajati() << endl;
	cout << "Numar camere :" << hai1.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai1.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << hai1.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate: " << hai1.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << hai1.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << hai1.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < hai1.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << hai1.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << hai1.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	cout << "---------------------------Constructor copiere---------------------------" << endl;

	HotelCuAllInclusive hai3 = hai2;

	cout << "----------------------------Obiectul macheta hai2 ------------------" << endl << endl;
	cout << "Numarul de mese incluse este : " << hai2.getNumarMeseIncluse() << endl << endl;
	cout << "Lista de mese incluse este: " << endl << endl;
	for (int i = 0; i < hai2.getNumarMeseIncluse(); i++)
	{
		cout << hai2.getListaMeseIncluse()[i] << endl << endl;
	}
	cout << "Denumirea hotelului este: " << hai2.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << hai2.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << hai2.getNumarAngajati() << endl;
	cout << "Numar camere :" << hai2.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai2.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << hai2.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate: " << hai2.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << hai2.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << hai2.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < hai2.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << hai2.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << hai2.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	cout << "----------------Obiectul nou hai3 ---------" << endl;

	cout << "Numarul de mese incluse este : " << hai1.getNumarMeseIncluse() << endl << endl;
	cout << "Lista de mese incluse este: " << endl << endl;
	for (int i = 0; i < hai1.getNumarMeseIncluse(); i++)
	{
		cout << hai1.getListaMeseIncluse()[i] << endl << endl;
	}
	cout << "Denumirea hotelului este: " << hai1.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << hai1.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << hai1.getNumarAngajati() << endl;
	cout << "Numar camere :" << hai1.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai1.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << hai1.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate: " << hai1.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << hai1.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << hai1.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < hai1.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << hai1.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << hai1.getNumeServicii()[i] << endl;
	}

	string lista2[] = { "micdejun", "pranz", "cina" };
	float preturia2[] = { 150, 150,100,500,155 };
	string serviciia2[] = { "masaj", "jacuzzi","room service", "spa", "spalatorie" };
	HotelCuAllInclusive hai4(3, lista2, "RamadaLux", "bdul Decebal", 200, 270, 1, 1500.0, 2010, 5, preturia2, serviciia2, "Ionescu Ion");

	cout << "------------------Operatorul = ------------------------" << endl;
	cout << "Obidctul hai4 inainte de a fi modificat"<< endl << endl;
	cout << "Numarul de mese incluse este : " << hai4.getNumarMeseIncluse() << endl << endl;
	cout << "Lista de mese incluse este: " << endl << endl;
	for (int i = 0; i < hai4.getNumarMeseIncluse(); i++)
	{
		cout << hai4.getListaMeseIncluse()[i] << endl << endl;
	}
	cout << "Denumirea hotelului este: " << hai4.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << hai4.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << hai4.getNumarAngajati() << endl;
	cout << "Numar camere :" << hai4.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai4.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << hai4.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate: " << hai4.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << hai4.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << hai4.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < hai4.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << hai4.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << hai4.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;
	cout << "Obiectul macheta hai1" << endl << endl;
	cout << "Numarul de mese incluse este : " << hai1.getNumarMeseIncluse() << endl << endl;
	cout << "Lista de mese incluse este: " << endl << endl;
	for (int i = 0; i < hai1.getNumarMeseIncluse(); i++)
	{
		cout << hai1.getListaMeseIncluse()[i] << endl << endl;
	}
	cout << "Denumirea hotelului este: " << hai1.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << hai1.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << hai1.getNumarAngajati() << endl;
	cout << "Numar camere :" << hai1.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai1.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << hai1.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate: " << hai1.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << hai1.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << hai1.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < hai1.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << hai1.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << hai1.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	hai4 = hai1;

	cout << "Obidctul hai4 dupa modificare"<<endl << endl;
	cout << "Obidctul hai4 inainte de a fi modificat";
	cout << "Numarul de mese incluse este : " << hai4.getNumarMeseIncluse() << endl << endl;
	cout << "Lista de mese incluse este: " << endl << endl;
	for (int i = 0; i < hai4.getNumarMeseIncluse(); i++)
	{
		cout << hai4.getListaMeseIncluse()[i] << endl << endl;
	}
	cout << "Denumirea hotelului este: " << hai4.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << hai4.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << hai4.getNumarAngajati() << endl;
	cout << "Numar camere :" << hai4.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai4.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << hai4.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate: " << hai4.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << hai4.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << hai4.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < hai4.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << hai4.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << hai4.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;
	cout << "-----------------Upcasting prin operator =----------------------" << endl;

	 ;
	 cout << "------------Obiectul h5 inainte de upcasting--------------" << h5 << endl << endl;

	 cout << "--------------------Obiectul hai4 inainte de upcasting -----------------" << endl << endl;
	 cout << "Numarul de mese incluse este : " << hai4.getNumarMeseIncluse() << endl << endl;
	 cout << "Lista de mese incluse este: " << endl << endl;
	 for (int i = 0; i < hai4.getNumarMeseIncluse(); i++)
	 {
		 cout << hai4.getListaMeseIncluse()[i] << endl << endl;
	 }
	 cout << "Denumirea hotelului este: " << hai4.getDenumireHotel() << endl;
	 cout << "Adresa hotelului este: " << hai4.getAdresaHotel() << endl;
	 cout << "Numarul de anjajati este: " << hai4.getNumarAngajati() << endl;
	 cout << "Numar camere :" << hai4.getNumarCamere() << endl;
	 cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai4.getAreMicDejunInclus() << endl;
	 cout << "Pretul pe camera/zi este: " << hai4.getPretCameraPeZi() << endl;
	 cout << "Anul deschiderii hotelului eate: " << hai4.getAnDeschidereHotel() << endl;
	 cout << "Nume manager Hotel este: " << hai4.getNumeManagerHotel() << endl;
	 cout << "Numarul de servicii disponibile :" << hai4.getnumarServiciiDisponibile() << endl;
	 cout << "Preturi servicii :" << endl;
	 for (int i = 0; i < hai4.getnumarServiciiDisponibile(); i++) {
		 cout << "Pret: " << hai4.getpreturiServicii()[i] << endl;
		 cout << "Denumire Servicii: " << hai4.getNumeServicii()[i] << endl;
	 }
	 cout << endl << endl;

	 h5 = hai4;
	 cout << "------------Obiectul h5 dupa upcasting--------------" << h5 << endl << endl;
	 cout << "--------------------Obiectul hai4 dupa upcasting -----------------" << endl << endl;
	 cout << "Numarul de mese incluse este : " << hai4.getNumarMeseIncluse() << endl << endl;
	 cout << "Lista de mese incluse este: " << endl << endl;
	 for (int i = 0; i < hai4.getNumarMeseIncluse(); i++)
	 {
		 cout << hai4.getListaMeseIncluse()[i] << endl << endl;
	 }
	 cout << "Denumirea hotelului este: " << hai4.getDenumireHotel() << endl;
	 cout << "Adresa hotelului este: " << hai4.getAdresaHotel() << endl;
	 cout << "Numarul de anjajati este: " << hai4.getNumarAngajati() << endl;
	 cout << "Numar camere :" << hai4.getNumarCamere() << endl;
	 cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai4.getAreMicDejunInclus() << endl;
	 cout << "Pretul pe camera/zi este: " << hai4.getPretCameraPeZi() << endl;
	 cout << "Anul deschiderii hotelului eate: " << hai4.getAnDeschidereHotel() << endl;
	 cout << "Nume manager Hotel este: " << hai4.getNumeManagerHotel() << endl;
	 cout << "Numarul de servicii disponibile :" << hai4.getnumarServiciiDisponibile() << endl;
	 cout << "Preturi servicii :" << endl;
	 for (int i = 0; i < hai4.getnumarServiciiDisponibile(); i++) {
		 cout << "Pret: " << hai4.getpreturiServicii()[i] << endl;
		 cout << "Denumire Servicii: " << hai4.getNumeServicii()[i] << endl;
	 }
	 cout << endl << endl;
	
	cout << "-----------------Downcasting----------------------" << endl;
	cout << "------Obiectul h1 inainte de downcasting------" << h1 << endl;
	
	HotelCuAllInclusive hai5 = h1;
	cout << "------Obiectul h1 dupa downcasting------" << h1 << endl;
	cout << "Obiectul hai5 dupa downcasting ------------------------" << endl;
	cout << "Numarul de mese incluse este : " << hai5.getNumarMeseIncluse() << endl << endl;
	cout << "Lista de mese incluse este: " << endl << endl;
	for (int i = 0; i < hai5.getNumarMeseIncluse(); i++)
	{
		cout << hai5.getListaMeseIncluse()[i] << endl << endl;
	}
	cout << "Denumirea hotelului este: " << hai5.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << hai5.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << hai5.getNumarAngajati() << endl;
	cout << "Numar camere :" << hai5.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << hai5.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << hai5.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate: " << hai5.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << hai5.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << hai5.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < hai5.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << hai5.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << hai5.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	cout << "Pretul minim al obiectului hai5 " << hai5.PretMinim() << endl;
	cout << "Operatorul hai1 este egal cu hai5?" << (hai5 == hai1) << endl;


	cout << "----------Operator <<-------------" << endl;
	cout << hai5;
	cout << "----------Operator >>-------------" << endl;
	/*cin >> hai4;*/
	cout << hai4;


	cout << " ----------------------EarlyBiding--------- " << endl;
	cout << "-----------------------------Virtualizare-------" << endl;
	h1.afiseazamesaj();
	hai4.afiseazamesaj();
	hai3.afiseazaObiect();

	

	cout << " ----------------------LateBiding-------- - " << endl;

	Hotel* pointerHotel;
	HotelCuAllInclusive* pointerHotelALL;

	pointerHotelALL = new HotelCuAllInclusive(hai4);
	cout << pointerHotelALL << endl;
	cout << *pointerHotelALL << endl;

	pointerHotel = pointerHotelALL;

	pointerHotel->afiseazamesaj();
	pointerHotelALL->afiseazamesaj();

	cout << "-----------------Relatie HAS-A one-to-many cu vector de obiecte-----------" << endl;

	agentieTurism a1;

	cout << "Nume agentie" << a1.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a1.getNrHotel() << endl;
	cout << "Hoteluri:" ;

	for (int i = 0; i < a1.getNrHotel(); i++)
	{
		cout << a1.getvectorHotel()[i] << endl << endl;
	}

	cout << endl << endl;

	Hotel vectorHoteluri1[] = { h1, h5 };

	agentieTurism a2("DirectBooking", 2, vectorHoteluri1);

	cout << "Nume agentie" << a2.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a2.getNrHotel() << endl;
	cout << "Hoteluri: ";

	for (int i = 0; i < a2.getNrHotel(); i++)
	{
		cout << a2.getvectorHotel()[i] << endl << endl;
	}

	cout << endl << endl;

	a1.setNumeAgentie("ChristianTour");

	Hotel vectorHoteluri2[] = { h7, h10 };
	a1.setHoteluri(2, vectorHoteluri2);

	cout << "Nume agentie" << a1.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a1.getNrHotel() << endl;
	cout << "Hoteluri:";

	for (int i = 0; i < a1.getNrHotel(); i++)
	{
		cout << a1.getvectorHotel()[i] << endl << endl;
	}

	agentieTurism a3(a2);

	cout << "-----Obiectul a2-------" << endl;
	cout << "Nume agentie" << a2.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a2.getNrHotel() << endl;
	cout << "Hoteluri:";

	for (int i = 0; i < a2.getNrHotel(); i++)
	{
		cout << a2.getvectorHotel()[i] << endl << endl;
	}
	cout << endl;
	cout << "-----Obiectul nou creat a3-------" << endl;
	cout << "Nume agentie" << a3.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a3.getNrHotel() << endl;
	cout << "Hoteluri:";

	for (int i = 0; i < a3.getNrHotel(); i++)
	{
		cout << a3.getvectorHotel()[i] << endl << endl;
	}
	cout << endl;

	cout << "Obiectul a1 inainte de a fi modificat " << endl;
	cout << "Nume agentie" << a1.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a1.getNrHotel() << endl;
	cout << "Hoteluri:";

	for (int i = 0; i < a1.getNrHotel(); i++)
	{
		cout << a1.getvectorHotel()[i] << endl << endl;
	}
	a1 = a2;

	cout << "Obiectul macheta a2 " << endl;
	cout << "Nume agentie" << a2.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a2.getNrHotel() << endl;
	cout << "Hoteluri:";

	for (int i = 0; i < a2.getNrHotel(); i++)
	{
		cout << a2.getvectorHotel()[i] << endl << endl;
	}
	cout << "Obiectul a1 inainte de a fi modificat " << endl;
	cout << "Nume agentie" << a1.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a1.getNrHotel() << endl;
	cout << "Hoteluri:";

	for (int i = 0; i < a1.getNrHotel(); i++)
	{
		cout << a1.getvectorHotel()[i] << endl << endl;
	}

	a1.adaugaHotelInAgentie(h8);

	cout << "Obiectul a1 dupa ce a fost  modificat " << endl;
	cout << "Nume agentie" << a1.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a1.getNrHotel() << endl;
	cout << "Hoteluri:";

	for (int i = 0; i < a1.getNrHotel(); i++)
	{
		cout << a1.getvectorHotel()[i] << endl << endl;
	}

	cout << "-------Operatori << si >> ------------------" << endl;

	cout << "------Obiectul a3------" << endl<<a3 << endl;

	//cin >> a1;

	cout << "Obiectul a1 dupa ce a fost introdus de la tastatura" << a1<<endl;
	cout << "----------------Obiectul  a3-------------------" << endl;
	cout << "Nume agentie" << a3.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a3.getNrHotel() << endl;
	cout << "Hoteluri:";

	for (int i = 0; i < a3.getNrHotel(); i++)
	{
		cout << a3.getvectorHotel()[i] << endl << endl;
	}
	cout << endl;
	a3 -= 0;
	cout << "-----Obiectul a3 dupa ce am eliminat o pozitie-------" << endl;
	cout << "Nume agentie" << a3.getNumeAgentie() << endl;
	cout << "Numer de Hoteluri" << a3.getNrHotel() << endl;
	cout << "Hoteluri:";

	for (int i = 0; i < a3.getNrHotel(); i++)
	{
		cout << a3.getvectorHotel()[i] << endl << endl;
	}
	cout << endl;

	cout << "----------------------CLASE TEMPLATE-----------------------------------------------" << endl << endl << endl;

	tara <Hotel>t1;

	cout << "Numarul de elemente este: " << t1.getnrElemente() << endl;
	cout << "Elementele sunt :";
	for (int i = 0; i < t1.getnrElemente(); i++)
	{

		cout << t1.getvectorElemente()[i] << endl;
	}

	cout << endl << endl;
	Hotel listaHotel1[] = { h1,h10 };
	tara <Hotel>t5 = {2,listaHotel1,"Spania"};

	tara<HotelCuAllInclusive>t2;

	
	HotelCuAllInclusive listaElemente[] = { hai1, hai3 };
	tara<HotelCuAllInclusive>t3 = {2, listaElemente, "romania"};


	cout << "tara t3" << endl << endl << t3 << endl;


	t2.setDenumiretara("Italia");
	HotelCuAllInclusive  listaElemente1[] = { hai4,hai5 };
	t2.setVectorElemente(2, listaElemente1);
	cout << "tara t2" << endl << endl << t2 << endl;


	cout << "tara t3" << endl << endl << t3 << endl;
	
	tara<HotelCuAllInclusive> t4(t3);
	cout << "tara t4" << endl << endl << t3 << endl;

	cout << "tara t1" << endl << endl << t1 << endl;
	cout << "tara t5" << endl << endl << t5 << endl;

	t1 = t5;
	cout << "tara t5" << endl << endl << t5 << endl;
	cout << "tara t1" << endl << endl << t1 << endl;

	/*cin >> t1;*/

	cout << "tara t1 dupa ce a fost introdusa de la tastaura" << endl << endl << t1 << endl;

	cout << "-------CONTAINERE STL----------------------------" << endl << endl;


	cout << "-------vector STL----------------------------" << endl << endl;
	
	vector<float> vectorSTL;

	vectorSTL.push_back(2.5);
	vectorSTL.push_back(2.7);
	vectorSTL.push_back(2.5);
	vectorSTL.push_back(2.9);

	cout << "Numarul de elemente din vector este : " << vectorSTL.size() << endl;
	vectorSTL.pop_back();

	for (int i = 0; i < vectorSTL.size(); i++)
	{
		cout << vectorSTL[i] << endl;
	}

	cout << "-------list----------------------------" << endl << endl;

		list<int> listSTL;

	listSTL.push_back(55);
	listSTL.push_back(100);
	listSTL.push_back(-55);
	listSTL.push_back(0);
	
	cout << "Numarul de elemente din lista este: " << listSTL.size() << endl << endl;
	
	list<int>::iterator it1;
	cout << "Elementele din lista sunt : " << endl;
	for (it1 = listSTL.begin(); it1 != listSTL.end(); it1++)
	{
		cout << *it1 << endl;
	}

	listSTL.pop_back();
	listSTL.pop_back();
	list<int>::iterator it2;
	cout << "Elementele din lista sunt : " << endl;
	for (it2 = listSTL.begin(); it2 != listSTL.end(); it2++)
	{
		cout << *it2 << endl;
	}
	cout << "-------set----------------------------" << endl << endl;

	set <string> setSTL;

	setSTL.insert("ana");
	setSTL.insert("Maria");
	setSTL.insert("Izabela");


	cout << "Numarul de elemente din set este : " << setSTL.size() << endl;

	setSTL.erase("ana");

	set <string>::iterator it3;
	cout << "Elementele din set sunt : ";
	for (it3 = setSTL.begin(); it3 != setSTL.end(); it3++)
	{
		cout << *it3 << endl<<endl;
	}

	cout << "-------map----------------------------" << endl << endl;

	map<int, Hotel> mapSTL;

	mapSTL.insert(pair<int, Hotel>(001, h1));
	mapSTL.insert(pair<int, Hotel>(002, h10));
	mapSTL.insert(pair<int, Hotel>(003, h4));

	cout << "Numarul de elemente din map este:" << mapSTL.size() << endl << endl;

	map< int, Hotel >::iterator it5;
	for (it5 = mapSTL.begin(); it5 != mapSTL.end(); it5++)
	{
		cout << "Cheia de identificare este : " << it5->first << endl;
		cout << "Elementul este : " << it5->second << endl << endl;
	}

	
	mapSTL.erase(001);


	map< int, Hotel >::iterator it4;
	for (it4 = mapSTL.begin(); it4 != mapSTL.end(); it4++)
	{
		cout << "Cheia de identificare este : " << it4->first << endl;
		cout << "Elementul este : " << it4->second << endl << endl;
	}




}