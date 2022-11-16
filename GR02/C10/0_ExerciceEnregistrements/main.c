/*
Créer les structures de données suivantes à l'aide d'enregistrements (struct)
- Un compte bancaire est identifié par un numéro (alphanumérique). Il a un
  solde courant ainsi qu'une limite de découvert. De plus, chaque compte
  a un taux d'intérêts permettant le calcul des intérêts annuellement.
- Le client d'une banque est identifié par son numéro d'assurance sociale.
  Pour chaque client, nous devons connaitre son nom et prénom ainsi que sa
  date de naissance.
- Les clients ont également des comptes dans la banque. Chaque client peut
  détenir plusieurs comptes bancaires.
*/

#define TAILLE_MAX_NUM_COMPTE 20

typedef struct compte {
	char numero[TAILLE_MAX_NUM_COMPTE]; 
	double solde_courant; 
	double limite_decouvert; 
	double taux_interet; 
} t_compte;

/*
- Le client d'une banque est identifié par son numéro d'assurance sociale.
  Pour chaque client, nous devons connaitre son nom et prénom ainsi que sa
  date de naissance.
- Les clients ont également des comptes dans la banque. Chaque client peut
  détenir plusieurs comptes bancaires.
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
	//Option2: 3 champs: jour, mois et année
	//int jour_naissance;
	//int mois_naissance; 
	//int annee_naissance; 
};