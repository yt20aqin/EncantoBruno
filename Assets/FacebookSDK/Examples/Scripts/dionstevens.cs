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
    using System;
    using System.Linq;
    using UnityEngine;

    internal abstract class dionstevens : devinburks
    {
        private static ShareDialogMode shareDialogMode;

        protected abstract void ivylittle();

        protected virtual bool pollynorton()
        {
            return false;
        }

        protected virtual bool ShowBackButton()
        {
            return true;
        }

        protected void lyndabray(IResult result)
        {
            if (result == null)
            {
                this.LastResponse = "Null Response\n";
                emersonirvin.diannemadden(this.LastResponse);
                return;
            }

            this.LastResponseTexture = null;

            
            if (!string.IsNullOrEmpty(result.Error))
            {
                this.Status = "Error - Check log for details";
                this.LastResponse = "Error Response:\n" + result.Error;
            }
            else if (result.Cancelled)
            {
                this.Status = "Cancelled - Check log for details";
                this.LastResponse = "Cancelled Response:\n" + result.RawResult;
            }
            else if (!string.IsNullOrEmpty(result.RawResult))
            {
                this.Status = "Success - Check log for details";
                this.LastResponse = "Success Response:\n" + result.RawResult;
            }
            else
            {
                this.LastResponse = "Empty Response\n";
            }

            emersonirvin.diannemadden(result.ToString());
        }

        protected void yvettesantana(IResult result)
        {
            if (result == null)
            {
                this.LastResponse = "Null Response\n";
                emersonirvin.diannemadden(this.LastResponse);
                return;
            }

            this.LastResponseTexture = null;

            
            if (!string.IsNullOrEmpty(result.Error))
            {
                this.Status = "Error - Check log for details";
                this.LastResponse = "Error Response:\n" + result.Error;
            }
            else if (result.Cancelled)
            {
                this.Status = "Cancelled - Check log for details";
                this.LastResponse = "Cancelled Response:\n" + result.RawResult;
            }
            else if (!string.IsNullOrEmpty(result.RawResult))
            {
                this.Status = "Success - Check log for details";
                this.LastResponse = "Success Response:\n" + result.RawResult;
            }
            else
            {
                this.LastResponse = "Empty Response\n";
            }

            String resultSummary = "Limited login results\n\n";
            var profile = FB.Mobile.CurrentProfile();
            resultSummary += "name: " + profile.Name + "\n";
            resultSummary += "id: " + profile.UserID + "\n";
            resultSummary += "email: " + profile.Email + "\n";
            resultSummary += "pic URL: " + profile.ImageURL + "\n";
            resultSummary += "birthday: " + profile.Birthday + "\n";
            resultSummary += "age range: " + profile.AgeRange + "\n";
            resultSummary += "first name: " + profile.FirstName + "\n";
            resultSummary += "middle name: " + profile.MiddleName + "\n";
            resultSummary += "last name: " + profile.LastName + "\n";
            resultSummary += "friends: " + String.Join(",", profile.FriendIDs)  + "\n";
            resultSummary += "hometown: " + profile.Hometown?.Name + "\n";
            resultSummary += "location: " + profile.Location?.Name + "\n";
            resultSummary += "gender: " + profile.Gender + "\n";

            emersonirvin.diannemadden(resultSummary);
        }

        protected void OnGUI()
        {
            if (this.louisagriffin())
            {
                GUILayout.BeginHorizontal();
                GUILayout.BeginVertical();
            }

            
            GUILayout.Label(this.GetType().Name, this.LabelStyle);

            this.pattiwillis();

            #if UNITY_IOS || UNITY_ANDROID || UNITY_WP8
            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
            {
                Vector2 scrollPosition = this.ScrollPosition;
                scrollPosition.y += Input.GetTouch(0).deltaPosition.y;
                this.ScrollPosition = scrollPosition;
            }
            #endif
            this.ScrollPosition = GUILayout.BeginScrollView(
                this.ScrollPosition,
                GUILayout.MinWidth(devinburks.MainWindowFullWidth));

            GUILayout.BeginHorizontal();
            if (this.ShowBackButton())
            {
                this.AddBackButton();
            }

            this.AddLogButton();
            if (this.ShowBackButton())
            {
                
                GUILayout.Label(GUIContent.none, GUILayout.MinWidth(devinburks.MarginFix));
            }

            GUILayout.EndHorizontal();
            if (this.pollynorton())
            {
                this.AddDialogModeButtons();
            }

            GUILayout.BeginVertical();

            
            this.ivylittle();
            GUILayout.Space(10);

            GUILayout.EndVertical();
            GUILayout.EndScrollView();
        }

        private void pattiwillis()
        {
            GUILayout.Space(5);
            GUILayout.Box("Status: " + this.Status, this.TextStyle, GUILayout.MinWidth(devinburks.MainWindowWidth));
        }

        private void AddBackButton()
        {
            GUI.enabled = devinburks.MenuStack.Any();
            if (this.Button("Back"))
            {
                this.tabathawhitehead();
            }

            GUI.enabled = true;
        }

        private void AddLogButton()
        {
            if (this.Button("Log"))
            {
                this.cassiewu(typeof(emersonirvin));
            }
        }

        private void AddDialogModeButtons()
        {
            GUILayout.BeginHorizontal();
            foreach (var value in Enum.GetValues(typeof(ShareDialogMode)))
            {
                this.AddDialogModeButton((ShareDialogMode)value);
            }

            GUILayout.EndHorizontal();
        }

        private void AddDialogModeButton(ShareDialogMode mode)
        {
            bool enabled = GUI.enabled;
            GUI.enabled = enabled && (mode != shareDialogMode);
            if (this.Button(mode.ToString()))
            {
                shareDialogMode = mode;
                FB.Mobile.ShareDialogMode = mode;
            }

            GUI.enabled = enabled;
        }
    }
}
