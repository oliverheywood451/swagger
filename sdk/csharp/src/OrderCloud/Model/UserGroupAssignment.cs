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

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;

namespace OrderCloud.Model
{
    /// <summary>
    /// UserGroupAssignment
    /// </summary>
    [DataContract]
    public partial class UserGroupAssignment :  IEquatable<UserGroupAssignment>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="UserGroupAssignment" /> class.
        /// </summary>
        /// <param name="UserGroupID">UserGroupID.</param>
        /// <param name="UserID">UserID.</param>
        public UserGroupAssignment(string UserGroupID = null, string UserID = null)
        {
            this.UserGroupID = UserGroupID;
            this.UserID = UserID;
        }
        
        /// <summary>
        /// Gets or Sets UserGroupID
        /// </summary>
        [DataMember(Name="UserGroupID", EmitDefaultValue=false)]
        public string UserGroupID { get; set; }
        /// <summary>
        /// Gets or Sets UserID
        /// </summary>
        [DataMember(Name="UserID", EmitDefaultValue=false)]
        public string UserID { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class UserGroupAssignment {\n");
            sb.Append("  UserGroupID: ").Append(UserGroupID).Append("\n");
            sb.Append("  UserID: ").Append(UserID).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as UserGroupAssignment);
        }

        /// <summary>
        /// Returns true if UserGroupAssignment instances are equal
        /// </summary>
        /// <param name="other">Instance of UserGroupAssignment to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(UserGroupAssignment other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.UserGroupID == other.UserGroupID ||
                    this.UserGroupID != null &&
                    this.UserGroupID.Equals(other.UserGroupID)
                ) && 
                (
                    this.UserID == other.UserID ||
                    this.UserID != null &&
                    this.UserID.Equals(other.UserID)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                if (this.UserGroupID != null)
                    hash = hash * 59 + this.UserGroupID.GetHashCode();
                if (this.UserID != null)
                    hash = hash * 59 + this.UserID.GetHashCode();
                return hash;
            }
        }
    }

}
