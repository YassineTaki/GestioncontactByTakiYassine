#include<stdio.h>
#include<stdlib.h>
int i=0,j=0;
//on utilise structs pour les élément de contact
struct contactt{
char numdtel[50],name[20],firstname[20],admail[50],rs[20],nrs[20];
               };
struct contactt con[1000];
//1000 est le nombre maximum des contacts pouvant être insérés
//==================================================================================//
//==================================================================================//
//fonction permet à l'utilisateur de choisir le processus(ajout,rechercher,...)
///bienvenue:
void bienvenue(){
       printf("\n\t\t\t================BIENVENUE SUR GESTION DES CONTACTS=============== \n");
       printf("\n\t\t\t---------------------Les choix Disponibles-----------------------");
       printf("\n\t\t\t[1] Ajouter un contact ");
       printf("\n\t\t\t[2] Rechercher un contact ");
       printf("\n\t\t\t[3] Modifier un contact ");
       printf("\n\t\t\t[4] Supprimer un contact ");
       printf("\n\t\t\t[5] Afficher tous les contacts ");
       printf("\n\t\t\t[6] Sortir");
       printf("\n\t\t\t\t\t\t\t\t (Cette programme fait par Taki Yassine)");
       printf("\n\n\t\t\tveuillez entrer votre choix: ");}
//==================================================================================//
//==================================================================================//
//fonction permet à l'utilisateur d'ajouter un contact
///ajoute un contact:
void Ajout(){
        system("cls");
        printf("\n\t\t\t===================Ajouter un contact===================");
        printf("\n\t\t\tDonnez Le contact Informations(Pour l'espace, utilisez _ ):");
        printf("\n\t\t\t- Donnez Son Numero de Telephone: ");
//On utilise scanf_s pour ne pas avoir de problèmes avec les chiffres et les lettres
        scanf_s("%s",&con[i].numdtel);
        printf("\t\t\t- Donnez son Nom: ");
        scanf_s("%s",&con[i].name);
        printf("\t\t\t- Donnez son Prenom: ");
        scanf_s("%s",&con[i].firstname);
        printf("\n\t\t\t-------------------------------------------------------------");
        printf("\n\t\t\tSon Nom d'utilisateur sur un reseau social: ");
        printf("\n\t\t\t- Donnez le Nom de Reseau Social(ex:Facebook,Instagram...): ");
        scanf_s("%s",&con[i].rs);
        printf("\t\t\t- Donnez son nom d'utilisateur sur %s: ",con[i].rs);
        scanf_s("%s",&con[i].nrs);
        printf("\n\t\t\t-------------------------------------------------------------");
        printf("\n\t\t\t- Donnez son adresse mail(ex:adress@gmail.com): ");
        scanf_s("%s",&con[i].admail);
        system("cls");
        printf("\n\t\t\tL'operation d'Ajout le contact termine avec succes !");
        printf("\n\t\t\t============================================================================");
        printf("\n\t\t\tNumero de telephone: %s",con[i].numdtel);
        printf("\n\t\t\tNom:%s ",con[i].name);
        printf("\n\t\t\tPrenom:%s ",con[i].firstname);
        printf("\n\t\t\t-------------------------------------------------------------");
        printf("\n\t\t\tReseau social: %s",con[i].rs);
        printf("\n\t\t\tNom d'utilisateur sur %s: %s",con[i].rs,con[i].nrs);
        printf("\n\t\t\t-------------------------------------------------------------");
        printf("\n\t\t\tSon adresse mail: %s",con[i].admail);
        printf("\n\t\t\t============================================================================");
        printf("\n\t\t\t\t\t\t\t\t (Cette programme fait par Taki Yassine)");
        printf("\n\n\t\t\tAppuyez sur n'importe quelle touche pour continuer"); i++;
        getch();
        system("cls");
        main();
                                                         ///Cette programme fait par Taki Yassine
               }
//==================================================================================//
//==================================================================================//
//fonction permet à l'utilisateur d'afficher tout les contact avec ses information
///aficher tout les contact:
void Afichertout(){
        system("cls");
        printf("\n\t\t\t===================tous les contacts stockes===================");
        for(j=0;j<i;j++){
        printf("\n\t\t\tLe contact : %d",j+1);
        printf("\n\t\t\t-----------------------------------------------------------------------");
        printf("\n\t\t\tNumero de telephone: %s",con[j].numdtel);
        printf("\n\t\t\tNom:%s ",con[j].name);
        printf("\n\t\t\tPrenom:%s ",con[j].firstname);
        printf("\n\t\t\tReseau social: %s",con[j].rs);
        printf("\n\t\t\tNom d'utilisateur sur %s: %s",con[j].rs,con[j].nrs);
        printf("\n\t\t\tSon adresse mail: %s",con[j].admail);
        printf("\n\t\t\t-----------------------------------------------------------------------");}
        printf("\n\t\t\tAppuyez sur n'importe quelle touche pour continuer");
        getch();
        system("cls");
        main();
                                                         ///Cette programme fait par Taki Yassine
        }
