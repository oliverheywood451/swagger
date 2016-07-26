/**
 * OrderCloud
 * A full ecommerce backend as a service.
 *
 * OpenAPI spec version: 0.1
 * Contact: ordercloud@four51.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/// <reference path="api.d.ts" />

/* tslint:disable:no-unused-variable member-ordering */

namespace API.Client {
    'use strict';

    export class PaymentApi {
        protected basePath = 'https://api.ordercloud.io/v1';
        public defaultHeaders : any = {};

        static $inject: string[] = ['$http', '$httpParamSerializer', 'basePath'];

        constructor(protected $http: ng.IHttpService, protected $httpParamSerializer?: (d: any) => any, basePath?: string) {
            if (basePath !== undefined) {
                this.basePath = basePath;
            }
        }

        private extendObj<T1,T2>(objA: T1, objB: T2) {
            for(let key in objB){
                if(objB.hasOwnProperty(key)){
                    objA[key] = objB[key];
                }
            }
            return <T1&T2>objA;
        }

        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param paymentID ID of the payment.
         */
        public _delete (buyerID: string, orderID: string, paymentID: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID))
                .replace('{' + 'paymentID' + '}', String(paymentID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling _delete.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling _delete.');
            }
            // verify required parameter 'paymentID' is not null or undefined
            if (paymentID === null || paymentID === undefined) {
                throw new Error('Required parameter paymentID was null or undefined when calling _delete.');
            }
            let httpRequestParams: any = {
                method: 'DELETE',
                url: localVarPath,
                json: true,
                                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param payment 
         */
        public create (buyerID: string, orderID: string, payment: Payment, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling create.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling create.');
            }
            // verify required parameter 'payment' is not null or undefined
            if (payment === null || payment === undefined) {
                throw new Error('Required parameter payment was null or undefined when calling create.');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: payment,
                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param paymentID ID of the payment.
         * @param transaction 
         */
        public createTransaction (buyerID: string, orderID: string, paymentID: string, transaction: PaymentTransaction, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID))
                .replace('{' + 'paymentID' + '}', String(paymentID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling createTransaction.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling createTransaction.');
            }
            // verify required parameter 'paymentID' is not null or undefined
            if (paymentID === null || paymentID === undefined) {
                throw new Error('Required parameter paymentID was null or undefined when calling createTransaction.');
            }
            // verify required parameter 'transaction' is not null or undefined
            if (transaction === null || transaction === undefined) {
                throw new Error('Required parameter transaction was null or undefined when calling createTransaction.');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: transaction,
                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param paymentID ID of the payment.
         * @param transactionID ID of the transaction.
         */
        public deleteTransaction (buyerID: string, orderID: string, paymentID: string, transactionID: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions/{transactionID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID))
                .replace('{' + 'paymentID' + '}', String(paymentID))
                .replace('{' + 'transactionID' + '}', String(transactionID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling deleteTransaction.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling deleteTransaction.');
            }
            // verify required parameter 'paymentID' is not null or undefined
            if (paymentID === null || paymentID === undefined) {
                throw new Error('Required parameter paymentID was null or undefined when calling deleteTransaction.');
            }
            // verify required parameter 'transactionID' is not null or undefined
            if (transactionID === null || transactionID === undefined) {
                throw new Error('Required parameter transactionID was null or undefined when calling deleteTransaction.');
            }
            let httpRequestParams: any = {
                method: 'DELETE',
                url: localVarPath,
                json: true,
                                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param paymentID ID of the payment.
         */
        public get (buyerID: string, orderID: string, paymentID: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID))
                .replace('{' + 'paymentID' + '}', String(paymentID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling get.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling get.');
            }
            // verify required parameter 'paymentID' is not null or undefined
            if (paymentID === null || paymentID === undefined) {
                throw new Error('Required parameter paymentID was null or undefined when calling get.');
            }
            let httpRequestParams: any = {
                method: 'GET',
                url: localVarPath,
                json: true,
                                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param search Word or phrase to search for.
         * @param searchOn Comma-delimited list of fields to search on.
         * @param sortBy Comma-delimited list of fields to sort by.
         * @param page Page of results to return. Default: 1
         * @param pageSize Number of results to return per page. Default: 20, max: 100.
         */
        public list (buyerID: string, orderID: string, search?: string, searchOn?: string, sortBy?: string, page?: number, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling list.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling list.');
            }
            if (search !== undefined) {
                queryParameters['search'] = search;
            }

            if (searchOn !== undefined) {
                queryParameters['searchOn'] = searchOn;
            }

            if (sortBy !== undefined) {
                queryParameters['sortBy'] = sortBy;
            }

            if (page !== undefined) {
                queryParameters['page'] = page;
            }

            if (pageSize !== undefined) {
                queryParameters['pageSize'] = pageSize;
            }

            let httpRequestParams: any = {
                method: 'GET',
                url: localVarPath,
                json: true,
                                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param paymentID ID of the payment.
         * @param partialPayment 
         */
        public patch (buyerID: string, orderID: string, paymentID: string, partialPayment: Payment, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID))
                .replace('{' + 'paymentID' + '}', String(paymentID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling patch.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling patch.');
            }
            // verify required parameter 'paymentID' is not null or undefined
            if (paymentID === null || paymentID === undefined) {
                throw new Error('Required parameter paymentID was null or undefined when calling patch.');
            }
            // verify required parameter 'partialPayment' is not null or undefined
            if (partialPayment === null || partialPayment === undefined) {
                throw new Error('Required parameter partialPayment was null or undefined when calling patch.');
            }
            let httpRequestParams: any = {
                method: 'PATCH',
                url: localVarPath,
                json: true,
                data: partialPayment,
                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param paymentID ID of the payment.
         * @param transactionID ID of the transaction.
         * @param partialTransaction 
         */
        public patchTransaction (buyerID: string, orderID: string, paymentID: string, transactionID: string, partialTransaction: PaymentTransaction, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions/{transactionID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID))
                .replace('{' + 'paymentID' + '}', String(paymentID))
                .replace('{' + 'transactionID' + '}', String(transactionID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling patchTransaction.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling patchTransaction.');
            }
            // verify required parameter 'paymentID' is not null or undefined
            if (paymentID === null || paymentID === undefined) {
                throw new Error('Required parameter paymentID was null or undefined when calling patchTransaction.');
            }
            // verify required parameter 'transactionID' is not null or undefined
            if (transactionID === null || transactionID === undefined) {
                throw new Error('Required parameter transactionID was null or undefined when calling patchTransaction.');
            }
            // verify required parameter 'partialTransaction' is not null or undefined
            if (partialTransaction === null || partialTransaction === undefined) {
                throw new Error('Required parameter partialTransaction was null or undefined when calling patchTransaction.');
            }
            let httpRequestParams: any = {
                method: 'PATCH',
                url: localVarPath,
                json: true,
                data: partialTransaction,
                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param paymentID ID of the payment.
         * @param payment 
         */
        public update (buyerID: string, orderID: string, paymentID: string, payment: Payment, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID))
                .replace('{' + 'paymentID' + '}', String(paymentID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling update.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling update.');
            }
            // verify required parameter 'paymentID' is not null or undefined
            if (paymentID === null || paymentID === undefined) {
                throw new Error('Required parameter paymentID was null or undefined when calling update.');
            }
            // verify required parameter 'payment' is not null or undefined
            if (payment === null || payment === undefined) {
                throw new Error('Required parameter payment was null or undefined when calling update.');
            }
            let httpRequestParams: any = {
                method: 'PUT',
                url: localVarPath,
                json: true,
                data: payment,
                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
        /**
         * 
         * 
         * @param buyerID ID of the buyer.
         * @param orderID ID of the order.
         * @param paymentID ID of the payment.
         * @param transactionID ID of the transaction.
         * @param transaction 
         */
        public updateTransaction (buyerID: string, orderID: string, paymentID: string, transactionID: string, transaction: PaymentTransaction, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions/{transactionID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'orderID' + '}', String(orderID))
                .replace('{' + 'paymentID' + '}', String(paymentID))
                .replace('{' + 'transactionID' + '}', String(transactionID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling updateTransaction.');
            }
            // verify required parameter 'orderID' is not null or undefined
            if (orderID === null || orderID === undefined) {
                throw new Error('Required parameter orderID was null or undefined when calling updateTransaction.');
            }
            // verify required parameter 'paymentID' is not null or undefined
            if (paymentID === null || paymentID === undefined) {
                throw new Error('Required parameter paymentID was null or undefined when calling updateTransaction.');
            }
            // verify required parameter 'transactionID' is not null or undefined
            if (transactionID === null || transactionID === undefined) {
                throw new Error('Required parameter transactionID was null or undefined when calling updateTransaction.');
            }
            // verify required parameter 'transaction' is not null or undefined
            if (transaction === null || transaction === undefined) {
                throw new Error('Required parameter transaction was null or undefined when calling updateTransaction.');
            }
            let httpRequestParams: any = {
                method: 'PUT',
                url: localVarPath,
                json: true,
                data: transaction,
                                params: queryParameters,
                headers: headerParams
            };

            if (extraHttpRequestParams) {
                httpRequestParams = this.extendObj(httpRequestParams, extraHttpRequestParams);
            }

            return this.$http(httpRequestParams);
        }
    }
}
