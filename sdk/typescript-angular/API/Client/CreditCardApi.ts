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

    export class CreditCardApi {
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
         * @param creditCardID ID of the credit card.
         */
        public _delete (buyerID: string, creditCardID: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/creditcards/{creditCardID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'creditCardID' + '}', String(creditCardID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling _delete.');
            }
            // verify required parameter 'creditCardID' is not null or undefined
            if (creditCardID === null || creditCardID === undefined) {
                throw new Error('Required parameter creditCardID was null or undefined when calling _delete.');
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
         * @param card 
         */
        public create (buyerID: string, card: CreditCard, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/creditcards'
                .replace('{' + 'buyerID' + '}', String(buyerID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling create.');
            }
            // verify required parameter 'card' is not null or undefined
            if (card === null || card === undefined) {
                throw new Error('Required parameter card was null or undefined when calling create.');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: card,
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
         * @param creditCardID ID of the credit card.
         * @param userID ID of the user.
         * @param userGroupID ID of the user group.
         */
        public deleteAssignment (buyerID: string, creditCardID: string, userID?: string, userGroupID?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/creditcards/{creditCardID}/assignments'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'creditCardID' + '}', String(creditCardID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling deleteAssignment.');
            }
            // verify required parameter 'creditCardID' is not null or undefined
            if (creditCardID === null || creditCardID === undefined) {
                throw new Error('Required parameter creditCardID was null or undefined when calling deleteAssignment.');
            }
            if (userID !== undefined) {
                queryParameters['userID'] = userID;
            }

            if (userGroupID !== undefined) {
                queryParameters['userGroupID'] = userGroupID;
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
         * @param creditCardID ID of the credit card.
         */
        public get (buyerID: string, creditCardID: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/creditcards/{creditCardID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'creditCardID' + '}', String(creditCardID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling get.');
            }
            // verify required parameter 'creditCardID' is not null or undefined
            if (creditCardID === null || creditCardID === undefined) {
                throw new Error('Required parameter creditCardID was null or undefined when calling get.');
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
         * @param search Word or phrase to search for.
         * @param searchOn Comma-delimited list of fields to search on.
         * @param sortBy Comma-delimited list of fields to sort by.
         * @param page Page of results to return. Default: 1
         * @param pageSize Number of results to return per page. Default: 20, max: 100.
         */
        public list (buyerID: string, search?: string, searchOn?: string, sortBy?: string, page?: number, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/creditcards'
                .replace('{' + 'buyerID' + '}', String(buyerID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling list.');
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
         * @param creditCardID ID of the credit card.
         * @param userID ID of the user.
         * @param userGroupID ID of the user group.
         * @param level Level of the credit card.
         * @param page Page of results to return. Default: 1
         * @param pageSize Number of results to return per page. Default: 20, max: 100.
         */
        public listAssignments (buyerID: string, creditCardID?: string, userID?: string, userGroupID?: string, level?: string, page?: number, pageSize?: number, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/creditcards/assignments'
                .replace('{' + 'buyerID' + '}', String(buyerID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling listAssignments.');
            }
            if (creditCardID !== undefined) {
                queryParameters['creditCardID'] = creditCardID;
            }

            if (userID !== undefined) {
                queryParameters['userID'] = userID;
            }

            if (userGroupID !== undefined) {
                queryParameters['userGroupID'] = userGroupID;
            }

            if (level !== undefined) {
                queryParameters['level'] = level;
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
         * @param creditCardID ID of the credit card.
         * @param card 
         */
        public patch (buyerID: string, creditCardID: string, card: CreditCard, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/creditcards/{creditCardID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'creditCardID' + '}', String(creditCardID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling patch.');
            }
            // verify required parameter 'creditCardID' is not null or undefined
            if (creditCardID === null || creditCardID === undefined) {
                throw new Error('Required parameter creditCardID was null or undefined when calling patch.');
            }
            // verify required parameter 'card' is not null or undefined
            if (card === null || card === undefined) {
                throw new Error('Required parameter card was null or undefined when calling patch.');
            }
            let httpRequestParams: any = {
                method: 'PATCH',
                url: localVarPath,
                json: true,
                data: card,
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
         * @param assignment 
         */
        public saveAssignment (buyerID: string, assignment: CreditCardAssignment, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/creditcards/assignments'
                .replace('{' + 'buyerID' + '}', String(buyerID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling saveAssignment.');
            }
            // verify required parameter 'assignment' is not null or undefined
            if (assignment === null || assignment === undefined) {
                throw new Error('Required parameter assignment was null or undefined when calling saveAssignment.');
            }
            let httpRequestParams: any = {
                method: 'POST',
                url: localVarPath,
                json: true,
                data: assignment,
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
         * @param creditCardID ID of the credit card.
         * @param card 
         */
        public update (buyerID: string, creditCardID: string, card: CreditCard, extraHttpRequestParams?: any ) : ng.IHttpPromise<any> {
            const localVarPath = this.basePath + '/buyers/{buyerID}/creditcards/{creditCardID}'
                .replace('{' + 'buyerID' + '}', String(buyerID))
                .replace('{' + 'creditCardID' + '}', String(creditCardID));

            let queryParameters: any = {};
            let headerParams: any = this.extendObj({}, this.defaultHeaders);
            // verify required parameter 'buyerID' is not null or undefined
            if (buyerID === null || buyerID === undefined) {
                throw new Error('Required parameter buyerID was null or undefined when calling update.');
            }
            // verify required parameter 'creditCardID' is not null or undefined
            if (creditCardID === null || creditCardID === undefined) {
                throw new Error('Required parameter creditCardID was null or undefined when calling update.');
            }
            // verify required parameter 'card' is not null or undefined
            if (card === null || card === undefined) {
                throw new Error('Required parameter card was null or undefined when calling update.');
            }
            let httpRequestParams: any = {
                method: 'PUT',
                url: localVarPath,
                json: true,
                data: card,
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