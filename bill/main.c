// a bill

#include <stdio.h>

int main(){
    
    int anzahlArtikel[5];
    double anzahlPreis[5];
    int postenRechnung;
    int i;
    double preisGesamt[3];
    double summeRechnung;
    
    
    
    do{
    printf("Rechnungsposten (min.1,max.5):");
    scanf("%i",&postenRechnung);
        
    }while(postenRechnung <1 || postenRechnung >5);
    
    
    for(i=0;i<3;i++){
        
        printf("Artikel: %i,Anzahl:",i+1);
        scanf("%i",&anzahlArtikel[i]);
        printf("Artikel: %i Preis:",i+1);
        scanf("%lf",&anzahlPreis[i]);
        }
    
    

    
    
    printf("Posten   Anzahl   Preis einzeln   Preis gesamt \n");
    
    for(i=0;i<3;i++){
        
        preisGesamt[i] = anzahlArtikel[i] * anzahlPreis[i];
        printf("%i %10.2i %10.2f %15.2f \n",i+1,anzahlArtikel[i],anzahlPreis[i],preisGesamt[i]);
    }
    
    
    summeRechnung = preisGesamt[0]+preisGesamt[1]+preisGesamt[2];
    
    printf("Summe der Rechnung %5.2f Euro \n",summeRechnung);
    
    return 0;
}


