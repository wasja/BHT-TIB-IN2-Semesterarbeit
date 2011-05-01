#include <stdio.h>
#include <stdlib.h>
#include "datastructure.h"
#include "cds.h"
#include "tools.h"

int CountCDs = 0;
TCD CDData[MAXCDS];

void createCD()
{
    int counter = 0;

    system("CLS");
    printf("Erfassung einer neuen CD\n");
    printLine('-', 30);
    getText("Geben Sie bitte den Titel der CD ein:\n->", MAXSONGS, 0, &((CDData + CountCDs) -> Titel));
    getText("Geben Sie bitte den Interpreten ein:\n(dieses Feld leer lassen, wenn es sich um unterschiedliche Interpreten handelt)\n->",MAXSONGS, 1, &((CDData + CountCDs) -> Interpret));
    getNumber("Geben Sie bitte das Erscheinungsjahr ein:\n->", &((CDData + CountCDs) -> erscheinungsjahr), 1, 2020);
    getNumber("Geben Sie bitte die Anzahl der Lieder ein:\n->", &((CDData + CountCDs) -> AnzahlSongs), 1, MAXSONGS);

    do
    {

        printf("Lied %i:\n", (counter + 1));
        getText("Bitte den Titel des Liedes eingeben:\n->", MAXSONGS, 0, &(((CDData + CountCDs) -> Lied[counter]).Titel));
        //if(!(CDData -> Interpret)) funzt noch nicht
        getText("Bitte den Interpreten des Liedes eingeben:\n->", MAXSONGS, 0, &(((CDData + CountCDs) -> Lied[counter]).Interpret));
        counter++;

    }while(counter < ((CDData + CountCDs) -> AnzahlSongs));

    clearBuffer();

}

void editCD()
{
    printf("editCD\n");
}

void deleteCD()
{
    printf("deleteCD\n");
}

void createSong()
{
    printf("createSong\n");
}

void editSong()
{
    printf("editSong\n");
}

void deleteSong()
{
    printf("deleteSong\n");
}

void searchSong()
{
    printf("searchSong\n");
}

void sortCDs()
{
    printf("sortCDs\n");
}

void listCDs()
{
    int counter =0;

    system("CLS");
    printf("Liste der CDs\n");
    printLine('-', 30);

    do
    {
        listOneCD();
    }while(counter < CountCDs);

    clearBuffer();

}
void listOneCD()
{
    int counter = 0;

    printf("Titel           : %s\n", ((CDData + CountCDs) -> Titel));
    printf("Erscheinungsjahr: %i\n", ((CDData + CountCDs) -> erscheinungsjahr));
    printf("Anzahl Lieder   : %i\n", ((CDData + CountCDs) -> AnzahlSongs));

    do
    {
        listOneSong(counter);
        counter++;
    }while(counter < ((CDData + CountCDs) -> AnzahlSongs));
}

void listOneSong(int counter)
{


        printf("    0%i. %s ", (counter + 1), ((CDData + CountCDs) -> Lied[counter].Titel));
        printf("(%s;)\n", ((CDData + CountCDs) -> Lied[counter].Interpret));
}

