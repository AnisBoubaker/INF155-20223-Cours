/*
Cr�er les structures de donn�es suivantes � l'aide d'enregistrements (struct)
- Un compte bancaire est identifi� par un num�ro (alphanum�rique). Il a un
  solde courant ainsi qu'une limite de d�couvert. De plus, chaque compte
  a un taux d'int�r�ts permettant le calcul des int�r�ts annuellement.
- Le client d'une banque est identifi� par son num�ro d'assurance sociale.
  Pour chaque client, nous devons connaitre son nom et pr�nom ainsi que sa
  date de naissance.
- Les clients ont �galement des comptes dans la banque. Chaque client peut
  d�tenir plusieurs comptes bancaires.
*/

#define TAILLE_MAX_NUM_COMPTE 20

typedef struct compte {
	char numero[TAILLE_MAX_NUM_COMPTE]; 
	double solde_courant; 
	double limite_decouvert; 
	double taux_interet; 
} t_compte;

/*
- Le client d'une banque est identifi� par son num�ro d'assurance sociale.
  Pour chaque client, nous devons connaitre son nom et pr�nom ainsi que sa
  date de naissance.
- Les clients ont �galement des comptes dans la banque. Chaque client peut
  d�tenir plusieurs comptes bancaires.
*/
#define TAILLE_MAX_ASS_SOCIALE 15
#define TAILLE_MAX_NOM 50

typedef struct date {
	int jour; 
	int mois;
	int annee;
} t_date;

typedef struct client {
	char num_ass_sociale[15]; //567 787 909
	char nom[TAILLE_MAX_NOM];
	char prenom[TAILLE_MAX_NOM];
	t_date date_naissace;
	//Date de naissance, options: 
	//Option1: Tableau d'entiers
	//int date_naissance[3];
	//Option2: 3 champs: jour, mois et ann�e
	//int jour_naissance;
	//int mois_naissance; 
	//int annee_naissance; 
};