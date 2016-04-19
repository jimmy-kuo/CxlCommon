//==================================================================================
// Copyright (c) 2016 , Advanced Micro Devices, Inc.  All rights reserved.
//
/// \author AMD Developer Tools Team
/// \file apStringConstants.h
///
//==================================================================================

//------------------------------ apStringConstants.h ------------------------------

#ifndef __APSTRINGCONSTANTS_H
#define __APSTRINGCONSTANTS_H

// General strings:
#define AP_STR_NotAvailable L"N/A"
#define AP_STR_GL L"GL"
#define AP_STR_CL L"CL"
#define AP_STR_OpenGL L"OpenGL"
#define AP_STR_OpenGLES L"OpenGL ES"
#define AP_STR_OpenCL L"OpenCL"
#define AP_STR_OpenGLAndOpenCL L"OpenGL + OpenCL"
#define AP_STR_Space L" "
#define AP_APIFunctionNo L"API function no"
#define AP_STR_Unknown L"Unknown"
#define AP_STR_Low L"Low"
#define AP_STR_Medium L"Medium"
#define AP_STR_High L"High"
#define AP_STR_Unsupported L"Unsupported"
#define AP_STR_FALSE L"FALSE"
#define AP_STR_TRUE L"TRUE"
#define AP_STR_False L"False"
#define AP_STR_True L"True"
#define AP_STR_Space L" "
#define AP_STR_DEFAULT_PROFILE L"Session"

// Error messages:
#define AP_STR_unknownDataType L"Unknown data type"
#define AP_STR_unknownBufferDataFormat L"Unknown buffer data format"
#define AP_STR_couldNotDetermineMipLevelCompressionStatus L"Could not determine mip level compression status"
#define AP_STR_couldNotDetermineTextureMipMapGenerationStatus L"Could not determine texture's mipmap generation status"
#define AP_STR_couldNotDetermineTextureInternalFormat L"Could not determine texture's internal format"
#define AP_STR_couldNotUpdateTextureRawData L"Could not update texture raw data"
#define AP_STR_UnknownAPIFunctionIdIsUsed L"Unknown API function id is used: "
#define AP_STR_unexpectedOGLVersionTreatedAsLower L"OpenGL version %d.%d not fully supported by CodeXL. Treating as a lower version."

// File types wildcards:
#define AP_STR_JpegWildcard L"JPEG (*.jpg *.jpeg)"
#define AP_STR_PngWildcard L"PNG (*.png)"
#define AP_STR_BmpWildcard L"BMP (*.bmp)"
#define AP_STR_TiffWildcard L"TIFF (*.tif *.tiff)"
#define AP_STR_CsvWildcard L"CSV (*.csv)"

// Texture types:
#define AP_STR_1DTexture L"1D"
#define AP_STR_2DTexture L"2D"
#define AP_STR_3DTexture L"3D"
#define AP_STR_CubeMapTexture L"Cube Map"
#define AP_STR_CubeMapArrayTexture L"Cube Map Array"
#define AP_STR_RectangleTexture L"Rectangle"
#define AP_STR_1DArrayTexture L"1D Array"
#define AP_STR_2DArrayTexture L"2D Array"
#define AP_STR_2DMultiSampleTexture L"2D MultiSample"
#define AP_STR_2DMultiSampleArrayTexture L"2D MultiSample Array"
#define AP_STR_BufferTexture L"Buffer"
#define AP_STR_NATexture L"N/A"

