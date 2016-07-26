//
// Buyer.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class Buyer: JSONEncodable {
    public var ID: String?
    public var name: String?
    public var active: Bool?
    public var xp: AnyObject?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["ID"] = self.ID
        nillableDictionary["Name"] = self.name
        nillableDictionary["Active"] = self.active
        nillableDictionary["xp"] = self.xp
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
