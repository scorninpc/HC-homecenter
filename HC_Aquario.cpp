#include "Arduino.h"
#include "HomeCenter.h"

#include "config.h"

#include "HC_Aquario.h"

/**
 * Construtor da classe aquario
 */
HC_Aquario::HC_Aquario()
{
    pinMode(HC_AQUARIO_ILUMINACAO_PIN, OUTPUT);
}

/**
 * Liga a iluminação
 */
void HC_Aquario::startIlumination()
{
	digitalWrite(HC_AQUARIO_ILUMINACAO_PIN, HIGH);
}

/**
 * Desliga a iluminação
 */
void HC_Aquario::stopIlumination()
{
	digitalWrite(HC_AQUARIO_ILUMINACAO_PIN, LOW);
}

/**
 * Verifica o horario da iluminaçao
 */
void HC_Aquario::Iluminacao(int Hours, int Minutes)
{
	// Cria o horario formatado
	int formatedTime = (Hours * 100) + Minutes;
	
	// Verifica se o horario atual está entre as faixas de tempo de iluminação
	if((formatedTime >= HC_AQUARIO_ILUMINACAO_START) && (formatedTime < HC_AQUARIO_ILUMINACAO_STOP)) {
		// Liga a luz
		HC_Aquario::startIlumination();
		
		debug(storePrintf("LIGADO\t%d\t%d\t%d", formatedTime, Hours, Minutes));
	}
	else {
		// Desliga a luz
		HC_Aquario::stopIlumination();
		
		debug(storePrintf("APAGADO\t%d\t%d\t%d", formatedTime, Hours, Minutes));
	}
}
