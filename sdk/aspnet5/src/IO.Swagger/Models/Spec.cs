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
    public partial class Spec :  IEquatable<Spec>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Spec" /> class.
        /// </summary>
        /// <param name="ID">ID.</param>
        /// <param name="ListOrder">ListOrder.</param>
        /// <param name="Name">Name.</param>
        /// <param name="DefaultValue">DefaultValue.</param>
        /// <param name="Required">Required.</param>
        /// <param name="AllowOpenText">AllowOpenText.</param>
        /// <param name="DefaultOptionID">DefaultOptionID.</param>
        /// <param name="Xp">Xp.</param>
        public Spec(string ID = null, int? ListOrder = null, string Name = null, string DefaultValue = null, bool? Required = null, bool? AllowOpenText = null, string DefaultOptionID = null, Object Xp = null)
        {
            this.ID = ID;
            this.ListOrder = ListOrder;
            this.Name = Name;
            this.DefaultValue = DefaultValue;
            this.Required = Required;
            this.AllowOpenText = AllowOpenText;
            this.DefaultOptionID = DefaultOptionID;
            this.Xp = Xp;
            
        }

        /// <summary>
        /// Gets or Sets ID
        /// </summary>
        public string ID { get; set; }

        /// <summary>
        /// Gets or Sets ListOrder
        /// </summary>
        public int? ListOrder { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets DefaultValue
        /// </summary>
        public string DefaultValue { get; set; }

        /// <summary>
        /// Gets or Sets Required
        /// </summary>
        public bool? Required { get; set; }

        /// <summary>
        /// Gets or Sets AllowOpenText
        /// </summary>
        public bool? AllowOpenText { get; set; }

        /// <summary>
        /// Gets or Sets DefaultOptionID
        /// </summary>
        public string DefaultOptionID { get; set; }

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
            sb.Append("class Spec {\n");
            sb.Append("  ID: ").Append(ID).Append("\n");
sb.Append("  ListOrder: ").Append(ListOrder).Append("\n");
sb.Append("  Name: ").Append(Name).Append("\n");
sb.Append("  DefaultValue: ").Append(DefaultValue).Append("\n");
sb.Append("  Required: ").Append(Required).Append("\n");
sb.Append("  AllowOpenText: ").Append(AllowOpenText).Append("\n");
sb.Append("  DefaultOptionID: ").Append(DefaultOptionID).Append("\n");
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
            return Equals((Spec)obj);
        }

        /// <summary>
        /// Returns true if Spec instances are equal
        /// </summary>
        /// <param name="other">Instance of Spec to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Spec other)
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
                    this.ListOrder == other.ListOrder ||
                    this.ListOrder != null &&
                    this.ListOrder.Equals(other.ListOrder)
                ) && 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.DefaultValue == other.DefaultValue ||
                    this.DefaultValue != null &&
                    this.DefaultValue.Equals(other.DefaultValue)
                ) && 
                (
                    this.Required == other.Required ||
                    this.Required != null &&
                    this.Required.Equals(other.Required)
                ) && 
                (
                    this.AllowOpenText == other.AllowOpenText ||
                    this.AllowOpenText != null &&
                    this.AllowOpenText.Equals(other.AllowOpenText)
                ) && 
                (
                    this.DefaultOptionID == other.DefaultOptionID ||
                    this.DefaultOptionID != null &&
                    this.DefaultOptionID.Equals(other.DefaultOptionID)
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
                    if (this.ListOrder != null)
                    hash = hash * 59 + this.ListOrder.GetHashCode();
                    if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                    if (this.DefaultValue != null)
                    hash = hash * 59 + this.DefaultValue.GetHashCode();
                    if (this.Required != null)
                    hash = hash * 59 + this.Required.GetHashCode();
                    if (this.AllowOpenText != null)
                    hash = hash * 59 + this.AllowOpenText.GetHashCode();
                    if (this.DefaultOptionID != null)
                    hash = hash * 59 + this.DefaultOptionID.GetHashCode();
                    if (this.Xp != null)
                    hash = hash * 59 + this.Xp.GetHashCode();
                return hash;
            }
        }

        #region Operators

        public static bool operator ==(Spec left, Spec right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(Spec left, Spec right)
        {
            return !Equals(left, right);
        }

        #endregion Operators

    }
}
