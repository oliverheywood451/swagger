using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace OrderCloud.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class PromotionAssignment {
    /// <summary>
    /// Gets or Sets PromotionID
    /// </summary>
    [DataMember(Name="PromotionID", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "PromotionID")]
    public string PromotionID { get; set; }

    /// <summary>
    /// Gets or Sets BuyerID
    /// </summary>
    [DataMember(Name="BuyerID", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "BuyerID")]
    public string BuyerID { get; set; }

    /// <summary>
    /// Gets or Sets UserID
    /// </summary>
    [DataMember(Name="UserID", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "UserID")]
    public string UserID { get; set; }

    /// <summary>
    /// Gets or Sets UserGroupID
    /// </summary>
    [DataMember(Name="UserGroupID", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "UserGroupID")]
    public string UserGroupID { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class PromotionAssignment {\n");
      sb.Append("  PromotionID: ").Append(PromotionID).Append("\n");
      sb.Append("  BuyerID: ").Append(BuyerID).Append("\n");
      sb.Append("  UserID: ").Append(UserID).Append("\n");
      sb.Append("  UserGroupID: ").Append(UserGroupID).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