// Deprecation status titles:
#define AP_STR_DeprecatedNone L"None"
#define AP_STR_DeprecatedFull L"Completely Deprecated Function"
#define AP_STR_DeprecatedPixelFormatArgValue L"Deprecated Pixel Format"
#define AP_STR_DeprecatedPipelineVertexArgValue L"Fixed Pipeline Vertex Processing"
#define AP_STR_DeprecatedIndexMode L"Color Index Mode"
#define AP_STR_DeprecatedDisplayLists L"Display Lists"
#define AP_STR_DeprecatedRectangle L"Drawing Rectangles"
#define AP_STR_DeprecatedRasterPos L"Raster Position"
#define AP_STR_DeprecatedSeperatePolygonDrawMode L"Seperate Polygon Draw Mode"
#define AP_STR_DeprecatedPolygonLineStipple L"Polygon and Line Stipple"
#define AP_STR_DeprecatedBitmap L"Bitmaps"
#define AP_STR_DeprecatedPixelDrawing L"Pixel Drawing"
#define AP_STR_DeprecatedTextureClampWrapMode L"Texture Clamp Wrap Mode"
#define AP_STR_DeprecatedTextureMipmapAutoGenerate L"Texture Mipmap Auto Generate"
#define AP_STR_DeprecatedAlphaTest L"Alpha Test"
#define AP_STR_DeprecatedEvaluators L"Evaluators"
#define AP_STR_DeprecatedFeedback L"Selection and Feedback Modes"
#define AP_STR_DeprecatedHints L"Hints"
#define AP_STR_DeprecatedNonSpritePoints L"Non-Sprite Points"
#define AP_STR_DeprecatedLineWidth L"Line Width"
#define AP_STR_DeprecatedTextureBorder L"Texture Border"
#define AP_STR_DeprecatedAttributeStacks L"Attribute Stacks"
#define AP_STR_DeprecatedImmediateMode L"Immediate Mode Drawing"
#define AP_STR_DeprecatedApplicationGeneratedNames L"Application Generated Object Names"
#define AP_STR_DeprecatedFixedFunctionFragmentProcessing L"Fixed Function Fragment Processing"
#define AP_STR_DeprecatedAccumulationBuffers L"Accumulation Buffers"
#define AP_STR_DeprecatedFramebufferSizeQueries L"Framebuffer Size Queries"
#define AP_STR_DeprecatedPixelCopy L"Pixel Copying"
#define AP_STR_DeprecatedQuadPolygonPrimitives L"Quadrilateral and Polygon Primitives"
#define AP_STR_DeprecatedUnifiedExtensionString L"Unified Extension String"
#define AP_STR_DeprecatedAuxiliryBuffers L"Auxiliry Buffers"
// TO_DO: Ope
#define AP_STR_DeprecatedMaxVarying L"Max Varying"
#define AP_STR_DeprecatedClientVertexAndIndexArrays L"Client Vertex and Index Arrays"
#define AP_STR_DeprecatedPixelTransfer L"Pixel Transfer Modes and Operations"
#define AP_STR_DeprecatedGLSLVersion L"GLSL Version"
#define AP_STR_DeprecatedCompressedTextureFormats L"Implementation-defined compressed texture formats"
#define AP_STR_DeprecatedLSBFirstPixelPacking L"LSB-first pixel packing for bitmaps"

