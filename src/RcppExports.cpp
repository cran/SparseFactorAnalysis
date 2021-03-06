// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// hmc4sfa
Rcpp::List hmc4sfa(int num_HMC, arma::vec q, arma::vec p, arma::vec params, double del, double step_size, arma::mat Theta_last_0, arma::imat votes_mat, arma::vec cutoff_seq, double current_U, arma::vec q0);
RcppExport SEXP SparseFactorAnalysis_hmc4sfa(SEXP num_HMCSEXP, SEXP qSEXP, SEXP pSEXP, SEXP paramsSEXP, SEXP delSEXP, SEXP step_sizeSEXP, SEXP Theta_last_0SEXP, SEXP votes_matSEXP, SEXP cutoff_seqSEXP, SEXP current_USEXP, SEXP q0SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type num_HMC(num_HMCSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< double >::type del(delSEXP);
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta_last_0(Theta_last_0SEXP);
    Rcpp::traits::input_parameter< arma::imat >::type votes_mat(votes_matSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cutoff_seq(cutoff_seqSEXP);
    Rcpp::traits::input_parameter< double >::type current_U(current_USEXP);
    Rcpp::traits::input_parameter< arma::vec >::type q0(q0SEXP);
    __result = Rcpp::wrap(hmc4sfa(num_HMC, q, p, params, del, step_size, Theta_last_0, votes_mat, cutoff_seq, current_U, q0));
    return __result;
END_RCPP
}
