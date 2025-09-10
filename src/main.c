#include <stdio.h>
unsigned short motorAntal; //antal motorer
float packageWeight; // totale vægt af pakker
float motorKapacitet = 5.6; //hvor meget vægt en motor kan bærer
int main(){
printf("Hvor mange motorer baerer pakkerne?\n"); // spørger brugen hvor mange motorer der er tilstede
scanf("%hu", &motorAntal); // læser brugerens input for motororer
printf("Hvor meget vejer pakkerne?\n"); // spørger brugeren om vægten af pakkerne
scanf("%f", &packageWeight); // læser brugerens input for vægt
float kanvi = (motorAntal/packageWeight)*motorKapacitet; // beregning for om motorerne kan bærer vægten
if (kanvi >=1) { 
printf("det kan vi godt"); // hvis beregning er >=1 kan vægten bæres
}
else {
printf("det kan vi ikke"); // hvis beregning er <1 kan vægten ikke bæres
} 
}