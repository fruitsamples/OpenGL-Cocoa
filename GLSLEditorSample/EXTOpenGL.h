#include <OpenGL/gl.h>
#include <OpenGL/glext.h>
#include <OpenGL/glu.h>
#include <OpenGL/OpenGL.h>

#if !GL_VERSION_2_1
#define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#define GL_PIXEL_PACK_BUFFER              0x88EB
#define GL_PIXEL_UNPACK_BUFFER            0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
#define GL_FLOAT_MAT2x3                   0x8B65
#define GL_FLOAT_MAT2x4                   0x8B66
#define GL_FLOAT_MAT3x2                   0x8B67
#define GL_FLOAT_MAT3x4                   0x8B68
#define GL_FLOAT_MAT4x2                   0x8B69
#define GL_FLOAT_MAT4x3                   0x8B6A
#define GL_SRGB                           0x8C40
#define GL_SRGB8                          0x8C41
#define GL_SRGB_ALPHA                     0x8C42
#define GL_SRGB8_ALPHA8                   0x8C43
#define GL_SLUMINANCE_ALPHA               0x8C44
#define GL_SLUMINANCE8_ALPHA8             0x8C45
#define GL_SLUMINANCE                     0x8C46
#define GL_SLUMINANCE8                    0x8C47
#define GL_COMPRESSED_SRGB                0x8C48
#define GL_COMPRESSED_SRGB_ALPHA          0x8C49
#define GL_COMPRESSED_SLUMINANCE          0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA    0x8C4B

#ifdef GL_GLEXT_FUNCTION_POINTERS
typedef void (* glUniformMatrix2x3fvProcPtr) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* glUniformMatrix3x2fvProcPtr) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* glUniformMatrix2x4fvProcPtr) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* glUniformMatrix4x2fvProcPtr) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* glUniformMatrix3x4fvProcPtr) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (* glUniformMatrix4x3fvProcPtr) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#else
extern void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#endif /* GL_GLEXT_FUNCTION_POINTERS */
#endif

#if !GL_EXT_geometry_shader4
#define GL_GEOMETRY_SHADER_EXT						0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_EXT				0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_EXT					0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_EXT					0x8DDC
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT		0x8C29
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT		0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_EXT		0x8DDE
#define GL_MAX_VARYING_COMPONENTS_EXT				0x8B4B
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT		0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT			0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT	0x8DE1
#define GL_LINES_ADJACENCY_EXT						0xA
#define GL_LINE_STRIP_ADJACENCY_EXT					0xB
#define GL_TRIANGLES_ADJACENCY_EXT					0xC
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT				0xD
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT	0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT	0x8DA9
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT		0x8DA7
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT	0x8CD4
#define GL_PROGRAM_POINT_SIZE_EXT					0x8642
#endif

#if !GL_EXT_geometry_shader4
#ifdef GL_GLEXT_FUNCTION_POINTERS
typedef void (* glProgramParameteriEXTProcPtr) (GLuint program, GLenum pname, GLint value);
typedef void (* glFramebufferTextureEXTProcPtr) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (* glFramebufferTextureLayerEXTProcPtr) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (* glFramebufferTextureFaceEXTProcPtr) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
#else
extern void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value);
extern void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level);
extern void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
#endif /* GL_GLEXT_FUNCTION_POINTERS */
#endif
