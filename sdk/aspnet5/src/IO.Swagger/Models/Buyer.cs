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

namespace OrderCloud.Models
{
    /// <summary>
    /// 
    /// </summary>
    public partial class Buyer :  IEquatable<Buyer>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Buyer" /> class.
        /// </summary>
        /// <param name="ID">ID.</param>
        /// <param name="Name">Name.</param>
        /// <param name="Active">Active.</param>
        /// <param name="Xp">Xp.</param>
        public Buyer(string ID = null, string Name = null, bool? Active = null, Object Xp = null)
        {
            this.ID = ID;
            this.Name = Name;
            this.Active = Active;
            this.Xp = Xp;
            
        }

        /// <summary>
        /// Gets or Sets ID
        /// </summary>
        public string ID { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets Active
        /// </summary>
        public bool? Active { get; set; }

        /// <summary>
        /// Gets or Sets Xp
        /// </summary>
        public Object Xp { get; set; }


        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Buyer {\n");
            sb.Append("  ID: ").Append(ID).Append("\n");
sb.Append("  Name: ").Append(Name).Append("\n");
sb.Append("  Active: ").Append(Active).Append("\n");
sb.Append("  Xp: ").Append(Xp).Append("\n");
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
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != GetType()) return false;
            return Equals((Buyer)obj);
        }

        /// <summary>
        /// Returns true if Buyer instances are equal
        /// </summary>
        /// <param name="other">Instance of Buyer to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Buyer other)
        {

            if (ReferenceEquals(null, other)) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    this.ID == other.ID ||
                    this.ID != null &&
                    this.ID.Equals(other.ID)
                ) && 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.Active == other.Active ||
                    this.Active != null &&
                    this.Active.Equals(other.Active)
                ) && 
                (
                    this.Xp == other.Xp ||
                    this.Xp != null &&
                    this.Xp.Equals(other.Xp)
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
                    if (this.ID != null)
                    hash = hash * 59 + this.ID.GetHashCode();
                    if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                    if (this.Active != null)
                    hash = hash * 59 + this.Active.GetHashCode();
                    if (this.Xp != null)
                    hash = hash * 59 + this.Xp.GetHashCode();
                return hash;
            }
        }

        #region Operators

        public static bool operator ==(Buyer left, Buyer right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(Buyer left, Buyer right)
        {
            return !Equals(left, right);
        }

        #endregion Operators

    }
}
