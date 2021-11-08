#include <iostream>
#include <fstream>

using namespace std;
string line,;
int ale,brasil,cana,catar,chile,china = 0;
int dina,ecua,ea,españa,eu,indo,japon,mexico = 0;
int singa,tai,cont = 0;
int ale_p,brasil_p,cana_p,catar_p,chile_p,china_p =0;
int dina_p,ecua_p,ea_p,espana_p,eu_p,indo_p,japon_p,mx_p=0;
int singa_p,tai_p=0;
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
              cont=cont+1;
          }
          if (a == "P" && b == "P")
          {
              brasil = brasil + 1;
              cont=cont+1;

          }
          if (a == "C" && b == "F")
          {
              cana = cana + 1;
              cont=cont+1;
          }
          if (a == "A" && b == "7")
          {
              catar = catar +1;
              cont=cont+1;
          }
          if (a == "C" && b== "C")
          {
              chile = chile +1;
              cont=cont+1;
          }
          if (a == "B")
          {
              china = china +1;
              cont=cont+1;
          }
          if (a == "O" && b == "Y")
          {
              dina = dina +1;
              cont=cont+1;
          }
          if (a == "H" && b == "C")
          {
              ecua = ecua+1;
              cont=cont+1;
          }
          if (a == "A" && b== "6")
          {
              ea = ea +1;
              cont=cont+1;
          }
          if (a == "E" && b=="C")
          {
              españa = españa +1;
              cont=cont+1;
          }
          if (a == "N")
          {
              eu = eu +1;
              cont=cont+1;

          }
          if (a == "P" && b=="K")
          {
              indo = indo +1;
              cont=cont+1;
          }
          if (a == "J" && b=="A")
          {
              japon = japon +1;
              cont=cont+1;
          }
          if (a == "X" && b == "A")
          {
              mexico = mexico +1;
              cont=cont+1;
          }
          if (a == "9" && b == "V")
          {
              singa = singa +1;
              cont=cont+1;
          }
          if (a == "H" && b == "S")
          {
              tai = tai +1;
              cont=cont+1;
          }

          ale_p=(ale*100)/cont;
          brasil_p=(brasil*100)/cont;
          cana_p=(cana*100)/cont;
          catar_p=(catar*100)/cont;
          chile_p=(chile*100)/cont;
          china_p=(china*100)/cont;
          dina_p=(dina*100)/cont;
          ecua_p=(ecua*100)/cont;
          ea_p=(ea*100)/cont;
          espana_p=(españa*100)/cont;
          eu_p=(eu*100)/cont;
          indo_p=(indo*100)/cont;
          japon_p=(japon*100)/cont;
          mexico_p=(mexico*100)/cont;
          singa_p=(singa*100)/cont;
          tai_p=(tai*100)/cont;

          if (ale_p_p>=20)
        {
          cout<<"Alemania tiene mayor contacto"<<endl;
        }
        if (brasil_p>=20)
        {
          cout<<"Brasil tiene mayor contacto"<<endl;
        }
           if (cana_p>=20)
        {
          cout<<"Canada tiene mayor contacto"<<endl;
        }
        if (catar_p>=20)
        {
          cout<<"Catar tiene mayor contacto"<<endl;
        }
        if (chile_p>=20)
        {
          cout<<"Chileiene mayor contacto"<<endl;
        }
        if (china_p>=20)
        {
          cout<<"China tiene mayor contacto"<<endl;
        }
        if (dina_p>=20)
        {
          cout<<"Dinamarca tiene mayor contacto"<<endl;
        }
        if (ecua_p>=20)
        {
          cout<<"Ecuador tiene mayor contacto"<<endl;
        }
        if (ea_p>=20)
        {
          cout<<"Emiratos Arabes tiene mayor contacto"<<endl;
        }
        if (indo_p>=20)
        {
          cout<<"Indonesia tiene mayor contacto"<<endl;
        }
        if (espana_p>=20)
        {
          cout<<"España tiene mayor contacto"<<endl;
        }
        if (eu_p>=20)
        {
          cout<<"Estados Unidos tiene mayor contacto"<<endl;
        }
        if (japon_p>=20)
        {
          cout<<"Japon tiene mayor contacto"<<endl;
        }
        if (mexico_p>=20)
        {
          cout<<"Mexico tiene mayor contacto"<<endl;
        }
        if (singa_p>=20)
        {
          cout<<"Singapur tiene mayor contacto"<<endl;
        }
        if (tai_p>=20)
        {
          cout<<"Tailandia tiene mayor contacto"<<endl;
        }


      }
return 0;
}