// Deprecation reasons as strings:
#define AP_STR_DeprecatedNoneReason L"Function is not deprecated."
#define AP_STR_DeprecatedFullReason L"Function is completely deprecated."
#define AP_STR_DeprecatedIndexModeReason L"Color index mode rendering is deprecated."
#define AP_STR_DeprecatedImmediateModeReason L"Immediate mode rendering is deprecated."
#define AP_STR_DeprecatedDisplayListsReason L"Display lists are deprecated."
#define AP_STR_DeprecatedRectanglesReason L"Rectangle drawing is deprecated."
#define AP_STR_DeprecatedRasterPosFunctionReason L"All raster position functions and state variables are deprecated."
#define AP_STR_DeprecatedStateVariableReason L"The function argument number %d (%ls) is accessing a deprecated state variable."
#define AP_STR_DeprecatedAttributeStacksReason L"Attribute stacks are deprecated."
#define AP_STR_DeprecatedSeperatePolygonDrawModeReason L"Seperate polygon draw mode is deprecated."
#define AP_STR_DeprecatedPolygonAndLineStippleReason L"Polygon and Line stipple features are deprecated."
#define AP_STR_DeprecatedBitmapReason L"glBitmap and all the GL_BITMAP external formats are deprecated."
#define AP_STR_DeprecatedPixelDrawingReason L"Pixel drawing feature is deprecated."
#define AP_STR_DeprecatedPixelFormatArgValueReason L"Function argument number %d (%ls) value is a deprecated pixel format."
#define AP_STR_DeprecatedEdgeFlagsArgValueReason L"Function argument number %d (%ls) is deprecated."
#define AP_STR_DeprecatedFixedFunctionFragmentProcessingReason L"Fixed function fragment feature is deprecated."
#define AP_STR_DeprecatedAccumulationBuffersReason L"Accumulation buffers are deprecated."
#define AP_STR_DeprecatedFramebufferSizeQueriesReason L"Framebuffer size queries are deprecated."
#define AP_STR_DeprecatedPixelCopyReason L"Pixel copying feature is deprecated."
#define AP_STR_DeprecatedGLSLVersionReason L"Shader GLSL version is deprecated."
#define AP_STR_DeprecatedApplicationGeneratedNamesReason L"An object must be generated before it is used. To avoid this deprecation call %ls before using the object."
#define AP_STR_DeprecatedTextureClampWrapReason L"Texture clamp wrap mode is deprecated."
#define AP_STR_DeprecatedTextureAutoMipmapReason L"Texture mipmap automatic generation is deprecated."
#define AP_STR_DeprecatedAlphaTestFunctionReason L"Alpha test feature is deprecated."
#define AP_STR_DeprecatedAlphaTestReason L"Alpha test feature is deprecated."
#define AP_STR_DeprecatedEvaluatorsReason L"Evaluators feature is deprecated."
#define AP_STR_DeprecatedFeedbackReason L"Selection and feedback modes features are deprecated."
#define AP_STR_DeprecatedHintsReason L"The target %ls to glHint function is deprecated."
#define AP_STR_DeprecatedNonSpritePointsReason L"Non sprite points rasterization is deprecated."
#define AP_STR_DeprecatedLineWidthReason L"Line width value (%ls) is deprecated. Value should be smaller than 1.0."
#define AP_STR_DeprecatedTextureBorderReason L"Texture border value is deprecated."
#define AP_STR_DeprecatedPolygonQuadsPrimitivesReason L"The function argument number %d (%ls) is using qudrilateral and polygon primitives, which is deprecated feature."
#define AP_STR_DeprecatedUnifiedExtensionStringReason L"GL_EXTENSIONS target to glGetString is deprecated."
#define AP_STR_DeprecatedAuxiliryBuffersReason L"%ls is a deprecated auxiliry buffer."
#define AP_STR_DeprecatedClientVertexAndIndexArraysReason L"The function <b>%ls</b> is using client vertex or index array, which is a deprecated feature."
#define AP_STR_DeprecatedPixelTransferReason L"Pixel transfer feature is deprecated."

