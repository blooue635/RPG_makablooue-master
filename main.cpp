#include <iostream>
#include "Personnage.h"
using namespace std;

class Personnage;

int main()
{
Personnage* david=new Personnage("David",guerrier);
Arme* epee_1 =new Arme("Epee Sumerienne",epee,7,2);
Spell* poison_pas_cher = new Spell("Poison Kitu",false,true,poison,1,0,0,0,0);
epee_1->getSpell(poison_pas_cher);
david->getArme(epee_1);
Personnage* blooue=new Personnage("Blooue",mage);
Arme* baton_2_mimi=new Arme("Swagaton +2",baton,4,1);
Spell* boule_de_foudre_op=new Spell("Boule foudre",true,false,foudre,12,3,2,0,0);
baton_2_mimi->getSpell(boule_de_foudre_op);
blooue->getArme(baton_2_mimi);
david->putInfoPerso();
blooue->putInfoPerso();


return 0;
}
