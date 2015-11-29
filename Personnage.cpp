#include "Personnage.h"
using namespace std;

    Personnage::Personnage() : nom("peon"),m_role(paysan),m_vie(100),m_vieMax(100),m_mana(0),m_manaMax(10),m_stam(100),m_stamMax(100)
        {

        }

    Personnage::Personnage(std::string name, role newRole) : nom(name),m_role(newRole),m_vie(100),m_vieMax(100),m_mana(0),m_manaMax(10),m_stam(100),m_stamMax(100)
        {
            switch (m_role)
            {
                case mage:
                    m_mana = 100;
                    m_manaMax = 100;
                    break;
                case guerrier:
                    m_vie = 150;
                    m_vieMax = 150;
                    break;
                case voleur:
                    m_vie = 80;
                    m_vieMax = 80;
                    m_stamMax = 150;
                    m_stam = 150;
                    break;
                case paysan:
                    break;
            }
        }

    int Personnage::getVie() const
    {
        return this-> m_vie;
    }

    int Personnage::getVieMax() const
    {
        return this-> m_vieMax;
    }

    int Personnage::getMana() const
    {
        return this-> m_mana;
    }

    int Personnage::getManaMax() const
    {
        return this-> m_manaMax;
    }

    int Personnage::getStam() const
    {
        return this-> m_stam;
    }

    int Personnage::getStamMax() const
    {
        return this-> m_stamMax;
    }

    void Personnage::gainVie(int gain)
    {
        this->m_vie += gain;
        if (m_vie > m_vieMax)
        {
            this -> m_vie = m_vieMax;
        }
    }

    void Personnage::getArme(Arme* a){
        this->m_arme = *a;
    }

    string role_to_string(int n){
        string r="zerg";
        switch (n)
        {
            case 0:return "paysan";break;
            case 1:return "mage";break;
            case 2:return "voleur";break;
            case 3:return "guerrier";break;
        }
        return r;
    }

    void Personnage::putInfoPerso()
    {
        cout << this->nom << " : " << role_to_string(this->m_role) << endl;
        cout << "Vie : " << this->m_vie << "/" << this->m_vieMax << endl;
        cout << "Mana : " << this->m_mana << "/" << this->m_manaMax << endl;
        cout << "Stamina : " << this->m_stam << "/" << this->m_stamMax << endl;
        cout << endl;
        this->m_arme.putInfoArme();
        cout << endl;
    }

