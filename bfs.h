#ifndef BFS_H_INCLUDED
#define BFS_H_INCLUDED

void bfs(GraphMatrix g, int startIndex) {
    // Validacija proslijedjenog indeksa.
    if (startIndex < 0 || startIndex >= g.dimension) {
        printf("Pogresan indeks!");

        return;
    }

    int* visit = (int*) malloc(sizeof(int) * g.dimension); // Inicijalizacija vektora posjecenosti.

    int i;
    for (i = 0; i < g.dimension; i++) {
        visit[i] = 0;
    }

    int* queue = (int*) malloc(sizeof(int) * g.dimension); // Inicijalizacija reda za cekanje.
    int head = 0;
    int tail = 0;

    visit[startIndex] = 1;

    printf("%d ", startIndex + 1);

    queue[tail] = startIndex; // Dodavanje u red.
    tail = (tail + 1) % g.dimension;

    // Izvrsavanje petlje dok red nije prazan.
    while (head != tail) {
        int current = queue[head]; // Uzimanje iz reda.
        head = (head + 1) % g.dimension;

        for (i = 0; i < g.dimension; i++) {
            // Za sve susjede od current koji nisu posjeceni.
            if (g.matrix[current][i] && !visit[i]) {
                visit[i] = 1; // Cvor postaje posjecen.
                queue[tail] = i; // Dodavanje u red.
                tail = (tail + 1) % g.dimension;

                printf("%d ", i + 1);
            }
        }
    }
}

#endif // BFS_H_INCLUDED
