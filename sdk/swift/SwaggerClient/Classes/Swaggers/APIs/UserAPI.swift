//
// UserAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class UserAPI: APIBase {
    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func callGet(buyerID buyerID: String, userID: String, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        callGetWithRequestBuilder(buyerID: buyerID, userID: userID).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /buyers/{buyerID}/users/{userID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 

     - returns: RequestBuilder<AnyObject> 
     */
    public class func callGetWithRequestBuilder(buyerID buyerID: String, userID: String) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/users/{userID}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{userID}", withString: "\(userID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter user: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func create(buyerID buyerID: String, user: User, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        createWithRequestBuilder(buyerID: buyerID, user: user).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - POST /buyers/{buyerID}/users
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter user: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func createWithRequestBuilder(buyerID buyerID: String, user: User) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/users"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = user.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func delete(buyerID buyerID: String, userID: String, completion: ((error: ErrorType?) -> Void)) {
        deleteWithRequestBuilder(buyerID: buyerID, userID: userID).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - DELETE /buyers/{buyerID}/users/{userID}
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 

     - returns: RequestBuilder<Void> 
     */
    public class func deleteWithRequestBuilder(buyerID buyerID: String, userID: String) -> RequestBuilder<Void> {
        var path = "/buyers/{buyerID}/users/{userID}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{userID}", withString: "\(userID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "DELETE", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 
     - parameter tokenRequest: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getAccessToken(buyerID buyerID: String, userID: String, tokenRequest: ImpersonateTokenRequest, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        getAccessTokenWithRequestBuilder(buyerID: buyerID, userID: userID, tokenRequest: tokenRequest).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - POST /buyers/{buyerID}/users/{userID}/accesstoken
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 
     - parameter tokenRequest: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func getAccessTokenWithRequestBuilder(buyerID buyerID: String, userID: String, tokenRequest: ImpersonateTokenRequest) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/users/{userID}/accesstoken"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{userID}", withString: "\(userID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = tokenRequest.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter userGroupID: (query) ID of the user group. (optional)
     - parameter search: (query) Word or phrase to search for. (optional)
     - parameter searchOn: (query) Comma-delimited list of fields to search on. (optional)
     - parameter sortBy: (query) Comma-delimited list of fields to sort by. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func list(buyerID buyerID: String, userGroupID: String? = nil, search: String? = nil, searchOn: String? = nil, sortBy: String? = nil, page: Int32? = nil, pageSize: Int32? = nil, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        listWithRequestBuilder(buyerID: buyerID, userGroupID: userGroupID, search: search, searchOn: searchOn, sortBy: sortBy, page: page, pageSize: pageSize).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /buyers/{buyerID}/users
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter userGroupID: (query) ID of the user group. (optional)
     - parameter search: (query) Word or phrase to search for. (optional)
     - parameter searchOn: (query) Comma-delimited list of fields to search on. (optional)
     - parameter sortBy: (query) Comma-delimited list of fields to sort by. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)

     - returns: RequestBuilder<AnyObject> 
     */
    public class func listWithRequestBuilder(buyerID buyerID: String, userGroupID: String? = nil, search: String? = nil, searchOn: String? = nil, sortBy: String? = nil, page: Int32? = nil, pageSize: Int32? = nil) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/users"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "userGroupID": userGroupID,
            "search": search,
            "searchOn": searchOn,
            "sortBy": sortBy,
            "page": page?.encodeToJSON(),
            "pageSize": pageSize?.encodeToJSON()
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 
     - parameter user: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func patch(buyerID buyerID: String, userID: String, user: User, completion: ((error: ErrorType?) -> Void)) {
        patchWithRequestBuilder(buyerID: buyerID, userID: userID, user: user).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - PATCH /buyers/{buyerID}/users/{userID}
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 
     - parameter user: (body)  

     - returns: RequestBuilder<Void> 
     */
    public class func patchWithRequestBuilder(buyerID buyerID: String, userID: String, user: User) -> RequestBuilder<Void> {
        var path = "/buyers/{buyerID}/users/{userID}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{userID}", withString: "\(userID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = user.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PATCH", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 
     - parameter user: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func update(buyerID buyerID: String, userID: String, user: User, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        updateWithRequestBuilder(buyerID: buyerID, userID: userID, user: user).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - PUT /buyers/{buyerID}/users/{userID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter userID: (path) ID of the user. 
     - parameter user: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func updateWithRequestBuilder(buyerID buyerID: String, userID: String, user: User) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/users/{userID}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{userID}", withString: "\(userID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = user.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PUT", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

}
