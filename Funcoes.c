//I have tested on https://www.onlinegdb.com/online_c_compiler
#include <stdio.h>
#include <string.h>; 

/**
 * @brief Conta quantas vezes uma substring aparece no texto (não sobreposto)
 * @param texto String onde procurar
 * @param busca Substring a ser encontrada
 * @return Número de ocorrências encontradas
 */
int contar_substring(const char *texto, const char *busca);
    for (int i = 0; i <= texto.)

/**
 * @brief Conta o número de palavras na string
 * @note Palavras são separadas por espaços, tabs ou quebras de linha
 * @note Considera múltiplos separadores consecutivos como um só
 * @param str Ponteiro para a string terminada em '\0'
 * @return Número de palavras (0 se string vazia ou só espaços)
 */
int contar_palavras(const char *str){
    int palavras = 0;
    int palavra_encontrada = 0; //usar uma flag pra ver se ta dentro de uma palavra
    
    //verifica se estou no terminador da string
    for(int i = 0; str[i] != '\0'; i++){
        
        //verifica se há espaços na palavra
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ){
            palavra_encontrada = 0;
        } else{
            // se nao for um espaço, quer dizer que estou dentro de uma palavra
            if(palavra_encontrada == 0){
                palavras ++;
                //flag quando está dentro da palavra
                palavra_encontrada = 1;
            }
        }
        
    }
    return palavras;
}


/**
 * @brief Retorna a posição da primeira ocorrência de um caractere
 * @param str String onde procurar
 * @param c Caractere procurado
 * @return Índice (0-based) ou -1 se não encontrado
 */
int primeiro_indice(const char *str, char c){
    for (int i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            return i;
        }
    }
    return -1;
}


/**
 * @brief Conta quantos dígitos (0-9) existem na string
 * @param str String a ser analisada
 * @return Quantidade de caracteres numéricos
 */
int contar_digitos(const char *str){
    int digitos = 0;
    
    for(int i =0; str[i] != '\0'; i++){
        // verifica se esta entre o 0 e o 9
        if(str[i] >= '0' && str[i] <= '9'){
            digitos ++;
        }
    }
    return digitos;
}

/**
 * @brief Conta quantas letras maiúsculas (A-Z) existem na string
 * @param str Ponteiro para a string terminada em '\0'
 * @return Quantidade de letras maiúsculas
 */
int contar_letras_maiusculas(const char *str){
    int digitos = 0;
    
    for(int i =0; str[i] != '\0'; i++){
        // verifica se esta entre o A e o Z
        if(str[i] >= 'A' && str[i] <= 'Z'){
            digitos ++;
        }
    }
    return digitos;
}
