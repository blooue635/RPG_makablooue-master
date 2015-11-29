#ifndef ARME_H
#define ARME_H
#include <iostream>
#include <string>
#include "Spell.h"

using namespace std;

enum t_arme {fourche,baton,dague,epee};

class Spell;

class Arme
{
    public:
        Arme();
        Arme(string nom,t_arme type);
        Arme(string nom,t_arme type,int degats_min,int face_d);
        Arme(string nom,t_arme type,int degats_min,int face_d,Spell sor);
        void putInfoArme();
        void getSpell(Spell* sp);
    private:
        string a_nom;
        t_arme a_type;
        int a_degats_min;
        int a_face_d;
        int a_durabilite;
        Spell a_effet;
};

#endif // ARME_H
