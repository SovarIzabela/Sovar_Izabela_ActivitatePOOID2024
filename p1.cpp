#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>

using namespace std;


class Hotel
{

private:

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

	//constructorul cu toti parametri

	Hotel(string denumireHotel, string adresaHotel, int numarAngajati, int numarCamere, bool areMicDejunInclus, float pretCameraPeZi, int anDeschidereHotel, int numarServiciiDisponibile, float* preturiServicii, string* numeServicii, const char* numeManagerHotel) :anDeschidereHotel(anDeschidereHotel)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = numarAngajati;
		this->numarCamere = numarCamere;
		this->areMicDejunInclus = areMicDejunInclus;
		this->pretCameraPeZi = pretCameraPeZi;

		//alocare memorie la char*
		this->numeManagerHotel = new char[strlen(numeManagerHotel) + 1];
		//initializare la char*
		strcpy(this->numeManagerHotel, numeManagerHotel);

		this->numarServiciiDisponibile = numarServiciiDisponibile;
		//alocarea de memorie pentru pointeri
		this->preturiServicii = new float[this->numarServiciiDisponibile];
		this->numeServicii = new string[this->numarServiciiDisponibile];

		//initializarea
		for (int i = 0; i < this->numarServiciiDisponibile; i++)
		{
			this->preturiServicii[i] = preturiServicii[i];
			this->numeServicii[i] = numeServicii[i];

		}




	}

	//constructorul fara parametri

	Hotel() :anDeschidereHotel(0)
	{
		this->denumireHotel = "anonima";
		this->adresaHotel = "anonima";
		this->numarAngajati = 0;
		this->numarCamere = 0;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
		//alocare memorie la char*
		this->numeManagerHotel = new char[strlen("anonim") + 1];
		//initializare la char*
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;
	}

	//constructorul cu 1 parametru
	Hotel(string denumireHotel) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = "anonima";
		this->numarAngajati = 0;
		this->numarCamere = 0;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
		//alocare memorie la char*
		this->numeManagerHotel = new char[strlen("anonim") + 1];
		//initializare la char*
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;


	}
	//constructorul cu 2 parametri

	Hotel(string denumireHotel, string adresaHotel) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = 0;
		this->numarCamere = 0;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
		//alocare memorie la char*
		this->numeManagerHotel = new char[strlen("anonim") + 1];
		//initializare la char*
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;


	}
	//constructorul cu 3 parametri
	Hotel(string denumireHotel, string adresaHotel, int numarAngajati) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = numarAngajati;
		this->numarCamere = 0;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
		//alocare memorie la char*
		this->numeManagerHotel = new char[strlen("anonim") + 1];
		//initializare la char*
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;

	}
	//constructorul cu 4 parametri

	Hotel(string denumireHotel, string adresaHotel, int numarAngajati, int numarCamere) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = numarAngajati;
		this->numarCamere = numarCamere;
		this->areMicDejunInclus = 0;
		this->pretCameraPeZi = 0;
		//alocare memorie la char*
		this->numeManagerHotel = new char[strlen("anonim") + 1];
		//initializare la char*
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;


	}
	//constructorul cu 5 parametri

	Hotel(string denumireHotel, string adresaHotel, int numarAngajati, int numarCamere, bool areMicDejunInclus) :anDeschidereHotel(0)
	{
		this->denumireHotel = denumireHotel;
		this->adresaHotel = adresaHotel;
		this->numarAngajati = numarAngajati;
		this->numarCamere = numarCamere;
		this->areMicDejunInclus = areMicDejunInclus;
		this->pretCameraPeZi = 0;
		//alocare memorie la char*
		this->numeManagerHotel = new char[strlen("Anonim") + 1];
		//initializare la char*
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;


	}

	//getteri

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
	// setteri
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
	//setter pentru char*

	void setNumeManagerHotel(const char* numeManagerHotelNou)
	{
		//1.dezalocam valoarea veche (apelam instr de dezalocare mem din destructor
		if (this->numeManagerHotel != NULL)
		{
			delete[] this->numeManagerHotel;
		}

		//2.realocam spatiu pentru noua valoare
		this->numeManagerHotel = new char[strlen(numeManagerHotelNou) + 1];
		//3.reinitializam cu noua valoare
		strcpy(this->numeManagerHotel, numeManagerHotelNou);

	}
	// setter pt vectori si numarator
	void setServicii(int numarServiciiDisponibileNou, float* preturiServiciiNoi, string* numeServiciiNoi)
	{
		//stergem vechea valoare
		if (this->preturiServicii != NULL)
		{
			delete[] this->preturiServicii;
		}

		if (this->numeServicii != NULL)

		{
			delete[] this->numeServicii;
		}
		//realocam numaratorul cu valoarea noua
		this->numarServiciiDisponibile = numarServiciiDisponibileNou;
		//realocam memorie pentru vectori
		this->preturiServicii = new float[this->numarServiciiDisponibile];
		this->numeServicii = new string[this->numarServiciiDisponibile];
		//reinitializam cu noua valoare

		for (int i = 0; i < this->numarServiciiDisponibile; i++)
		{
			this->preturiServicii[i] = preturiServiciiNoi[i];
			this->numeServicii[i] = numeServiciiNoi[i];
		}

	}


	//destructor

	~Hotel()
	{
		//dezalocare de memorie+stergerea atributelor
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
		cout << "AICI S-A APELAT DESTRUCTORUL" << endl;
	}

	//constructorul de copiere
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


	//operatorul = (ia 2 obiecte si pe unul il modifica pe baza celuilalt ex: h1 obiect macheta, h4 obiect ce va fi modificat pe baza h1)

	Hotel& operator=(Hotel& obiectMacheta)
	{
		if (this != &obiectMacheta)
		{//1.destructor
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

			//2.constructorul de copiere

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
		//3. dam return

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
	// supraincarcarea operatorilor

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

	void afiseazaObiect()
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



};

int Hotel::clasaCAENHotel = 55;

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
}

