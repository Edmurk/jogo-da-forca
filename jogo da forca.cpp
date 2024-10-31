#include <iostream>
#include <string>
using namespace std;

void desenhar_forca(int chances) {
    switch(chances) {
        case 6:
            cout << "  _______" << endl;
            cout << " |/      |" << endl;
            cout << " |       " << endl;
            cout << " |       " << endl;
            cout << " |       " << endl;
            cout << " |       " << endl;
            break;
        case 5:
            cout << "  _______" << endl;
            cout << " |/      |" << endl;
            cout << " |      (_)" << endl;
            cout << " |       " << endl;
            cout << " |       " << endl;
            cout << " |       " << endl;
            break;
        case 4:
            cout << "  _______" << endl;
            cout << " |/      |" << endl;
            cout << " |      (_)" << endl;
            cout << " |       |" << endl;
            cout << " |       |" << endl;
            cout << " |       " << endl;
            break;
        case 3:
            cout << "  _______" << endl;
            cout << " |/      |" << endl;
            cout << " |      (_)" << endl;
            cout << " |      \\|" << endl;
            cout << " |       |" << endl;
            cout << " |       " << endl;
            break;
        case 2:
            cout << "  _______" << endl;
            cout << " |/      |" << endl;
            cout << " |      (_)" << endl;
            cout << " |      \\|/" << endl;
            cout << " |       |" << endl;
            cout << " |       " << endl;
            break;
        case 1:
            cout << "  _______" << endl;
            cout << " |/      |" << endl;
            cout << " |      (_)" << endl;
            cout << " |      \\|/" << endl;
            cout << " |       |" << endl;
            cout << " |      /" << endl;
            break;
        case 0:
            cout << "  _______" << endl;
            cout << " |/      |" << endl;
            cout << " |      (_)" << endl;
            cout << " |      \\|/" << endl;
            cout << " |       |" << endl;
            cout << " |      / \\" << endl;
            break;
    }
}

int main(){ 
    string palavra;
    char letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto = false;
    char opcao;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "\n\n\n#########################################\nFALE PARA O SEU AMIGO TAMPAR OS OLHOS!!!\n#########################################\n\n";

    do{
    cout << "Digite a palavra ou frase: ";
    getline(cin, palavra); 
    system("cls");

    tam = palavra.length();

    for (i = 0; i < tam; i++) {
        if (palavra[i] == ' ') {
            secreta[i] = ' ';
        } else {
            secreta[i] = '_';
        }
    }

    while ((chances > 0) && (acertos < tam)) {
        desenhar_forca(chances);
        cout << "Chances restantes: " << chances << "\n\n";
        cout << "Palavra secreta: ";
        for (i = 0; i < tam; i++) {
            cout << secreta[i] << " ";
        }

        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];
        cin.ignore();
        
        acerto = false;
        for (i = 0; i < tam; i++) {
            if (palavra[i] == letra[0]) {
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }

        if (!acerto) {
            chances--;
        }

        system("cls");
    }

    if (acertos == tam) {
        cout << "\n\n\n###############\nVOCE VENCEU!!!\n###############\n\n";
            system("pause");
    } else {
        desenhar_forca(0);
        cout << "\n\n\n###############\nVOCE PERDEU!!!\n###############\n\n\n";
            system("pause");
    }
    
    system("cls");
    cout << "deseja jogar novamente?[S/N]";
        cin >> opcao;
        cin.ignore();

    } while (opcao == 'n' || opcao == 'N');
    
    return 0;
}