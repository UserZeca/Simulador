# Simulador

## Instru��es para utiliza��o do c�digo

***Comandos a serem utilizados depois da modifica��o, lembre-se eles se referem ao **CMD do Windowns** (Prompt de Comando)***

- ### Criar pasta bin na raiz do projeto (caso ela n�o exista)
```
mkdir bin	
```
- ### Compila os arquivos de acessorios

### 1) Se for a primeira vez utilize o comando abaixo, ele somente ir� compilar os arquivos:

 ```
 g++ -c ./acessorios-cpp/armas-de-ataque/*.cpp ./acessorios-cpp/armas-de-defesa/*.cpp && move *.o ./bin/ 
 ```
### 2) Se n�o for a primeira compila��o, ou seja, a pasta bin possui arquivos, execute o comando abaixo:

```
del /S bin\*.o && g++ -c ./core-simulador-cpp/*.cpp ./personagens-cpp/*.cpp ./acessorios-cpp/armas-de-ataque/*.cpp ./acessorios-cpp/armas-de-defesa/*.cpp && move *.o ./bin/
```

- ### Comando que compila o arquivo main com os arquivos de bibliotecas (comp)

```
g++ ./principal/main.cpp ./bin/*.o
```

- ### Comando para executar o projeto:

```
a.exe
```