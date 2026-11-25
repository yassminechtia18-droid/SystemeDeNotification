#pragma once
#include<iostream>
#include<string>
using namespace std;
class Notification
{
protected:
	string destinataire;
private:
	string message;
public:
	Notification(string, string);
	virtual void afficher() const;
	virtual void envoyer()const = 0;
	virtual ~Notification();
};

