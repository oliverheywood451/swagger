//
// SecurityProfileAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class SecurityProfileAPI: APIBase {
    /**

     - parameter securityProfileID: (path) ID of the security profile. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func callGet(securityProfileID securityProfileID: String, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        callGetWithRequestBuilder(securityProfileID: securityProfileID).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /SecurityProfiles/{securityProfileID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter securityProfileID: (path) ID of the security profile. 

     - returns: RequestBuilder<AnyObject> 
     */
    public class func callGetWithRequestBuilder(securityProfileID securityProfileID: String) -> RequestBuilder<AnyObject> {
        var path = "/SecurityProfiles/{securityProfileID}"
        path = path.stringByReplacingOccurrencesOfString("{securityProfileID}", withString: "\(securityProfileID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: true)
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
     - GET /SecurityProfiles
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
        let path = "/SecurityProfiles"
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

}
