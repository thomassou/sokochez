#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

typedef string CVLine; /// type defining a line
typedef vector <string> CMatrix; /// type defining a matrix
typedef pair <unsigned, unsigned> CPosition; /// type defining a position
const char KTokenPlayer1 = '1';
const char KTokenPlayer2 = '2';


/*!
 * @brief Loads the map from a file
 * @param FileName The name of the file
 * @return A vector of string containing the map
 */

CMatrix LoadMap (const string & FileName);

/*!
 * @brief Finds the position of the player of same token in map
 * @param Map The map to parse
 * @param Token The token to find
 * @return A pair containing the x and y position in that order.
 */

CPosition FindPlayer (const CMatrix & Map, const char & Token);

#endif // MAP_H
