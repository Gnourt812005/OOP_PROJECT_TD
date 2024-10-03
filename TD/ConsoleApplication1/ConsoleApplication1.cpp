// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

#include <iostream>
#include "td_tool.h"
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;
int n1 = 0, n2 = 0;
void thread1(int y) {
    ToolInGame t1;
    t1.setConsoleColor(YELLOW, BLACK);
    int pX1 = 3, pY1 = y;
    //t1.goToXY(pX1, pY1);
        
    for (int k1 = 0; k1 < 20; k1++) {
        for (int i1 = 0; i1 < 3; i1++) {
            for (int j1 = 0; j1 < 3; j1++) {
                mtx.lock();
                t1.goToXY(pX1 + j1, pY1 + i1);
                t1.setConsoleColor(YELLOW, BLACK);
                cout << " ";
                mtx.unlock();
            }
        }
        Sleep(200);
        for (int i1 = 0; i1 < 3; i1++) {
            for (int j1 = 0; j1 < 3; j1++) {
                mtx.lock();
                t1.goToXY(pX1 + j1, pY1 + i1);
                t1.setConsoleColor(BLUE, BLACK);
                cout << " ";
                mtx.unlock();
            }
        }
        pX1 += 3;
    }
}

void thread2(int y) {
    ToolInGame t2;
    t2.setConsoleColor(YELLOW, BLACK);
    int pX2 = 3, pY2 = y;
    //t2.goToXY(pX2, pY2);
    
    for (int k2 = 0; k2 < 20; k2++) {
        for (int i2 = 0; i2 < 3; i2++) {
            for (int j2 = 0; j2 < 3; j2++) {
                mtx.lock();
                t2.goToXY(pX2 + j2, pY2 + i2);
                t2.setConsoleColor(YELLOW, BLACK);
                cout << " ";
                mtx.unlock();
            }
        }
        Sleep(200);
        for (int i2 = 0; i2 < 3; i2++) {
            for (int j2 = 0; j2 < 3; j2++) {
                mtx.lock();
                t2.goToXY(pX2 + j2, pY2 + i2);
                t2.setConsoleColor(BLUE, BLACK);
                cout << " ";
                mtx.unlock();
            }
        }
        pX2 += 3;
    }
}

int main()
{
    ToolConsole _tool;
    ToolInGame _tool2;
    _tool.setUpConsoleScreen();
    _tool2.changeStateCusor(0);

    _tool2.draw("map.txt");

    /** demo 2 object move 
    _tool2.setConsoleColor(BLUE, BLACK);
    for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 200; j++)
            cout << " ";
        cout << endl;
    }
    Sleep(1000);
    
    thread t1(thread1, 10);
    thread t2(thread2, 15);

    t1.join();
    t2.join();
    /**/
    cin.get();

    return 0;
}


