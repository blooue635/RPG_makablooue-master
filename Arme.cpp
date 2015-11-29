#include "Arme.h"

Arme::Arme():a_nom("null"){

}

Arme::Arme(string nom,t_arme type) : a_nom(nom),a_type(type),a_degats_min(10),a_face_d(3),a_durabilite(100){

}

Arme::Arme(string nom,t_arme type,int degats_min,int face_d): a_nom(nom),a_type(type),a_degats_min(degats_min),a_face_d(face_d),a_durabilite(100){

}

Arme::Arme(string nom,t_arme type,int degats_min,int face_d,Spell sor): a_nom(nom),a_type(type),a_degats_min(degats_min),a_face_d(face_d),a_durabilite(100),a_effet(sor){

}

string t_arme_to_string(int n){
        string r="PortalGun";
        switch (n)
        {
            case 0:return "Fourche";break;
            case 1:return "Baton";break;
            case 2:return "Dague";break;
            case 3:return "Epee";break;
        }
        return r;
    }

void Arme::putInfoArme(){
    if (this->a_nom=="null")
    {
        cout << "Pas d'arme" << endl;
    }else
    {
        cout << "Arme : " << this->a_nom << endl;
        cout << "Type : " << t_arme_to_string(this->a_type) << endl;
        cout << "Degats : " << this->a_degats_min << " - " << this->a_degats_min+this->a_face_d << endl;
        cout << endl;
        this->a_effet.putInfoSpell();
    }
    cout << endl;
}

void Arme::getSpell(Spell* sp){
    this->a_effet = *sp;
}

