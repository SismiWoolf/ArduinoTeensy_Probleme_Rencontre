
int aleatoire;
int typeSeuil[4]{15,3,8,12};
bool SB = false;
bool SH = false;
bool S1 = false;
bool S2 = false;
bool S3 = false;

void setup() {
Serial.begin(9600);
Serial.println("Simulation depassement de seuil declancheur 10eme ");
delay(500);
}

void loop() {
  delay(2700);
 aleatoire = random(20);
 Seuil();
 // Affiche();
Serial.print(" Le chiffre est     => ");
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
Serial.print(" La valeur de SB ou SH typeSeuil 0    => ");
Serial.println(typeSeuil[0]);
Serial.println(" =================================  ");
delay(30);}

void Seuil(){
Serial.println(" Entre dans Seuil ");


      if ((aleatoire >= typeSeuil[0])&&(aleatoire < typeSeuil[1])){
                 SB = true;
                 SH = false;
                S1 = false;
                S2 = false;
                S3 = false;
                 typeSeuil[0] = 18;
                 Serial.println(" TypeSeuil 0, est mis à 18");
         }
      else if ((aleatoire >= typeSeuil[1])&&(aleatoire < typeSeuil[2])){
                 S1 = true; 
                 SH = false;
                SB = false;
                S2 = false;
                S3 = false;   
         }
      else if ((aleatoire >= typeSeuil[2])&&(aleatoire < typeSeuil[3])){
                 S2 = true;  
                 SH = false;
                SB = false;
                S1 = false;
                S3 = false;     
         }
      else if ((aleatoire >= typeSeuil[3])&&(((typeSeuil[3] < typeSeuil[0])&&(aleatoire < typeSeuil[0]))||(typeSeuil[0] < typeSeuil[1]))){

        //                                    S3(val12) refuse d'être inferieur à typeSeuil[0] de valeur 15
        //                                    aleatoire < typeSeuil[0]
                 S3 = true;
                 SH = false;
                SB = false;
                S1 = false;
                S2 = false;
                
         }
       else if ((aleatoire >= typeSeuil[0])&&(aleatoire > typeSeuil[3])){
                 SH = true;
                SB = false;
                S1 = false;
                S2 = false;
                S3 = false;
                typeSeuil[0] = 2;
                 Serial.println("   TypeSeuil 0, est mis a 2");
                 delay(1);
      }else{ 
  Serial.println("  AUTRE CONDITION  ");
                SH = false;
                SB = false;
                S1 = false;
                S2 = false;
                S3 = false;
              } delay(1);
}
