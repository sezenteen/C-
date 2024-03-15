#include <stdio.h>
#include <limits.h>

#define V 6  // Grafik dakhi oroin too

// Khamgiin baga zainy utgatai oroig olokh funkts
int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
        if (sptSet[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

// Barigdsan zainy massivyg khevlekh funkts
void printSolution(int dist[]) {
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++) {
        printf("%d \t %d\n", i, dist[i]);
    }
}

// Diikstragiin neg ekh survaljiin khamgiin bogino zamyn algoritmyg kheregjüüldeg funkts
void dijkstra(int graph[V][V], int src) {
    int dist[V];     // dist[i] garaltyn massiv ni src-eesi khamgiin bogino zaig aguulna
    int sptSet[V];   // Kherev i oroi khamgiin bogino khesegt orson bol sptSet[i] ünen bolno
                     // zamyn mod esvel src-ees i khürtelkh khamgiin bogino zaig etseslen togtoono

    // Bükh zaig INFINITE, sptSet[]-g khudal gej ekhlüülne
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    // Ekh survaljiin oroig ööröös ni avakh zai ürgelj 0 baina
    dist[src] = 0;

    //Bükh oroin khamgiin bogino zamyg ol
    for (int count = 0; count < V - 1; count++) {
        // Kharaakhan bolovsruulaagüi oroinuudyn bagtsaas khamgiin baga zainy oroig songono uu.
        int u = minDistance(dist, sptSet);

        // Songoson oroig bolovsruulsan gej temdegle
        sptSet[u] = 1;

        //Songoson oroin zergeldeekh oroinuudyn dist utgyg shinechilne üü.
        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    //Barigdsan zainy massivyg khevle
    printSolution(dist);
}

int main() {
    int graph[V][V] = {
        {0, 4, 0, 0, 0, 0},
        {4, 0, 8, 0, 0, 0},
        {0, 8, 0, 7, 0, 4},
        {0, 0, 7, 0, 9, 14},
        {0, 0, 0, 9, 0, 10},
        {0, 0, 4, 14, 10, 0}
    };

    dijkstra(graph, 0);

    return 0;
}

