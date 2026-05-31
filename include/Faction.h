#ifndef FACTION_H
#define FACTION_H

#include <string_view>

/**
 * @brief rodzaj frakcji
 * 
 * enum wskazujący na rodzaj frakcji
 * 
 */
enum Faction 
{
    NEW_CAMP,
    OLD_CAMP,
    NONE
};

/**
 * @brief wydobądź nazwę wartości enuma
 * 
 * Funkcja zwraca podgląd na nazwe wartości enuma
 * 
 * @param[in] faction enum do wyciągnięcia nazwy
 * @return constexpr std::string_view - nazwa wartości enuma
 */
constexpr std::string_view getFactionName(Faction faction)
{
    switch (faction)
    {
    case NEW_CAMP: return "New Camp";
    case OLD_CAMP:   return "Old Camp";
    case NONE:  return "None";
    default:    return "???";
    }
}

#endif
