#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string message, string destinataire, string objet):Notification(destinataire,message)
{ 
	this->objet = objet;
}

void NotificationEmail::afficher() const
{  
	cout << "EMAIL/" <<Notification::destinataire<<"@gmail.com";
	cout << "/ Objet:" << this->objet;
	Notification::afficher();
	

}

void NotificationEmail::envoyer() const
{
	NotificationEmail::afficher();
}

NotificationEmail::~NotificationEmail()
{
}
