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

package OrderCloud

import (
	"time"
)

type ApprovalRule struct {

	ID string `json:"ID,omitempty"`

	Name string `json:"Name,omitempty"`

	Description string `json:"Description,omitempty"`

	ApprovingGroupID string `json:"ApprovingGroupID,omitempty"`

	RuleExpression string `json:"RuleExpression,omitempty"`

	Scope string `json:"Scope,omitempty"`

	ScopeTimeUnit string `json:"ScopeTimeUnit,omitempty"`

	ScopeTimeNumber int32 `json:"ScopeTimeNumber,omitempty"`

	ScopeStartDate time.Time `json:"ScopeStartDate,omitempty"`

	ExpireAfterTimeUnit string `json:"ExpireAfterTimeUnit,omitempty"`

	ExpireAfterNumber int32 `json:"ExpireAfterNumber,omitempty"`

	ApproveOnExpire bool `json:"ApproveOnExpire,omitempty"`

	Xp Object `json:"xp,omitempty"`
}
