//
// AddressAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class AddressAPI: APIBase {
    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (path) ID of the address. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func callGet(buyerID buyerID: String, addressID: String, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        callGetWithRequestBuilder(buyerID: buyerID, addressID: addressID).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /buyers/{buyerID}/addresses/{addressID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (path) ID of the address. 

     - returns: RequestBuilder<AnyObject> 
     */
    public class func callGetWithRequestBuilder(buyerID buyerID: String, addressID: String) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/addresses/{addressID}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{addressID}", withString: "\(addressID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter address: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func create(buyerID buyerID: String, address: Address, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        createWithRequestBuilder(buyerID: buyerID, address: address).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - POST /buyers/{buyerID}/addresses
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter address: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func createWithRequestBuilder(buyerID buyerID: String, address: Address) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/addresses"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = address.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (path) ID of the address. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func delete(buyerID buyerID: String, addressID: String, completion: ((error: ErrorType?) -> Void)) {
        deleteWithRequestBuilder(buyerID: buyerID, addressID: addressID).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - DELETE /buyers/{buyerID}/addresses/{addressID}
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (path) ID of the address. 

     - returns: RequestBuilder<Void> 
     */
    public class func deleteWithRequestBuilder(buyerID buyerID: String, addressID: String) -> RequestBuilder<Void> {
        var path = "/buyers/{buyerID}/addresses/{addressID}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{addressID}", withString: "\(addressID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "DELETE", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (path) ID of the address. 
     - parameter userID: (query) ID of the user. (optional)
     - parameter userGroupID: (query) ID of the user group. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func deleteAssignment(buyerID buyerID: String, addressID: String, userID: String? = nil, userGroupID: String? = nil, completion: ((error: ErrorType?) -> Void)) {
        deleteAssignmentWithRequestBuilder(buyerID: buyerID, addressID: addressID, userID: userID, userGroupID: userGroupID).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - DELETE /buyers/{buyerID}/addresses/{addressID}/assignments
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (path) ID of the address. 
     - parameter userID: (query) ID of the user. (optional)
     - parameter userGroupID: (query) ID of the user group. (optional)

     - returns: RequestBuilder<Void> 
     */
    public class func deleteAssignmentWithRequestBuilder(buyerID buyerID: String, addressID: String, userID: String? = nil, userGroupID: String? = nil) -> RequestBuilder<Void> {
        var path = "/buyers/{buyerID}/addresses/{addressID}/assignments"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{addressID}", withString: "\(addressID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "userID": userID,
            "userGroupID": userGroupID
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "DELETE", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter search: (query) Word or phrase to search for. (optional)
     - parameter searchOn: (query) Comma-delimited list of fields to search on. (optional)
     - parameter sortBy: (query) Comma-delimited list of fields to sort by. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func list(buyerID buyerID: String, search: String? = nil, searchOn: String? = nil, sortBy: String? = nil, page: Int32? = nil, pageSize: Int32? = nil, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        listWithRequestBuilder(buyerID: buyerID, search: search, searchOn: searchOn, sortBy: sortBy, page: page, pageSize: pageSize).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /buyers/{buyerID}/addresses
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter search: (query) Word or phrase to search for. (optional)
     - parameter searchOn: (query) Comma-delimited list of fields to search on. (optional)
     - parameter sortBy: (query) Comma-delimited list of fields to sort by. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)

     - returns: RequestBuilder<AnyObject> 
     */
    public class func listWithRequestBuilder(buyerID buyerID: String, search: String? = nil, searchOn: String? = nil, sortBy: String? = nil, page: Int32? = nil, pageSize: Int32? = nil) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/addresses"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
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

     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (query) ID of the address. (optional)
     - parameter userID: (query) ID of the user. (optional)
     - parameter userGroupID: (query) ID of the user group. (optional)
     - parameter level: (query) Level of the address. (optional)
     - parameter isShipping: (query) Is shipping of the address. (optional)
     - parameter isBilling: (query) Is billing of the address. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func listAssignments(buyerID buyerID: String, addressID: String? = nil, userID: String? = nil, userGroupID: String? = nil, level: String? = nil, isShipping: Bool? = nil, isBilling: Bool? = nil, page: Int32? = nil, pageSize: Int32? = nil, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        listAssignmentsWithRequestBuilder(buyerID: buyerID, addressID: addressID, userID: userID, userGroupID: userGroupID, level: level, isShipping: isShipping, isBilling: isBilling, page: page, pageSize: pageSize).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /buyers/{buyerID}/addresses/assignments
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (query) ID of the address. (optional)
     - parameter userID: (query) ID of the user. (optional)
     - parameter userGroupID: (query) ID of the user group. (optional)
     - parameter level: (query) Level of the address. (optional)
     - parameter isShipping: (query) Is shipping of the address. (optional)
     - parameter isBilling: (query) Is billing of the address. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)

     - returns: RequestBuilder<AnyObject> 
     */
    public class func listAssignmentsWithRequestBuilder(buyerID buyerID: String, addressID: String? = nil, userID: String? = nil, userGroupID: String? = nil, level: String? = nil, isShipping: Bool? = nil, isBilling: Bool? = nil, page: Int32? = nil, pageSize: Int32? = nil) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/addresses/assignments"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "addressID": addressID,
            "userID": userID,
            "userGroupID": userGroupID,
            "level": level,
            "isShipping": isShipping,
            "isBilling": isBilling,
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
     - parameter addressID: (path) ID of the address. 
     - parameter address: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func patch(buyerID buyerID: String, addressID: String, address: Address, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        patchWithRequestBuilder(buyerID: buyerID, addressID: addressID, address: address).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - PATCH /buyers/{buyerID}/addresses/{addressID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (path) ID of the address. 
     - parameter address: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func patchWithRequestBuilder(buyerID buyerID: String, addressID: String, address: Address) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/addresses/{addressID}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{addressID}", withString: "\(addressID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = address.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PATCH", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter assignment: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func saveAssignment(buyerID buyerID: String, assignment: AddressAssignment, completion: ((error: ErrorType?) -> Void)) {
        saveAssignmentWithRequestBuilder(buyerID: buyerID, assignment: assignment).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - POST /buyers/{buyerID}/addresses/assignments
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter assignment: (body)  

     - returns: RequestBuilder<Void> 
     */
    public class func saveAssignmentWithRequestBuilder(buyerID buyerID: String, assignment: AddressAssignment) -> RequestBuilder<Void> {
        var path = "/buyers/{buyerID}/addresses/assignments"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = assignment.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (path) ID of the address. 
     - parameter address: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func update(buyerID buyerID: String, addressID: String, address: Address, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        updateWithRequestBuilder(buyerID: buyerID, addressID: addressID, address: address).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - PUT /buyers/{buyerID}/addresses/{addressID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter addressID: (path) ID of the address. 
     - parameter address: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func updateWithRequestBuilder(buyerID buyerID: String, addressID: String, address: Address) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/addresses/{addressID}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{addressID}", withString: "\(addressID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = address.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PUT", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

}
