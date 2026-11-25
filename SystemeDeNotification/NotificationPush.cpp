#include "NotificationPush.h"

NotificationPush::NotificationPush(string destinataire, string message, string application) :Notification(destinataire, message)
{
	this->application = application;
}

void NotificationPush::afficher() const
{    
	cout << "PUSH | Utilisateur : " << Notification::destinataire;
	cout << " APPLICATION" << this->application;
	Notification::afficher();

}

void NotificationPush::envoyer() const
{
	NotificationPush::afficher();
}

NotificationPush::~NotificationPush()
{
}
