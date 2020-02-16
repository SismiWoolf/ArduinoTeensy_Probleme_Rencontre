PROBLEME sur 2 sketch PROBLEME_Appel_Tableau.ino PROBLEME_Tableau_corrige.ino

      else if((aleatoire >= typeSeuil[3])&&((typeSeuil[3] < typeSeuil[0])||(typeSeuil[0] < typeSeuil[1]))){   // S3
                 S3 = true;        
     Tombe dans S3 si SH apres se else if, cela fonctionne vraiment de bas en haut dans le programme et pourrait servir
     
     
     Correction non presente sur les 2 sketch mentionner sauf sur PROBLEME_plonge_dans_S3_16_Fev_2020.ino
     => else if((aleatoire >= typeSeuil[3])&&(((typeSeuil[3] < typeSeuil[0])&&(aleatoire < typeSeuil[0]))||(typeSeuil[0] < typeSeuil[1]))){ 
     
     
     
     
     
     
     
     
     
     
     ==========================================================================================================================================
     J'ai également effectué un sketch calibrage et etalonnage 3 capteur et 8 seuils (sous et sur l'activité des capteur).
     
     Mais j'ai le projet de condamner les capteur en cas de panne, même avoir la possibilité au montage de la borne de rentrer dans le programme pour mettre à "false" les capteurs non monter.

