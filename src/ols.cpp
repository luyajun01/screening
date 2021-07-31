#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::export]]

arma::vec ols(arma::mat x,
              arma::vec y,
              int n){
  arma::vec ols = x.t()*arma::solve(x*x.t() + arma::eye(n,n), y);
  return(ols);
}