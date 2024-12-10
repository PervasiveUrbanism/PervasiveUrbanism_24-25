# Resources and Skills Module: Pervasive Urbanism 2024-25  
This document provides additional support for the **Skills Module 2024/25**. It is organized into the following sections:

1. [**Main Software Packages:**](#SoftwarePackages)   
   This section details the main software packages required for the Skills Module 2024/25.

2. [**Learning Resources:**](#Learning)   
   A summary of online resources available to support your skills.

3. [**Open-Source Data:**](#Data)     
   A collection of links to publicly accessible datasets. 

4. [**Optional Software Packages & Web Services:**](#Extra)    
   This section lists optional software tools that are not covered in the 2024/25 Skills Module.

5. [**Arduino Components and Sensors**](#Sensor)   
   A collection of links to key manufacturers and retailers of Arduino parts and sensors.
---

<a name="SoftwarePackages"></a>
## 1. Main Software Packages  
Please download and install the following software:

### Rhino / Grasshopper  
- **Rhino:**  
   Rhino 8 and Grasshopper are available through the educational license linked to your UCL account.

- **Plug-ins:**  
   Rhino 8/Grasshopper plug-ins can be found on [Food4Rhino](https://www.food4rhino.com/). Below is a list of 
   - **Elk:** Import data from [OpenStreetMap](https://www.openstreetmap.org/#map=15/51.5390/-0.0177) into Rhino.
   - **Bison:** Analyze terrain meshes.
   - **Firefly:** Integrate network protocols and Arduino sensors into Grasshopper.
   - **Culebra:** Agent simulation.
   - **Pufferfish:** Transition tools.
   - **Lunchbox:** A versatile toolset.
   - **Heron:** Map tools 
   - **Human:** Display tools

### Python  
We will use Python 3.x, which you can download from the official [Python](https://www.python.org/) website.

- **IDE:**  
  We will primarily use **[VS Code](https://code.visualstudio.com/)**, with **[Google Colab](https://colab.research.google.com/)** as an alternative.
  - **[Google Colab](https://colab.research.google.com/):** A browser-based, hassle-free coding service by Google. Free to use, with an option to upgrade to a more powerful virtual machine.
  - **[VS Code](https://code.visualstudio.com/):** Requires local installation of Python and relevant libraries. It also supports **[GitHub Copilot](https://github.com/features/copilot)** for AI-based code completion. You can subscribe for free with your UCL account and is highly recommended. 

<!-- 
- **Python Libraries, Wrappers, and APIs:**  
   We will work with various libraries, including:
   - [Popular Times](https://github.com/m-wrzr/populartimes): Access Google Maps popular times data.
   - [Flickr API](https://pypi.org/project/flickrapi/).
   - [Pytube](https://github.com/pytube/pytube): Download YouTube videos.
   - [Python Pinterest API](https://pypi.org/project/pinterest-api/).
   - [Pytumblr](https://github.com/tumblr/pytumblr).
   - [OpenAI API](https://platform.openai.com/docs/api-reference?lang=python). 
 -->

### Graphics Reference

- https://shop.studioinnate.com/product/cyberpunk-asset-pack/
- https://gmunk.com/OBLIVION-GFX
- https://www.ryojiikeda.com/

---
<a name="Learning"></a>
# 2. Learning Resources

## LinkedIn Learning  
With your UCL account, you can access courses on [LinkedIn Learning](https://learning.linkedin.com) for free. Here are some recommended courses:  
- **Rhino 7 Essential Training**: A beginner's guide to Rhino.  
- **Rhino: From Curves to Surface**: Intermediate techniques for organic modeling.  
- **Grasshopper Essential Training**: An introduction to Grasshopper.  
- **Grasshopper: Generative Design for Architecture**: Intermediate Grasshopper techniques.  
- **Become an Arduino Developer**: A learning path for Arduino beginners.  
- **Python Essential Training**: A beginner’s guide to Python.

Please watch these tutorials and familiarize yourself with the content. While the skills tutorials will cover Python and Arduino, they won’t cover a beginner introduction on Rhino or Grasshopper. *Additionally, being somewhat familiar with the content beforehand will make it easier to follow along with the skills modules.*

## O'Reilly  
[O'Reilly](https://www.oreilly.com/) offers similar resources to LinkedIn Learning but with a focus on computing. Free for UCL students, it provides a vast range of books and video tutorials, making it a valuable resource for more advanced topics.

## Rhino / Grasshopper  
Download the [user manuals](https://www.rhino3d.com/en/tutorials/) and watch the tutorial videos.  
For Grasshopper, here’s a [selection of learning resources](https://www.grasshopper3d.com/page/tutorials-1). Most are free, but I recommend Modelab’s PDF and resources from Zubin Khabazi.  

Consider buying *Arturo Tedeschi's "AAD, Algorithms-Aided Design: Parametric Strategies Using Grasshopper"*, a great book with practical examples.  

Check out the [YouTube channel of Jose Sanchez](https://www.youtube.com/channel/UC5dMacit2C5fYiS4lMNq3ow) for excellent, though slightly dated, tutorials.  
Also, explore this site for [random Rhino/Grasshopper tips and tricks](http://runxel.xyz/rhino-secrets/).

## Python  
The internet is packed with Python learning resources. The offer of LinkedIn Learning should be sufficient. That said, here is a curated selection of tried-and-tested recommendations:
- *“Automate the Boring Stuff with Python”* is a beginner-friendly book available for purchase or free [online](https://automatetheboringstuff.com/#toc).  
- For quick reference, check out [W3Schools Python](https://www.w3schools.com/python/).

## Arduino
**"Exploring Arduino"** by Jeremy Blum  
An ideal introduction to Arduino, blending hands-on electronics with programming fundamentals.

**"Programming Arduino: Getting Started with Sketches"** by Simon Monk — Intermediate  
A fantastic resource for Arduino programming, providing in-depth insights into C language and microcontroller functions. Perfect for those wanting to advance their coding skills in Arduino.

**"Programming Arduino, Next Steps"** by Simon Monk — Advanced  
This book covers efficient coding techniques to run an Arduino on a single battery for extended periods, utilizing every tool to optimize performance. *Not* particularly relevant for RC15, it’s an outstanding guide (like all of Monk's work) for maximizing Arduino’s capabilities.

---
<a name="Data"></a>
## 3. Open-Source Data  

### Earth Vector Files  
[Natural Earth](https://www.naturalearthdata.com/) offers public domain map datasets at 1:10m, 1:50m, and 1:110m scales.

### OpenStreetMap (OSM)  
- Export data from [OpenStreetMap](https://www.openstreetmap.org/export).  
- For larger datasets, visit [Geofabrik](https://www.geofabrik.de).  
- Learn about extractable [features](https://wiki.openstreetmap.org/wiki/Map_Features) from OpenStreetMap.

### Trees  
Find tree locations on [OpenTrees](https://opentrees.org).

### Edina  
[Digimap](https://digimap.edina.ac.uk/) is an online mapping service available to UK higher education institutions. It doesn’t include its own imagery but provides a collection of publicly available UK geodata, such as from DEFRA, making it a handy, well-maintained resource.

### USGS Earth Explorer  
[USGS Earth Explorer](https://earthexplorer.usgs.gov) is a primary resource for aerial imagery.

### European Space Agency (ESA)  
The [ESA](https://scihub.copernicus.eu/dhus/#/home) provides an extensive satellite image archive. While USGS focuses on the USA, ESA often offers better coverage for Europe.

### EOS Land Viewer  
The [EOS Land Viewer](https://eos.com/landviewer/) offers a free subscription to download and analyze satellite images, including tools to check green activity and land use types.

### NASA  
Access NASA’s online archive at [EarthData](https://earthdata.nasa.gov/).

### Department for Environment, Food and Rural Affairs (DEFRA)  
[DEFRA](https://environment.data.gov.uk) offers 3D topography maps of the UK in height maps and coarse point clouds, compatible with QGIS raster analysis tools.
<!-- 
### Google Earth Engine & Microsoft Planetary Computer  
[Google Earth Engine](https://earthengine.google.com/) and [Microsoft Planetary Computer](https://planetarycomputer.microsoft.com/) provide extensive satellite image libraries from NASA and ESA. These services also allow you to run algorithms on the images. Free but requires an application to access. Both have 30m/pixel resolution, making them ideal for country or city-level studies, though not detailed enough for close zoom. Google Earth Engine is considered more user-friendly.
  -->

### London / UK  
#### London Data Store  
[London Data Store](http://data.london.gov.uk/) is a hub for public datasets from the City of London.

#### Data Gov  
[Data Gov UK](https://data.gov.uk/) provides access to a wide range of UK government datasets.

#### London Planning Applications  
The [Planning London Datahub](https://www.london.gov.uk/programmes-strategies/planning/digital-planning/planning-london-datahub?ac-60574=60568) includes planning application data, APIs, and dashboard functions.

#### Air Pollution London  
[London Air](https://www.londonair.org.uk/LondonAir/Default.aspx) tracks air pollution data across the city.

#### Open Data TFL London  
[TFL Open Data](https://tfl.gov.uk/info-for/open-data-users/our-open-data#on-this-page-10) offers traffic-related data for London, including "Busiest times on trains and in stations" and "Live traffic camera images (CCTV)."

---
<a name="Extra"></a>
## 4. Additional Software Packages and Web Services  

### QGIS  
[QGIS](https://qgis.org/en/site/index.html) is a free, open-source GIS tool for working with maps, satellite images, shapefiles, and databases. It supports numerous formats and exports as DXF or PDF files. Although powerful, it is mostly 2D, and its interface may not be as polished as some commercial alternatives like ArcGis.

- **Plug-ins:**  
   Available through the QGIS Plugin Manager:
   - **Flickr Metadata Downloader:** Search and download geotagged Flickr images.
   - **Mmqgis:** Tools for hexagons and Voronoi diagrams.
   - **QuickOSM:** Download OpenStreetMap data.
   - **Time Series:** Create and export animations.
   - **TravelTime Platform Plugin:** Perform network analysis.
   - **QNEAT3:** Network analysis.
  
[Patrick Stotz’s QGIS 101](https://github.com/PatrickStotz/mapping_101) is a good starting point for learning QGIS.  

Additionally, the official documentation is very useful:  
- [Gentle Introduction to GIS](https://docs.qgis.org/3.22/en/docs/gentle_gis_introduction/index.html)  
- [Training Manual](https://docs.qgis.org/3.22/en/docs/training_manual/index.html)  
- [Terrain Analysis](https://docs.qgis.org/2.14/en/docs/training_manual/rasters/terrain_analysis.html)  

If you have specific questions, [GIS Stack Exchange](https://gis.stackexchange.com/) is a helpful resource.

### Sublime Text Editor  
[Sublime Text](https://www.sublimetext.com/) is a versatile text editor capable of handling large text files, unlike Notepad.

### vvvv  
[vvvv gamma](https://visualprogramming.net/) is a very powerful visual live-programming environment based on C#. The license for non-commercial use is free and unrestricted. TouchDesigner is a major competitor to vvvv, though its free license comes with some limitations that could become restrictive over time.

You can find many example files within the vvvv installation itself. A second great resource is the free course offered by the [Node Institute in Berlin](https://thenodeinstitute.org/courses/node20-vvvv-workshop-bundle/). Simply subscribe to access the course.  

You might also find some tutorials on YouTube, though the community is small but very supportive. You can ask questions in the forum or join the vvvv group on "Element."

### Sensor Log  
[Sensor Log](http://sensorlog.berndthomas.net/) is an iPhone app that turns your phone into a sensor device.

### D5  
[D5](https://www.d5render.com/) is a real-time rendering engine, similar to Enscape or Twinmotion. It offers an educational license for unlocking all features. 

### Mapbox Studio 
[Map box](https://www.mapbox.com/mapbox-studio) offers map styling services and these maps that can be used as a background in QGIS. This is usually quite fast and of good quality. This is a paid service, but the free tier is quite generous and fully sufficient for our purposes.

This shows you how you can use [background images in QGIS](https://docs.mapbox.com/help/tutorials/mapbox-arcgis-qgis/).

### Kepler GL
[Kepler GL](https://kepler.gl/) is an online tool to visualise geo-datasets. It’s simple, performant, free and creates nice images. It's basic, but good enough for quick visuals.

### Ped Catch
[Ped Catch](http://pedcatch.com/) creates pedestrian network diagrams that account to slopes. Easy to do and the results can be exported into Qgis.

### Google Earth and Google Earth Studio
[Google Earth](https://earth.google.com) lets you take screenshots from places, it also allows you to upload some simple geometry.

[Google Earth Studio](https://www.google.com/earth/studio/), however, allows you to do flythroughs and animations. This, for example, could be used for presentations and/or 3D point cloud reconstruction with Autodesk Recap. 

### Best Time
[Best Time](https://besttime.app/) is an app that gives you the foot traffic at any given location of the world. This is useful if you want to know how busy a certain area is at a certain time. This app has a user interface and an API. There is a free account too.


---
<a name="Sensor"></a>
## 5. Arduino Components and Sensors 

- [Arduino Official Website](https://www.arduino.cc/)
- [Sparkfun](https://www.sparkfun.com/)
- [Seedstudio](https://www.seeedstudio.com)
- [The Robot Shop](https://uk.robotshop.com/)
- [The Pi Hut](https://thepihut.com/)
- [Adafruit](https://www.adafruit.com/)
- [Piromini](https://shop.pimoroni.com/)
- [DF Robot](https://www.dfrobot.com/)
- [Lilygo](https://www.lilygo.cc/)
