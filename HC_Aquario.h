#ifndef HC_AQUARIO_H_
#define HC_AQUARIO_H_

#include "Arduino.h"
#include "config.h"

class HC_Aquario
{
		public:
			HC_Aquario();
			void startIlumination();
			void stopIlumination();
			void Iluminacao(int Hours, int Minutes);
};

#endif /* HC_AQUARIO_H_ */
