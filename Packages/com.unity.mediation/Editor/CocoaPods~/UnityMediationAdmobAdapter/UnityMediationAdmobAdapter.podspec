#
#  Be sure to run `pod spec lint UnityMediationAdmobAdapter.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

    # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  These will help people to find your library, and whilst it
    #  can feel like a chore to fill in it's definitely to your advantage. The
    #  summary should be tweet-length, and the description more in depth.
    #
  
    spec.name         = "UnityMediationAdmobAdapter"
    spec.version      = "0.0.11"
    spec.summary      = "UnityMediationAdmobAdapter for UnityMediationSdk"
  
    # This description is used to generate tags and improve search results.
    #   * Think: What does it do? Why did you write it? What is the focus?
    #   * Try to keep it short, snappy and to the point.
    #   * Write the description between the DESC delimiters below.
    #   * Finally, don't worry about the indent, CocoaPods strips it!
    spec.description  = "UnityMediationAdmobAdapter Framework for loading and showing ads in the UnityMediationSdk."
  
    spec.homepage     = "https://github.com/Unity-Technologies/mz-mediation-sdk-ios"
    # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"
  
  
    # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  Licensing your code is important. See https://choosealicense.com for more info.
    #  CocoaPods will detect a license file if there is a named LICENSE*
    #  Popular ones are 'MIT', 'BSD' and 'Apache License, Version 2.0'.
    #
  
    # spec.license      = "MIT"
    # spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }
    spec.license        = { :type => 'Unity Monetization Services', :text => <<-LICENSE 

Unity Monetization copyright © 2020 Unity Technologies SF
Your use of the Unity Technologies SF ("Unity') services known as "Unity Monetization" are subject to the Unity Monetization Services Terms of Service linked to and copied immediately below.
[Unity Monetization Services TOS](https://unity3d.com/legal/monetization-services-terms-of-service)
Your use of Unity Monetization constitutes your acceptance of such terms. Unless expressly provided otherwise, the software under this license is made available strictly on an "AS IS" BASIS WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED. Please review the license for details on these and other terms and conditions.

      LICENSE
    }
  
    # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  Specify the authors of the library, with email addresses. Email addresses
    #  of the authors are extracted from the SCM log. E.g. $ git log. CocoaPods also
    #  accepts just a name if you'd rather not provide an email address.
    #
    #  Specify a social_media_url where others can refer to, for example a twitter
    #  profile URL.
    #
  
    spec.author             = { "Shawn Hampton" => "shawnh@unity3d.com" }
    # Or just: spec.author    = "Shawn Hampton"
    # spec.authors            = { "Shawn Hampton" => "shawnh@unity3d.com" }
    # spec.social_media_url   = "https://twitter.com/Shawn Hampton"
  
    # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  If this Pod runs only on iOS or OS X, then specify the platform and
    #  the deployment target. You can optionally include the target after the platform.
    #
  
    # spec.platform     = :ios
    spec.platform     = :ios, "9.0"
  
    #  When using multiple platforms
    # spec.ios.deployment_target = "5.0"
    # spec.osx.deployment_target = "10.7"
    # spec.watchos.deployment_target = "2.0"
    # spec.tvos.deployment_target = "9.0"
  
  
    # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  Specify the location from where the source should be retrieved.
    #  Supports git, hg, bzr, svn and HTTP.
    #
  
    spec.source = { :git => "" }
    spec.vendored_frameworks  = "UnityMediationAdmobAdapter.framework"
  
  
    # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  CocoaPods is smart about how it includes source code. For source files
    #  giving a folder will include any swift, h, m, mm, c & cpp files.
    #  For header files it will include any header in the folder.
    #  Not including the public_header_files will make all headers public.
    #
  
    # spec.source_files  = "**/*.h"
    # spec.exclude_files = "Classes/Exclude"
  
    # spec.public_header_files = "**/*.h"
  
  
    # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  A list of resources included with the Pod. These are copied into the
    #  target bundle with a build phase script. Anything else will be cleaned.
    #  You can preserve files from being cleaned, please don't preserve
    #  non-essential files like tests, examples and documentation.
    #
  
    # spec.resource  = "icon.png"
    # spec.resources = "Resources/*.png"
  
    # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"
  
  
    # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  Link your library with frameworks, or libraries. Libraries do not include
    #  the lib prefix of their name.
    #
  
    # spec.framework  = "SomeFramework"
    # spec.frameworks = "SomeFramework", "AnotherFramework"
  
    # spec.library   = "iconv"
    # spec.libraries = "iconv", "xml2"
  
  
    # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  If your library depends on compiler flags you can set them in the xcconfig hash
    #  where they will only apply to your library. If you depend on other Podspecs
    #  you can include multiple dependencies to ensure it works.
  
    # spec.requires_arc = true
  
    # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # spec.dependency "UnityMediationSdk", "~> 0.0.11"
    spec.dependency "Google-Mobile-Ads-SDK", "~> 7.60.0"
  end
  
