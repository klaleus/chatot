#ifndef CHATOT_GUARD
#define CHATOT_GUARD

////////////////////////////////////////////////////////////////////////////////
// Types
////////////////////////////////////////////////////////////////////////////////

typedef enum ChatotSeverity
{
    CHATOT_SEVERITY_DEBUG,
    CHATOT_SEVERITY_WARNING,
    CHATOT_SEVERITY_ERROR,
    CHATOT_SEVERITY_FATAL
}
ChatotSeverity;

////////////////////////////////////////////////////////////////////////////////
// Functions
////////////////////////////////////////////////////////////////////////////////

// Sets the minimum severity requirement for messages passed to `chatot_chatter()`.
// The default severity is `CHATOT_SEVERITY_DEBUG`.
void chatot_severity(ChatotSeverity severity);

// Prints formatted messages to `stdout`.
// Messages are prefixed with their corresponding severity.
// If a message does not meet the minimum severity requirement, then it will not be printed.
// If a message has `CHATOT_SEVERITY_FATAL`, then `exit(EXIT_FAILURE)` will be called.
void chatot_chatter(ChatotSeverity severity, const char* message, ...);

#endif // CHATOT_GUARD