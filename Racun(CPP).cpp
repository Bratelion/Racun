#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	vector<string> naziv;
	vector<double> kolicina;
	vector<double> pojCijena;
	vector<double> suma;
	
	string proizvod;
	double kol;
	double cijena;
	double iznos;
	double ukupno=0;
	
	cout<< "Dobro dosli u 'Shoping listu DUMP-a'. Molimo vas za pocetak upisite 'DA' te "<<endl<<"unesite proizvod koji zelite kupiti (jedna rijec), zatim kolicinu"<<endl<<"te njegovu cijenu. Za zavrsetak, upisite kraj."<<endl<< "Hvala."<< endl<<endl;
	
	cin>> proizvod;
	cout<<endl;
	while(proizvod != "kraj")
	{
		cout<<"Proizvod: "<<endl;
	    cin>> proizvod;
		int postoji=0;
		
		for(int i=0; i<naziv.size(); i++)
		{
			if(proizvod!="kraj")
			{
				if(proizvod==naziv[i])
				{
					cout<<endl<<"Kolicina: "<<endl;
					cin>> kol;
					kolicina[i] += kol;
					postoji=1;
					cout<< "___________________"<<endl;
				}
		    }
		}
		if(proizvod!="kraj")
		{
	    	if(postoji==0)
			{
				naziv.push_back(proizvod);
				cout<<endl<<"Kolicina: "<<endl;
				cin>> kol;
				kolicina.push_back(kol);
				cout<<endl<<"Pojedinacna cijena: "<< endl;
				cin>> cijena;
				pojCijena.push_back(cijena);
				cout<< "___________________"<<endl;	
			}
		}
		else
		{
			cout<<"Racun je spreman!"<<endl<<endl<<endl;
		}
	}
	
	cout<<"       ______________________________________________________________  "<<endl;
	cout<<"      /                                                              \\"<<endl;
	cout<<"     ||                  |                                           ||"<<endl;
	cout<<"     ||                  |                                           ||"<<endl;
	cout<<"     ||               ___|  udruga  mladih  programera               ||"<<endl;
	cout<<"     ||              /   |  |     | |__   __    ___                  ||"<<endl;
	cout<<"     ||             |    |  |     | |  \\ /  \\  |   \\                 ||"<<endl;
	cout<<"     ||             |    |  |     | |   |    | |    |                ||"<<endl;
	cout<<"     ||              \\___|   \\___/  |   |    | |___/                 ||"<<endl;
	cout<<"     ||                                        |                     ||"<<endl;
	cout<<"     ||                                        |                     ||"<<endl;
	cout<<"     ||                                                              ||"<<endl;
	cout<<"     ||                                                              ||"<<endl;
	cout<<"     ||            __         __    __   __            __            ||"<<endl;
	cout<<"     ||           /   |   |  /  \\  |  \\ |  \\ | |\\  |  /  \\           ||"<<endl;
	cout<<"     ||           \\   |___| |    | |__/ |__/ | | | | |  __           ||"<<endl;
	cout<<"     ||             \\ |   | |    | |    |    | | \\ | |   |           ||"<<endl;
	cout<<"     ||           __/ |   |  \\__/  |    |    | |  ||  \\__|           ||"<<endl;
	cout<<"     ||                           __ _____  _                        ||"<<endl;
	cout<<"     ||                   |    | /     |   / \\                       ||"<<endl;
	cout<<"     ||                   |    | \\     |  |___|                      ||"<<endl;
	cout<<"     ||                   |    |   \\   |  |   |                      ||"<<endl;
	cout<<"     ||                   |___ | __/   |  |   |                      ||"<<endl;
	cout<<"      \\______________________________________________________________/"<<endl<<endl<<endl;
	
	cout<<left<<setw(15)<<" Artikl"<<left<<setw(25)<<"Pojedinacna cijena(kn)"<<left<<setw(20)<<"Kolicina"<<left<<setw(10)<<"Ukupni iznos(kn)"<<endl<<endl;
	
	for(int i=0; i<naziv.size(); i++)
	{
		iznos=kolicina[i]*pojCijena[i];
		suma.push_back(iznos);
	    
	    cout<<" "<<left<<setw(15)<< naziv[i]<<left<<setw(25)<< pojCijena[i]<<left<<setw(20)<< kolicina[i]<<left<<setw(10)<<suma[i]<<endl;
	    cout<<"------------------------------------------------------------------------"<<endl;
    }
    
    for(int i=0; i<naziv.size(); i++)
	{
		ukupno += suma[i];		
	}
	
	cout<<"------------------------------------------------------------------------"<<endl<<endl;
	cout<<left<<setw(15)<<" PDV"<<left<<setw(25)<<"Neto(kn)"<<left<<setw(25)<<"Iznos PDV-a(kn)"<<left<<setw(10)<<"Bruto(kn)"<<endl<<endl;
	cout<<left<<setw(15)<<" 25%"<<left<<setw(25)<<(ukupno/1.25)<<left<<setw(25)<<(ukupno-(ukupno/1.25))<<left<<setw(10)<<(ukupno)<<endl<<endl<<endl;
	
	cout<<"Cijena bez poreza: "<< (ukupno/1.25)<<" kn"<<endl<<endl;
	cout<<"                              ZA PLATITI: "<< (ukupno)<<" kn"<<endl<<endl<<endl;
	
	cout<<"                    Hvala na koristenju DUMP Shopping liste! :D"<<endl<<endl;

system("pause");		
}
