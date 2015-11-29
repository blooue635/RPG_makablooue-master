#ifndef SPELL_H
#define SPELL_H
#include <string>
#include <iostream>

using namespace std;

enum element{physique,feu,glace,foudre,poison,chaos};

class Spell
{
    public:
        Spell();
        Spell(string nom,bool dist,bool dot,element elem,int dgt_min,int face_d,int cout_mana,int cout_stam,int cout_pv);
        void putInfoSpell();
    private:
        string s_nom;
        bool s_is_distance;
        bool s_is_dot;
        element s_elem;
        int s_degats_min;
        int s_face_d;
        int s_cout_mana;
        int s_cout_stam;
        int s_cout_pv;
};

#endif // SPELL_H
