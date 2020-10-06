# Início da disciplina 

O primeiro exercício da cadeira de computação gráfica consiste em instalar o **OpengGl** e executar o programa **01_hello_world_gl** fornecido para verificar se a instalação foi feita corretamente, para assim iniciar as atividades da disciplina.

# Instalação do OpenGl

Os comandos para a instalação foram os seguintes:

- $ sudo apt-get update

- $ sudo apt-get install libglul-mesa-dev freeglut3-dev mesa-common-dev

O primeiro comando serve para atualizar todos os pacotes do sistema para não causar nenhum erro durante a instalação de programas, já o segundo realiza a instalação do OpenGl atravéz do **GLUT**. Como o Glut é uma ferramenta que depende do OpenGl e outras bibliotecas, ao fazer sua instalação todo o resto virá junto.

# Executando o Exemplo

Para executar o algoritmo é necessario realizar o seguinte comando:

- $ gcc main.c -o openglExemplo -lglut -lGLU -lGL

Porém com o OpenGl moderno um erro de versão ocorre com a minha intel hd grapichs, impossibilitando a execução correta do exemplo.


![Captura_de_tela_de_2020-10-05_20-45-14](https://user-images.githubusercontent.com/72319716/95143297-12d83400-074c-11eb-8af1-56486ac43127.png)

Com muita pesquisa descobri que a versão do OpenGl 3.3 não é suportada, à qual é necessária para rodar o código na versão moderna. Então antes de executar o algoritmo um comando tem que ser usado em seu diretório. 

- $ export MESA_GL_VERSION_OVERRIDE=3.3

E com isso o código foi executado perfeitamente, mesmo com algumas warnings em sua construção.

![Captura_de_tela_de_2020-10-05_19-57-17](https://user-images.githubusercontent.com/72319716/95143339-2edbd580-074c-11eb-9192-e47d727640f8.png)

