#include <iostream>
#include <unistd.h>
#include "./include/plug.hpp"
using namespace std;
void terminal_show(){
    char location[256];
    getcwd(location, 256);
    cout << color.bright_yellow << font.bold << "bumius" << color.reset << "::" << color.bright_red << font.underline << location << color.reset << "$ ";
    string cli;
    cin >> cli;
    if(cli == "help"){
        cout << "GNU mbash, version 0.1(0)" << endl;
        cout << "help - show all the CLIs" << endl;
        cout << "bash - back to bash" << endl;
        cout << "home-show - print the main function in the console" << endl;
        cout << "youtube.com - open youtube.com in the browser" << endl;
        cout << "github.com - open github.com in the browser" << endl;
        cout << "monday.com - open monday.com in the browser" << endl;
        cout << "whatsapp.com - open web.whatsapp.com in the browser" << endl;
        terminal_show();
    }else if(cli == "clear"){
        system("clear");
        terminal_show();
    }else if(cli == "home-show"){
        cout << color.blue << "Welcome to Bumius terminal" << endl << color.bright_cyan << "To run a command as administrator (user \"root\"), use \"admin <command>\".\n See \"man admin_root\" for detalis." << color.reset << endl << endl;
        terminal_show();
    }else if(cli == "youtube.com"){
        system("open https://youtube.com");
        terminal_show();
    }else if(cli == "github.com"){
        system("open https://github.com");
        terminal_show();
    }else if(cli == "monday.com"){
        system("open https:/monday.com");
        terminal_show();
    }else if(cli == "whatsapp.com"){
        system("open https://web.whatsapp.com");
        terminal_show();
    }else if(cli == "bash"){
        system("bash");
    }else{
        cout << color.bright_red << cli << ": command not found" << endl;
        cout << color.bright_green << "Try \"help\" command line" << endl;
        terminal_show();
    }
}
int main(){
    cout << color.blue << "Welcome to Bumius terminal" << endl << color.bright_cyan << "To run a command as administrator (user \"root\"), use \"admin <command>\".\n See \"man admin_root\" for detalis." << color.reset << endl << endl;
    terminal_show();
}