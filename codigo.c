#include <stdio.h>

int main ()
{
    char msg[] = {"ABCZ9Z"};
    char msg_saida[30];
    int j = 0;

    for (int i = 0; i < strlen(msg); i++)
    {
        msg_saida[j] = msg[i];
        j++;
        if(msg[i] == 'Z')
        {
            msg_saida[j] = 'Z';
            j++;
        }
    }
    msg_saida[j] = '\0';
    printf("Mensagem de Saida 1: %s\n", msg_saida);
    char msg_saida2[30];
    j = 0;
    for (int i = 0; i < strlen(msg_saida); i++)
    {
        int int_c = (int)msg_saida[i];
        char letra;
        if (int_c >= 48 & int_c <= 57)
        {
            msg_saida2[j] = 'Z';
            j++;
            int_c += 17;
            letra = (char)int_c;
            msg_saida2[j] = letra;
            j++;
        }
        else {
            msg_saida2[j] = msg_saida[i];
            j++;
        }
    }
    msg_saida2[j] = '\0';
    printf("Mensagem de Saida 2: %s\n", msg_saida2);
    char msg_saida3[30];
    int cont = 1;
    j = 0;
    for (int i = 0; i < strlen(msg_saida); i++)
    {
        if (msg_saida2[i] == msg_saida2[i+1])
        {
            cont ++;
        }
        else if (cont > 1)
        {
            msg_saida3[j] = cont + '0';
            j++;
            msg_saida3[j] = msg_saida2[i];
            j++;
            cont = 1;
        }
        else
        {
            msg_saida3[j] = msg_saida2[i];
            j++;
        }
    }
        msg_saida3[j] = '\0';
    printf("Mensagem de Saida 3: %s\n", msg_saida3);

}