//==================================================================================//
//==================================================================================//
//fonction permet à l'utilisateur cherche un contact
///Recherche:
void Recherche(){
char information[100];
system("cls");
        printf("\n\t\t=========Rechercher un contact en utilisant l'un de ses informations================");
        printf("\n\t\tDonnez un information de contact(Nom,Prenom,mail,Nom sur Reseau social)");
        printf("\n\t\t  ");
        scanf_s("%s",&information);
        for(j=0;j<i;j++){
        if(strcmp(information, con[j].numdtel)==0
         ||strcmp(information, con[j].name)==0
         ||strcmp(information, con[j].firstname)==0
         ||strcmp(information, con[j].nrs)==0
         ||strcmp(information, con[j].admail)==0){break;}}
         if(j==i){
        printf("\n\t\t-----------------------------------------------------------------------------");
        printf("\n\t\t\t\t\tle contact est inconnue");
        printf("\n\t\t-----------------------------------------------------------------------------");}else{system("cls");
        printf("\n\t\t\t=========Les informations de contact que vous avez recherchees==========");
        printf("\n\t\t\t-----------------------------------------------------------------------");
        printf("\n\t\t\tNumero de telephone: %s",con[j].numdtel);
        printf("\n\t\t\tNom:%s ",con[j].name);
        printf("\n\t\t\tPrenom:%s ",con[j].firstname);
        printf("\n\t\t\tReseau social: %s",con[j].rs);
        printf("\n\t\t\tNom d'utilisateur sur %s: %s",con[j].rs,con[j].nrs);
        printf("\n\t\t\tSon adresse mail: %s",con[j].admail);
        printf("\n\t\t\t-----------------------------------------------------------------------");}
        printf("\n\t\t\t\t\t\t\t\t (Cette programme fait par Taki Yassine)");
        printf("\n\n\t\t\tAppuyez sur n'importe quelle touche pour continuer");
        getch();
        system("cls");
        main();
                                                         ///Cette programme fait par Taki Yassine
        }
//==================================================================================//
//==================================================================================//
//fonction permet à l'utilisateur pour arrêter le program
///Sortir:
void Sortir(){
    int sure;
        system("cls");
        printf("\n\t\t\t-------------------------------------------------------------");
        printf("\n\t\t\t\t\tEtes-vous sur de vouloir sortir ?\n");
        printf("\n\t\t\t\t\t[1]Oui  \t\t[2]Non\n");
        printf("\n\t\t\t\t\t\t");
        scanf("%d",&sure);
        switch(sure){
        case 1:system("cls");break;
        case 2:system("cls");main();
}                                                         ///Cette programme fait par Taki Yassine
}
//==================================================================================//
//==================================================================================//
//fonction permet à l'utilisateur Modifier un contact
///Modifier:
void Modifier(){
char information[20];
int ijaba;
system("cls");
        printf("\n\t\t==========Modifier les informations d'un contact=======================");
        printf("\n\t\tDonnez un information de contact(Numero de telephone,Nom,Prenom,mail,Nom sur Reseau social)");
        printf("\n\t\t");
        scanf_s("%s",&information);
        for(j=0;j<i;j++){
        if(strcmp(information, con[j].numdtel)==0
         ||strcmp(information, con[j].name)==0
         ||strcmp(information, con[j].firstname)==0
         ||strcmp(information, con[j].nrs)==0
         ||strcmp(information, con[j].admail)==0){break;}}
        if(j==i) {
        printf("\n\t\t-----------------------------------------------------------------------------");
        printf("\n\t\t\t\t\tle contact est inconnue");
        printf("\n\t\t-----------------------------------------------------------------------------");}else {system( "cls" );
        printf("\n\t\t\t===========Les informations de contact que vous voulez modifier============");
        printf("\n\t\t\t-----------------------------------------------------------------------");
        printf("\n\t\t\tNumero de telephone: %s",con[j].numdtel);
        printf("\n\t\t\tNom:%s ",con[j].name);
        printf("\n\t\t\tPrenom:%s ",con[j].firstname);
        printf("\n\t\t\tReseau social: %s",con[j].rs);
        printf("\n\t\t\tNom d'utilisateur sur %s: %s",con[j].rs,con[j].nrs);
        printf("\n\t\t\tSon adresse mail: %s",con[j].admail);
        printf("\n\t\t\t-----------------------------------------------------------------------");
        printf("\n\t\t\test-il cet contact que vous voulez modifié?");
        printf("\n\t\t\t[1]Oui  \t\t[2]Non\n");
        printf("\n\t\t\t\t");
        scanf("%d",&ijaba);
        if(ijaba==1){
        system("cls");
        printf("\n\t\t\t===================modifiers un contact===================");
        printf("\n\t\t\tDonnez Le contact Informations(Pour l'espace, utilisez _ ):");
        printf("\n\t\t\t- Donnez Son Numero de Telephone: ");
        scanf_s("%s",&con[j].numdtel);
        printf("\t\t\t- Donnez son Nom: ");
        scanf_s("%s",&con[j].name);
        printf("\t\t\t- Donnez son Prenom: ");
        scanf_s("%s",&con[j].firstname);
        printf("\t\t\tSon Nom d'utilisateur sur un reseau social: ");
        printf("\n\t\t\t- Donnez le Nom de Reseau Social(ex:Facebook,Instagram...): ");
        scanf_s("%s",&con[j].rs);
        printf("\t\t\t- Donnez son nom d'utilisateur sur %s: ",con[j].rs);
        scanf_s("%s",&con[j].nrs);
        printf("\t\t\t- Donnez son adresse mail(ex:adress@gmail.com): ");
        scanf_s("%s",&con[j].admail);
        system("cls");
        printf("\n\t\t\tL'operation modifier le contact termine avec succes !!");
        printf("\n\t\t\t============================================================================");
        printf("\n\t\t\tNumero de telephone: %s",con[j].numdtel);
        printf("\n\t\t\tNom:%s ",con[j].name);
        printf("\n\t\t\tPrenom:%s ",con[j].firstname);
        printf("\n\t\t\tReseau social: %s",con[j].rs);
        printf("\n\t\t\tNom d'utilisateur sur %s: %s",con[j].rs,con[j].nrs);
        printf("\n\t\t\tSon adresse mail: %s",con[j].admail);
        printf("\n\t\t\t============================================================================");
        printf("\n\t\t\t\t\t\t\t\t (Cette programme fait par Taki Yassine)");
        }else if(ijaba==2){
        system("cls");main();}else{system( "cls" );}}
        printf("\n\t\t\tAppuyez sur n'importe quelle touche pour continuer");
        getch();
        system("cls");
        main();
                                                         ///Cette programme fait par Taki Yassine
        }
