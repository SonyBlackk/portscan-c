#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./portscanner <IP_ADDRESS>\n");
        return -1;
    }

    int sock;
    struct sockaddr_in server_addr;
    int port;
    char *host;

    host = argv[1];
    server_addr.sin_addr.s_addr = inet_addr(host);
    server_addr.sin_family = AF_INET;

    for (port = 1; port <= 5000; port++) {
        sock = socket(AF_INET, SOCK_STREAM, 0);
        if (sock == -1) {
            printf("Erro ao criar o socket\n");
            continue;  // Ignora esta porta e tenta a próxima
        }

        server_addr.sin_port = htons(port);
        
        if (connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) >= 0) {
            printf("Port %d is open\n", port);
        }

        close(sock);
    }

    return 0;
}
