#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>
#include <iostream>

#include "btimest.h"

using namespace std;

/* Get the list of files in a specific directory
 * Params:
 *  dir = directory
 *  files = vector with discovered files
 *  exts = file extensions to discover
 *  Returns:
 *   Error number if necessary
 */
int getfiles (string dir, vector<string> &files, vector<string> &exts) // getdirs
{
    DIR *dp;
    struct dirent *dirp;
    if((dp = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        for (unsigned int i=0;i<exts.size();i++)
        {
            string d_name = string(dirp->d_name);
            std::size_t found = d_name.find(exts[i]);
            if(found != std::string::npos)
                files.push_back(d_name);
        }
    }
    closedir(dp);
    return 0;
}
/*Get estimated build time from listed files
 *Params:
 * files = files to evaluate
 *Returns:
 * Build time in seconds
 */
float getbuildtime(vector<string> &files)
{
 return (float)files.size();
}

