// Copyright (c) 2012 Marcus Bauer (mabako@gmail.com)
// see LICENSE for details.

#include "ml_base.h"

extern "C" { int luaopen_mongo(lua_State *L); }


// Initialisation function (module entrypoint)
MTAEXPORT bool InitModule ( void *pManager, char *szModuleName, char *szAuthor, float *fVersion )
{
    // Set the module info
    strncpy ( szModuleName, MODULE_NAME, MAX_INFO_LENGTH );
    strncpy ( szAuthor, MODULE_AUTHOR, MAX_INFO_LENGTH );
    (*fVersion) = MODULE_VERSION;

    return true;
}


MTAEXPORT void RegisterFunctions ( lua_State * luaVM )
{
	luaopen_mongo( luaVM );
}


MTAEXPORT bool DoPulse ( void )
{
    return true;
}

MTAEXPORT bool ShutdownModule ( void )
{
    
    return true;
}
