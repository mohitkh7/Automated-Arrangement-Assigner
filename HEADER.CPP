// header
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<dos.h>
#include<graphics.h>
void menu();
void admin();
char subcode [][20]={" Free Period "," Physics "," Chemistry "," Biology "," Computer "," Hindi "," English "," Buisness Studies "," Accounts "," Economics "," Mathematics "," Social Science "," Sanskrit "," Science "," Games "," Arts "," Music "," General Studies "," SUPW "," Environment "," Library","CCA"};
char subshort[][20]={" Free"," Phy"," Chem"," Bio"," Comp"," Hin"," Eng"," BS "," Acc"," Eco"," Math"," SST"," Sans"," Sci"," Game"," Art"," Mus"," GS "," WE "," Env"," Lib","CCA"};
char classcode[][20]={" "," Class I "," Class II "," Class III "," Class IV "," Class V "," Class VI "," Class VII "," Class VIII "," Class IX "," Class X "," Class XI Sc "," Class XII Sc "," Class XI Com "," Class XII Com "," Class XI Hin "," Class XII Hin "," Class XI CS "," Class XII CS "," Class XI Math "," Class XII Math "," Class XI Bio "," Class XII Bio "," All Class "};
char classshort[][10]={" ","1","2","3","4","5","6","7","8","9","10"," 11S"," 12S"," 11C"," 12C"," 11H"," 12H","11Cs","12Cs"," 11M"," 12M"," 11B"," 12B"," All"};
	//int td,tm,ty,tw;
//#include"c:\turboc3\bin\file\time\date.cpp"

#include"c:\turboc3\bin\file\time\sound.cpp"
#include"c:\turboc3\bin\file\time\intro.cpp"
#include"c:\turboc3\bin\file\time\display.cpp"
#include"c:\turboc3\bin\file\time\password.cpp"
#include"c:\turboc3\bin\file\time\Number.cpp"
#include"c:\turboc3\bin\file\time\date.cpp"
#include "c:\TurboC3\BIN\file\time\class.cpp"
#include"c:\turboc3\bin\file\time\filesize.cpp"
#include "c:\Turboc3\bin\file\time\showteachercode.cpp"
#include "c:\Turboc3\bin\file\time\showsub.cpp"
#include "c:\Turboc3\bin\file\time\showtime.cpp"
#include "c:\TurboC3\BIN\file\time\add.cpp"
#include "c:\turboc3\bin\file\time\sideclass.cpp"
#include "c:\turboc3\bin\file\time\showtd.cpp"
#include"c:\turboc3\bin\file\time\modify.cpp"
#include "c:\TurboC3\BIN\file\time\classarr.cpp"
#include "c:\TurboC3\BIN\file\time\viewarr.cpp"
#include "c:\TurboC3\BIN\file\time\arrangefun.cpp"
#include"c:\turboc3\bin\file\time\arrangment.cpp"
#include"c:\turboc3\bin\file\time\delete.cpp"
#include "c:\Turboc3\bin\file\time\menutime.cpp"
#include "c:\TurboC3\BIN\file\time\menucode.cpp"
#include "c:\Turboc3\bin\file\time\backup.cpp"
#include "c:\TurboC3\BIN\file\time\admin.cpp"
#include "c:\TurboC3\BIN\file\time\reset.cpp"
//#include "c:\TurboC3\BIN\file\time\stat.cpp"
#include "c:\TurboC3\BIN\file\time\menu.cpp"
