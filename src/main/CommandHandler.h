#ifndef __COMMANDHANDLER__
#define __COMMANDHANDLER__
#include <string>

/*
handler functions for the http commands this server supports
*/

namespace stellar
{
    class Application;

    class CommandHandler
    {

        Application& mApp;
    public:
        CommandHandler(Application& app);

        void stop(const std::string& params, std::string& retStr);
        void peers(const std::string& params, std::string& retStr);
        void info(const std::string& params, std::string& retStr);
        void reloadCfg(const std::string& params, std::string& retStr);
        void logRotate(const std::string& params, std::string& retStr);
        void connect(const std::string& params,std::string& retStr);
        void tx(const std::string& params, std::string& retStr);
    };
}

#endif