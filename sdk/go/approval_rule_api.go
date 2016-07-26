/* 
 * OrderCloud
 *
 * A full ecommerce backend as a service.
 *
 * OpenAPI spec version: 0.1
 * Contact: ordercloud@four51.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package OrderCloud

import (
	"strings"
	"fmt"
	"errors"
	"net/url"
	"encoding/json"
)

type ApprovalRuleApi struct {
	Configuration Configuration
}

func NewApprovalRuleApi() *ApprovalRuleApi {
	configuration := NewConfiguration()
	return &ApprovalRuleApi{
		Configuration: *configuration,
	}
}

func NewApprovalRuleApiWithBasePath(basePath string) *ApprovalRuleApi {
	configuration := NewConfiguration()
	configuration.BasePath = basePath

	return &ApprovalRuleApi{
		Configuration: *configuration,
	}
}

/**
 * 
 *
 * @param buyerID ID of the buyer.
 * @param approvalRule 
 * @return *Object
 */
func (a ApprovalRuleApi) Create(buyerID string, approvalRule ApprovalRule) (*Object, *APIResponse, error) {

	var httpMethod = "Post"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/approvalrules"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling ApprovalRuleApi->Create")
	}
	// verify the required parameter 'approvalRule' is set
	if &approvalRule == nil {
		return new(Object), nil, errors.New("Missing required parameter 'approvalRule' when calling ApprovalRuleApi->Create")
	}

	headerParams := make(map[string]string)
	queryParams := url.Values{}
	formParams := make(map[string]string)
	var postBody interface{}
	var fileName string
	var fileBytes []byte
	// authentication (auth) required

	// oauth required
	if a.Configuration.AccessToken != ""{
		headerParams["Authorization"] =  "Bearer " + a.Configuration.AccessToken
	}
	// add default headers if any
	for key := range a.Configuration.DefaultHeader {
		headerParams[key] = a.Configuration.DefaultHeader[key]
	}


	// to determine the Content-Type header
	localVarHttpContentTypes := []string{  }

	// set Content-Type header
	localVarHttpContentType := a.Configuration.APIClient.SelectHeaderContentType(localVarHttpContentTypes)
	if localVarHttpContentType != "" {
		headerParams["Content-Type"] = localVarHttpContentType
	}
	// to determine the Accept header
	localVarHttpHeaderAccepts := []string{
			}

	// set Accept header
	localVarHttpHeaderAccept := a.Configuration.APIClient.SelectHeaderAccept(localVarHttpHeaderAccepts)
	if localVarHttpHeaderAccept != "" {
		headerParams["Accept"] = localVarHttpHeaderAccept
	}
	// body params
	postBody = &approvalRule

	var successPayload = new(Object)
	httpResponse, err := a.Configuration.APIClient.CallAPI(path, httpMethod, postBody, headerParams, queryParams, formParams, fileName, fileBytes)
	if err != nil {
		return successPayload, NewAPIResponse(httpResponse.RawResponse), err
	}
	err = json.Unmarshal(httpResponse.Body(), &successPayload)
	return successPayload, NewAPIResponse(httpResponse.RawResponse), err
}

/**
 * 
 *
 * @param buyerID ID of the buyer.
 * @param approvalRuleID ID of the approval rule.
 * @return void
 */
