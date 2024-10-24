#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector <string> tabNomCandidat()
{
    int nombreCandidat;
    cout << "Veuillez saisir le nombre de candidat :";
    cin >> nombreCandidat;
    cout << endl;
    string nom;
    vector <string> tabNomCandidat;
    for(int i =0; i< nombreCandidat;i=i+1)
    {
        cout << "Veuillez saisir le nom du ", i,"eme candidat :";
        cin >> nom;
        tabNomCandidat[i] = nom;
    }
    for (size_t j =0; j < tabNomCandidat.size()-1; j = j+1)
    {
       cout << tabNomCandidat[j];
    }
    return tabNomCandidat;

}

vector <size_t> tableauPoint(vector <string>& tabCandidat)
{
    for (size_t i =0; i < tabCandidat.size()-1; i = i+1)
    {
        tableauPoint[i]=tabCandidat.size()-i;
    }
    return tableauPoint;
}


void presentation()
{
    cout << "Bienvenue au scrutin de vote n°42 pour l'élection présidentielle" << "\n"
         << "Voici la liste des candidats :" << endl;
    tabNomCandidat();
    cout << "Voici les règles : - Vous devez ordonnée dans une liste le nom des candidats par préférence de vote" << "\n"
         << "                   - Plus votre candidat est haut dans la liste, plus il obtiendra de points !" << "\n"
         << "                   - Le candidat ayant le plus de point gagne !" << "\n"
         << endl;
    cout << "Bon Vote !!!";
}

unsigned int winner()
{
    cout << "Le vote vient de se terminer. Voici les résultats :" << endl;
    unsigned int pointFinal;
    unsigned int pointInter;
    for(size_t z; z<point.size()-2; z=z+1)
    {
        if(point[z] > point[z+1])
        {
            pointInter=point[z];
            if(point[z] > pointFinal)
            {
                pointFinal=point[z];
            }
        }
        else if(point[z+1] > point[z])
        {
            pointInter=point[z+1];
            if(point[z+1] > pointFinal)
            {
                pointFinal=point[z+1];
            }
        }
    }
    string nomCandidat;
    for(size_t j; j< tabNomCandidat.size()-1; j=j+1)
    {
        if(pointFinal==tabNomCandidat[j])
        {
            nomCandidat=tabNomCandidat[j];
            break;
        }
    }
    cout << "Voici le gagnant :", nomCandidat, " qui a gagné avec ", pointFinal, "points!" << endl;

}

vector <unsigned int>classement( const vector <string>& listeCandidat, const vector<int>& tableauPoint)
{
    vector <string> verif;
    vector <unsigned int> point;
    cout << "donne le positionnement de chaqu'un des candidats. vous ne pouvez pas" << endl;
    for(size_t i=0; i<= listeCandidat.size(); i=i+1)
    {
        cout << listeCandidat[i] <<"donner la position que vous vouler attribuer au candidat"<< endl;
        int y=0;
        cin >>y;
        point[i]=tableauPoint[i];
        if (verif[i] == " ")
        {
            verif[i] = listeCandidat[i];
        }
        else
        {
            cout << "erreur tu as déjà attribué cette place " <<endl;
        }
    }
    return point;
}




int main()
{
    tabNomCandidat();
    presentation();
    classement(tabNomCandidat(),tableauPoint(tabNomCandidat()))
    winner();
    return 0;
}




