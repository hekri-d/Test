#include<iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

vector<double> shemsi;

ifstream ifStrimi;
ifStrimi.open("/home/ihaaaaa/Desktop/tabela2.txt");

ofstream ofStrimi;
ofStrimi.open("/home/ihaaaaa/Desktop/tabela2-matrice.txt");

double a = 0;

int insideWhile = 0;

while(ifStrimi >> a){

	shemsi.push_back(a);
	insideWhile ++;

}

int numri = 0;


for ( vector<double>::iterator iteratori = shemsi.begin(); iteratori != shemsi.end(); iteratori++ ){

	//cout<<"  "<<*iteratori;
	numri += 1;
}


//	for (double i : shemsi){

//		cout<<i<<endl;
//  } 

double tabela[35][10];

for (unsigned i = 0; i<shemsi.size(); i++){

	int j = 0;
	

	if(i >2 && (i%10) == 0) { j++; }
	
	tabela[i][j] = shemsi[i];

}



double sum = 0;

for (unsigned i = 0; i<shemsi.size(); i++){

	if(i >2 && (i % 10) == 0) { 	ofStrimi<<shemsi[i];ofStrimi<<"}"<<"\n"<<"{"; }

	else {	ofStrimi<<shemsi[i]<<", "; }

}

cout<<"Shuma eshte: "<<sum<<endl;



cout<<"\n Kwemi "<<numri<<" te dhena"<<endl;


for (int i =0; i<10; i++){

	for (int j = 0; j<35; j++){cout<<tabela[i][j]<<endl; }


}











return 0;
}
