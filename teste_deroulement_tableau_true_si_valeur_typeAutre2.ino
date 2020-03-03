/*
void loop() {
Serial.println(">>>  RAPPEL des valeurs");
   Serial.println("5 Cycles for      1,          2,     3,     4,     5");
Serial.println("String tab[6] = true,  guillemet, false,   ok!,     0");
Serial.println("char tab[6]   = true,        '0', false,   'C',   'D'");
Serial.println("int tab[6]    = true,          0, false,     3,     4");
Serial.println("bool tab[6]   =    1,      false,     0,  true,  true");
Serial.println(">>>  RAPPEL des valeurs");

 */ //           1      2   3  4   5     6     7    8     9    10
 String msg[11]{true, false, 1, 0, "0", "ok!", "1", " ", "\n", "!"};
  char noms[11]{true, false, 1, 0, '0',   'B', '1', ' ', '\n', '!'};
   int int1[11]{true, false, 1, 0,  0,      3,   4,  -1,    1,  1};
 float flo1[11]{true, false, 1, 0,  0,    0.3,-0.5,  -1,  0.1, 0.1};
 bool _bool[11]{true, false, 1, 0,  0,      1,   1,   1,    1,  1};
void setup() {
 Serial.begin(115200);
 delay(1000);
 Serial.println("Exercice sur les tableau sont true avec un contenu autre que bool, et false....");
 Serial.println(" Le 3 Mars 2020");

/*
 Serial.print("");
 Serial.println();
 Serial.print();
 Serial.println();
*/
for (int x = 0; x < 10 ; x++){
  
     Serial.print(" +++ BOUCLE => ");
     int y = x + 1;

Serial.println(y);
Serial.print('\v');
Serial.print('\t');
            
 
 
   Serial.print("msg[]");
      Serial.print('\t');
  Serial.print("noms[]");
     Serial.print('\t');
Serial.print("int1[]");
   Serial.print('\t');
 Serial.print("flo1[x]");
    Serial.print('\t');
 Serial.println("_bool[]");
 

Serial.print('\v');
   Serial.print('\t');
 Serial.print(msg[x]);
 
   Serial.print('\t');
 Serial.print(noms[x]);

     Serial.print('\t');
 Serial.print(int1[x]);
 
    Serial.print('\t');
 Serial.print(flo1[x]);
    Serial.print('\t');
 
 Serial.print(_bool[x]);
    Serial.println('\t');
/*   Serial.print('\t');
       Serial.print('\v');
 Serial.print(y);
 Serial.print('\t');
   Serial.print("msg[] => ");
 Serial.print(msg[x]);
 Serial.print('\t');
  Serial.print("noms[] => ");
 Serial.print(noms[x]);
 Serial.print('\t');
  Serial.print("int1[] => ");
 Serial.print(int1[x]);
 Serial.print('\t');
   Serial.print("flo1[] => ");
 Serial.print(flo1[x]);
 Serial.print('\t');
  Serial.print("_bool[] =>");
 Serial.print(_bool[x]);
 */
 delay(2000);
 
  }
  Serial.flush();
  




 Serial.println("#########   FIN SETUP  ###########");
 delay(1000);
}

