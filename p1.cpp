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

	Hotel(string denumireHotel, string adresaHotel, int numarAngajati, int numarCamere, bool areMicDejunInclus, float pretCameraPeZi, int anDeschidereHotel, int numarServiciiDisponibile,float* preturiServicii, string* numeServicii, const char* numeManagerHotel ):anDeschidereHotel(anDeschidereHotel)
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
		this->numeManagerHotel = new char[strlen("anonim")+1];
		//initializare la char*
		strcpy(this->numeManagerHotel, "Anonim");
		this->numarServiciiDisponibile = 0;
		this->preturiServicii = NULL;
		this->numeServicii = NULL;
	}

	//constructorul cu 1 parametru
	Hotel(string denumireHotel):anDeschidereHotel(0)
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

char* getNumeManagerHotel(){
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
void setServicii(int numarServiciiDisponibileNou, float* preturiServiciiNoi, string*numeServiciiNoi)
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
Hotel(const Hotel& obiectExistent):anDeschidereHotel(obiectExistent.anDeschidereHotel)
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

	Hotel&operator=( Hotel& obiectMacheta)
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
		if (pozitieProdus >= 0 && pozitieProdus<this->numarServiciiDisponibile)
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
};

int Hotel::clasaCAENHotel = 55;

void main() {

	float preturi1[] = { 100.20, 50.6 };
	string nume1[] = { "spalatorie", "spa" };

	Hotel h1("RAMADA", "BD-UL UNIRII", 100, 150, 1, 900.5, 2000,2,preturi1,nume1,"Popescu Ion");
	
	cout << "Denumirea hotelului este: "<<h1.getDenumireHotel()<<endl;
	cout << "Adresa hotelului este: "<<h1.getAdresaHotel() << endl;
	cout <<"Numarul de anjajati este: " << h1.getNumarAngajati() << endl;
	cout <<"Numar camere :" << h1.getNumarCamere() << endl;
	cout <<"Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h1.getAreMicDejunInclus() << endl;
	cout <<"Pretul pe camera/zi este: " << h1.getPretCameraPeZi() << endl;
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
	cout << "Denumirea hotelului este: " << h4.getDenumireHotel() << endl;
	cout << "Adresa hotelului este:" << h4.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este:" << h4.getNumarAngajati() << endl;
	cout << "Numar camere :" << h4.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h4.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h4.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h4.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h4.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h4.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h4.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h4.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h4.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	Hotel h5("LIDO");
	cout << "Denumirea hotelului este: " << h5.getDenumireHotel() << endl;
	cout << "Adresa hotelului este:" << h5.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este:" << h5.getNumarAngajati() << endl;
	cout << "Numar camere :" << h5.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h5.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h5.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h5.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h5.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h5.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h5.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h5.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h5.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	Hotel h6("LARA", "BD-UL TIMISOARA");
	cout << "Denumirea hotelului este: " << h6.getDenumireHotel() << endl;
	cout << "Adresa hotelului este:" << h6.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este:" << h6.getNumarAngajati() << endl;
	cout << "Numar camere :" << h6.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h6.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h6.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h6.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h6.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h6.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h6.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h6.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h6.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	Hotel h7("RIVIERA", "BD-UL MAGHERU", 75);
	cout << "Denumirea hotelului este: " << h7.getDenumireHotel() << endl;
	cout << "Adresa hotelului este:" << h7.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este:" << h7.getNumarAngajati() << endl;
	cout << "Numar camere :" << h7.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h7.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h7.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h7.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h7.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h7.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h7.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h7.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h7.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	Hotel h8("CARO", "BD-UL CONSTRUCTORILOR", 155, 175);
	cout << "Denumirea hotelului este: " << h8.getDenumireHotel() << endl;
	cout << "Adresa hotelului este:" << h8.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este:" << h8.getNumarAngajati() << endl;
	cout << "Numar camere :" << h8.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h8.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h8.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h8.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h8.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h8.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h8.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h8.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h8.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	Hotel h9("MARA", "BD-UL UNIRII", 101, 160, 1);
	cout << "Denumirea hotelului este: " << h9.getDenumireHotel() << endl;
	cout << "Adresa hotelului este:" << h9.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este:" << h9.getNumarAngajati() << endl;
	cout << "Numar camere :" << h9.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h9.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h9.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h9.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h9.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h9.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h9.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h9.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h9.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	cout << "------------------Obiectul h1 inainte de modificare" << endl;
	
    cout << "Denumirea hotelului este: " << h1.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << h1.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << h1.getNumarAngajati() << endl;
	cout << "Numar camere :" << h1.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h1.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h1.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h1.getAnDeschidereHotel() << endl;
	cout << endl << endl;


	cout << "//.......Apelare setteri........//" << endl<<endl;

	h1.setNumarAngajati(55);
	h1.setPretCameraZi(2500);
	h1.setAdresaHotel("bd-ul Unirii, nr5");
	h1.setAreMicDejunInclus(0);
	h1.setNumeManagerHotel("Ionescu Maria");

	float preturi2[] = { 450.20, 100.5, 200.0 };
	string nume2[] = { "manichiura", "masaj", "jacuzzi"};

	h1.setServicii(3, preturi2, nume2);



	cout << "------------------Obiectul h1 dupa de modificare" << endl;

	
	cout << "Denumirea hotelului este: " << h1.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << h1.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << h1.getNumarAngajati() << endl;
	cout << "Numar camere :" << h1.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h1.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h1.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h1.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h1.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h1.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h1.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << h1.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << h1.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	cout << ".............Apel Constructor Copiere (obj h10 copiat pe baza obj h7) ......................" << endl << endl;
	Hotel h10(h7);

	cout << ".................Obiectul h7............................" << endl<< endl;

	cout << "Denumirea hotelului este: " << h7.getDenumireHotel() << endl;
	cout << "Adresa hotelului este:" << h7.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este:" << h7.getNumarAngajati() << endl;
	cout << "Numar camere :" << h7.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h7.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h7.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h7.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h7.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h7.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h7.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h7.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h7.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	cout << ".................Obiectul h10............................" << endl << endl;

	cout << "Denumirea hotelului este: " << h10.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << h10.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << h10.getNumarAngajati() << endl;
	cout << "Numar camere :" << h10.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h10.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h10.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h10.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h10.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h10.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h10.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << h10.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << h10.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	h4 = h1;

	cout << ".............Apel OPERATOR = (obj h4 copiat h1) ......................" << endl << endl;

	cout << "...................Obiectul h4 inainte de a fi modificat..............." << endl << endl;
	cout << "Denumirea hotelului este: " << h4.getDenumireHotel() << endl;
	cout << "Adresa hotelului este:" << h4.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este:" << h4.getNumarAngajati() << endl;
	cout << "Numar camere :" << h4.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h4.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h4.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h4.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h4.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h4.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h4.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h4.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h4.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	

	cout << "...................Obiectul macheta h1........................" << endl << endl;
	cout << "Denumirea hotelului este: " << h1.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << h1.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << h1.getNumarAngajati() << endl;
	cout << "Numar camere :" << h1.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h1.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h1.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h1.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h1.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h1.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h1.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << h1.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << h1.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;

	cout << "...................Obiectul h4 dupa modificare..............." << endl << endl;
	cout << "Denumirea hotelului este: " << h4.getDenumireHotel() << endl;
	cout << "Adresa hotelului este:" << h4.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este:" << h4.getNumarAngajati() << endl;
	cout << "Numar camere :" << h4.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h4.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h4.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h4.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h4.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h4.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h4.getnumarServiciiDisponibile(); i++) {
		cout << "Pret<" << h4.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii" << h4.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;


	cout << "Pretul minim al h1 este: "<<h1.PretMinim() << endl;


	h1.discount(0.2, 0);

	cout << "...................Obiectul h1........................" << endl << endl;
	cout << "Denumirea hotelului este: " << h1.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << h1.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << h1.getNumarAngajati() << endl;
	cout << "Numar camere :" << h1.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h1.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h1.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h1.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h1.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h1.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h1.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << h1.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << h1.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;



	h1.discountIntegral(0.50);

	cout << "...................Obiectul h1........................" << endl << endl;
	cout << "Denumirea hotelului este: " << h1.getDenumireHotel() << endl;
	cout << "Adresa hotelului este: " << h1.getAdresaHotel() << endl;
	cout << "Numarul de anjajati este: " << h1.getNumarAngajati() << endl;
	cout << "Numar camere :" << h1.getNumarCamere() << endl;
	cout << "Are mic dejun inclus? (0 pentru Nu , 1 pentru DA)  " << h1.getAreMicDejunInclus() << endl;
	cout << "Pretul pe camera/zi este: " << h1.getPretCameraPeZi() << endl;
	cout << "Anul deschiderii hotelului eate:" << h1.getAnDeschidereHotel() << endl;
	cout << "Nume manager Hotel este: " << h1.getNumeManagerHotel() << endl;
	cout << "Numarul de servicii disponibile :" << h1.getnumarServiciiDisponibile() << endl;
	cout << "Preturi servicii :" << endl;
	for (int i = 0; i < h1.getnumarServiciiDisponibile(); i++) {
		cout << "Pret: " << h1.getpreturiServicii()[i] << endl;
		cout << "Denumire Servicii: " << h1.getNumeServicii()[i] << endl;
	}
	cout << endl << endl;


	cout << "Profitul estimat al h1 pe 7 zile este: " << h1.ProfitEstimat(7) << endl;

	cout << "Profitul estimat al h1 pe 7 zile si un grad de ocupare de 70 % este: " << h1.ProfitEstimatGrad(7, 0.7) << endl;

}
