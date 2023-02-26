#include "../include/logger.hpp"

Logger::Logger(cp::lal::ILogger::LogSeverity logLevel)
    : m_logLevel(logLevel)
{
}
