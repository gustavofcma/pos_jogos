/* 05/2017

Aluno: Gustavo de Almeida
Trabalho: Jogo modo texto utilizando estrutura IF ELSE com no m�ximo 5 intera��es com o usu�rio/jogador

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
    //declara��o de vari�veis
    char opcao;

    //instru��o para permitir o uso de acentua��o
	setlocale(LC_ALL, "");

	//cabe�alho e identifica��o
    printf("UniCarioca - P�s Gradua��o\nEspecializa��o em Jogos e Anima��o Digital\n\nMat�ria: L�gica de Programa��o\nAluno: Gustavo de Almeida\n\n");

    //apresenta��o - utilizei v�rias vezes o printf para facilitar a leitura do c�digo
    printf("Jogo: O jogador ou jogadora assumir� a figura de t�cnico de um time de futebol, o Unity FC. ");
    printf("Voc�s est�o disputando uma final de campeonato e sua miss�o � tomar as decis�es corretas para ");
    printf("atingir a vit�ria orquestrando as a��es dos seus jogadores em campo. Nos �ltimos minutos dos ");
    printf("acr�scimos do jogo, somente um gol pode dar a vit�rio ao time. Caso contr�rio ter�o que se ");
    printf("contentar com um amargo vice-campeonato.\n\nPrepare suas estrat�gias e boa sorte!\n\n");

    system("PAUSE");

    //limpar a tela
    system("CLS");

    //introdu��o e hist�ria de fundo do jogo
    printf("* PR�-JOGO *\n");
    printf("NARRADOR: Bem amigos telespectadores. Estamos ao vivo e em cores para o segundo jogo da decis�o ");
    printf("do campeonato nacional. Na primeira partida, o Blender FC ganhou o Unity por 1x0, e por isso tem ");
    printf("a vantagem do empate no jogo de hoje. Para ser campe�o, o Unity precisa ganhar marcando pelo menos ");
    printf("2 gols.\n\n");

    printf("* 25 minutos do primeiro tempo *\n");
    printf("NARRADOR: ...olha o chuuuute.... goooooooool!!!! Do Blender FC!! Um a zero!\n\n");

    printf("* 19 minutos do segundo tempo *\n");
    printf("NARRADOR: ...o atacante entra na �aaarea... chutou... goooooooool!!!! o empate do Unity FC!!!\n\n");

    printf("* 44 minutos do segundo tempo *\n");
    printf("NARRADOR: O juiz acaba de indicar acr�scimo de 3 minutos! Se o jogo terminar com esse 1x1 o Blender ");
    printf("ser� declarado o grande campe�o. Mas se o Unity fizer mais um golzinho, a� eles ser�o os campe�es, e ");
    printf("com uma virada hist�rica!\n\n");

    system("PAUSE");

    //limpar a tela
    system("CLS");

    printf("* 48 minutos do segundo tempo *\n\n");
    printf("NARRADOR: O jogo acaba de entrar no �ltimo minuto! Haja cora��o, amigo!!\n");
    printf("A zaga do Blender d� um bico pra frente, pra se desfazer da bola e ver se o juiz apita logo o fim do ");
    printf("jogo. Agora � muito importante pro t�cnico e jogadores do Unity manterem a calma e fazer as escolhas ");
    printf("corretas.\n\n");

    printf("A bola caiu nos p�s do seu goleiro. Escolha a a��o a ser tomada:\n\n");
    printf(" 1 - Tentar driblar o atacante que est� correndo em sua dire��o\n");
    printf(" 2 - Realizar um passe lateral para um zagueiro\n");
    printf(" 3 - Dar um chut�o para frente\n\n");
    printf("Sua op��o: ");
    scanf(" %c", &opcao);

    if (opcao == '1') {
        system("CLS");
        printf("O goleiro se atrapalhou ao tentar o drible, perdeu a bola pro atacante que conseguiu marcar mais\n");
        printf("um gol para o Blender FC. Acaba o jogo e voc� perdeu o campeonato.\n\n");
        printf("Esse � o final n�mero 1 desse jogo. Tente achar os outros finais!\n\n");
    } else if (opcao == '2') {
        system("CLS");
        printf("O goleiro conseguiu efetuar o passe corretamente. Escolha uma a��o para o zagueiro:\n\n");
        printf(" 1 - Correr com a bola\n");
        printf(" 2 - Dar um len�ol no marcador\n");
        printf(" 3 - Passar para o lateral\n\n");
        printf("Sua op��o: ");
        scanf(" %c", &opcao);
        if (opcao == '1') {
            system("CLS");
            printf("O zagueiro consegue correr com a bola at� o meio do campo. Escolha a pr�xima a��o:\n\n");
            printf(" 1 - Tentar um lan�amento longo para o lateral direito\n");
            printf(" 2 - Passar a bola para o jogador meio-campista\n");
            printf(" 3 - Inverter o jogo para o lateral esquerdo\n\n");
            printf("Sua op��o: ");
            scanf(" %c", &opcao);
            if (opcao == '1') {
                system("CLS");
                printf("O zagueiro realizar um longo lan�amento, que acaba cortado pela zaga advers�ria. ");
                printf("O Unity FC consegue um escanteio nos �ltimos segundos. O goleiro decide correr pra �rea. ");
                printf("Decida como o lateral vai bater o corner:\n\n");
                printf(" 1 - Tentar marcar um gol ol�mpico (bater direto pro gol)\n");
                printf(" 2 - Cruzar no meio da �rea\n");
                printf(" 3 - Passe pro goleiro na entrada da �rea\n\n");
                printf("Sua op��o: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("Isso n�o � hora de inventar!!! O lateral cobra o escanteio, tentando marcar um gol, ");
                    printf("mas o chute n�o � bom e a bola fica com o goleiro. Acaba o jogo e voc� perdeu o campeonato.\n\n");
                    printf("Esse � o final n�mero 2 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O cruzamento � perfeito para o meio da �rea. Escolha o jogador que ir� tentar o gol:\n\n");
                    printf(" 1 - Goleiro\n");
                    printf(" 2 - Atacante\n");
                    printf(" 3 - Zagueiro\n\n");
                    printf("Sua op��o: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O goleiro consegue se antecipar � marca��o e sobe para marcar um belo gol de cabe�a!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 3 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O atacante consegue se antecipar � marca��o e sobe para marcar um belo gol de cabe�a!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 4 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O zagueiro consegue se antecipar � marca��o e sobe para marcar um belo gol de cabe�a!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 5 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                    }
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O escanteio � cobrado com um passe muito alto para o goleiro na entrada da �rea. Escolha a a��o do goleiro:\n\n");
                    printf(" 1 - Passar a bola com um cabeceio\n");
                    printf(" 2 - Tentar um gol de bicleta\n");
                    printf(" 3 - Cabecear para o gol\n\n");
                    printf("Sua op��o: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O goleiro consegue cabecear a bola, mas o passe sai errado... nos p�s do zagueiro, que d� um ");
                        printf("chut�o para frente e o juiz apita o final. Acaba o jogo e voc� perdeu o campeonato.\n\n");
                        printf("Esse � o final n�mero 6 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O goleiro consegue se ajustar e emendar um belo chute de bicicleta. A bola encobre o goleiro ");
                        printf("num dos gols mais bonitos j� vistos no esporte! Que gola�o!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 7 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O goleiro consegue cabecear a bola para o gol, mas a bola vai muito alta e passa por ");
                        printf("por cima do gol. O juiz apita o final. Acaba o jogo e voc� perdeu o campeonato.\n\n");
                        printf("Esse � o final n�mero 8 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                    }

                } else {
                    printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                }
            } else if (opcao == '2') {
                system("CLS");
                printf("O meio-campista recebe o passe sem problemas. Escolha a sua a��o:\n\n");
                printf(" 1 - Recuar a bola novamente para a zaga\n");
                printf(" 2 - Tentar um lan�amento pingado na �rea\n");
                printf(" 3 - Correr com a bola\n\n");
                printf("Sua op��o: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("O juiz olha o rel�gio e decide encerrar a partida. Isso n�o era hora de atrasar o jogo!! ");
                    printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                    printf("Esse � o final n�mero 9 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O lan�amento sai completamente errado e muito forte. Bola pra fora! ");
                    printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                    printf("Esse � o final n�mero 10 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O meio-campista tenta correr mas se atrapalha com a bola, que sobra pro Blender FC. ");
                    printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                    printf("Esse � o final n�mero 11 desse jogo. Tente achar os outros finais!\n\n");
                } else {
                    printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                }
            } else if (opcao == '3') {
                system("CLS");
                printf("O meio-campista tenta inverter o jogo. Mas o advers�rio se antecipa e rouba a bola! ");
                printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                printf("Esse � o final n�mero 12 desse jogo. Tente achar os outros finais!\n\n");
            } else {
                printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
            }
        } else if (opcao == '2') {
            system("CLS");
            printf("O zagueiro, claramente sem habilidade, perde a bola ao tentar o len�ol. O outro time ");
            printf("prende a bola por alguns segundos at� o juiz apitar o final do jogo. Voc� perdeu o campeonato.\n\n");
            printf("Esse � o final n�mero 13 desse jogo. Tente achar os outros finais!\n\n");
        } else if (opcao == '3') {
            system("CLS");
            printf("O passe � feito corretamente para o lateral. Escolha a a��o deste jogador.\n\n");
            printf(" 1 - Correr com a bola\n");
            printf(" 2 - Lan�ar a bola na �rea\n");
            printf(" 3 - Tentar uma tabela, fazendo um passe de calcalnhar\n\n");
            printf("Sua op��o: ");
            scanf(" %c", &opcao);
            if (opcao == '1') {
                system("CLS");
                printf("O lateral consegue avan�ar por boa parte do campo, chegando at� perto da �rea. Escolha a a��o:\n\n");
                printf(" 1 - Correr mais com bola\n");
                printf(" 2 - Cruzar para a �rea\n");
                printf(" 3 - Passar para o meio-campo\n\n");
                printf("Sua op��o: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("O lateral tenta correr mais, mas como est� cansado acaba trope�ando e perdendo a bola. ");
                    printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                    printf("Esse � o final n�mero 14 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O cruzamento sai perfeito para o atacante, por�m a bola veio � meia altura. Escolha a sua a��o:\n\n");
                    printf(" 1 - Tentar um gol de barriga\n");
                    printf(" 2 - Dar um peixinho na bola\n");
                    printf(" 3 - Dominar a bola\n\n");
                    printf("Sua op��o: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O atacante se joga no meio da �rea e a bola resvala na sua barriga e pra dentro do gol!!\n\n");
                        printf("Um gol bizarro, mas hist�rico!! 2x1 para o Unity FC!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 15 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O atacante mergulha na bola e marca um gola�o de cabe�a!! 2x1 Unity FC!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 16 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O atacante consegue dominar, mas no momento que a bola toca o ch�o... a zaga consegue matar a jogada. ");
                        printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                        printf("Esse � o final n�mero 17 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                    }
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O lateral tenta passar a bola para o meio-campo. Mas o advers�rio se antecipa e rouba a bola! ");
                    printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                    printf("Esse � o final n�mero 18 desse jogo. Tente achar os outros finais!\n\n");
                } else {
                    printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                }
            } else if (opcao == '2') {
                system("CLS");
                printf("O lateral consegue efetuar um lan�amento preciso na �rea. Escolha a a��o do atacante:\n\n");
                printf(" 1 - Dominar a bola\n");
                printf(" 2 - Cabecear para o gol\n");
                printf(" 3 - Cavar um p�nalti\n\n");
                printf("Sua op��o: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("O atacante consegue dominar a bola. Escolha sua a��o:\n\n");
                    printf(" 1 - Dar um len�ol no zagueiro\n");
                    printf(" 2 - Deixar para o outro atacante chutar\n");
                    printf(" 3 - Chutar pro gol\n\n");
                    printf("Sua op��o: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O atacante tenta um len�ol mas o zagueiro consegue cortar a bola com a cabe�a e dar! ");
                        printf("um chut�o para frente. Acaba o jogo e voc� perdeu o campeonato.\n\n");
                        printf("Esse � o final n�mero 19 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O outro atacante encaixa um lindo chute e a bola vai direto no �ngulo!! Que gola�o!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 20 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O atacante se vira pro gol e consegue chutar no canto do gol, deixando o goleiro sem ");
                        printf("rea��o!! Um lindo gol! 2x1 pro Unity FC!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 21 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                    }
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O atacante consegue cabecear a bola para o gol, mas a bola vai muito fraca e o goleiro! ");
                    printf("consegue agarr�-la. Acaba o jogo e voc� perdeu o campeonato.\n\n");
                    printf("Esse � o final n�mero 22 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O juiz acredita na encena��o do atacante e marca o p�nalti. Escolha como o atacante vai bater:\n\n");
                    printf(" 1 - Forte no �ngulo\n");
                    printf(" 2 - Canto � meia altura\n");
                    printf(" 3 - Cavadinha\n\n");
                    printf("Sua op��o: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O atacante chuta no �ngulo, mas a bola bate no travess�o e sai! ");
                        printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                        printf("Esse � o final n�mero 23 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O atacante consegue um bom chute, mas o goleiro acerta o canto e defende! O rebote fica com o Blender FC. ");
                        printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                        printf("Esse � o final n�mero 24 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O goleiro fica ca�do no ch�o observando a bola entrar lentamente, raspando o travess�o! GOLA�O!!!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 25 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                    }
                } else {
                    printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                }
            } else if (opcao == '3') {
                system("CLS");
                printf("O lateral faz o passe de calcanhar sem olhar e n�o percebe que estava sendo marcado. ");
                printf("O Blender FC mant�m a posse. Acaba o jogo e voc� perdeu o campeonato.\n\n");
                printf("Esse � o final n�mero 26 desse jogo. Tente achar os outros finais!\n\n");
            } else {
                printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
            }
        } else {
            printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
        }
    } else if (opcao == '3') {
        system("CLS");
        printf("O goleiro deu um chut�o para o meio campo. Escolha uma a��o para o meio-campo:\n\n");
        printf(" 1 - Esperar que o time advers�rio erre e a bola fique livre\n");
        printf(" 2 - Antecipar-se aos marcadores e tentar dominar a bola\n");
        printf(" 3 - Dividir a jogada com o marcador\n\n");
        printf("Sua op��o: ");
        scanf(" %c", &opcao);
        if (opcao == '1') {
            system("CLS");
            printf("O advers�rio n�o erra e o time mant�m a posse da bola, gastando o tempo. ");
            printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
            printf("Esse � o final n�mero 27 desse jogo. Tente achar os outros finais!\n\n");
        } else if (opcao == '2') {
            system("CLS");
            printf("O meio-campista consegue se antecipar e dominar a bola. Escolha sua pr�xima a��o:\n\n");
            printf(" 1 - Tocar pro atacante\n");
            printf(" 2 - Lan�ar pro lateral\n");
            printf(" 3 - Correr com a bola\n\n");
            printf("Sua op��o: ");
            scanf(" %c", &opcao);
            if (opcao == '1') {
                system("CLS");
                printf("O passe sai completamente errado � interceptado pelo advers�rio. ");
                printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                printf("Esse � o final n�mero 28 desse jogo. Tente achar os outros finais!\n\n");
            } else if (opcao == '2') {
                system("CLS");
                printf("O lan�amento sai muito forte e vai para fora do campo. Posse do Blender FC. ");
                printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                printf("Esse � o final n�mero 29 desse jogo. Tente achar os outros finais!\n\n");
            } else if (opcao == '3') {
                system("CLS");
                printf("O meio-campista avan�a tranquilamente com a bola. Escolha sua pr�xima a��o:\n\n");
                printf(" 1 - Chutar de fora da �rea\n");
                printf(" 2 - Invadir a �rea\n");
                printf(" 3 - Passar para o lado\n\n");
                printf("Sua op��o: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("O chute sai fraco e � tranquilamente defendido pelo goleiro, que consegue ficar com a bola. ");
                    printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                    printf("Esse � o final n�mero 30 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O meio-campista consegue entrar na �rea e fica de frente pro gol. Escolha sua pr�xima a��o:\n\n");
                    printf(" 1 - Driblar o goleiro e chutar pro gol\n");
                    printf(" 2 - Tentar o chute direto\n");
                    printf(" 3 - Tocar pro atacante\n\n");
                    printf("Sua op��o: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O meio-campista consegue deixar o goleiro no ch�o e empurrar com cuidado a bola pro ");
                        printf("fundo da rede!! Um lindo drible pra coroar a temporada!!\n\n");
                        printf("PARAB�NS!! Voc� ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse � o final n�mero 31 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O goleiro, num ato de puro reflexo, consegue defender e agarrar a bola. ");
                        printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                        printf("Esse � o final n�mero 32 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("Isso n�o era hora de passar! Era hora de decidir! O zagueiro consegue voltar e cortar a bola. ");
                        printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                        printf("Esse � o final n�mero 33 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                    }
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O passe � interceptado pelo zagueiro que consegue se antecipar. Bola do Blender FC. ");
                    printf("Acaba o jogo e voc� perdeu o campeonato.\n\n");
                    printf("Esse � o final n�mero 34 desse jogo. Tente achar os outros finais!\n\n");
                } else {
                    printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
                }
            } else {
                printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
            }
        } else if (opcao == '3') {
            system("CLS");
            printf("O meio-campista vai muito agressivamente na dividida e acaba fazendo falta. Era exatamente ");
            printf("o que o Blender FC queria... manter a posse da bola. Acaba o jogo e voc� perdeu o campeonato.\n\n");
            printf("Esse � o final n�mero 35 desse jogo. Tente achar os outros finais!\n\n");
        } else {
            printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
        }
    } else {
        printf("\n\n* * * Op��o n�o suportada! Jogue novamente! * * *\n\n");
    }

    system("PAUSE");
}
