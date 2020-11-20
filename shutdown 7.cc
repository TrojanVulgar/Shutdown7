/*ShutDown Win 7 only by Cesar Versatti*/ 

#include <iostream.h>
#include <stdlib.h>

main()
{
char ch;
cout<< Do you want to shutdown your computer now(y/n)\n,
cin>>ch;

if(ch == 'y' ||ch == "Y")

System(C:\\WINDOWS\\System32\\Shutdown/s");
 /*shutdown command*/

return 0;
} 