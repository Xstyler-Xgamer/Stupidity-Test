#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>

int main() {
    //inizialiesierung random number und variablen
    std::srand(static_cast<unsigned int>(std::time(0)));
    int Stupidlvl;
    int IQlvl = 100;
    int MAX = 100;
    std::string Name;

    //script
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Wait for 0,1 seconds (kann durch seconds und microseconds ausgetauscht werden)
    std::cout << "Welcome to Stupidity Test! (V0.1)";
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Wait for 0,1 seconds (kann durch seconds und microseconds ausgetauscht werden)
    std::cout << "\nWhats your Name?:";
    std::cin >> Name;
    Stupidlvl = std::rand() % MAX + 1 ;
    IQlvl = IQlvl - Stupidlvl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Calculating.";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "\nCalculating..";
    std::this_thread::sleep_for(std::chrono::milliseconds(600));
    std::cout << "\nCalculating...";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "\nCalculating done.";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "\nHello " << Name << "\nYou are to: " << Stupidlvl << "% Stupid" << "\nAnd Have an Smartness-level of: " << IQlvl << "%";
    return 0;
}