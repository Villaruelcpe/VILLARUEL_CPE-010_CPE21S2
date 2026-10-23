#include <iostream>
#include "jobll.h"
 
int main(){
    Printer printer;
 
    std::cout << "Multiple users submit jobs" << std::endl;
    printer.addJob("Princee", 14);
    printer.addJob("Benjamin", 21);
    printer.addJob("Ederlyn", 7);
 
    std::cout << std::endl;
    printer.displayQueue();
 
    std::cout << std::endl << "Processing one job at a time"<<std::endl;
    printer.processOne();
    printer.processOne();
 
    std::cout << std::endl;
    printer.displayQueue();
 
    std::cout << std::endl << "More jobs arrive while printer is still working" << std::endl;
    printer.addJob("Benjie", 2);
    printer.addJob("Stefhen", 1);
    printer.addJob("Sofia", 6);
    printer.addJob("Justin", 9);
 
    std::cout << std::endl;
    printer.displayQueue();
 
    std::cout << std::endl << "Finisihing remaining queue"<<std::endl;
    printer.processOne();
    printer.processOne();
    printer.processOne();
    printer.processOne(); 
 
    return 0;
}