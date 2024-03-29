#include "logprint.h"

using namespace std;

    void Logprint::out(const string& logstr, vector<float>* lognumbers)
    {
        if(init == true)
        {
        (*logfile).open((params->run_dir + "\\" + "log.txt").c_str());
        *logfile << "> new log is initialized." << endl;
        }

        if(init == false)
        {
            if(lognumbers != nullptr)
            {
                for(size_t i = 0; i < (*lognumbers).size(); i++)
                {(*logfile) << (*lognumbers)[i] << " ";}

            *logfile << endl;
            }

        *logfile << logstr << endl;
        }
    }
