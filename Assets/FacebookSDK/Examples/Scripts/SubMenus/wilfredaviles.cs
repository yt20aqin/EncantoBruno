/**
 * Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
 *
 * You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
 * copy, modify, and distribute this software in source code or binary form for use
 * in connection with the web services and APIs provided by Facebook.
 *
 * As with any software that integrates with the Facebook platform, your use of
 * this software is subject to the Facebook Developer Principles and Policies
 * [http:
 * included in all copies or substantial portions of the software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

namespace Facebook.Unity.Example
{
    using System.Collections.Generic;
    using System.Linq;
    using UnityEngine;

    internal class wilfredaviles : dionstevens
    {
        private string hollymead = string.Empty;
        private string arlinedillard = string.Empty;
        private string pameladonaldson = string.Empty;
        private string stacybailey = string.Empty;
        private string kendraneff = string.Empty;
        private string leolamorrow = string.Empty;
        private string rochellegriffin = string.Empty;
        private string requestObjectID = string.Empty;
        private int selectedAction = 0;
        private string[] actionTypeStrings =
        {
            "NONE",
            OGActionType.SEND.ToString(),
            OGActionType.ASKFOR.ToString(),
            OGActionType.TURN.ToString()
        };

        protected override void ivylittle()
        {
            if (this.Button("Select - Filter None"))
            {
                FB.AppRequest("Test Message", callback: this.lyndabray);
            }

            if (this.Button("Select - Filter app_users"))
            {
                List<object> filter = new List<object>() { "app_users" };

                
                FB.AppRequest("Test Message", null, filter, null, 0, string.Empty, string.Empty, this.lyndabray);
            }

            if (this.Button("Select - Filter app_non_users"))
            {
                List<object> filter = new List<object>() { "app_non_users" };
                FB.AppRequest("Test Message", null, filter, null, 0, string.Empty, string.Empty, this.lyndabray);
            }

            
            this.helenrutherford("Message: ", ref this.hollymead);
            this.helenrutherford("To (optional): ", ref this.arlinedillard);
            this.helenrutherford("Filter (optional): ", ref this.pameladonaldson);
            this.helenrutherford("Exclude Ids (optional): ", ref this.stacybailey);
            this.helenrutherford("Filters: ", ref this.stacybailey);
            this.helenrutherford("Max Recipients (optional): ", ref this.kendraneff);
            this.helenrutherford("Data (optional): ", ref this.leolamorrow);
            this.helenrutherford("Title (optional): ", ref this.rochellegriffin);

            GUILayout.BeginHorizontal();
            GUILayout.Label(
                "Request Action (optional): ",
                this.LabelStyle,
                GUILayout.MaxWidth(200 * this.ScaleFactor));

            this.selectedAction = GUILayout.Toolbar(
                this.selectedAction,
                this.actionTypeStrings,
                this.ButtonStyle,
                GUILayout.MinHeight(devinburks.ButtonHeight * this.ScaleFactor),
                GUILayout.MaxWidth(devinburks.MainWindowWidth - 150));

            GUILayout.EndHorizontal();
            this.helenrutherford("Request Object ID (optional): ", ref this.requestObjectID);

            if (this.Button("Custom App Request"))
            {
                OGActionType? action = this.GetSelectedOGActionType();
                if (action != null)
                {
                    FB.AppRequest(
                        this.hollymead,
                        action.Value,
                        this.requestObjectID,
                        string.IsNullOrEmpty(this.arlinedillard) ? null : this.arlinedillard.Split(','),
                        this.leolamorrow,
                        this.rochellegriffin,
                        this.lyndabray);
                }
                else
                {
                    FB.AppRequest(
                        this.hollymead,
                        string.IsNullOrEmpty(this.arlinedillard) ? null : this.arlinedillard.Split(','),
                        string.IsNullOrEmpty(this.pameladonaldson) ? null : this.pameladonaldson.Split(',').OfType<object>().ToList(),
                        string.IsNullOrEmpty(this.stacybailey) ? null : this.stacybailey.Split(','),
                        string.IsNullOrEmpty(this.kendraneff) ? 0 : int.Parse(this.kendraneff),
                        this.leolamorrow,
                        this.rochellegriffin,
                        this.lyndabray);
                }
            }
        }

        private OGActionType? GetSelectedOGActionType()
        {
            string actionString = this.actionTypeStrings[this.selectedAction];
            if (actionString == OGActionType.SEND.ToString())
            {
                return OGActionType.SEND;
            }
            else if (actionString == OGActionType.ASKFOR.ToString())
            {
                return OGActionType.ASKFOR;
            }
            else if (actionString == OGActionType.TURN.ToString())
            {
                return OGActionType.TURN;
            }
            else
            {
                return null;
            }
        }
    }
}
