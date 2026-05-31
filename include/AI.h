#ifndef AI_H
#define AI_H

#include <string_view>

/**
 * @brief rodzaj AI
 * 
 * enum wskazujący na rodzaj AI
 * 
 */
enum AI 
{
    NEUTRAL,
    ALLY,
    ENEMY
};

/**
 * @brief wydobądź nazwę wartości enuma
 * 
 * Funkcja zwraca podgląd na nazwe wartości enuma
 * 
 * @param[in] ai enum do wyciągnięcia nazwy
 * @return constexpr std::string_view - nazwa wartości enuma
 */
constexpr std::string_view getAIName(AI ai)
{
    switch (ai)
    {
    case NEUTRAL: return "Neutral";
    case ALLY:   return "Ally";
    case ENEMY:  return "Enemy";
    default:    return "???";
    }
}

#endif
