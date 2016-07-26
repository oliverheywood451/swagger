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

type UserGroupApi struct {
	Configuration Configuration
}

func NewUserGroupApi() *UserGroupApi {
	configuration := NewConfiguration()
	return &UserGroupApi{
		Configuration: *configuration,
	}
}

func NewUserGroupApiWithBasePath(basePath string) *UserGroupApi {
	configuration := NewConfiguration()
	configuration.BasePath = basePath

	return &UserGroupApi{
		Configuration: *configuration,
	}
}

/**
 * 
 *
 * @param buyerID ID of the buyer.
 * @param group 
 * @return *Object
 */
func (a UserGroupApi) Create(buyerID string, group UserGroup) (*Object, *APIResponse, error) {

	var httpMethod = "Post"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/usergroups"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserGroupApi->Create")
	}
	// verify the required parameter 'group' is set
	if &group == nil {
		return new(Object), nil, errors.New("Missing required parameter 'group' when calling UserGroupApi->Create")
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
	postBody = &group

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
 * @return void
 */
func (a UserGroupApi) Delete(buyerID string, userGroupID string) (*APIResponse, error) {

	var httpMethod = "Delete"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/usergroups/{userGroupID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userGroupID"+"}", fmt.Sprintf("%v", userGroupID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return nil, errors.New("Missing required parameter 'buyerID' when calling UserGroupApi->Delete")
	}
	// verify the required parameter 'userGroupID' is set
	if &userGroupID == nil {
		return nil, errors.New("Missing required parameter 'userGroupID' when calling UserGroupApi->Delete")
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
 * @param userGroupID ID of the user group.
 * @param userID ID of the user.
 * @return void
 */
func (a UserGroupApi) DeleteUserAssignment(buyerID string, userGroupID string, userID string) (*APIResponse, error) {

	var httpMethod = "Delete"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/usergroups/{userGroupID}/assignments/{userID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userGroupID"+"}", fmt.Sprintf("%v", userGroupID), -1)
	path = strings.Replace(path, "{"+"userID"+"}", fmt.Sprintf("%v", userID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return nil, errors.New("Missing required parameter 'buyerID' when calling UserGroupApi->DeleteUserAssignment")
	}
	// verify the required parameter 'userGroupID' is set
	if &userGroupID == nil {
		return nil, errors.New("Missing required parameter 'userGroupID' when calling UserGroupApi->DeleteUserAssignment")
	}
	// verify the required parameter 'userID' is set
	if &userID == nil {
		return nil, errors.New("Missing required parameter 'userID' when calling UserGroupApi->DeleteUserAssignment")
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
 * @param userGroupID ID of the user group.
 * @return *Object
 */
func (a UserGroupApi) Get(buyerID string, userGroupID string) (*Object, *APIResponse, error) {

	var httpMethod = "Get"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/usergroups/{userGroupID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userGroupID"+"}", fmt.Sprintf("%v", userGroupID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserGroupApi->Get")
	}
	// verify the required parameter 'userGroupID' is set
	if &userGroupID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'userGroupID' when calling UserGroupApi->Get")
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
func (a UserGroupApi) List(buyerID string, search string, searchOn string, sortBy string, page int32, pageSize int32) (*Object, *APIResponse, error) {

	var httpMethod = "Get"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/usergroups"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserGroupApi->List")
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
 * @param userGroupID ID of the user group.
 * @param userID ID of the user.
 * @param page Page of results to return. Default: 1
 * @param pageSize Number of results to return per page. Default: 20, max: 100.
 * @return *Object
 */
func (a UserGroupApi) ListUserAssignments(buyerID string, userGroupID string, userID string, page int32, pageSize int32) (*Object, *APIResponse, error) {

	var httpMethod = "Get"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/usergroups/assignments"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserGroupApi->ListUserAssignments")
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
			queryParams.Add("userID", a.Configuration.APIClient.ParameterToString(userID, ""))
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
 * @param userGroupID ID of the user group.
 * @param group 
 * @return void
 */
func (a UserGroupApi) Patch(buyerID string, userGroupID string, group UserGroup) (*APIResponse, error) {

	var httpMethod = "Patch"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/usergroups/{userGroupID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userGroupID"+"}", fmt.Sprintf("%v", userGroupID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return nil, errors.New("Missing required parameter 'buyerID' when calling UserGroupApi->Patch")
	}
	// verify the required parameter 'userGroupID' is set
	if &userGroupID == nil {
		return nil, errors.New("Missing required parameter 'userGroupID' when calling UserGroupApi->Patch")
	}
	// verify the required parameter 'group' is set
	if &group == nil {
		return nil, errors.New("Missing required parameter 'group' when calling UserGroupApi->Patch")
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
	postBody = &group


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
 * @param userGroupAssignment 
 * @return void
 */
func (a UserGroupApi) SaveUserAssignment(buyerID string, userGroupAssignment UserGroupAssignment) (*APIResponse, error) {

	var httpMethod = "Post"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/usergroups/assignments"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return nil, errors.New("Missing required parameter 'buyerID' when calling UserGroupApi->SaveUserAssignment")
	}
	// verify the required parameter 'userGroupAssignment' is set
	if &userGroupAssignment == nil {
		return nil, errors.New("Missing required parameter 'userGroupAssignment' when calling UserGroupApi->SaveUserAssignment")
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
	postBody = &userGroupAssignment


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
 * @param userGroupID ID of the user group.
 * @param group 
 * @return *Object
 */
func (a UserGroupApi) Update(buyerID string, userGroupID string, group UserGroup) (*Object, *APIResponse, error) {

	var httpMethod = "Put"
	// create path and map variables
	path := a.Configuration.BasePath + "/buyers/{buyerID}/usergroups/{userGroupID}"
	path = strings.Replace(path, "{"+"buyerID"+"}", fmt.Sprintf("%v", buyerID), -1)
	path = strings.Replace(path, "{"+"userGroupID"+"}", fmt.Sprintf("%v", userGroupID), -1)

	// verify the required parameter 'buyerID' is set
	if &buyerID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'buyerID' when calling UserGroupApi->Update")
	}
	// verify the required parameter 'userGroupID' is set
	if &userGroupID == nil {
		return new(Object), nil, errors.New("Missing required parameter 'userGroupID' when calling UserGroupApi->Update")
	}
	// verify the required parameter 'group' is set
	if &group == nil {
		return new(Object), nil, errors.New("Missing required parameter 'group' when calling UserGroupApi->Update")
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
	postBody = &group

	var successPayload = new(Object)
	httpResponse, err := a.Configuration.APIClient.CallAPI(path, httpMethod, postBody, headerParams, queryParams, formParams, fileName, fileBytes)
	if err != nil {
		return successPayload, NewAPIResponse(httpResponse.RawResponse), err
	}
	err = json.Unmarshal(httpResponse.Body(), &successPayload)
	return successPayload, NewAPIResponse(httpResponse.RawResponse), err
}

