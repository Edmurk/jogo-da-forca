#include <iostream>
using namespace std;
int main(){ 
 
    char palavra[30], letra [1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto=false;

    tam=0;
    i=0;
    acerto=false;
    acertos=0;

    cout<<"\n\n\n#########################################\nFALE PARA O SEU AMIGO TAMPAR OS OLHOS!!!\n#########################################\n\n";

    cout << "Insira o numero de chances: ";
        cin >> chances;

    cout<<"digite a palavra: ";
        cin>>palavra;
        system("cls");


    while (palavra[i] != '\0')
    {
        i++;
        tam++;
    }


    for (i = 0; i < 30; i++)
    {
        secreta[i]='_';
    }

    while ((chances > 0) && (acertos < tam) )
    {
        cout<<"chances restantes: " << chances << "\n\n";
        cout<< "palavra secreta: ";
        for (i = 0; i < tam; i++)
        {
            cout<< secreta[i];
        }

        cout<<"\n\n digite uma letra: ";
            cin>> letra[0];
        
        for (i = 0; i < tam; i++)
        {
            if (palavra[i] == letra[0])
            {
                acerto=true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }

        if (!acerto)
        {
            chances--;
        }
        acerto=false;
        system("cls");
    }

    if (acertos==tam)
    {
        cout<<"\n\n\n###############\nVOCE VENCEU!!!\n###############\n\n";
    } else {
        cout << "\n\n\n###############\nVOCE PERDEU!!!\n###############\n\n\n";
    }

    system("pause");

    return 0;
}