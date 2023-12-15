#include "heure.h"
#include "bonjour.h"
#include "bonsoir.h"
#include "bonnenuit.h"
#include <stdio.h>

void salut(){

    if ( (heure()>=6) && (heure()<=18) ) bonjour();
    else if ( (heure()>18) && (heure()<=23) ) bonsoir();
    else bonnenuit();

}

int main(){
    salut();
    return 0;
}