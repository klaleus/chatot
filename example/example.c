////////////////////////////////////////////////////////////////////////////////
// Dependencies
////////////////////////////////////////////////////////////////////////////////

#include <chatot/chatot.h>

////////////////////////////////////////////////////////////////////////////////
// Functions
////////////////////////////////////////////////////////////////////////////////

int main(int argc, char* argv[])
{
    chatot_chatter(CHATOT_SEVERITY_DEBUG, "Chatot used Chatter!");
    chatot_chatter(CHATOT_SEVERITY_WARNING, "Chatot used Chatter!");
    chatot_chatter(CHATOT_SEVERITY_ERROR, "Chatot used Chatter!");
    // chatot_chatter(CHATOT_SEVERITY_FATAL, "Chatot used Chatter!");

    chatot_severity(CHATOT_SEVERITY_ERROR);

    chatot_chatter(CHATOT_SEVERITY_DEBUG, "Chatot used Chatter!");
    chatot_chatter(CHATOT_SEVERITY_WARNING, "Chatot used Chatter!");
    chatot_chatter(CHATOT_SEVERITY_ERROR, "Chatot used Chatter!");
    // chatot_chatter(CHATOT_SEVERITY_FATAL, "Chatot used Chatter!");

    return 0;
}