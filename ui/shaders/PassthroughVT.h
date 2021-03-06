#ifndef _PassthroughVT_H
#define _PassthroughVT_H

const std::string PassThroughShaderCode =
"#version 330 core\n"
"\n"
"// Input vertex data, different for all executions of this shader.\n"
"layout(location = 0) in vec3 vertexPosition_modelspace;\n"
"\n"
"// Output data ; will be interpolated for each fragment.\n"
"out vec2 UV;\n"
"\n"
"void main(){\n"
"	gl_Position =  vec4(vertexPosition_modelspace,1);\n"
"	UV = (vertexPosition_modelspace.xy+vec2(1,1))/2.0;\n"
"}\n";

const std::string SimpleVertexShaderCode =
"#version 330 core\n"
"layout (location=0) in vec3 position;\n"
"\n"
"uniform mat4 transform;\n"
" void main() {\n"
" 	gl_Position = transform * vec4(position, 1.0);\n"
"}\n";



#endif