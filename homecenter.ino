#include <Wire.h>
#include <RealTimeClockDS1307.h>
#include <LiquidCrystal.h>

#include "config.h"

#include "HomeCenter.h"
#include "HC_Aquario.h"

HC_Aquario hc_Aquario;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Formato do timestamp
char formatted[] = "00-00-00 00:00:00x";

/**
 * Configura a aplicação
 */
void setup()
{
	// Verifica se está debugando
	#if defined(HC_SERIAL_DEBUG)
		Serial.begin(9600);
	#endif
}

/**
 * Loop principal
 */
void loop()
{
	// Faz a leitura da hora
	RTC.readClock();
	int currentHours = RTC.getHours();
	int currentMinutes = RTC.getMinutes();
	
	// Verifica se está utilizando o modulo de controle de aquario
	#if defined(HC_AQUARIO_)
		// Aciona a iluminação
		hc_Aquario.Iluminacao(currentHours, currentMinutes);
	#endif
	
	// Verifica se está debugando e para o tempo, para não bugar o serial
	#if defined(HC_SERIAL_DEBUG)
		delay(1000);
	#endif
}
