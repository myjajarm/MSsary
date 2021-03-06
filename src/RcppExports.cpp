// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mqCpp
List mqCpp(List scans, NumericVector scantime, double minIntensity, double minCentroids, double consecMissedLim, double ppm, double criticalVal, bool segs, bool scanBack);
RcppExport SEXP MSsary_mqCpp(SEXP scansSEXP, SEXP scantimeSEXP, SEXP minIntensitySEXP, SEXP minCentroidsSEXP, SEXP consecMissedLimSEXP, SEXP ppmSEXP, SEXP criticalValSEXP, SEXP segsSEXP, SEXP scanBackSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type scans(scansSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type scantime(scantimeSEXP );
        Rcpp::traits::input_parameter< double >::type minIntensity(minIntensitySEXP );
        Rcpp::traits::input_parameter< double >::type minCentroids(minCentroidsSEXP );
        Rcpp::traits::input_parameter< double >::type consecMissedLim(consecMissedLimSEXP );
        Rcpp::traits::input_parameter< double >::type ppm(ppmSEXP );
        Rcpp::traits::input_parameter< double >::type criticalVal(criticalValSEXP );
        Rcpp::traits::input_parameter< bool >::type segs(segsSEXP );
        Rcpp::traits::input_parameter< bool >::type scanBack(scanBackSEXP );
        List __result = mqCpp(scans, scantime, minIntensity, minCentroids, consecMissedLim, ppm, criticalVal, segs, scanBack);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getXIC
NumericMatrix getXIC(List scans, double mzmin, double mzmax);
RcppExport SEXP MSsary_getXIC(SEXP scansSEXP, SEXP mzminSEXP, SEXP mzmaxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type scans(scansSEXP );
        Rcpp::traits::input_parameter< double >::type mzmin(mzminSEXP );
        Rcpp::traits::input_parameter< double >::type mzmax(mzmaxSEXP );
        NumericMatrix __result = getXIC(scans, mzmin, mzmax);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// scanNoise
NumericVector scanNoise(NumericMatrix scan, double sn, double rho);
RcppExport SEXP MSsary_scanNoise(SEXP scanSEXP, SEXP snSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type scan(scanSEXP );
        Rcpp::traits::input_parameter< double >::type sn(snSEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        NumericVector __result = scanNoise(scan, sn, rho);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
