  #ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"

enum role {paysan,mage,voleur,guerrier};

class Personnage
{
    //methode
public:
    Personnage();
    Personnage(std::string nom,role newRole);
    int getVie() const;
    int getVieMax() const;
    int getMana() const;
    int getManaMax() const;
    int getStam()const;
    int getStamMax() const;
    void gainVie(int gain);
    void putInfoPerso();
    void getArme(Arme* a);
    //attribut
private:
    std::string nom;
    role m_role;
    Arme m_arme;
    int m_vie;
    int m_vieMax;
    int m_mana;
    int m_manaMax;
    int m_stam;
    int m_stamMax;
};



#endif // DEF_PERSONNAGE
