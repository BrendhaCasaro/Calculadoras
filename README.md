Dois programas:

1 - uma lib para funçoes matematicas (4 operacoes, raiz quadrada, potencia e fatorial), C puro, sem qualquer include da std lib. Esse programa será separado em dois arquivos. Um header file .h com as definicoes das funcoes da biblioteca e um .c com a implementação. Utilize um terceiro arquivo para implementar testes automatizados.

2 - utilize a sua biblioteca, já testada, para escrever um REPL. Ele irá interpretar comandos e realizar a operação entre um ou dois numeros. Os comandos são:

1 - "x + y" e outras 4 operacoes
2 - "r<num>" para raiz quadrada
2 - "!<num> "para fatorial

3 - randomizar o número usados nos teste

obs: 
    REPL: para dinamizar a quantidade de casas decimais nas operações devo buscar tudo que tem antes do primeiro espaço e guardar em uma variavel, com uma função que anda um contador até encontrar o primeiro espaço eu consigo saber até onde tem números, com o retorno do contador eu uso como indice pra string que serão os números.
    