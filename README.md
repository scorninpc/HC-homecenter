HC - Home Center
=====================

**HC - Home Center** é um conjunto de pequenas funcionalidades para **automação residencial**


## - Funcionamento

### Estrutura

A estrutura do **HC - Home Center** não passa de arquivos organizados, mantendo uma só condiguração e um só loop. Assim podemos ter um projeto onde usuários podem selecionar e configurar o que precisam utilizar e compilam conforme sua necessidade

### Relógio de tempo real

O projeto possui um sistema de tempo real, para que possa ter perfeita sincronia com o ambiente externo, podendo fazer agendamentos e controles temporais com perfeição


## - Funcionalidades

Abaixo é listado as funcionalidades ja presentes no projeto, seu funcionamento e necessidade

### HC_Aquario

Aquarios plantados precisam de tempo constante de luz. Torna-se trabalhoso o trabalho de manter ligado nos horarios certos. O controle de aquario, faz a temporarização para estes aquarios, podendo ser programado horario de inicio e de fim de iluminação.

## - Próximas funcionalidades

 1. Utilização de EEPROM para as configurações
 2. Utilização de display LCD para debug e seleção de funções
 3. Utilização de teclado para configurações e seleção de funções
 4. Controle de TV
 5. Manipulação de portão eletronico 433Mhz
 6. Manipulação de portões de trava

## - Bibliotecas

**HC - Home Center** trabalha com bibliotecas livres, pequenas e de rapido acesso, para manter o projeto menos complexo e mais flexível

### RealTimeClockDS1307

Biblioteca para utilização do modulo *RTC DS1307 (Real Time Clock)*, que provê sincronização com o mundo real

https://github.com/davidhbrown/RealTimeClockDS1307