func (a ApprovalRuleApi) Delete(buyerID string, approvalRuleID string) (*APIResponse, error) {

	var httpMethod = "Delete"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/approvalrules/{approvalRuleID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"approvalRuleID"+"}", fmt.Sprintf("%v", approvalRuleID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return nil, errors.New("Missing required parameter 'buyerID' when calling ApprovalRuleApi->Delete")
	}
	// verify the required parameter 'approvalRuleID' is set
	if &approvalRuleID == nil {
		return nil, errors.New("Missing required parameter 'approvalRuleID' when calling ApprovalRuleApi->Delete")
	}

	headerParams := make(map[string]string)
	queryParams := url.Values{}
	formParams := make(map[string]string)
	var postBody interface{}
	var fileName string
	var fileBytes []byte
	// authentication (auth) required

	// oauth required
	if a.Configuration.AccessToken != ""{
		headerParams["Authorization"] =  "Bearer " + a.Configuration.AccessToken
	}
	// add default headers if any
	for key := range a.Configuration.DefaultHeader {
		headerParams[key] = a.Configuration.DefaultHeader[key]
	}


	// to determine the Content-Type header
	localVarHttpContentTypes := []string{  }

	// set Content-Type header
	localVarHttpContentType := a.Configuration.APIClient.SelectHeaderContentType(localVarHttpContentTypes)
	if localVarHttpContentType != "" {
		headerParams["Content-Type"] = localVarHttpContentType
	}
	// to determine the Accept header
	localVarHttpHeaderAccepts := []string{
			}

	// set Accept header
	localVarHttpHeaderAccept := a.Configuration.APIClient.SelectHeaderAccept(localVarHttpHeaderAccepts)
	if localVarHttpHeaderAccept != "" {
		headerParams["Accept"] = localVarHttpHeaderAccept
	}

	httpResponse, err := a.Configuration.APIClient.CallAPI(path, httpMethod, postBody, headerParams, queryParams, formParams, fileName, fileBytes)
	if err != nil {
		return NewAPIResponse(httpResponse.RawResponse), err
	}

	return NewAPIResponse(httpResponse.RawResponse), err
}

/**
 * 
 *
 * @param buyerID ID of the buyer.
 * @param approvalRuleID ID of the approval rule.
 * @return *Object
 */
func (a ApprovalRuleApi) Get(buyerID string, approvalRuleID string) (*Object, *APIResponse, error) {

	var httpMethod = "Get"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/approvalrules/{approvalRuleID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"approvalRuleID"+"}", fmt.Sprintf("%v", approvalRuleID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling ApprovalRuleApi->Get")
	}
	// verify the required parameter 'approvalRuleID' is set
	if &approvalRuleID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'approvalRuleID' when calling ApprovalRuleApi->Get")
	}

	headerParams := make(map[string]string)
	queryParams := url.Values{}
	formParams := make(map[string]string)
	var postBody interface{}
	var fileName string
	var fileBytes []byte
	// authentication (auth) required

	// oauth required
	if a.Configuration.AccessToken != ""{
		headerParams["Authorization"] =  "Bearer " + a.Configuration.AccessToken
	}
	// add default headers if any
	for key := range a.Configuration.DefaultHeader {
		headerParams[key] = a.Configuration.DefaultHeader[key]
	}


	// to determine the Content-Type header
	localVarHttpContentTypes := []string{  }

	// set Content-Type header
	localVarHttpContentType := a.Configuration.APIClient.SelectHeaderContentType(localVarHttpContentTypes)
	if localVarHttpContentType != "" {
		headerParams["Content-Type"] = localVarHttpContentType
	}
	// to determine the Accept header
	localVarHttpHeaderAccepts := []string{
			}

	// set Accept header
	localVarHttpHeaderAccept := a.Configuration.APIClient.SelectHeaderAccept(localVarHttpHeaderAccepts)
	if localVarHttpHeaderAccept != "" {
		headerParams["Accept"] = localVarHttpHeaderAccept
	}
	var successPayload = new(Object)
	httpResponse, err := a.Configuration.APIClient.CallAPI(path, httpMethod, postBody, headerParams, queryParams, formParams, fileName, fileBytes)
	if err != nil {
		return successPayload, NewAPIResponse(httpResponse.RawResponse), err
	}
	err = json.Unmarshal(httpResponse.Body(), &successPayload)
	return successPayload, NewAPIResponse(httpResponse.RawResponse), err
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
 * @return *Object
 */
func (a ApprovalRuleApi) List(buyerID string, search string, searchOn string, sortBy string, page int32, pageSize int32) (*Object, *APIResponse, error) {

	var httpMethod = "Get"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/approvalrules"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling ApprovalRuleApi->List")
	}

	headerParams := make(map[string]string)
	queryParams := url.Values{}
	formParams := make(map[string]string)
	var postBody interface{}
	var fileName string
	var fileBytes []byte
	// authentication (auth) required

	// oauth required
	if a.Configuration.AccessToken != ""{
		headerParams["Authorization"] =  "Bearer " + a.Configuration.AccessToken
	}
	// add default headers if any
	for key := range a.Configuration.DefaultHeader {
		headerParams[key] = a.Configuration.DefaultHeader[key]
	}
		queryParams.Add("search", a.Configuration.APIClient.ParameterToString(search, ""))
			queryParams.Add("searchOn", a.Configuration.APIClient.ParameterToString(searchOn, ""))
			queryParams.Add("sortBy", a.Configuration.APIClient.ParameterToString(sortBy, ""))
			queryParams.Add("page", a.Configuration.APIClient.ParameterToString(page, ""))
			queryParams.Add("pageSize", a.Configuration.APIClient.ParameterToString(pageSize, ""))
	

	// to determine the Content-Type header
	localVarHttpContentTypes := []string{  }

	// set Content-Type header
	localVarHttpContentType := a.Configuration.APIClient.SelectHeaderContentType(localVarHttpContentTypes)
	if localVarHttpContentType != "" {
		headerParams["Content-Type"] = localVarHttpContentType
	}
	// to determine the Accept header
	localVarHttpHeaderAccepts := []string{
			}

	// set Accept header
	localVarHttpHeaderAccept := a.Configuration.APIClient.SelectHeaderAccept(localVarHttpHeaderAccepts)
	if localVarHttpHeaderAccept != "" {
		headerParams["Accept"] = localVarHttpHeaderAccept
	}
	var successPayload = new(Object)
	httpResponse, err := a.Configuration.APIClient.CallAPI(path, httpMethod, postBody, headerParams, queryParams, formParams, fileName, fileBytes)
	if err != nil {
		return successPayload, NewAPIResponse(httpResponse.RawResponse), err
	}
	err = json.Unmarshal(httpResponse.Body(), &successPayload)
	return successPayload, NewAPIResponse(httpResponse.RawResponse), err
}

/**
 * 
 *
 * @param buyerID ID of the buyer.
 * @param approvalRuleID ID of the approval rule.
 * @param partialApprovalRule 
 * @return *Object
 */
