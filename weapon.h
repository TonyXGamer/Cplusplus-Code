#pragma once
#include <string>

enum Element
{
    None,
    Fire,
    Water,
    Wind,
    Earth,
    Dark,
    Light
};

std::string Enchantments[7] = { "None", "Fire", "Water", "Wind", "Earth", "Dark", "Light" };
class weapon
{
public:
    weapon(std::string n, Element e, int v) //constructor
    {
        enchant = e;
        name = n;
        value = v;
    }
    void set_stats(std::string n, Element e, int v)
    {
        name = n;
        enchant = e;
        value = v;
    }
    std::string statsName()
    {
        return name;
    }
    std::string statEnchant()
    {
        return Enchantments[enchant];
    }
    int statValue()
    {
        return value;
    }
    void change_Element(Element x)
    {
        enchant = x;
    }
    void change_Element(int x)
    {
        enchant = static_cast<Element>(enchant + x);
    }
protected:

    std::string name;
    Element enchant;
    int value;
};

class sword: public weapon
{
public:
    sword() : weapon(std::string(), None, int())
    {

    }
    sword(std::string n, Element e, int v) : weapon(n,  e,  v)
    {
    }
};

class axe : public weapon
{
public:
    axe() : weapon(std::string(), None, int())
    {

    }
    axe(std::string n, Element e, int v) : weapon(n, e, v)
    {

    }
};
class spear : public weapon
{
public:
    spear() : weapon(std::string(), None, int())
    {

    }
    spear(std::string n, Element e, int v) : weapon(n, e, v)
    {

    }
};
class shield : public weapon
{
public:
    shield() : weapon(std::string(), None, int ())
    {

    }
    shield(std::string n, Element e, int v) : weapon(n, e, v)
    {

    }
};

class bow : public weapon
{
public:
    bow() : weapon(std::string(), None, int ())
    {

    }
    bow(std::string n, Element e, int v) : weapon(n, e, v)
    {

    }
};

