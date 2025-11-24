#include<iostream>
using namespace std;
class Persona {
	protected:
	string nome;
	int eta;
public:
    void inseriscidati(){
    	cout<<endl<<"Inserisci nome: ";
    	getline(cin,nome); //legge stringa nome con spazi
    	cout<<endl<<"Inserisci eta: ";
    	cin >>eta;
    	cin.ignore(); //pulisce il buffer dopo  il cin
    		
	}
	void mostradati() const {//const vuol dire che non deve cambiare l oggetto 
		cout<<"----DATI PERSONA----"<<endl;
		cout<<"IL nome e': "<<nome<<endl;
		cout<<"l eta e': "<<eta<<endl;
	}
};
class Lavoratore : public Persona{
	private:
	double stipendio;
	public:
	void inseriscidatilavoratore(){
	inseriscidati();//chiamata alla funzione della classe base PERSONA
	cout<<endl<<"Inserisci il salario: ";
	cin>>stipendio;	
}
	void mostradatilavoratore() const {
		mostradati();
		cout<<"----DATI LAVORATORE----"<<endl;
		cout<<"Lo stipendio e': "<<stipendio<<endl;
	}
	
	
	
};
int main(){
	Persona A;
	Lavoratore C;
	
	C.inseriscidatilavoratore();
    
   C.mostradatilavoratore();
    
   // C.inseriscidati();
    
    //C.mostradati();
    
    
	return 0;	
}
