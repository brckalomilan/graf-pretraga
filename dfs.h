#ifndef DFS_H_INCLUDED
#define DFS_H_INCLUDED

void dfs(GraphMatrix g, int startIndex) {
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

    dfs_visit(g, visit, startIndex);
}

void dfs_visit(GraphMatrix g, int* visit, int startIndex) {
    visit[startIndex] = 1;

    printf("%d ", startIndex + 1);

    int i;
    for (i = 0; i < g.dimension; i++) {
        if (g.matrix[startIndex][i] && !visit[i]) {
            dfs_visit(g, visit, i); // Rekurzivna pretraga u dubinu od cvora i.
        }
    }
}

#endif // DFS_H_INCLUDED
