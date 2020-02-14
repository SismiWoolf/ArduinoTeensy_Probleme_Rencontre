/*    14_Fev_2020    6eme
 * ***************  RECHERCHE PROBLEME INDEX TABLEAU deroulement
 */
int aleatoire;
unsigned long duree = 0ul;
int typeSeuil[] {15, 3, 8, 12};
bool SB = false;
bool SH = false;
bool S1 = false;
bool S2 = false;
bool S3 = false;

void setup() {
Serial.begin(9600);
while(!Serial);
Serial.println("Simulation depassement de seuil declancheur 6eme ");
delay(500);
}

void loop() {
  delay(2000);
 aleatoire = random(20);
 duree = millis();
 Seuil();
   duree = millis() - duree;
 // Affiche();
 Serial.print(" Le chiffre est     ==> ");
Serial.println(aleatoire);
Serial.println("SB  S1  S2  S3  SH");
Serial.println(" 2  3   8   12  18");
Serial.print(SB);
Serial.print("   ");
Serial.print(S1);
Serial.print("   ");
Serial.print(S2);
Serial.print("   ");
Serial.print(S3);
Serial.print("   ");
Serial.println(SH);
Serial.println("   ");
Serial.print("Duree est à =>  ");
Serial.println(duree);
delay(30);}

void Seuil(){
Serial.println(" Entre dans Seuil ");


      if((aleatoire >= typeSeuil[0])&&(aleatoire >= typeSeuil[3])){  // mise en marche à 15 (typeSeuil[0] est à 18) ne devrait pas entré dans la condition.
                 SH = true;
                 SB = false;
                 typeSeuil[0] = 2;
                 Serial.println(" ========================  TypeSeuil 0, est mis à 2");
                 return;
         }
      else if((aleatoire >= typeSeuil[0])&&(aleatoire <= typeSeuil[1])){
                 SB = true;
                 SH = false;
                 typeSeuil[0] = 18;
                 Serial.println(" ========================  TypeSeuil 0, est mis à 18");
                 return;
         }
      else if((aleatoire >= typeSeuil[1])&&(aleatoire < typeSeuil[2])){
                 S1 = true;
                 return;
         }
      else if ((aleatoire >= typeSeuil[2])&&(aleatoire < typeSeuil[3])){
                 S2 = true;
                 return;
         }
      else if((aleatoire >= typeSeuil[3])&&((typeSeuil[3] < typeSeuil[0])||(typeSeuil[0] < typeSeuil[1]))){
                 S3 = true;
                 return;
         }else{ Serial.println(" ========  Autre condition  <2  ============= ");
              }
}
