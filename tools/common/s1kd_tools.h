#ifndef S1KD_H
#define S1KD_H

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <unistd.h>
#include <libgen.h>
#include <dirent.h>
#include <sys/stat.h>
#include <libxml/tree.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define DEFAULT_DEFAULTS_FNAME ".defaults"
#define DEFAULT_DMTYPES_FNAME ".dmtypes"
#define DEFAULT_FMTYPES_FNAME ".fmtypes"
#define DEFAULT_ICNCATALOG_FNAME ".icncatalog"
#define DEFAULT_ACRONYMS_FNAME ".acronyms"
#define DEFAULT_INDEXFLAGS_FNAME ".indexflags"
#define DEFAULT_BREXMAP_FNAME ".brexmap"
#define DEFAULT_BRSL_FNAME ".brseveritylevels"
#define DEFAULT_UOM_FNAME ".uom"

/* Return the full path name from a relative path. */
char *real_path(const char *path, char *real);

/* Search up the directory tree to find a configuration file. */
bool find_config(char *dst, const char *name);

/* Generate an XPath expression for a node. */
xmlChar *xpath_of(xmlNodePtr node);

/* Make a copy of a file. */
int copy(const char *from, const char *to);

/* Determine if a path is a directory. */
bool isdir(const char *path, bool recursive);

/* Free an XML entity. From libxml2, but not exposed by the API. */
void xmlFreeEntity(xmlEntityPtr entity);

/* Compare the codes of two CSDB objects. */
int codecmp(const char *p1, const char *p2);

/* Find a CSDB object in a directory hierarchy based on its code. */
bool find_csdb_object(char *dst, const char *path, const char *code, bool (*is)(const char *), bool recursive);

#endif
