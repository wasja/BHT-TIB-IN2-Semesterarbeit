#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

    /******************************************************************************************************
    *  clearBuffer
    *  L�scht noch vorhandene Zeichen im Tastaturspeicher.
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    void clearBuffer();

    /******************************************************************************************************
    *  waitForEnter
    *  Fordert den Benutzer auf die Eingabetaste zudr�cken und wartet auf die Eingabetaste.
    *  Parameter: keine
    *  Ergebnis : keins
    ******************************************************************************************************/
    int waitForEnter();

    /******************************************************************************************************
    *  printLine
    *  Gibt ein Zeichen in einer Linie eine bestimmte Anzahl oft aus auf dem Bildschirm.
    *  Parameter:   Zeichen: Symbole das ausgegeben werden soll.
    *               Anzahl: Wie oft das Symbol ausgegeben werden soll.
    *  Ergebnis : keins
    ******************************************************************************************************/
    void printLine(char Zeichen, int Anzahl);

    /******************************************************************************************************
    *  getText
    *
    *  Parameter:
    *  Ergebnis :
    ******************************************************************************************************/
    int getText(char *Aufforderung, int Laenge, int emptyString, char **Eingabe);

    /******************************************************************************************************
    *  getNumber
    *
    *  Parameter:
    *  Ergebnis :
    ******************************************************************************************************/
    void getNumber(char *Aufforderung, int *Eingabe, int von, int bis);

#endif // TOOLS_H_INCLUDED
