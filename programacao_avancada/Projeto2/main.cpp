#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main(int argc, char *argv[])
{
    Screen t(0,0);
    ifstream fin;
    ofstream fout;
    string s;

    list <FiguraGeometrica *> figuras;

    fin.open("/home/diego/Estudos/programacao_avancada/Projeto2/dimensoes.txt");
    fout.open("/home/diego/Estudos/programacao_avancada/Projeto2/tela.txt");

    if(!fin.is_open() || !fout.is_open()){
        cout << "Erro no arquivo de leitura ou saída";
    }

    while(fin.good()){
        getline(fin, s);
        if(fin.good()){
            string cmd;
            stringstream sstream(s);
            sstream >> cmd;
            if(cmd.compare("dim")==0){
                int x,y;
                sstream >> x >> y;
                t = Screen(x,y);
            }
            if(cmd.compare("brush")==0){
                char brush;
                sstream >> brush;
                t.setBrush(brush);
                cout << cmd <<endl;
            }
            if(cmd.compare("reta")==0){
                float x0, y0, x1, y1;
                sstream >> x0 >> y0 >> x1 >> y1;
                figuras.push_back(new Reta(x0, y0, x1, y1));
            }
            if(cmd.compare("retangulo")==0){
                float x0, y0, altura, largura;
                bool fillmode;
                sstream >> x0 >> y0 >> altura >> largura >> fillmode;
                figuras.push_back(new Retangulo(x0, y0, altura, largura, fillmode));
            }
            if(cmd.compare("circulo")==0){
                int x0, y0, r;
                bool fillmode;
                sstream >> x0 >> y0>> r >> fillmode;
                figuras.push_back(new Circulo(x0, y0, r, fillmode));
            }
            cout << cmd << endl;
        }

    }

    for(auto it:figuras){
        it->draw(t);
    }

    cout << t;
    fout << t;

    return 0;
}
