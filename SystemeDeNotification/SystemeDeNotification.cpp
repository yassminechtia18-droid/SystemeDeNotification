// SystemeDeNotification.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include"GestionnaireNotifications.h"

using namespace std;

int main()
{
    NotificationEmail e("sara", "Nouvelle connexion detectee", "Securite");

    NotificationSMS s("0612345678", "Votre code est 4582", "Orange");

    NotificationPush p("user_102", "Paiement confirme", "MyBank");

    GestionnaireNotifications g;

    Notification* tab[3];

    tab[0] = &e;
    tab[1] = &s;
    tab[2] = &p;

    for (int i = 0; i < 3; i++)
    {
        tab[i]->afficher();
        tab[i]->envoyer();

        cout << endl;
    }

    return 0;
   

    g.ajouter(&e);
    g.ajouter(&s);
    g.ajouter(&p);

    g.envoyerToutes();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