//==================================================================================//
//==================================================================================//
//fonction permet à l'utilisateur supprimer un contact
///Supprimer
void Supprimer(){
char information[20];
int ijaba,R;
system("cls");
        printf("\n\t\t=========================Supprimer un contact=======================");
        printf("\n\t\tDonnez un information de le contact(Nom,Prenom,mail,Nom sur Reseau social...)");
        printf("\n\t\t");
        scanf_s("%s",&information);
        for(j=0;j<i;j++){
        if(strcmp(information, con[j].numdtel)==0
         ||strcmp(information, con[j].name)==0
         ||strcmp(information, con[j].firstname)==0
         ||strcmp(information, con[j].nrs)==0
         ||strcmp(information, con[j].admail)==0){break;}}
        if(j==i){
        printf("\n\t\t-----------------------------------------------------------------------------");
        printf("\n\t\t\t\t\tle contact est inconnue");
        printf("\n\t\t-----------------------------------------------------------------------------");}else {system( "cls" );
        printf("\n\t\t\t===========Les informations de contact que vous voulez Suprimer============");
        printf("\n\t\t\t-----------------------------------------------------------------------");
        printf("\n\t\t\tNumero de telephone: %s",con[j].numdtel);
        printf("\n\t\t\tNom:%s ",con[j].name);
        printf("\n\t\t\tPrenom:%s ",con[j].firstname);
        printf("\n\t\t\tReseau social: %s",con[j].rs);
        printf("\n\t\t\tNom d'utilisateur sur %s: %s",con[j].rs,con[j].nrs);
        printf("\n\t\t\tSon adresse mail: %s",con[j].admail);
        printf("\n\t\t\t-----------------------------------------------------------------------");
        printf("\n\t\t\tEst-il cet contact que vous voulez  Suprimes ?");
        printf("\n\t\t\t[1]Oui  \t\t[2]Non\n");
        printf("\n\t\t\t\t");
        scanf("%d",&ijaba);
        if (ijaba==1){for(R=j;R<i;R++){
        strcpy(con[R].numdtel, con[R+1].numdtel);
        strcpy(con[R].name, con[R+1].name);
        strcpy(con[R].firstname, con[R+1].firstname);
        strcpy(con[R].rs, con[R+1].rs);
        strcpy(con[R].nrs, con[R+1].nrs);
        strcpy(con[R].admail, con[R+1].admail);}
        i--;}else if(ijaba==2){
        system("cls");main();}else{system( "cls" );}}
        printf("\n\t\t\t\tAppuyez sur n'importe quelle touche pour continuer");
        getch();
        system("cls");
        main();
                                                        ///Cette programme fait par Taki Yassine
                                                         }
int main()
{
    int choix;
    bienvenue();
    scanf("%d",&choix);
    switch(choix){
    case 1: Ajout();break;
    case 2: Recherche();break;
    case 3: Modifier();break;
    case 4: Supprimer();break;
    case 5: Afichertout();break;
    case 6: Sortir();break;}

                                                         ///Cette programme fait par Taki Yassine
                                                         }







