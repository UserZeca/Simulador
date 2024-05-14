# Simulador

## Instruções para utilização do código

***Comandos a serem utilizados depois da modificação, lembre-se eles se referem ao **CMD do Windowns** (Prompt de Comando)***

- ### Criar pasta bin na raiz do projeto (caso ela não exista)
```
mkdir bin	
```

### 1) Se for a primeira vez que está compilando, utilize o comando abaixo, ele somente irá compilar os arquivos:

 ```
 g++ -c ./acessorios-cpp/armas-de-ataque/*.cpp ./acessorios-cpp/armas-de-defesa/*.cpp && move *.o ./bin/ 
 ```
### 2) Se não for a primeira compilação, ou seja, a pasta bin possui arquivos, execute o comando abaixo:

```
del /S bin\*.o && g++ -c ./core-simulador-cpp/*.cpp ./personagens-cpp/*.cpp ./acessorios-cpp/armas-de-ataque/*.cpp ./acessorios-cpp/armas-de-defesa/*.cpp && move *.o ./bin/
```

- ### Comando que compila o arquivo principal(main) com os binários gerados pelas libs criadas 

```
g++ ./principal/main.cpp ./bin/*.o
```

- ### Comando para executar o projeto:

```
a.exe
```