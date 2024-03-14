# [Algoritmos 2]

Esse é um resumo da matéria de Algoritmos 2 do professor Begosso. Os ensinamentos passados giram em torno de funções em C++, ou seja, o intuito é aplicá-los em c++

## Funções

### Sintaxe

```cpp
    tipo_de_retorno nome_da_função(parâmetros) {
        lógica_da_função;
    }
```

### Tipos de função

Funções podem ter um retorno ou não. Caso não haja retorno, será uma função do tipo "void". Caso contrário, podem ser do tipo "int", "string", "float"... por exemplo:

```cpp
    int dobro(int a) {
        return 2 * a;
    }
        int main() {
        int c;
        c = 8;
        c = dobro(c);
    }
```

No exemplo acima, a função "dobro" retornará um valor inteiro, no caso, é o dobro de 'c', que é passado por meio do parâmetro para a função.

### Recursividade

Uma função pode ser "recursiva", ou seja, ela chama a si mesma dentro de seu escopo, se assimilando à loops. É necessário uma condição de parada para recursividade se cessar.

Um exemplo de função recursiva é fórmula de *Fibonacci*:

*fib(n) = fib(n-1) + fib(n-2)*

O conceito da fórmula de *Fibonacci* é que "Cada número é a soma dos seus dois antecessores":

https://s3.static.brasilescola.uol.com.br/be/2023/12/padroes-numericos-da-sequencia-de-fibonacci.jpg

A fórmula de *Fibonacci* aplicada em C++ utiliza uma função recursiva para a sua execução:

```cpp
    // Função do tipo "long" para suportar númerps inteiros muito grandes
    long fibonacci( long n ) {
    if ( n == 0 || n == 1 )
        return n;
    else
        return fibonacci( n - 1 ) + fibonacci( n – 2 );
    }
```

## Ponteiros

Variáveis ponteiros contém, como seus valores, endereços de memória que contém valores específicos. Um ponteito refere-se indiretamente a um valor, ou seja, refere-se para o endereço de memória de uma variável que possui um valor específco.

### Declaração e Operadores

>> __*__ : indica que a variável é do tipo ponteiro

```cpp
    int *meuPonteiro;
```

>> __&__ : endereço de memória da variálvel. Caso inserirmos o "&" antes de uma variável, quer dizer que queremos o endereço de memória dela, e não o seu valor me si

```cpp
    int x = 10;
    cout << &x; // será exibido o endereço de x (valor numérico exadecimal. ex: E3829F0)
    cout << x   // será exibido o valor de x (10)

    int y = 20;
    meuPonteiro = &y
    cout << *meuPonteiro // será exibido o endereço de memória de y (ex: E8902F1)
    cout << meuPonteiro  // será exibido o valor de y (20)
```

### Ponteiros e Funções

Ao utilizarmos ponteiros como parâmetros, podemos alterar variáveis de fora da função de forma indireta por meio da referência do endereço de memória:

```cpp
    void sqr (int x, int &result) {
        result = x * x;
    }
    int main() {
        int w=5, w2;
        sqr(w, w2);
        cout << w2;
    }
```

No exemplo acima, declaramos dua variáveis, 'w' e "w2". Passamos por meio de parâmetro as duas variáveis. A função recebeu o valor de 'w' (10) e recebeu o __endereço de memória__ de "w2", por conta que o segundo parâmetro foi idicado que seria recebido o endereço da variável que seria passada (w2) e não o seu valor em si.

Foi feito a múltiplicação do número recebido por parâmetro (5) por ele mesmo (5), ou seja: 5 x 5 = 10. O valor da multplicação foi pasado para "result", o qual é a referência do endereço de memória de "w2". Logo, o valor de "w2" passou a ser 10.

## Arrays como ponteiros

Um array não é nada mais nada mesno que um ponteiro. Ou seja, quando criamos um array, estamos criando um ponteiro. O valor do ponteiro  igual ao endereço de memória do primeiro elemento do array (meuArray[0]).

Ou seja: vet E &vet[0] são a __mesma coisa__.

### Função strcmp()

Ela compara dois valores, e retorna "0" caso eles sejam iguais.

```cpp 
    char *s1 = "Feliz Ano Novo";
    char *s2 = "Feliz Ano Novo";
    char *s3 = "Feliz Natal";

    cout << strcmp (s1, s2); // <- irá retornar "0" (é igual)
    cout << strcmp (s1, s3); // <- irá retornar "-1" (retornou um valor negativo, pois "s3" é MENOR que "s1")
    cout << strcmp (s3, S1); // <- irá retornar "1" (retornou um valor positivo, pois "s1" é MAIOR que "s3")
```

