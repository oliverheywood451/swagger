//
// Category.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class Category: JSONEncodable {
    public var ID: String?
    public var name: String?
    public var description: String?
    public var xp: AnyObject?
    public var listOrder: Int32?
    public var active: Bool?
    public var parentID: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["ID"] = self.ID
        nillableDictionary["Name"] = self.name
        nillableDictionary["Description"] = self.description
        nillableDictionary["xp"] = self.xp
        nillableDictionary["ListOrder"] = self.listOrder?.encodeToJSON()
        nillableDictionary["Active"] = self.active
        nillableDictionary["ParentID"] = self.parentID
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
