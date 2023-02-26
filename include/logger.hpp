#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include "../../lal/ilogger.hpp"

class Logger : public cp::lal::ILogger
{
public:
    Logger(cp::lal::ILogger::LogSeverity logLevel);

private:
    cp::lal::ILogger::LogSeverity m_logLevel;
};

#endif // LOGGER_HPP