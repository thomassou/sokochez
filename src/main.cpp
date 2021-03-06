/**
 * \file main.cpp
 * \authors Baptiste Pouget, Dorian Tachet
 * \brief Beginning of the project titled "Sokochez"
 *        A Sokoban multiplayer clone
 */

#include <iostream>
#include <string>
#include <vector>
#include "game.h"
#include "input.h"
#include "editor.h"

using namespace std;

int main (int argc, char *argv[])
{
    set_input_mode ();
    if ((argc < 2) || (("-e" == (string) argv[1]) && (argc < 3)))
    {
        cerr << "Argument(s) missing : At least one map file name required" << endl;
        return 0;
    }
    if ("-e" == (string) argv[1])
    {
        for (int i (2); i < argc; ++i)
        {
            Editor (argv[i]);
        }
    }
    else
    {
        for (int i (1); i < argc; ++i)
        {
            Game (argv[i]);
        }
    }
    return 0;
}
