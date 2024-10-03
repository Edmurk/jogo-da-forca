#include <iostream>
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
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto = false;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "\n\n\n#########################################\nFALE PARA O SEU AMIGO TAMPAR OS OLHOS!!!\n#########################################\n\n";

    cout << "Insira o numero de chances: ";

    cout << "Digite a palavra: ";
    cin >> palavra;
    system("cls");

    // Contando o tamanho da palavra
    while (palavra[i] != '\0') {
        i++;
        tam++;
    }

    // Inicializando a palavra secreta com '_'
    for (i = 0; i < 30; i++) {
        secreta[i] = '_';
    }

    while ((chances > 0) && (acertos < tam)) {
        desenhar_forca(chances);  // Exibe a arte da forca correspondente às chances restantes
        cout << "Chances restantes: " << chances << "\n\n";
        cout << "Palavra secreta: ";
        for (i = 0; i < tam; i++) {
            cout << secreta[i] << " ";
        }

        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];
        
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
    } else {
        desenhar_forca(0);  // Exibe o estágio final da forca
        cout << "\n\n\n###############\nVOCE PERDEU!!!\n###############\n\n\n";
    }

    system("pause");
    return 0;
}