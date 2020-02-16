PROBLEME sur 2 sketch PROBLEME_Appel_Tableau.ino PROBLEME_Tableau_corrige.ino

      else if((aleatoire >= typeSeuil[3])&&((typeSeuil[3] < typeSeuil[0])||(typeSeuil[0] < typeSeuil[1]))){   // S3
                 S3 = true;        
     Tombe dans S3 si SH apres se else if, cela fonctionne vraiment de bas en haut dans le programme et pourrait servir
     
     
     Correction non presente sur les 2 sketch mentionner sauf sur PROBLEME_plonge_dans_S3_16_Fev_2020.ino
     => else if((aleatoire >= typeSeuil[3])&&(((typeSeuil[3] < typeSeuil[0])&&(aleatoire < typeSeuil[0]))||(typeSeuil[0] < typeSeuil[1]))){
     
     ===================================== 16 Fev 2020 =====================================================================
     J'ai également effectué un sketch calibrage et etalonnage 3 capteur et 8 seuils (sous et sur l'activité des capteur).
     
     Mais j'ai le projet de condamner les capteur en cas de panne, même avoir la possibilité au montage de la borne de rentrer dans le programme pour mettre à "false" les capteurs non monter.
     
     Je reflechi sur nbrGeo et nbrSeuil, dans un 1er typeSeuil[] pour être pratique serait typeSeuil[nbrSeuil] (perso, S3, S2, S1);
     pour nbrGeo j'ai un tableau heureusement en const int, les broche A0 à A2 ne doivent pas être changer, au montage c'est au bon ordre
     mais pour condamner, il faut que je trouve un saut....
     J'ai 3 sketch, 3 à 6 fonction à réunir concernant Les capteurs, disons à lié.
      -Detection des capteur mis en servie
      -calibrage (activité capteur mini-maxi)
      -auto-étalonnage (calage des seuils par rapport au calibrage)
      -Mise en service des seuils declancheur (pas encore fait, il me faut trouver une strategie de liaison)
      -retour en cour de fonctionnement sur differante fonction. ré-étalonnage,condamnation.... (en cour d'analyse)
      ??? diagnostique pre-alerte, c'est qu'il y a un petit calcul de la borne avant envoi vers recepteur principale, le recepteur principale n'a pas de capteur, sont role sera soulager mais devra calculer, stocker sur microSD et recuperer, l'auto-hierarchie de la communication  ne sera pas vraiment lier avec ci-dessus.
      
      La communication sera très intense sur un cour moment pour la coordinnation, controle d'état... en suite le but d'un pré-calcul par la borne qui detecte une activité est de limité la communication. En conciderant que sa pollut l'environnement.

