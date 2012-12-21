#include <stdio.h>
#include <stdarg.h>

#ifndef _LOGGER_H_
#define _LOGGER_H_

enum LogLevel { LOG_FATAL, LOG_ERROR, LOG_WARN, LOG_INFO, LOG_DEBUG, LOG_TRACE,
					NUM_LOGLEVELS };

int log_fatal(const char *loggerName, const char *logMessage, ...);

int log_error(const char *loggerName, const char *logMessage, ...);

int log_warn(const char *loggerName, const char *logMessage, ...);

int log_info(const char *loggerName, const char *logMessage, ...);

int log_debug(const char *loggerName, const char *logMessage, ...);

int log_trace(const char *loggerName, const char *logMessage, ...);

int log_init(FILE *stream, enum LogLevel level);

size_t dstrftime(char *, size_t, const char *, double);

double now();

#endif//_LOGGER_H_

