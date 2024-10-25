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



public:
	//constructor cu toti parametrii

	preparatCafea(string tipCafea, int cantitateZahar, char marimePahar, float pretCafea, bool adaugatiAromaCafea, string monedaPlata):monedaPlata("RON")
	{
		this->tipCafea = tipCafea;
		this->cantitateZahar = cantitateZahar;
		this->marimePahar = marimePahar;
		this->pretCafea = pretCafea;
		this->adaugatiAromaCafea = adaugatiAromaCafea;

	}

	//constructor fara parametri

	preparatCafea():monedaPlata("Necunoscuta")
	{
		this->tipCafea = "Necunoscut";
		this->cantitateZahar = 0;
		this->marimePahar = 'n';
		this->pretCafea = 0;
		this->adaugatiAromaCafea = false;

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

	string getMonedaPlata()
	{
		return this->monedaPlata;
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

	void afiseaza() 
	{
		cout << "Tipul de cafea este: " << this->tipCafea << endl;
		cout << "Cantitatea de zahar este : " << this->cantitateZahar << endl;
		cout << "Marimea paharului este :" << this->marimePahar << endl;
		cout << "Pretul cafelei este :" << this->pretCafea << endl;
		cout << "Adaugati Aroma Cafea? " << (this->adaugatiAromaCafea? "DA":"NU") << endl;
		cout << "Continutul standard de cafeina este : " <<preparatCafea::grame_cofeina_standard << "mg" << endl;
		cout << "Moneda plata Cafea : " << this->monedaPlata << endl;
		cout << endl << endl;

	}

};

 int preparatCafea::grame_cofeina_standard = 10;

void main()
{
	preparatCafea p1("latte", 5, 'G', 15, 1, "RON");
	cout << "Denumire Preparat Cafea : " << p1.getTipCafea() << endl;
	cout << "Cantitate Zahar: " << p1.getCantitateZahar() << endl;
	cout << "Marime Pahar: " << p1.getMarimePahar() << endl;
	cout << " Pret Cafea: " << p1.getPretCafea() << endl;
	cout << "Adaugati Aroma la Cafea? : " << p1.getAdaugatiAromaCafea()<< endl;
	cout << " Moneda de plata este: " << p1.getMonedaPlata() << endl;
	cout << endl << endl;

	preparatCafea p2("expreso", 5, 'T', 10, 0, "RON");
	preparatCafea p3("capucino", 10, 'M', 10, 1, "RON");
	preparatCafea p4("americano", 7, 'S', 7, 0, "RON");




	p2.afiseaza();
	p3.afiseaza();
	p4.afiseaza();

	p2.setTipCafea("expresso");
	p2.setCantitateZahar(0);
	p2.setMarimePahar('M');
	p2.setPretCafea(10.00);
	p2.setAdaugatiAromaCafea(0);

	cout << "............Obiectul p2 dupa modificari.............." << endl;

	p2.afiseaza();





}