// Events handler strings:
#define AP_STR_HandlingEvent L"Handling event: "
#define AP_STR_RegisteringEvent L"Registering event: "
#define AP_STR_EndedEventHandling L"Event handling ended"
#define AP_STR_HandlingProcessCreation L"Debugged Process created"
#define AP_STR_HandlingProcessRunStarted L"Debugged Process run started"
#define AP_STR_HandlingProcessTermination L"Debugged Process terminated"
#define AP_STR_HandlingProcessCreationFailure L"Debugged Process creation failed"
#define AP_STR_HandlingProcessSuspension L"Debugged Process run suspended"
#define AP_STR_HandlingBeforeProcessRunResumed L"Before Debugged Process run resumed"
#define AP_STR_HandlingProcessRunResumed L"Debugged Process run resumed"
#define AP_STR_HandlingProcessRunStartedExternally L"Debugged Process run started externally"
#define AP_STR_HandlingThreadCreated L"Thread created: %u"
#define AP_STR_HandlingThreadTerminated L"Thread terminated: %u"
#define AP_STR_HandlingDLLLoad L"DLL Loaded: "
#define AP_STR_HandlingDLLUnload L"DLL Unloaded: "
#define AP_STR_HandlingSecondChanceException L"Second chance exception: Reason %#x, Address %#llx"
#define AP_STR_HandlingBreakPointHit L"Breakpoint hit"
#define AP_STR_HandlingDebugString L"Debug string: "
#define AP_STR_HandlingGDBOutput L"GDB output: "
#define AP_STR_HandlingGDBError L"GDB error: "
#define AP_STR_HandlingDebuggedProcessOutput L"Debugged process output: "
#define AP_STR_HandlingGDBListenerThreadSuspended L"GDB listener thread is suspended"
#define AP_STR_HandlingAPIConnectionEstablished L"API connection established"
#define AP_STR_HandlingAPIConnectionEnded L"API connection ended"
#define AP_STR_HandlingDebuggedProcessError L"Debugged process error"
#define AP_STR_HandlingOpenCLError L"OpenCL error"
#define AP_STR_HandlingInfraStartsBeingBusy L"Infrastructure stars being busy"
#define AP_STR_HandlingInfraEndsBeingBusy L"Infrastructure ends being busy"
#define AP_STR_HandlingUnknownEvent L"Unknown event"
#define AP_STR_HandlingInfraFailure L"Infrastructure failure"
#define AP_STR_HandlingMemoryLeak L"Memory leak"
#define AP_STR_HandlingSearchingForMemoryLeaks L"Searching for memory leaks"
#define AP_STR_HandlingGlobalVariableChange L"Application global variable changed"
#define AP_STR_HandlingGLDebugOutputMessage L"OpenGL Debug Output message"
#define AP_STR_HandlingOpenGLRenderContextCreated L"Render Context %d created"
#define AP_STR_HandlingOpenGLRenderContextDeleted L"Render Context %d deleted"
#define AP_STR_HandlingOpenCLComputeContextCreated L"Compute Context %d created"
#define AP_STR_HandlingOpenCLComputeContextDeleted L"Compute Context %d deleted"
#define AP_STR_HandlingOpenCLQueueCreated L"OpenCL Queue %d created"
#define AP_STR_HandlingOpenCLQueueDeleted L"OpenCL Queue %d deleted"
#define AP_STR_HandlingOpenCLProgramCreated L"OpenCL Program %d created"
#define AP_STR_HandlingOpenCLProgramDeleted L"OpenCL Program %d deleted"
#define AP_STR_HandlingSpyProgress L"Spy Progress: %d"
#define AP_STR_handlingTechnologyMonitorFailure L"Technology Monitor failure: "
#define AP_STR_HandlingUserWarning L"User warning"
#define AP_STR_handlingProcessDuringTermination L"Debugged process is about to terminate"
#define AP_STR_handlingContextUpdate L"Context was updated"
#define AP_STR_handlingMonitoredObjectSelected L"Object selected"
#define AP_STR_handlingMonitoredObjectActivated L"Object activated"
#define AP_STR_handlingBeforeKernelDebugging L"Before kernel debugging"
#define AP_STR_handlingAfterKernelDebugging L"After kernel debugging"
#define AP_STR_handlingKernelCurrentWorkItemChanged L"Active work item changed"
#define AP_STR_handlingKernelDebuggingFailed L"Kernel debugging failed"
#define AP_STR_handlingKernelDebuggingInterrupted L"Kernel debugging interrupted"
#define AP_STR_handlingTextureImagesFlush L"Texture images updated"
#define AP_STR_handlingBreakpointsUpdated L"Breakpoints updated"
#define AP_STR_handlingKernelSourceBreakpointsUpdated L"Kernel source breakpoints updated"
#define AP_STR_handlingProgramBuild L"OpenCL program built"
#define AP_STR_handlingProgramBuildFailedWithDebugFlags L"OpenCL program not built for debug"
#define AP_STR_handingExecutionModeChanged L"Switching to Execution Mode: "
#define AP_STR_handingExecutionModeChangedSessionType L", Session Type: "
#define AP_STR_HandlingCallStackFrameSelected L"Call stack frame selected"
#define AP_STR_handlingDeferredCommand L"Deferred command: %u, target: %u, data: %p"
#define AP_STR_handlingAddWatch L"Add watch variable"
#define AP_STR_handlingHexChanged L"Hexadecimal display mode changed"
#define AP_STR_handlingMDICreated L"MDI window created"
#define AP_STR_handlingMDIActivated L"MDI window activated"
#define AP_STR_handlingMemoryAllocationFailureEvent L"Memory Allocation Failure"
#define AP_STR_handlingUpdateUI L"UI updated"
#define AP_STR_handlingProfileProcessTerminated L"Profile process terminated"
#define AP_STR_handlingProfileProgress L"Profile progress"
#define AP_STR_HandlingEventStart L"Starting handling event by: %ls"
#define AP_STR_HandlingEventEnd L"Ended handling event by: %ls"
#define AP_STR_EventWasVetoed L", event was vetoed"
#define AP_STR_EventSuperseded L"Event was superseded by a newer event of the same type"

// Samplers:
#define AP_STR_SamplerFilterModeNearest L"Nearest"
#define AP_STR_SamplerFilterModeLinear L"Linear"
#define AP_STR_SamplerFilterModeNone L"None"
#define AP_STR_SamplerAddressingModeNone L"None"
#define AP_STR_SamplerAddressingModeClampToEdge L"Clamp To Edge"
#define AP_STR_SamplerAddressingModeClamp L"Clamp"
#define AP_STR_SamplerAddressingModeRepeat L"Repeat"
#define AP_STR_SamplerAddressingModeMirrorRepeat L"Mirror Repeat"

