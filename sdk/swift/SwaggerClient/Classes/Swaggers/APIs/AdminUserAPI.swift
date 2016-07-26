//
// AdminUserAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class AdminUserAPI: APIBase {
    /**

     - parameter userID: (path) ID of the user. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func callGet(userID userID: String, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        callGetWithRequestBuilder(userID: userID).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /adminusers/{userID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter userID: (path) ID of the user. 

     - returns: RequestBuilder<AnyObject> 
     */
    public class func callGetWithRequestBuilder(userID userID: String) -> RequestBuilder<AnyObject> {
        var path = "/adminusers/{userID}"
        path = path.stringByReplacingOccurrencesOfString("{userID}", withString: "\(userID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter user: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func create(user user: User, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        createWithRequestBuilder(user: user).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - POST /adminusers
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter user: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func createWithRequestBuilder(user user: User) -> RequestBuilder<AnyObject> {
        let path = "/adminusers"
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = user.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter userID: (path) ID of the user. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func delete(userID userID: String, completion: ((error: ErrorType?) -> Void)) {
        deleteWithRequestBuilder(userID: userID).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - DELETE /adminusers/{userID}
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter userID: (path) ID of the user. 

     - returns: RequestBuilder<Void> 
     */
    public class func deleteWithRequestBuilder(userID userID: String) -> RequestBuilder<Void> {
        var path = "/adminusers/{userID}"
        path = path.stringByReplacingOccurrencesOfString("{userID}", withString: "\(userID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "DELETE", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter search: (query) Word or phrase to search for. (optional)
     - parameter searchOn: (query) Comma-delimited list of fields to search on. (optional)
     - parameter sortBy: (query) Comma-delimited list of fields to sort by. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func list(search search: String? = nil, searchOn: String? = nil, sortBy: String? = nil, page: Int32? = nil, pageSize: Int32? = nil, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        listWithRequestBuilder(search: search, searchOn: searchOn, sortBy: sortBy, page: page, pageSize: pageSize).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /adminusers
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter search: (query) Word or phrase to search for. (optional)
     - parameter searchOn: (query) Comma-delimited list of fields to search on. (optional)
     - parameter sortBy: (query) Comma-delimited list of fields to sort by. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)

     - returns: RequestBuilder<AnyObject> 
     */
    public class func listWithRequestBuilder(search search: String? = nil, searchOn: String? = nil, sortBy: String? = nil, page: Int32? = nil, pageSize: Int32? = nil) -> RequestBuilder<AnyObject> {
        let path = "/adminusers"
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
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

     - parameter userID: (path) ID of the user. 
     - parameter user: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func patch(userID userID: String, user: User, completion: ((error: ErrorType?) -> Void)) {
        patchWithRequestBuilder(userID: userID, user: user).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - PATCH /adminusers/{userID}
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter userID: (path) ID of the user. 
     - parameter user: (body)  

     - returns: RequestBuilder<Void> 
     */
    public class func patchWithRequestBuilder(userID userID: String, user: User) -> RequestBuilder<Void> {
        var path = "/adminusers/{userID}"
        path = path.stringByReplacingOccurrencesOfString("{userID}", withString: "\(userID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = user.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PATCH", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter userID: (path) ID of the user. 
     - parameter user: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func update(userID userID: String, user: User, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        updateWithRequestBuilder(userID: userID, user: user).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - PUT /adminusers/{userID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter userID: (path) ID of the user. 
     - parameter user: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func updateWithRequestBuilder(userID userID: String, user: User) -> RequestBuilder<AnyObject> {
        var path = "/adminusers/{userID}"
        path = path.stringByReplacingOccurrencesOfString("{userID}", withString: "\(userID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = user.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PUT", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

}
