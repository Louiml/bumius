class setcolor{
    public:
        const char* reset = "\u001b[0m";
        const char* black = "\u001b[30m";
        const char* red = "\u001b[31m";
        const char* green = "\u001b[32m";
        const char* yellow = "\u001b[33m";
        const char* blue = "\u001b[34m";
        const char* magenta = "\u001b[35m";
        const char* cyan = "\u001b[36m";
        const char* white = "\u001b[37m";
        const char* bright_black = "\u001b[30m;1";
        const char* bright_red = "\u001b[31;1m";
        const char* bright_green = "\u001b[32;1m";
        const char* bright_yellow = "\u001b[33;1m";
        const char* bright_blue = "\u001b[34;1m";
        const char* bright_magenta = "\u001b[35;1m";
        const char* bright_cyan = "\u001b[36;1m";
        const char* bright_white = "\u001b[37;1m";
            class bg{
                public:
                    const char* black = "\u001b[40m";
                    const char* red = "\u001b[41m";
                    const char* green = "\u001b[42m";
                    const char* yellow = "\u001b[43m";
                    const char* blue = "\u001b[44m";
                    const char* magenta = "\u001b[45m";
                    const char* cyan = "\u001b[46m";
                    const char* white = "\u001b[47m";
                    const char* bright_black = "\u001b[40m;1";
                    const char* bright_red = "\u001b[41;1m";
                    const char* bright_green = "\u001b[42;1m";
                    const char* bright_yellow = "\u001b[43;1m";
                    const char* bright_blue = "\u001b[44;1m";
                    const char* bright_magenta = "\u001b[45;1m";
                    const char* bright_cyan = "\u001b[46;1m";
                    const char* bright_white = "\u001b[47;1m";
            };
bg background;
};
setcolor color;
class thefonts{
  public:
    const char* bold = "\u001b[1m";
    const char* underline = "\u001b[4m";
};
thefonts font;