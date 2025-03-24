#include<iostream>

using namespace std;

class jugador{
    private:
        string nombre;
        int ova;
        int pac;
        int sho;
        int drb;
        int gk;
        int def;
        int phy;
        int pas;

    public:
        //tipo geAtrib();
        string getnombre();
        int getova();
        int getpac();  
        int getsho();
        int getdrb();
        int getgk();
        int getdef();
        int getphy();
        int getpas();

        //void setAtrib(tipo nuevo_atrib);
        void getnombre(string nuevo_nombre);
        void getova(int nuevo_ova);
        void getpac(int nuevo_pac);
        void getsho(int nuevo_sho);
        void getdrb(int nuevo_drb);
        void getgk(int nuevo_gk);
        void getdef(int nuevo_def);
        void getphy(int nuevo_phy);
        void getpas(int nuevo_pas);
};