#include <stdio.h>
#include <stdlib.h>

typedef struct
    {
        char Arac_plaka[10];
    }plaka;


     typedef struct
    {
        char Arac_renk[10];
    }renk;


     typedef struct
    {
        char arac_model[10];
    }model;


    typedef struct
    {
        char Giris_saati[10];
    }arac_giris_saati;


    typedef struct
    {
        plaka Araba_plaka;
        renk Araba_renk;
        model Araba_model;
    }arac_genel_ozellik;

    typedef struct
    {
        arac_giris_saati Araba_giris_saati;
        arac_genel_ozellik  Araba_ozellik;
    }arac;

    typedef struct
    {
        arac Araclar[1000];
        int Aracsayisi;
    }Otopark;

    Otopark OdevOtopark = {0};


int main()
{
    arac_ekle();
    arac_ekle();
    arac_ekle();
    arac_ekle();
    arac_ekle();

    arac_listele();
    return 0;
}

void arac_ekle()
{

    //arc aracın genel özelliklerini tutuyor.
    arac Arc;
    //otopark arac dizisini ve sayısını tutuyor

    printf("========ARAC BILGI GIRIS EKRANI========\n\n");

    printf("Aracin plakasini giriniz: ");
    scanf("%s",Arc.Araba_ozellik.Araba_plaka.Arac_plaka);

    printf("Aracin modelini giriniz: ");
    scanf("%s",Arc.Araba_ozellik.Araba_model.arac_model);

    printf("Aracin rengini giriniz: ");
    scanf("%s",Arc.Araba_ozellik.Araba_renk.Arac_renk);

    printf("Aracin giris saatini giriniz: ");
    scanf("%s",Arc.Araba_giris_saati.Giris_saati);

    OdevOtopark.Araclar[OdevOtopark.Aracsayisi] = Arc;

    OdevOtopark.Aracsayisi++;

}

void arac_listele()
{
    printf("========ARAC LISTE EKRANI========\n\n");

    for(int i = 0; i < OdevOtopark.Aracsayisi; i++)
    {
        printf("%d. arac plaka: %s\n%d. arac model: %s\n%d. arac renk: %s\n%d. arac giris saati: %s\n\n\n",i+1,OdevOtopark.Araclar[i].Araba_ozellik.Araba_plaka.Arac_plaka,i+1,OdevOtopark.Araclar[i].Araba_ozellik.Araba_model.arac_model,i+1,OdevOtopark.Araclar[i].Araba_ozellik.Araba_renk.Arac_renk,i+1,OdevOtopark.Araclar[i].Araba_giris_saati.Giris_saati);

    }
}
