#ifndef SNN
#define SNN

#include <RcppEigen.h>
#include "data_manipulation.h"
#include <progress.hpp>
#include <cmath>
#include <unordered_map>
#include <fstream>
#include <string>

using namespace Rcpp;

//----------------------------------------------------
Eigen::SparseMatrix<double> ComputeSNN(Eigen::MatrixXd nn_large, Eigen::MatrixXd nn_ranked, double prune, bool display_progress);
void WriteEdgeFile(Eigen::SparseMatrix<double> snn, String filename, bool display_progress);
//----------------------------------------------------

#endif//SNN
