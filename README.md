Laboratório 02 - Linguagem de Programação 1

Dupla: Igor Silva Bento e Hilton Thallyson

**Questão 01**: 
	-> Como compilar e executar o programa: 
		1- Abra o terminal; 
		2- Digite "make"; 
		3- Digite "./exe";
		4- Se quiser apagar os arquivos objetos ".o", basta digitar no promt "rm -rf *.o";

	-> Roteiro para os destacar as funcionalidades dos intens(a-h):
	
		a) Classe funcionario:
			A "classe funcionario" possui as informações da cada objeto funcionario criado pelo usuário. Ela possui todos os atributos privados, sendo eles: cpf do tipo long double, cnome do tipo string, salario do tipo double e admissao do tipo vetor de inteiros. Além disso, os métodos setteres e getters dos atributos, os construtores padrão e parametrizado, um membro estático e seu método getter.

		b) Classe empresa: 
			A "classe empresa" possui as informações da cada objeto empresa criada pelo usuário.Ela possui todos os atributos privados, sendo eles: razao do tipo string, cnpj do tipo int e colaboradores do tipo list de objetos da classe funcionario. Além disso, os métodos setteres e getters de cada atributo, os construtores padrão e parametrizado, o método friend de sobrecarga de operador, um membro estático e seu método getter.  

		c) Criar uma empresa:
			1- No MENU INICIAL, digite o "1" para criar uma empresa;
			2- Digite o "CNPJ" da empresa;
			3- Digite a "razão" da empresa;
			4- Pronto, empresa criada com sucesso;

		d) Adicionar funcionários(um por vez) e não permitir adicionar funcionários que já tenham sido adicionados em outras empresas:
			1- Depois de criada uma empresa pelo menos;
			2- Digite '2' para cadastrar um funcionário;
			3- Agora, digite o CNPJ da empresa que deseja cadastrar o novo funcionário;
			4- Em seguida, digite os dados do funcionário(CPF, nome, salário e a data de admissão);	
			5- Faça o mesmo processo a partir do "passo 2 ", mas tente inserir o mesmo "cpf" do funcionário anterior;
			6- Nessa caso, será exibida mensagem de erro (nesse programa não é permitido que um mesmo funcionário esteja cadastrado em mais de uma empresa);

		e) Listar os dados de todas as empresas e suas listas de funcionários:
			1- Depois de criada pelo menos uma empresa e inserido pelo menos um funcionário;
			2- No MENU INICIAL, digite '5' para listar os dados da empresa e seus funcionários;
			3- Digite o CNPJ da empresa desejada, então será exibidos as informações da empresa e todos os seus funcionários;


		f) Aumentar X% o salário de todos os funcionários de uma empresa:
			1- Criada uma empresa com pelo menos um funcionário;
			2- No MENU INICIAL, digite '3' para aumentar o salário;
			3- Agora, digite o CNPJ da empresa;
			4- Digite o valor em porcentagem(%) do aumento de salário;
			5- No MENU INICIAL, digite '5' para exibir os dados dos funcionários (com salários atualizados);

			
		g) Listar os dados dos funcionários em período de experiência(menos de 90 dias de admissão):
			1- Criada um empresa com pelo menos um funcionário;
			2- No MENU INICIAL, digite '6' para exibir os funcionários em periodo de experiência;
			3- Agora, digite o CNPJ da empresa;
			4- Então será exibidos uma lista dos funcionários com menos de 90 dias de contratados;


	-> Limitações do Programa:
		Não foram identificadas nenhuma limitação.
	-> Dificuldades na implementação do programa:
		Tivemos dificuldades em diversos pontos da criação do programa. Inicialmente, houve a necessidade de entender o uso da list e vector e do iterator, que acabou consumindo bastante tempo, pois em alguns casos estavam ocorrendo acessos indevidos à memória.
		Outra dificuldade foi a função de aumento de salário. Inicialmente, as modificações não estavam sendo mantidas após a saída da função. Para solucionar esse e o problema anterior, retornamos por referência a lista de funcionários.
		Por ultimo, durante a função que calcula os dias corridos desde a admissão até a data atual houveram problemas com a saída, pois os resultados estavam com pequena divergência do valor esperado. Após um estudo mais aprofundado do uso das funções ta biblioteca ctime(time.h) e vários testes, conseguiu-se resolver o problema.
