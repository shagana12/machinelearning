
#include "jpg.h"
#include "mnist.h"



int main(int argc, char** argv)
{
    if(argc < 2) {fprintf(stderr, "Please provide a mnist file\n"); exit(1); }
    string path = argv[1];

    float** data = read_mnist(path);

    for(int i=0; i<10000; i++) {
        printf("%u\n", i);
        save_jpg(data[i], 28, 28, "%u/%04u.jpg", i/1000, i%1000);
    }
    return 0;
}
