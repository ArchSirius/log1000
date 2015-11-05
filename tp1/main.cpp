#include <vector>
#include <string>
#include <iostream>

#include "btimest.h"

using namespace std;

/*Build time evaluator Software
 *Prints out the evaluated build time
 *Cmd inputs:
 * arg[1] = directory with evaluated source code
 * arg[2:] = file extensions to evaluate
 *
 * Outputs:
 * Prints evaluated files and evaluated  time
 * 
 *Example:
 * ./%YOUR EXEC NAME% "./" ".cc" ".h"
 */
int main(int argc, char *argv[])
{
    //Get files included in the build
    string dir = string(".");
    vector<string> exts = vector<string>();
    if (argc >= 2)
    {
        dir = argv[1];
    }
    if (argc >= 3)
    {
        for(unsigned int i=0;i<argc-2;i++)
        {
            exts.push_back(argv[i+2]);
        }
    }
    vector<string> files = vector<string>();
    
    //Calculate and show build estimated time
    getfiles(dir, files, exts);
    cout << "Estimated build time: "<< getbuildtime(files) << " seconds" << endl;
    return 0;
}

