#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <stdio.h>


using namespace std;

class printText {
private:
public:
    static void titleText();
    static void menuText();
};
class macro{
public:
    static bool pickMacro2(string choice);
    static bool pickMacro4(string choice);
    static void changeWindow();
    string static input();
};