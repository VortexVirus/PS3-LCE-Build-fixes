#include "stdafx.h"
#include "ClientConstants.h"

#if (defined __PS3__)
				const wstring ClientConstants::VERSION_STRING = wstring(L"Minecraft PS3 ") + VER_FILEVERSION_STR_W;//+ SharedConstants::VERSION_STRING;
#elif (defined _XBOX)
				const wstring ClientConstants::VERSION_STRING = wstring(L"Minecraft Xbox ") + VER_FILEVERSION_STR_W;//+ SharedConstants::VERSION_STRING;
#elif (defined __ORBIS__)
				const wstring ClientConstants::VERSION_STRING = wstring(L"Minecraft Orbis ") + VER_FILEVERSION_STR_W;//+ SharedConstants::VERSION_STRING;
#elif (defined _DURANGO)
				const wstring ClientConstants::VERSION_STRING = wstring(L"Minecraft Durango ") + VER_FILEVERSION_STR_W;//+ SharedConstants::VERSION_STRING;
#elif (defined __PSVITA__)
				const wstring ClientConstants::VERSION_STRING = wstring(L"Minecraft PSVita ") + VER_FILEVERSION_STR_W;//+ SharedConstants::VERSION_STRING;
#else ()
				const wstring ClientConstants::VERSION_STRING = wstring(L"Minecraft Windows64 ") + VER_FILEVERSION_STR_W;//+ SharedConstants::VERSION_STRING;
#endif
//|| defined __ORBIS__  || defined _DURANGO  || defined __PSVITA__
//const wstring ClientConstants::VERSION_STRING = wstring(L"Minecraft Xbox ") + VER_FILEVERSION_STR_W;//+ SharedConstants::VERSION_STRING;