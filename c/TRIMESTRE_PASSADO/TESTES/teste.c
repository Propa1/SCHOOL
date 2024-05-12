#include <stdio.h>

int main() {
  unsigned char x = 182; // 182 em binário: 10110110

  // Máscara para limpar o bit na posição 3
  unsigned char mascara = ~(1 << 3);

  // Aplicar a máscara para limpar o bit na posição 3
  x &= mascara;

  // Agora, o bit na posição 3 deve ser 0
  printf("%d\n", x); // Saída: 178 (10110010 em binário)

  return 0;
}
