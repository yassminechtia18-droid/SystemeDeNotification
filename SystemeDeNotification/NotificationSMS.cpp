#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string destinataire, string message,  string operateur) :Notification(destinataire, message)

{ 
	this->operateur = operateur;
	


}

void NotificationSMS::afficher() const
{
	cout << "SMS | Numéro " <<Notification::destinataire << "| Opérateur :" << this->operateur;
	Notification::afficher();
}

void NotificationSMS::envoyer() const
{
	NotificationSMS::afficher();
}

NotificationSMS::~NotificationSMS()
{
}
