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

type UserApi struct {
	Configuration Configuration
}

func NewUserApi() *UserApi {
	configuration := NewConfiguration()
	return &UserApi{
		Configuration: *configuration,
	}
}

func NewUserApiWithBasePath(basePath string) *UserApi {
	configuration := NewConfiguration()
	configuration.BasePath = basePath

	return &UserApi{
		Configuration: *configuration,
	}
}

/**
 * 
 *
 * @param buyerID ID of the buyer.
 * @param user 
 * @return *Object
 */
func (a UserApi) Create(buyerID string, user User) (*Object, *APIResponse, error) {

	var httpMethod = "Post"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/users"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserApi->Create")
	}
	// verify the required parameter 'user' is set
	if &user == nil {
		return new(Object), nil, errors.New("Missing required parameter 'user' when calling UserApi->Create")
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
	postBody = &user

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
 * @param userID ID of the user.
 * @return void
 */
func (a UserApi) Delete(buyerID string, userID string) (*APIResponse, error) {

	var httpMethod = "Delete"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/users/{userID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userID"+"}", fmt.Sprintf("%v", userID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return nil, errors.New("Missing required parameter 'buyerID' when calling UserApi->Delete")
	}
	// verify the required parameter 'userID' is set
	if &userID == nil {
		return nil, errors.New("Missing required parameter 'userID' when calling UserApi->Delete")
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
 * @param userID ID of the user.
 * @return *Object
 */
func (a UserApi) Get(buyerID string, userID string) (*Object, *APIResponse, error) {

	var httpMethod = "Get"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/users/{userID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userID"+"}", fmt.Sprintf("%v", userID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserApi->Get")
	}
	// verify the required parameter 'userID' is set
	if &userID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'userID' when calling UserApi->Get")
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
 * @param userID ID of the user.
 * @param tokenRequest 
 * @return *Object
 */
func (a UserApi) GetAccessToken(buyerID string, userID string, tokenRequest ImpersonateTokenRequest) (*Object, *APIResponse, error) {

	var httpMethod = "Post"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/users/{userID}/accesstoken"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userID"+"}", fmt.Sprintf("%v", userID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserApi->GetAccessToken")
	}
	// verify the required parameter 'userID' is set
	if &userID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'userID' when calling UserApi->GetAccessToken")
	}
	// verify the required parameter 'tokenRequest' is set
	if &tokenRequest == nil {
		return new(Object), nil, errors.New("Missing required parameter 'tokenRequest' when calling UserApi->GetAccessToken")
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
	postBody = &tokenRequest

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
 * @param userGroupID ID of the user group.
 * @param search Word or phrase to search for.
 * @param searchOn Comma-delimited list of fields to search on.
 * @param sortBy Comma-delimited list of fields to sort by.
 * @param page Page of results to return. Default: 1
 * @param pageSize Number of results to return per page. Default: 20, max: 100.
 * @return *Object
 */
func (a UserApi) List(buyerID string, userGroupID string, search string, searchOn string, sortBy string, page int32, pageSize int32) (*Object, *APIResponse, error) {

	var httpMethod = "Get"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/users"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserApi->List")
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
		queryParams.Add("userGroupID", a.Configuration.APIClient.ParameterToString(userGroupID, ""))
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
 * @param userID ID of the user.
 * @param user 
 * @return void
 */
func (a UserApi) Patch(buyerID string, userID string, user User) (*APIResponse, error) {

	var httpMethod = "Patch"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/users/{userID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userID"+"}", fmt.Sprintf("%v", userID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return nil, errors.New("Missing required parameter 'buyerID' when calling UserApi->Patch")
	}
	// verify the required parameter 'userID' is set
	if &userID == nil {
		return nil, errors.New("Missing required parameter 'userID' when calling UserApi->Patch")
	}
	// verify the required parameter 'user' is set
	if &user == nil {
		return nil, errors.New("Missing required parameter 'user' when calling UserApi->Patch")
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
	postBody = &user


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
 * @param userID ID of the user.
 * @param user 
 * @return *Object
 */
func (a UserApi) Update(buyerID string, userID string, user User) (*Object, *APIResponse, error) {

	var httpMethod = "Put"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/users/{userID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userID"+"}", fmt.Sprintf("%v", userID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserApi->Update")
	}
	// verify the required parameter 'userID' is set
	if &userID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'userID' when calling UserApi->Update")
	}
	// verify the required parameter 'user' is set
	if &user == nil {
		return new(Object), nil, errors.New("Missing required parameter 'user' when calling UserApi->Update")
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
	postBody = &user

	var successPayload = new(Object)
	httpResponse, err := a.Configuration.APIClient.CallAPI(path, httpMethod, postBody, headerParams, queryParams, formParams, fileName, fileBytes)
	if err != nil {
		return successPayload, NewAPIResponse(httpResponse.RawResponse), err
	}
	err = json.Unmarshal(httpResponse.Body(), &successPayload)
	return successPayload, NewAPIResponse(httpResponse.RawResponse), err
}
