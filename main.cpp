#include<iostream>
using namespace std;

class studikasus
{
private:
    char nama[30],matkul[30];
    int tgs, uts, uas, niltgs, niluts, niluas, totnil ;
public: 
    void input();
    void proses();
    void output();
};

void studikasus::input(){
  cout<<"PROGRAM MENGHITUNG NILAI AKHIR "<<endl<<endl;
  cout<<"Nama Mata Kuliah : "; cin>>matkul;
  cout<<"Masukkan Nama Siswa : "; cin>>nama;
  cout<<"Masukkan Nilai Tugas : "; cin>>tgs;
  cout<<"Masukkan Nilai uts : "; cin>>uts;
  cout<<"Masukkan Nilai uas : "; cin>>uas;
}

void studikasus::proses()
{
    niltgs = tgs*20/100;
    niluts = uts*35/100;
    niluas = uas*45/100;
    totnil =  niltgs+niluts+niluas;
}
void studikasus::output()
{
    cout <<"\n========================================" << endl;
    cout<<"            Nilai Akhir Siswa"<<endl;
    cout <<"========================================" << endl;
    cout<<"Mata Kuliah : "<<matkul<<endl;
    cout<<"Nama : "<<nama <<endl;
    cout<<"Daftar Nilai yang didapatkan :"<<endl;
    cout<<"1. Tugas: "<<tgs<<endl;
    cout<<"2. UTS: "<<uts<<endl;
    cout<<"3. UAS: "<<uas<<endl;
    cout<<"Nilai tugas 20% = "<<niltgs<<endl;
    cout<<"Nilai UTS 35% = "<<niluts<<endl;
    cout<<"Nilai UAS 45% = "<<niluas<<endl;
    cout<<endl;
    cout<<" Jumlah nilai keseluruhan : "  <<totnil<<endl<<endl;
}

int main()
{
    studikasus x; 
    x.input(); 
    x.proses();
    x.output();
}