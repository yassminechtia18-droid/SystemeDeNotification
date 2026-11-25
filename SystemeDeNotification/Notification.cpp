#include "Notification.h"

Notification::Notification(string destinataire, string message)
{
	this->message = message;
	this->destinataire = destinataire;
}

void Notification::afficher() const
{ 
	cout <<  " MESSAGE/"<< this->message << endl;
	
}

Notification::~Notification()
{
}
