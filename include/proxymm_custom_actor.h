#ifndef PROXYMM_CUSTOM_ACTOR_H
#define PROXYMM_CUSTOM_ACTOR_H

#include "modding.h"
#include "global.h"

#if 1 // Change to 1 when copying to your project
RECOMP_IMPORT("ProxyMM_CustomActor", s16 CustomActor_Register(ActorProfile* profile));
#else
s16 CustomActor_Register(ActorProfile* profile);
#endif

#endif // PROXYMM_CUSTOM_ACTOR_H
