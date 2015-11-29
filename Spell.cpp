#include "Spell.h"

Spell::Spell(): s_nom("null")
{

}


Spell::Spell(string nom,bool dist,bool dot,element elem,int dgt_min,int face_d,int cout_mana,int cout_stam,int cout_pv): s_nom(nom),s_is_distance(dist),s_is_dot(dot),s_elem(elem),s_degats_min(dgt_min),s_face_d(face_d),s_cout_mana(cout_mana),s_cout_stam(cout_stam),s_cout_pv(cout_pv)
{
    //
}

string element_to_string(int n){
        string r="Swag";
        switch (n)
        {
            case 0:return "physique";break;
            case 1:return "feu";break;
            case 2:return "glace";break;
            case 3:return "foudre";break;
            case 4:return "poison";break;
            case 5:return "chaos";break;
        }
        return r;
    }


void Spell::putInfoSpell()
{
    if (s_nom=="null")
    {
        cout << "Pas d'effet" << endl;
    }else
    {
        cout << "Effet : " << this->s_nom << endl;
        cout << "Element : " << element_to_string(this->s_elem) << endl;
        if (s_is_distance)
        {
            cout << "Effet a distance" << endl;
        }else
        {
            cout << "Effet au corps a corps" << endl;
        }
        if (s_is_dot)
        {
            cout << "Effet sur la duree";
            cout << " degat par tour : " << this->s_degats_min << " - " << this->s_degats_min+this->s_face_d << endl;
        }else
        {
            cout << "Degat a l'impact : " << this->s_degats_min << " - " << this->s_degats_min+this->s_face_d << endl;
        }
        if (s_cout_mana != 0)
        {
            cout << "Cout en mana : " << s_cout_mana << endl;
        }
        if (s_cout_stam != 0)
        {
            cout << "Cout en stamina : " << s_cout_stam << endl;
        }
        if (s_cout_pv != 0)
        {
            cout << "Cout en pv : " << s_cout_pv << endl;
        }
    }
    cout << endl;
}
