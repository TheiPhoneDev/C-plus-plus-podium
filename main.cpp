#include <iostream>

using namespace std;

const int dimensioneMax=10; // dimensione massima del vettore

//prototipi
void caricaVettore (string v[], int &n);
void stampaClassifica(string v[], int n);
void trovaConcorrente(string v[], int n);
int Menu ();


int main () {

  int N=0;// dimensione del vettore
  int scelta;
  string c[dimensioneMax];
  
  
   do{
      scelta=Menu();
      switch(scelta){
        case 1:
          caricaVettore (c,N);
          break;
        case 2:
          stampaClassifica(c,N);
          break;
        case 3:
          trovaConcorrente(c,N);
          break;
        case 0:
          cout<<"Esci"<<endl;
          break;	
        default:
          cout<<"Attenzione, scelta sbagliata!"<<endl;
          break;
      } 
  }while (scelta!=0);


  return 0;
}


int Menu () {
  int scegli;
  cout<<"-------MENU'-------"<<endl;
  cout<<"1-Inserisci il numero di concorrenti in classifica"<<endl;
  cout<<"2-Visualizza la classifica"<<endl;
  cout<<"3-Trova concorrente"<<endl;
  cout<<"0-Fine"<<endl;

  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}




void caricaVettore (string v[], int &n) {

  int i=0;

    do{
	  cout<<"Inserisci il numero di concorrenti: ";
	  cin>>n;
	  if (n<=0||n>dimensioneMax) {
		  cout<<"Attenzione, non posso caricare la classifica!!!"<<endl;
		}
	}while(n<=0||n>dimensioneMax);

    while(i<n) {
	  cout<<"Inserisci il "<<i+1<<"° nome: ";
	  cin>>v[i];
	  i++;
	}
	
    cout<<endl;
}


void stampaClassifica(string v[], int n){

  int i=0;


  cout<<endl;
  cout<<"I concorrenti in classifica sono: "<<endl;
  while(i<n) {
    cout<<i+1<<") "<<v[i]<<endl;
    i++;
  }
  cout<<endl;

}


void trovaConcorrente(string v[], int n) {
    
    string nome;
    int i=0;
    
    
    cout<<endl;
    
    cout<<"Inserisci il nome del concorrente: ";
    cin>>nome;
    while(i<n&&v[i]!=nome) {
        i=i+1;
    }
    
    if(i>=n) {
        cout<<nome<<" non e' presente in classifica"<<endl;
    } else {
        cout<<nome<<" e' presente in classifica e si trova in "<<i+1<<"° posizione"<<endl;

    }
    
    cout<<endl;
}
