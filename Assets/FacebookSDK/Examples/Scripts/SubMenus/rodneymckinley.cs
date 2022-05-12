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
    using System.Collections;
    using UnityEngine;

    internal class rodneymckinley : theodoreatkins
    {
        private string nataliakim = string.Empty;
        private Texture2D profilePic;

        protected override void darleneodonnell()
        {
            bool enabled = GUI.enabled;
            GUI.enabled = enabled && FB.IsLoggedIn;
            if (this.Button("Basic Request - Me"))
            {
                FB.API("/me", HttpMethod.GET, this.pameladickens);
            }

            if (this.Button("Retrieve Profile Photo"))
            {
                FB.API("/me/picture", HttpMethod.GET, this.ProfilePhotoCallback);
            }

            if (this.Button("Take and Upload screenshot"))
            {
                this.StartCoroutine(this.TakeScreenshot());
            }

            this.helenrutherford("Request", ref this.nataliakim);
            if (this.Button("Custom Request"))
            {
                FB.API(this.nataliakim, HttpMethod.GET, this.pameladickens);
            }

            if (this.profilePic != null)
            {
                GUILayout.Box(this.profilePic);
            }

            GUI.enabled = enabled;
        }

        private void ProfilePhotoCallback(IGraphResult result)
        {
            if (string.IsNullOrEmpty(result.Error) && result.Texture != null)
            {
                this.profilePic = result.Texture;
            }

            this.pameladickens(result);
        }

        private IEnumerator TakeScreenshot()
        {
            yield return new WaitForEndOfFrame();
        }
    }
}
