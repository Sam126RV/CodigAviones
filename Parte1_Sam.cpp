#include <iostream>
#include <fstream>

using namespace std;
string line,;
int ale,brasil,cana,catar,chile,china = 0;
int dina,ecua,ea,españa,eu,indo,japon,mexico = 0;
int singa,tai = 0;
int main(){
    ifstream aviones;
    aviones.open("aviones.txt",ios::out);
    if (aviones.fail()) { 
        cout << "Input file opening failed." << endl;
        exit(1);
    }
    while(!aviones.eof()){
        getline(aviones, line);
            string a = line[0];
            string b = line[1];
            if (a == "D")
            {
                ale = ale + 1;
            }
            if (a == "P" && b == "P")
            {
                brasil = brasil + 1;

            }
            if (a == "C" && b == "F")
            {
                cana = cana + 1;
            }
            if (a == "A" && b == "7")
            {
                catar = catar +1;
            }
            if (a == "C" && b== "C")
            {
                chile = chile +1;
            }
            if (a == "B")
            {
                china = china +1;
            }
            if (a == "O" && b == "Y")
            {
                dina = dina +1;
            }
            if (a == "H" && b == "C")
            {
                ecua = ecua+1;
            }
            if (a == "A" && b== "6")
            {
                ea = ea +1;
            }
            if (a == "E" && b=="C")
            {
                españa = españa +1;
            }
            if (a == "N")
            {
                eu = eu +1;

            }
            if (a == "P" && b=="K")
            {
                indo = indo +1;
            }
            if (a == "J" && b=="A")
            {
                japon = japon +1;
            }
            if (a == "X" && b == "A")
            {
                mexico = mexico +1;
            }
            if (a == "9" && b == "V")
            {
                singa = singa +1;
            }
            if (a == "H" && b == "S")
            {
                tai = tai +1;
            }
            
            
            
        }
}