func (a ApprovalRuleApi) Patch(buyerID string, approvalRuleID string, partialApprovalRule ApprovalRule) (*Object, *APIResponse, error) {

	var httpMethod = "Patch"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/approvalrules/{approvalRuleID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"approvalRuleID"+"}", fmt.Sprintf("%v", approvalRuleID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling ApprovalRuleApi->Patch")
	}
	// verify the required parameter 'approvalRuleID' is set
	if &approvalRuleID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'approvalRuleID' when calling ApprovalRuleApi->Patch")
	}
	// verify the required parameter 'partialApprovalRule' is set
	if &partialApprovalRule == nil {
		return new(Object), nil, errors.New("Missing required parameter 'partialApprovalRule' when calling ApprovalRuleApi->Patch")
	}

	headerParams := make(map[string]string)
	queryParams := url.Values{}
	formParams := make(map[string]string)
	var postBody interface{}
	var fileName string
	var fileBytes []byte
	// authentication (auth) required

	// oauth required
	if a.Configuration.AccessToken != ""{
		headerParams["Authorization"] =  "Bearer " + a.Configuration.AccessToken
	}
	// add default headers if any
	for key := range a.Configuration.DefaultHeader {
		headerParams[key] = a.Configuration.DefaultHeader[key]
	}


	// to determine the Content-Type header
	localVarHttpContentTypes := []string{  }

	// set Content-Type header
	localVarHttpContentType := a.Configuration.APIClient.SelectHeaderContentType(localVarHttpContentTypes)
	if localVarHttpContentType != "" {
		headerParams["Content-Type"] = localVarHttpContentType
	}
	// to determine the Accept header
	localVarHttpHeaderAccepts := []string{
			}

	// set Accept header
	localVarHttpHeaderAccept := a.Configuration.APIClient.SelectHeaderAccept(localVarHttpHeaderAccepts)
	if localVarHttpHeaderAccept != "" {
		headerParams["Accept"] = localVarHttpHeaderAccept
	}
	// body params
	postBody = &partialApprovalRule

	var successPayload = new(Object)
	httpResponse, err := a.Configuration.APIClient.CallAPI(path, httpMethod, postBody, headerParams, queryParams, formParams, fileName, fileBytes)
	if err != nil {
		return successPayload, NewAPIResponse(httpResponse.RawResponse), err
	}
	err = json.Unmarshal(httpResponse.Body(), &successPayload)
	return successPayload, NewAPIResponse(httpResponse.RawResponse), err
}

/**
 * 
 *
 * @param buyerID ID of the buyer.
 * @param approvalRuleID ID of the approval rule.
 * @param approvalRule 
 * @return *Object
 */
func (a ApprovalRuleApi) Update(buyerID string, approvalRuleID string, approvalRule ApprovalRule) (*Object, *APIResponse, error) {

	var httpMethod = "Put"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/approvalrules/{approvalRuleID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"approvalRuleID"+"}", fmt.Sprintf("%v", approvalRuleID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling ApprovalRuleApi->Update")
	}
	// verify the required parameter 'approvalRuleID' is set
	if &approvalRuleID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'approvalRuleID' when calling ApprovalRuleApi->Update")
	}
	// verify the required parameter 'approvalRule' is set
	if &approvalRule == nil {
		return new(Object), nil, errors.New("Missing required parameter 'approvalRule' when calling ApprovalRuleApi->Update")
	}

	headerParams := make(map[string]string)
	queryParams := url.Values{}
	formParams := make(map[string]string)
	var postBody interface{}
	var fileName string
	var fileBytes []byte
	// authentication (auth) required

	// oauth required
	if a.Configuration.AccessToken != ""{
		headerParams["Authorization"] =  "Bearer " + a.Configuration.AccessToken
	}
	// add default headers if any
	for key := range a.Configuration.DefaultHeader {
		headerParams[key] = a.Configuration.DefaultHeader[key]
	}


	// to determine the Content-Type header
	localVarHttpContentTypes := []string{  }

	// set Content-Type header
	localVarHttpContentType := a.Configuration.APIClient.SelectHeaderContentType(localVarHttpContentTypes)
	if localVarHttpContentType != "" {
		headerParams["Content-Type"] = localVarHttpContentType
	}
	// to determine the Accept header
	localVarHttpHeaderAccepts := []string{
			}

	// set Accept header
	localVarHttpHeaderAccept := a.Configuration.APIClient.SelectHeaderAccept(localVarHttpHeaderAccepts)
	if localVarHttpHeaderAccept != "" {
		headerParams["Accept"] = localVarHttpHeaderAccept
	}
	// body params
	postBody = &approvalRule

	var successPayload = new(Object)
	httpResponse, err := a.Configuration.APIClient.CallAPI(path, httpMethod, postBody, headerParams, queryParams, formParams, fileName, fileBytes)
	if err != nil {
		return successPayload, NewAPIResponse(httpResponse.RawResponse), err
	}
	err = json.Unmarshal(httpResponse.Body(), &successPayload)
	return successPayload, NewAPIResponse(httpResponse.RawResponse), err
}