// Render Contexts:
#define AP_STR_GPUAffinity L"GPU %d,"
#define AP_STR_NoContext L"No Context"
#define AP_STR_ContextName L"Context %d"
#define AP_STR_ContextGLName L"GL%d"
#define AP_STR_ContextCLName L"CL%d"
#define AP_STR_ContextDeletedPostfix L" (deleted)"
#define AP_STR_ContextSharedPoxtfix L" (shared - %ls)"
#define AP_STR_ContextTypeNULL L"No Context"
#define AP_STR_ContextTypeOpenGL L"Render Context"
#define AP_STR_ContextTypeOpenCL L"Compute Context"
#define AP_STR_ContextTypeUnknown L"Context"

// OpenCL Device types:
#define AP_STR_CL_DEVICE_TYPE_CPU_AS_STR L"CPU"
#define AP_STR_CL_DEVICE_TYPE_GPU_AS_STR L"GPU"
#define AP_STR_CL_DEVICE_TYPE_ACCELERATOR_AS_STR L"ACCELERATOR"
#define AP_STR_CL_DEVICE_TYPE_DEFAULT_AS_STR L"DEFAULT"
#define AP_STR_CL_DEVICE_TYPE_CUSTOM_AS_STR L"CUSTOM"
#define AP_STR_CL_DEVICE_TYPE_UNKNOWN_AS_STR L"N/A"

// OpenCL Device Floating point config types:
#define AP_STR_CL_FP_DENORM_AS_STR L"Denorms"
#define AP_STR_CL_FP_INF_NAN_AS_STR L"INF and NaNs"
#define AP_STR_CL_FP_ROUND_TO_NEAREST_AS_STR L"Round to nearest"
#define AP_STR_CL_FP_ROUND_TO_ZERO_AS_STR L"Round to zero"
#define AP_STR_CL_FP_ROUND_TO_INF_AS_STR L"Round to +ve and -ve infinity"
#define AP_STR_CL_FP_FMA_AS_STR L"IEEE754-2008 fused multiply-add"
#define AP_STR_CL_FP_SOFT_FLOAT_STR L"Basic floating-point"
#define AP_STR_CL_FP_CORRECTLY_ROUNDED_DIVIDE_SQRT L"Correctly-rounded-divide-sqrt"
#define AP_STR_CL_FP_CONFIG_UNKNOWN_AS_STR L"Unknown / unsupported"

// OpenCL Device queue supported properties:
#define AP_STR_CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE_AS_STR L"Out-of-order execution mode"
#define AP_STR_CL_QUEUE_PROFILING_ENABLE_AS_STR L"Queue profiling"
#define AP_STR_CL_QUEUE_PROPERTIES_UNKNOWN_AS_STR L"N/A"

// OpenCL Device SVM capabilities:
#define AP_STR_CL_DEVICE_SVM_COARSE_GRAIN_BUFFER_AS_STR L"Coarse-grained buffer SVM"
#define AP_STR_CL_DEVICE_SVM_FINE_GRAIN_BUFFER_AS_STR L"Fine-grained buffer SVM"
#define AP_STR_CL_DEVICE_SVM_FINE_GRAIN_SYSTEM_AS_STR L"Fine-grained system SVM (malloc)"
#define AP_STR_CL_DEVICE_SVM_ATOMICS_AS_STR L"System atomics"
#define AP_STR_CL_SVM_CAPABILITIES_UNKNOWN_AS_STR L"N/A"

// OpenCL execution capabilities types:
#define AP_STR_CL_EXEC_KERNEL_AS_STR L"Kernel Execution"
#define AP_STR_CL_EXEC_NATIVE_KERNEL_AS_STR L"Native Kernel Execution"
#define AP_STR_CL_EXEC_CAPABILITIES_UNKNOWN_AS_STR L"N/A"

// OpenCL memory cache types:
#define AP_STR_CL_MEM_CACHE_NONE_AS_STR L"None"
#define AP_STR_CL_MEM_READ_ONLY_CACHE_AS_STR L"Read Only"
#define AP_STR_CL_MEM_READ_WRITE_CACHE_AS_STR L"Read Write"
#define AP_STR_CL_MEM_CACHE_UNKNOWN_AS_STR L"N/A"

