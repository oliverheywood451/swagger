/**
 * @fileoverview AUTOMATICALLY GENERATED service for API.Client.BuyerApi.
 * Do not edit this file by hand or your changes will be lost next time it is
 * generated.
 *
 * A full ecommerce backend as a service.
 * Version: 0.1
 * Generated at: 2016-07-26T21:58:06.393Z
 * Generated by: class io.swagger.codegen.languages.JavascriptClosureAngularClientCodegen
 */
goog.provide('API.Client.BuyerApi');

goog.require('API.Client.Buyer');

/**
 * @constructor
 * @param {!angular.$http} $http
 * @param {!Object} $httpParamSerializer
 * @param {!angular.$injector} $injector
 * @struct
 */
API.Client.BuyerApi = function($http, $httpParamSerializer, $injector) {
  /** @private {!string} */
  this.basePath_ = $injector.has('BuyerApiBasePath') ?
                   /** @type {!string} */ ($injector.get('BuyerApiBasePath')) :
                   'https://api.ordercloud.io/v1';

  /** @private {!Object<string, string>} */
  this.defaultHeaders_ = $injector.has('BuyerApiDefaultHeaders') ?
                   /** @type {!Object<string, string>} */ (
                       $injector.get('BuyerApiDefaultHeaders')) :
                   {};

  /** @private {!angular.$http} */
  this.http_ = $http;

  /** @package {!Object} */
  this.httpParamSerializer = $injector.get('$httpParamSerializer');
}
API.Client.BuyerApi.$inject = ['$http', '$httpParamSerializer', '$injector'];

/**
 * 
 * 
 * @param {!Buyer} company 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.BuyerApi.prototype.create = function(company, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/buyers';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'company' is set
  if (!company) {
    throw new Error('Missing required parameter company when calling create');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: company,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} buyerID ID of the buyer.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise}
 */
API.Client.BuyerApi.prototype.delete = function(buyerID, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/buyers/{buyerID}'
      .replace('{' + 'buyerID' + '}', String(buyerID));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'buyerID' is set
  if (!buyerID) {
    throw new Error('Missing required parameter buyerID when calling delete');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'DELETE',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} buyerID ID of the buyer.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.BuyerApi.prototype.get = function(buyerID, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/buyers/{buyerID}'
      .replace('{' + 'buyerID' + '}', String(buyerID));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'buyerID' is set
  if (!buyerID) {
    throw new Error('Missing required parameter buyerID when calling get');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string=} opt_search Word or phrase to search for.
 * @param {!number=} opt_page Page of results to return. Default: 1
 * @param {!number=} opt_pageSize Number of results to return per page. Default: 20, max: 100.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.BuyerApi.prototype.list = function(opt_search, opt_page, opt_pageSize, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/buyers';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  if (opt_search !== undefined) {
    queryParameters['search'] = opt_search;
  }

  if (opt_page !== undefined) {
    queryParameters['page'] = opt_page;
  }

  if (opt_pageSize !== undefined) {
    queryParameters['pageSize'] = opt_pageSize;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} buyerID ID of the buyer.
 * @param {!Buyer} company 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.BuyerApi.prototype.update = function(buyerID, company, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/buyers/{buyerID}'
      .replace('{' + 'buyerID' + '}', String(buyerID));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'buyerID' is set
  if (!buyerID) {
    throw new Error('Missing required parameter buyerID when calling update');
  }
  // verify required parameter 'company' is set
  if (!company) {
    throw new Error('Missing required parameter company when calling update');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'PUT',
    url: path,
    json: true,
    data: company,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}
