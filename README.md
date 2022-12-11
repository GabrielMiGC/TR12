# TR12
#### Heap-Sort
##### Programa feito e testado em sistema operacional Linux Ubuntu 20.04 e GCC 9.4

> O quê esse código faz?

O programa funciona em conjunto com um arquivo .h que contem a chamada das funções presentes no .c, chamada para uma função COMP definida pelo professor e uma struct.  

Essa struct contem:
- Inteiro N (Tamanho do vetor)
- Inteiro P (Número de elementos desse vetor)
- Ponteiro de ponteiro vazio elems (vetor de elementos)
- Ponteiro para função COMP  

Essas funções são:  
- Create  
Nesta função é alocada memória para o vetor elems de acordo com o valor do inteiro N.  

- Add  
Verifica se há espaço para mais um elemento no vetor, caso tenha, um novo elemento é inserido, a função COMP é chamado para reordenar o vetor e o valor de P aumenta.  

- Remove  
É calculada a diferença entre N e P para encontrar em que posição se encontra o último elemento.  
  - **Só pode ser executada se houver ao menos um elemento na árvore**  

Uma vez encontrado, o último elemento é movido para a primeira posição e então removido.  
O valor de P é diminuido.  

Há ainda mais três funções auxiliares:
- Swap  
Feita para mudar os elementos de posição.  

- Subir e Descer  
Feitas respectivamente com o propósito de subir um elemento mais antigo e descer na árvore um elemento mais recente.  

> Como baixar?

Para fazer o download do código basta clica no botão "Code" e, em seguida, "Download Zip".  
Após o download os arquivos do repositório (pasta TR5 e README.md) devem ser extraídos do .zip.  

##### Alternativa

Caso deseja baixar somente o arquivo do programa, abra a pasta TR5, clique nos arquivos e em seguida clique com o botão direito em "Raw", selecione "Salvar link como" e em Salvar.

> Como compilar e executar esse código?

Para compilar o programa, insira em seu terminal Linux: *gcc TR5_511916.c -o TR5_511916*  
Para executar o programa, insira em seu terminal Linux: *./"Seu arquivo main" TR5_511916*