// OpenCL Local memory types:
#define AP_STR_CL_MEM_LOCAL_AS_STR L"Local"
#define AP_STR_CL_MEM_GLOBAL_AS_STR L"Global"
#define AP_STR_CL_LOCAL_MEM_TYPE_UNKNOWN_AS_STR L"N/A"

// Queue suffix:
#define AP_STR_PerformanceCountersQueueSuffix L"Queue %d"

// OpenGL stub operations:
#define AP_STR_OpenGLStubDrawBufferMode L"Draw Buffer"
#define AP_STR_OpenGLStubPolygonRasterMode L"Polygon Raster"
#define AP_STR_OpenGLStubTexturesMode L"Stub Textures"
#define AP_STR_OpenGLStubSingleViewPortMode L"Single Pixel Viewport"
#define AP_STR_OpenGLStubFragmentShadersMode L"Stub Fragment Shaders"
#define AP_STR_OpenGLStubGeometryShadersMode L"Stub Geometry Shaders"
#define AP_STR_OpenGLStubNoLightsMode L"No Lights"

// OpenCL cancel operations:
#define AP_STR_OpenCLKernelExecution L"Kernel Execution"
#define AP_STR_OpenCLReadOperationsExecution L"Read Operation Execution"
#define AP_STR_OpenCLWriteOperationsExecution L"Write Operation Execution"
#define AP_STR_OpenCLCopyOperationsExecution L"Copy Operation Execution"

// OpenGL debug output:
#define AP_STR_OpenGLDebugOutputSourceAPI L"API"
#define AP_STR_OpenGLDebugOutputSourceWindowSystem L"Window System"
#define AP_STR_OpenGLDebugOutputSourceShaderCompiler L"Shader Compiler"
#define AP_STR_OpenGLDebugOutputSourceThirdParty L"Third Party"
#define AP_STR_OpenGLDebugOutputSourceApplication L"Application"
#define AP_STR_OpenGLDebugOutputSourceOther L"Other"
#define AP_STR_OpenGLDebugOutputTypeError L"Error"
#define AP_STR_OpenGLDebugOutputTypeDeprecatedBehavior L"Deprecated Behavior"
#define AP_STR_OpenGLDebugOutputTypeDeprecatedBehaviorShort L"Deprecated"
#define AP_STR_OpenGLDebugOutputTypeUndefinedBehavior L"Undefined Behavior"
#define AP_STR_OpenGLDebugOutputTypeUndefinedBehaviorShort L"Undefined"
#define AP_STR_OpenGLDebugOutputTypePortability L"Portability"
#define AP_STR_OpenGLDebugOutputTypePerformance L"Performance"
#define AP_STR_OpenGLDebugOutputTypeOther L"Other"
#define AP_STR_OpenGLDebugOutputTypeMarker L"Marker"
#define AP_STR_OpenGLDebugOutputTypePushGroup L"Push Group"
#define AP_STR_OpenGLDebugOutputTypePopGroup L"Pop Group"

#define AP_STR_OpenGLDebugOutputMessagesExceededLimit L"Reported Messages Limit Exceeded"

// Memory leaks:
#define AP_STR_MemoryLeakStart L"Memory Leak: "
#define AP_STR_MemoryLeakNone L"No memory leaks were found"
#define AP_STR_MemoryLeakAppTerminationRenderContext L"GL Context"
#define AP_STR_MemoryLeakAppTerminationRenderContexts L"GL Contexts"
#define AP_STR_MemoryLeakAppTerminationMiddleBridge L"; "
#define AP_STR_MemoryLeakAppTerminationLastBridge L" and "
#define AP_STR_MemoryLeakAppTerminationPBO L"PBuffer"
#define AP_STR_MemoryLeakAppTerminationPBOs L"PBuffers"
#define AP_STR_MemoryLeakAppTerminationSyncObject L"Sync Object"
#define AP_STR_MemoryLeakAppTerminationSyncObjects L"Sync Objects"
#define AP_STR_MemoryLeakAppTerminationComputeContext L"CL Context"
#define AP_STR_MemoryLeakAppTerminationComputeContexts L"CL Contexts"
#define AP_STR_MemoryLeakAppTerminationEndSingular L" was not deleted before application termination"
#define AP_STR_MemoryLeakAppTerminationEndPlural L" were not deleted before application termination"
#define AP_STR_MemoryLeakSizeMessage L" (Leak Size: %lsKB)"
#define AP_STR_MemoryLeakAllocatedObjectsGLContext L"%d object(s) are leaked in GL Context %u"
#define AP_STR_MemoryLeakAllocatedObjectsCLContext L"%d object(s) are leaked in CL Context %u"
#define AP_STR_MemoryLeakAllocatedObjectsCLProgram L"%d object(s) are leaked in CL Context %u Program %u"

