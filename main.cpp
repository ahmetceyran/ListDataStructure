#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main();
void VeriAl();
double notHesapla();
void goster();
void sil();
int i;
int j;


struct Ogrenci{
    string isim,harfnotu;
    int ogrencino,*testnotlari;
    double ortalama;
};

Ogrenci sayi[100];


int main()
{

        VeriAl();
        notHesapla();
        goster();
        sil();

    return 0;
}

void VeriAl()
{

    cout<<"Ogrenci sayisini giriniz:";
    cin>>i;
    cout<<"Test sayisini giriniz:";
    cin>>j;

    for(int y=0;y<i;y++)
    {
    cout<<"\n\n";
    cout<< y+1 <<".Ogrencinin ismini giriniz:";
    cin>>sayi[y].isim;
    cout<< y+1 <<".Ogrencinin ogrenci numarasini giriniz:";
    cin>>sayi[y].ogrencino;

    sayi[y].testnotlari = new int[j];
    for(int a=0;a<j;a++)
    {
        cout<< a+1 <<".Test notu:";
        cin>>sayi[y].testnotlari[a];
    }
    }

}

double notHesapla()
{
    for(int z=0;z<i;z++)
    {
    int toplamNot=0;
    for(int b=0;b<j;b++)
    {
        toplamNot = toplamNot +  sayi[z].testnotlari[b];
    }

    sayi[z].ortalama = toplamNot*1.0/j;

    if(sayi[z].ortalama>=85 && sayi[z].ortalama<=100)
        sayi[z].harfnotu ='A';
    else if(sayi[z].ortalama>=75 && sayi[z].ortalama<=84)
        sayi[z].harfnotu ='B';
    else if(sayi[z].ortalama>=65 && sayi[z].ortalama<=74)
        sayi[z].harfnotu ='C';
    else if(sayi[z].ortalama>=50 && sayi[z].ortalama<=64)
        sayi[z].harfnotu ='D';
    else if(sayi[z].ortalama>=0 && sayi[z].ortalama<=49)
        sayi[z].harfnotu ='F';

    }
}

void goster()
{
    cout<<"\n\tOgrenci Bilgileri";
    for(int c=0;c<i;c++)
    {
        cout<<"\n"<<c+1<<".Ogrencinin adi:"<<sayi[c].isim<<"\n"<<c+1<<".Ogrencinin numarasi:"<<sayi[c].ogrencino<<"\n";
        for(int x=0;x<j;x++)
        {
            cout<<c+1<<".Ogrencinin "<<x+1<<".test notu:"<<sayi[c].testnotlari[x]<<"\n";
        }
        cout<<c+1<<".Ogrencinin test notu ortalamasi:"<<sayi[c].ortalama<<"\t"<<c+1<<".Ogrencinin harf notu:"<<sayi[c].harfnotu<<"\n";
    }
}

void sil()
{
    for(int z=0;z<i;z++)
    {
        delete[] sayi[z].testnotlari;
    }

}
