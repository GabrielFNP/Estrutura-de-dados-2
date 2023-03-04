#include <stdio.h>

int main(void) {
    float hash[5] = {-1, -1, -1, -1, -1};
      for (int aluno = 0; aluno < 5; aluno++) {
         int matricula;
          float nota;
            printf("matricula:\n");scanf("%d", &matricula);
              printf("nota:\n");scanf("%f", &nota);
                int indice = matricula % 5; 
                  hash[indice] = nota;}
                    for (int i = 0; i < 5; i++) {
                      if (hash[i] != -1) { 
                      int matricula = i; float nota = hash[i]; 
                         printf("Matricula: %d Nota: %.2f\n", matricula, nota);
                        }
                            }

                              return 0;
                              }