// Kernel debugging failure messages:
#define AP_STR_KernelDebuggingFailed L"Could not debug kernel."
#define AP_STR_KernelDebuggingFailedReasonNotSupported L"\nThis kernel uses unsupported features."
#define AP_STR_KernelDebuggingFailedReasonArgsNotSupported L"\nThis kernel uses unsupported argument types."
#define AP_STR_KernelDebuggingFailedReasonNotSupportedGeneral L"\nKernel might be using atomics, unsupported barrier types, or the printf command."
#define AP_STR_KernelDebuggingFailedReasonUnsupportedPlatform L"\nKernel debugging is only supported on AMD platforms."
#define AP_STR_KernelDebuggingFailedReasonNonGPUDevice L"\nKernel debugging is only supported on GPU devices."
#define AP_STR_KernelDebuggingFailedReasonKernelNotDebuggable L"\nThe kernel is not debuggable (it was probably built without debugging flags).\nPlease create the program with clCreateProgramWithSource and build it with clBuildProgram."
#define AP_STR_KernelDebuggingFailedReasonQueueNotIntercepted L"\nThe command queue used for dispatch was not intercepted correctly.\nPlease create the command queue with clCreateCommandQueue or clCreateCommandQueueWithProperties."
#define AP_STR_KernelDebuggingFailedReasonDebugError L"\nError during kernel debugging."
#define AP_STR_KernelDebuggingFailedReasonOpenCLError L"\nOpenCL Error encountered while attempting to enqueue kernel: "

// Generic breakpoints:
#define AP_STR_GLErrorBreakpoint L"Break on OpenGL error"
#define AP_STR_CLErrorBreakpoint L"Break on OpenCL error"
#define AP_STR_DetectedErrorBreakpoint L"Break on Detected Error"
#define AP_STR_DebugOutput L"Break on OpenGL Debug Output Extension Messages"
#define AP_STR_RedundantStateChangesBreakpoint L"Break on Redundant State Change"
#define AP_STR_DeprecatedBreakpoint L"Break on Deprecated Function"
#define AP_STR_MemoryLeakBreakpoint L"Break on Memory Leak"
#define AP_STR_SoftwareFallbackBreakpoint L"Break on Software Fallback"
// Parameters:
#define AP_STR_RemoveOpenGLVersion L"Removed at OpenGL version "

// Built-in uniforms:
#define AP_STR_UnknownBuiltInUniformFormula L"Built-in uniforms are calculated from the OpenGL state, and may be equal to a state variable value or derived from one or more state variable values."

// OpenCL programs:
#define AP_STR_clProgramBinaryTypeNone L"None"
#define AP_STR_clProgramBinaryTypeCompiledObject L"Compiled Object"
#define AP_STR_clProgramBinaryTypeLibrary L"Library"
#define AP_STR_clProgramBinaryTypeExecutable L"Executable"

// OpenCL kernels:
#define AP_STR_clKernelArgAddressQualifierGlobal L"global"
#define AP_STR_clKernelArgAddressQualifierLocal L"local"
#define AP_STR_clKernelArgAddressQualifierConstant L"constant"
#define AP_STR_clKernelArgAddressQualifierPrivate L"private"

#define AP_STR_clKernelArgAccessQualifierReadOnly L"read_Only"
#define AP_STR_clKernelArgAccessQualifierWriteOnly L"write_only"
#define AP_STR_clKernelArgAccessQualifierReadWrite L"read_write"

#define AP_STR_clKernelArgTypeQualifierConst L"const"
#define AP_STR_clKernelArgTypeQualifierRestrict L"restrict"
#define AP_STR_clKernelArgTypeQualifierVolatile L"volatile"
#define AP_STR_clKernelArgTypeQualifierPipe L"pipe"

#endif //__APSTRINGCONSTANTS_H
