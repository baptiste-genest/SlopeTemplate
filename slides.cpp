#include "slope.h"

using namespace slope;


void loadExample(DeckLoader& deck) {
    auto mesh = Mesh::Add("spot.obj");

    auto X = mesh->getVertices();

    auto deform = Snippet::fn<vec(scalar,scalar,scalar)>("displacement");

    mesh->updater = [=](TimeObject t) {
        auto V = X;
        for (size_t i = 0; i < V.size(); i++) {
            auto v = V[i];
            auto d = deform(v[0], v[1], v[2]);
            V[i] += d;
        }
        mesh->updateMesh(V);
    };

    deck.registerObject("spot",mesh);
}

int main(int argc, char** argv) {
    DeckLoader deck;

    deck.init("slope_project", "deck.yaml", argc, argv);

    loadExample(deck);

    deck.run();
    return 0;
}
