/* 05/2017

Aluno: Gustavo de Almeida
Trabalho: Jogo modo texto utilizando estrutura IF ELSE com no máximo 5 interações com o usuário/jogador

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
    //declaração de variáveis
    char opcao;

    //instrução para permitir o uso de acentuação
	setlocale(LC_ALL, "");

	//cabeçalho e identificação
    printf("UniCarioca - Pós Graduação\nEspecialização em Jogos e Animação Digital\n\nMatéria: Lógica de Programação\nAluno: Gustavo de Almeida\n\n");

    //apresentação - utilizei várias vezes o printf para facilitar a leitura do código
    printf("Jogo: O jogador ou jogadora assumirá a figura de técnico de um time de futebol, o Unity FC. ");
    printf("Vocês estão disputando uma final de campeonato e sua missão é tomar as decisões corretas para ");
    printf("atingir a vitória orquestrando as ações dos seus jogadores em campo. Nos últimos minutos dos ");
    printf("acréscimos do jogo, somente um gol pode dar a vitório ao time. Caso contrário terão que se ");
    printf("contentar com um amargo vice-campeonato.\n\nPrepare suas estratégias e boa sorte!\n\n");

    system("PAUSE");

    //limpar a tela
    system("CLS");

    //introdução e história de fundo do jogo
    printf("* PRÉ-JOGO *\n");
    printf("NARRADOR: Bem amigos telespectadores. Estamos ao vivo e em cores para o segundo jogo da decisão ");
    printf("do campeonato nacional. Na primeira partida, o Blender FC ganhou o Unity por 1x0, e por isso tem ");
    printf("a vantagem do empate no jogo de hoje. Para ser campeão, o Unity precisa ganhar marcando pelo menos ");
    printf("2 gols.\n\n");

    printf("* 25 minutos do primeiro tempo *\n");
    printf("NARRADOR: ...olha o chuuuute.... goooooooool!!!! Do Blender FC!! Um a zero!\n\n");

    printf("* 19 minutos do segundo tempo *\n");
    printf("NARRADOR: ...o atacante entra na áaaarea... chutou... goooooooool!!!! o empate do Unity FC!!!\n\n");

    printf("* 44 minutos do segundo tempo *\n");
    printf("NARRADOR: O juiz acaba de indicar acréscimo de 3 minutos! Se o jogo terminar com esse 1x1 o Blender ");
    printf("será declarado o grande campeão. Mas se o Unity fizer mais um golzinho, aí eles serão os campeões, e ");
    printf("com uma virada histórica!\n\n");

    system("PAUSE");

    //limpar a tela
    system("CLS");

    printf("* 48 minutos do segundo tempo *\n\n");
    printf("NARRADOR: O jogo acaba de entrar no último minuto! Haja coração, amigo!!\n");
    printf("A zaga do Blender dá um bico pra frente, pra se desfazer da bola e ver se o juiz apita logo o fim do ");
    printf("jogo. Agora é muito importante pro técnico e jogadores do Unity manterem a calma e fazer as escolhas ");
    printf("corretas.\n\n");

    printf("A bola caiu nos pés do seu goleiro. Escolha a ação a ser tomada:\n\n");
    printf(" 1 - Tentar driblar o atacante que está correndo em sua direção\n");
    printf(" 2 - Realizar um passe lateral para um zagueiro\n");
    printf(" 3 - Dar um chutão para frente\n\n");
    printf("Sua opção: ");
    scanf(" %c", &opcao);

    if (opcao == '1') {
        system("CLS");
        printf("O goleiro se atrapalhou ao tentar o drible, perdeu a bola pro atacante que conseguiu marcar mais\n");
        printf("um gol para o Blender FC. Acaba o jogo e você perdeu o campeonato.\n\n");
        printf("Esse é o final número 1 desse jogo. Tente achar os outros finais!\n\n");
    } else if (opcao == '2') {
        system("CLS");
        printf("O goleiro conseguiu efetuar o passe corretamente. Escolha uma ação para o zagueiro:\n\n");
        printf(" 1 - Correr com a bola\n");
        printf(" 2 - Dar um lençol no marcador\n");
        printf(" 3 - Passar para o lateral\n\n");
        printf("Sua opção: ");
        scanf(" %c", &opcao);
        if (opcao == '1') {
            system("CLS");
            printf("O zagueiro consegue correr com a bola até o meio do campo. Escolha a próxima ação:\n\n");
            printf(" 1 - Tentar um lançamento longo para o lateral direito\n");
            printf(" 2 - Passar a bola para o jogador meio-campista\n");
            printf(" 3 - Inverter o jogo para o lateral esquerdo\n\n");
            printf("Sua opção: ");
            scanf(" %c", &opcao);
            if (opcao == '1') {
                system("CLS");
                printf("O zagueiro realizar um longo lançamento, que acaba cortado pela zaga adversária. ");
                printf("O Unity FC consegue um escanteio nos últimos segundos. O goleiro decide correr pra área. ");
                printf("Decida como o lateral vai bater o corner:\n\n");
                printf(" 1 - Tentar marcar um gol olímpico (bater direto pro gol)\n");
                printf(" 2 - Cruzar no meio da área\n");
                printf(" 3 - Passe pro goleiro na entrada da área\n\n");
                printf("Sua opção: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("Isso não é hora de inventar!!! O lateral cobra o escanteio, tentando marcar um gol, ");
                    printf("mas o chute não é bom e a bola fica com o goleiro. Acaba o jogo e você perdeu o campeonato.\n\n");
                    printf("Esse é o final número 2 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O cruzamento é perfeito para o meio da área. Escolha o jogador que irá tentar o gol:\n\n");
                    printf(" 1 - Goleiro\n");
                    printf(" 2 - Atacante\n");
                    printf(" 3 - Zagueiro\n\n");
                    printf("Sua opção: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O goleiro consegue se antecipar à marcação e sobe para marcar um belo gol de cabeça!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 3 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O atacante consegue se antecipar à marcação e sobe para marcar um belo gol de cabeça!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 4 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O zagueiro consegue se antecipar à marcação e sobe para marcar um belo gol de cabeça!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 5 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                    }
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O escanteio é cobrado com um passe muito alto para o goleiro na entrada da área. Escolha a ação do goleiro:\n\n");
                    printf(" 1 - Passar a bola com um cabeceio\n");
                    printf(" 2 - Tentar um gol de bicleta\n");
                    printf(" 3 - Cabecear para o gol\n\n");
                    printf("Sua opção: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O goleiro consegue cabecear a bola, mas o passe sai errado... nos pés do zagueiro, que dá um ");
                        printf("chutão para frente e o juiz apita o final. Acaba o jogo e você perdeu o campeonato.\n\n");
                        printf("Esse é o final número 6 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O goleiro consegue se ajustar e emendar um belo chute de bicicleta. A bola encobre o goleiro ");
                        printf("num dos gols mais bonitos já vistos no esporte! Que golaço!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 7 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O goleiro consegue cabecear a bola para o gol, mas a bola vai muito alta e passa por ");
                        printf("por cima do gol. O juiz apita o final. Acaba o jogo e você perdeu o campeonato.\n\n");
                        printf("Esse é o final número 8 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                    }

                } else {
                    printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                }
            } else if (opcao == '2') {
                system("CLS");
                printf("O meio-campista recebe o passe sem problemas. Escolha a sua ação:\n\n");
                printf(" 1 - Recuar a bola novamente para a zaga\n");
                printf(" 2 - Tentar um lançamento pingado na área\n");
                printf(" 3 - Correr com a bola\n\n");
                printf("Sua opção: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("O juiz olha o relógio e decide encerrar a partida. Isso não era hora de atrasar o jogo!! ");
                    printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                    printf("Esse é o final número 9 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O lançamento sai completamente errado e muito forte. Bola pra fora! ");
                    printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                    printf("Esse é o final número 10 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O meio-campista tenta correr mas se atrapalha com a bola, que sobra pro Blender FC. ");
                    printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                    printf("Esse é o final número 11 desse jogo. Tente achar os outros finais!\n\n");
                } else {
                    printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                }
            } else if (opcao == '3') {
                system("CLS");
                printf("O meio-campista tenta inverter o jogo. Mas o adversário se antecipa e rouba a bola! ");
                printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                printf("Esse é o final número 12 desse jogo. Tente achar os outros finais!\n\n");
            } else {
                printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
            }
        } else if (opcao == '2') {
            system("CLS");
            printf("O zagueiro, claramente sem habilidade, perde a bola ao tentar o lençol. O outro time ");
            printf("prende a bola por alguns segundos até o juiz apitar o final do jogo. Você perdeu o campeonato.\n\n");
            printf("Esse é o final número 13 desse jogo. Tente achar os outros finais!\n\n");
        } else if (opcao == '3') {
            system("CLS");
            printf("O passe é feito corretamente para o lateral. Escolha a ação deste jogador.\n\n");
            printf(" 1 - Correr com a bola\n");
            printf(" 2 - Lançar a bola na área\n");
            printf(" 3 - Tentar uma tabela, fazendo um passe de calcalnhar\n\n");
            printf("Sua opção: ");
            scanf(" %c", &opcao);
            if (opcao == '1') {
                system("CLS");
                printf("O lateral consegue avançar por boa parte do campo, chegando até perto da área. Escolha a ação:\n\n");
                printf(" 1 - Correr mais com bola\n");
                printf(" 2 - Cruzar para a área\n");
                printf(" 3 - Passar para o meio-campo\n\n");
                printf("Sua opção: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("O lateral tenta correr mais, mas como está cansado acaba tropeçando e perdendo a bola. ");
                    printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                    printf("Esse é o final número 14 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O cruzamento sai perfeito para o atacante, porém a bola veio à meia altura. Escolha a sua ação:\n\n");
                    printf(" 1 - Tentar um gol de barriga\n");
                    printf(" 2 - Dar um peixinho na bola\n");
                    printf(" 3 - Dominar a bola\n\n");
                    printf("Sua opção: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O atacante se joga no meio da área e a bola resvala na sua barriga e pra dentro do gol!!\n\n");
                        printf("Um gol bizarro, mas histórico!! 2x1 para o Unity FC!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 15 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O atacante mergulha na bola e marca um golaço de cabeça!! 2x1 Unity FC!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 16 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O atacante consegue dominar, mas no momento que a bola toca o chão... a zaga consegue matar a jogada. ");
                        printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                        printf("Esse é o final número 17 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                    }
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O lateral tenta passar a bola para o meio-campo. Mas o adversário se antecipa e rouba a bola! ");
                    printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                    printf("Esse é o final número 18 desse jogo. Tente achar os outros finais!\n\n");
                } else {
                    printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                }
            } else if (opcao == '2') {
                system("CLS");
                printf("O lateral consegue efetuar um lançamento preciso na área. Escolha a ação do atacante:\n\n");
                printf(" 1 - Dominar a bola\n");
                printf(" 2 - Cabecear para o gol\n");
                printf(" 3 - Cavar um pênalti\n\n");
                printf("Sua opção: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("O atacante consegue dominar a bola. Escolha sua ação:\n\n");
                    printf(" 1 - Dar um lençol no zagueiro\n");
                    printf(" 2 - Deixar para o outro atacante chutar\n");
                    printf(" 3 - Chutar pro gol\n\n");
                    printf("Sua opção: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O atacante tenta um lençol mas o zagueiro consegue cortar a bola com a cabeça e dar! ");
                        printf("um chutão para frente. Acaba o jogo e você perdeu o campeonato.\n\n");
                        printf("Esse é o final número 19 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O outro atacante encaixa um lindo chute e a bola vai direto no ângulo!! Que golaço!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 20 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O atacante se vira pro gol e consegue chutar no canto do gol, deixando o goleiro sem ");
                        printf("reação!! Um lindo gol! 2x1 pro Unity FC!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 21 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                    }
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O atacante consegue cabecear a bola para o gol, mas a bola vai muito fraca e o goleiro! ");
                    printf("consegue agarrá-la. Acaba o jogo e você perdeu o campeonato.\n\n");
                    printf("Esse é o final número 22 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O juiz acredita na encenação do atacante e marca o pênalti. Escolha como o atacante vai bater:\n\n");
                    printf(" 1 - Forte no ângulo\n");
                    printf(" 2 - Canto à meia altura\n");
                    printf(" 3 - Cavadinha\n\n");
                    printf("Sua opção: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O atacante chuta no ângulo, mas a bola bate no travessão e sai! ");
                        printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                        printf("Esse é o final número 23 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O atacante consegue um bom chute, mas o goleiro acerta o canto e defende! O rebote fica com o Blender FC. ");
                        printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                        printf("Esse é o final número 24 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("O goleiro fica caído no chão observando a bola entrar lentamente, raspando o travessão! GOLAÇO!!!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 25 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                    }
                } else {
                    printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                }
            } else if (opcao == '3') {
                system("CLS");
                printf("O lateral faz o passe de calcanhar sem olhar e não percebe que estava sendo marcado. ");
                printf("O Blender FC mantém a posse. Acaba o jogo e você perdeu o campeonato.\n\n");
                printf("Esse é o final número 26 desse jogo. Tente achar os outros finais!\n\n");
            } else {
                printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
            }
        } else {
            printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
        }
    } else if (opcao == '3') {
        system("CLS");
        printf("O goleiro deu um chutão para o meio campo. Escolha uma ação para o meio-campo:\n\n");
        printf(" 1 - Esperar que o time adversário erre e a bola fique livre\n");
        printf(" 2 - Antecipar-se aos marcadores e tentar dominar a bola\n");
        printf(" 3 - Dividir a jogada com o marcador\n\n");
        printf("Sua opção: ");
        scanf(" %c", &opcao);
        if (opcao == '1') {
            system("CLS");
            printf("O adversário não erra e o time mantém a posse da bola, gastando o tempo. ");
            printf("Acaba o jogo e você perdeu o campeonato.\n\n");
            printf("Esse é o final número 27 desse jogo. Tente achar os outros finais!\n\n");
        } else if (opcao == '2') {
            system("CLS");
            printf("O meio-campista consegue se antecipar e dominar a bola. Escolha sua próxima ação:\n\n");
            printf(" 1 - Tocar pro atacante\n");
            printf(" 2 - Lançar pro lateral\n");
            printf(" 3 - Correr com a bola\n\n");
            printf("Sua opção: ");
            scanf(" %c", &opcao);
            if (opcao == '1') {
                system("CLS");
                printf("O passe sai completamente errado é interceptado pelo adversário. ");
                printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                printf("Esse é o final número 28 desse jogo. Tente achar os outros finais!\n\n");
            } else if (opcao == '2') {
                system("CLS");
                printf("O lançamento sai muito forte e vai para fora do campo. Posse do Blender FC. ");
                printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                printf("Esse é o final número 29 desse jogo. Tente achar os outros finais!\n\n");
            } else if (opcao == '3') {
                system("CLS");
                printf("O meio-campista avança tranquilamente com a bola. Escolha sua próxima ação:\n\n");
                printf(" 1 - Chutar de fora da área\n");
                printf(" 2 - Invadir a área\n");
                printf(" 3 - Passar para o lado\n\n");
                printf("Sua opção: ");
                scanf(" %c", &opcao);
                if (opcao == '1') {
                    system("CLS");
                    printf("O chute sai fraco e é tranquilamente defendido pelo goleiro, que consegue ficar com a bola. ");
                    printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                    printf("Esse é o final número 30 desse jogo. Tente achar os outros finais!\n\n");
                } else if (opcao == '2') {
                    system("CLS");
                    printf("O meio-campista consegue entrar na área e fica de frente pro gol. Escolha sua próxima ação:\n\n");
                    printf(" 1 - Driblar o goleiro e chutar pro gol\n");
                    printf(" 2 - Tentar o chute direto\n");
                    printf(" 3 - Tocar pro atacante\n\n");
                    printf("Sua opção: ");
                    scanf(" %c", &opcao);
                    if (opcao == '1') {
                        system("CLS");
                        printf("O meio-campista consegue deixar o goleiro no chão e empurrar com cuidado a bola pro ");
                        printf("fundo da rede!! Um lindo drible pra coroar a temporada!!\n\n");
                        printf("PARABÉNS!! Você ganhou o jogo e o campeonato!!\n\n");
                        printf("Esse é o final número 31 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '2') {
                        system("CLS");
                        printf("O goleiro, num ato de puro reflexo, consegue defender e agarrar a bola. ");
                        printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                        printf("Esse é o final número 32 desse jogo. Tente achar os outros finais!\n\n");
                    } else if (opcao == '3') {
                        system("CLS");
                        printf("Isso não era hora de passar! Era hora de decidir! O zagueiro consegue voltar e cortar a bola. ");
                        printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                        printf("Esse é o final número 33 desse jogo. Tente achar os outros finais!\n\n");
                    } else {
                        printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                    }
                } else if (opcao == '3') {
                    system("CLS");
                    printf("O passe é interceptado pelo zagueiro que consegue se antecipar. Bola do Blender FC. ");
                    printf("Acaba o jogo e você perdeu o campeonato.\n\n");
                    printf("Esse é o final número 34 desse jogo. Tente achar os outros finais!\n\n");
                } else {
                    printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
                }
            } else {
                printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
            }
        } else if (opcao == '3') {
            system("CLS");
            printf("O meio-campista vai muito agressivamente na dividida e acaba fazendo falta. Era exatamente ");
            printf("o que o Blender FC queria... manter a posse da bola. Acaba o jogo e você perdeu o campeonato.\n\n");
            printf("Esse é o final número 35 desse jogo. Tente achar os outros finais!\n\n");
        } else {
            printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
        }
    } else {
        printf("\n\n* * * Opção não suportada! Jogue novamente! * * *\n\n");
    }

    system("PAUSE");
}
