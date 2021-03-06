#ifndef GLOBAL_H__JZ__12345
#define GLOBAL_H__JZ__12345
#include <stdio.h>
#include "SymbolTable.h"

/** util */
#ifdef _DEBUG
extern FILE* DEBUGIO;
#endif
#ifndef _NO_LOG
extern FILE* LOGIO;
#endif
extern long long LEXLINECOUNTER;


/** SymbolTable */
extern SymbolTable*            s_table;
extern SymbolTableStack*       s_stack;

/** Error */
extern int ERRNO;
extern FILE* ERRORIO;
#endif