void loop() {
Serial.println(">>>  RAPPEL des valeurs");
Serial.print('\t');
   Serial.println("10 Cycles for     1,   2,   3, 4,  5,     6    7    8     9    10");
   Serial.print('\t');
//                               1      2    3  4   5     6     7    8     9    10
 Serial.println("String msg[11]{true, false, 1, 0, '0', 'ok!', '1', ' ', '\ n', '!'");
 Serial.print('\t');
  Serial.println(" Char noms[11]{true, false, 1, 0, '0',   'B', '1', ' ', '\ n', '!'}");
  Serial.print('\t');
   Serial.println("  Int int1[11]{true, false, 1, 0,  0,      3,   4,  -1,    1,  1}");
   Serial.print('\t');
 Serial.println("Float flo1[11]{true, false, 1, 0,  0,    0.3,-0.5,  -1   0.1, 0.1}");
 Serial.print('\t');
Serial.println("Bool _bool[11]{true, false, 1, 0,  0,      1,   1,   1,    1,  1}");
Serial.print('\t');
 Serial.println(">>>  RAPPEL des valeurs");

  Serial.println("1ere SERIE FOR avec comparaison if ... == true ++++++++++++++++++++++++++++++++++++++++++++++++");
for (int x = 0; x < 10 ; x++){
  //Serial.print('\v');
     Serial.print(" +++ BOUCLE => ");
     int y = x + 1;
 Serial.println(y);
   Serial.print('\t');
 if (msg[x] == true){
    Serial.print("msg[] est true => ");
    Serial.println(msg[x]);
 }else{
       Serial.print("msg[]  FAUX => ");
       Serial.println(msg[x]);
 }
 
  Serial.print('\t');
 Serial.print('\v');
 if (noms[x] == true){
  Serial.print("noms[] => ");
 Serial.println(noms[x]);
 }else{
   Serial.print("noms[]  FAUX => ");
 Serial.println(noms[x]);
 }
 
   Serial.print('\t');
   Serial.print('\v');
 if (int1[x] == true){
  Serial.print("int1[] => ");
 Serial.println(int1[x]);
 }else{
   Serial.print("int1[]  FAUX => ");
 Serial.println(int1[x]);
 }
  Serial.print('\t');
  Serial.print('\v');
  if (flo1[x] == true){
  Serial.print("flo1[] => ");
 Serial.println(flo1[x]);
 }else{
   Serial.print("flo1[]  FAUX => ");
 Serial.println(flo1[x]);
 }
   Serial.print('\t');
 if (_bool[x] == true){
   Serial.print("_bool[] est VRAI +++++++++++++++++++  =>  ");
   Serial.println(_bool[x]);
 }else{
   Serial.print("_bool[] est FAUX -------------------  =>  ");
   Serial.println(_bool[x]);
  }
    Serial.print('\t');
 delay(2000);
}

Serial.println("2e SERIE FOR avec comparaison if ... >0 ++++++++++++++++++++++++++++++++++++++++++++++++");
for (int x = 0; x < 10 ; x++){
     Serial.print(" +++ BOUCLE => ");
     int y = x + 1;
     Serial.println(y);
       Serial.print('\t');
 if (msg[x] > 0){
   Serial.print("msg[] est true => ");
 Serial.println(msg[x]);
 }else{
    Serial.print("msg[]  FAUX => ");
 Serial.println(msg[x]);
 }
   Serial.print('\t');
 if (noms[x] > 0){
  Serial.print("noms[] => ");
 Serial.println(noms[x]);
 }else{
   Serial.print("noms[]  FAUX => ");
 Serial.println(noms[x]);
 }
   Serial.print('\t');
 if (int1[x] > 0){
  Serial.print("int1[] => ");
 Serial.println(int1[x]);
 }else{
   Serial.print("int1[]  FAUX => ");
 Serial.println(int1[x]);
 }
   Serial.print('\t');
 if (flo1[x] > 0){
  Serial.print("flo1[] => ");
 Serial.println(flo1[x]);
 }else{
   Serial.print("flo1[]  FAUX => ");
 Serial.println(flo1[x]);
 }
   Serial.print('\t');
 if (_bool[x] > 0){
  Serial.print("_bool[] est VRAI  +++++++++++++++++++  =>  ");
 Serial.println(_bool[x]);
 }else{
   Serial.print("_bool[] est FAUX -------------------  =>  ");
 Serial.println(_bool[x]);
 }
   Serial.print('\t');
 delay(2000);
}


 Serial.println("#########   FIN LOOP  ###########");
Serial.println("!!! si char '0' >0 => char sera VRAI si ASCII 33 a 47, '0' est ASCII 48");
Serial.println("!!! Trouve un truc ? pour que char qui n'accepte pas la comparaison true ou false, caractère non imprimable");
}
