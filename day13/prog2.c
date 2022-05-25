#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv)
{

    FILE *fp;
    char buffer[4096];
    int total_words = 0;
    int total_lines = 0;
    int total_bytes = 0;

    for (int i = 1; i < argc; i++) {
        int res = 0;
        int word_count = 0;
        int line_count = 0;
        fp = fopen(argv[i], "r");

        if (fp != NULL) {
            while (!feof(fp)) {
                res = fread(buffer, 1, (sizeof buffer)-1, fp);
                for (int i=0; i < res; i++) {
                    if ((isspace(buffer[i]) && !isspace(buffer[i+1])) ||
                            (!isspace(buffer[i]) && (i+1) == res)) {
                        ++word_count;
                    }
                    if (buffer[i]== '\n') {
                        ++line_count;
                    }
                }
            }
            fclose(fp);

            printf("%7d %7d %7d %s \n", line_count, word_count, res, argv[i]);

            total_words += word_count;
            total_lines += line_count;
            total_bytes += res;
        }
        else
            printf("wc: %s: open: No such file or directory \n", argv[i]);
    }
    if (argc > 2) {
        printf("%7d %7d %7d total \n", total_lines, total_words, total_bytes);
    }



    return 0;
}
