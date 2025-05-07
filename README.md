# Super Trunfo em C - Implementação Acadêmica

📚 Implementação do jogo Super Trunfo em C para disciplina de Introdução à Programação

## 🎯 Funcionalidades

### Nível Básico
✔ Cadastro de 2 cartas com:
- Estado (A-H)
- Código (A01)
- Cidade
- População
- Área (km²)
- PIB (em bilhões)
- Pontos turísticos

### Nível Intermediário
✔ Cálculos automáticos:
- Densidade populacional = população / área
- PIB per capita = (PIB * 1 bilhão) / população

### Nível Avançado
✔ Sistema de batalha:
- Compara: população, área, PIB, pontos turísticos (maior vence)
- Regra especial: menor densidade vence
- Super Poder: soma ponderada de todos atributos

## ⚙️ Tecnologias
- Linguagem C (padrão C99)
- Compilador GCC com flags -Wall -Wextra

## 👩‍💻 Autora
Eduarda - Estudante de Análise e Desenvolvimento de Sistemas

## exemplo de uso 
==CADASTRO CARTA 1==

Estado (A-H): A 

Código (ex: A01): A05

Cidade: Acre

População: 6748000

Área (km²): 1200

PIB (em bilhões): 35.7

Pontos turisticos: 12

## Lógica do Jogo
Atributos normais: maior valor vence

Densidade: menor valor vence

Super Poder: combina todos atributos com peso extra na baixa densidade

## ▶️ Como Executar
```bash
gcc Super_Trunfo.c -o super_trunfo
./super_trunfo
