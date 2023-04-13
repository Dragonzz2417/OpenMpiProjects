#include <mpi.h>
#include <iostream>

int main(int argc, char** argv){
    MPI_Init(&argc, &argv);
    int world_size, world_rank;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    std::cout << "Current Process : " << world_rank \
    << "\tTotal Process : " << world_size << std::endl;

    MPI_Finalize();
}