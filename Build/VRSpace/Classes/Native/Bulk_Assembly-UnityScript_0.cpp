#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// ColorPicker_Material
struct ColorPicker_Material_t1107773901;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DUnityScript_ColorPicker_Material1107773901.h"
#include "AssemblyU2DUnityScript_ColorPicker_Material1107773901MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_GUI4082743951MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUISkin1436893342MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Event3028476042MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_GUISkin1436893342.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Rect3681755626MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_Event3028476042.h"
#include "UnityEngine_UnityEngine_Texture2243626319MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "mscorlib_System_String2029220233.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ColorPicker_Material::.ctor()
extern "C"  void ColorPicker_Material__ctor_m2424251281 (ColorPicker_Material_t1107773901 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		__this->set_guiTextureWidth_6(((int32_t)256));
		__this->set_guiTextureHeight_7(((int32_t)256));
		return;
	}
}
// System.Void ColorPicker_Material::OnGUI()
extern Il2CppClass* GUI_t4082743951_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4022078178;
extern const uint32_t ColorPicker_Material_OnGUI_m3148586127_MetadataUsageId;
extern "C"  void ColorPicker_Material_OnGUI_m3148586127 (ColorPicker_Material_t1107773901 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColorPicker_Material_OnGUI_m3148586127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t1799908754 * V_0 = NULL;
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Color_t2020392075  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		GUISkin_t1436893342 * L_0 = GUI_get_skin_m2309570990(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t1799908754 * L_1 = GUISkin_get_label_m2703078986(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_guiTextureX_4();
		int32_t L_3 = __this->get_guiTextureY_5();
		int32_t L_4 = __this->get_guiTextureWidth_6();
		int32_t L_5 = __this->get_guiTextureHeight_7();
		Rect_t3681755626  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Rect__ctor_m1220545469(&L_6, (((float)((float)L_2))), (((float)((float)L_3))), (((float)((float)L_4))), (((float)((float)L_5))), /*hidden argument*/NULL);
		Texture2D_t3542995729 * L_7 = __this->get_colorPickerTexture_3();
		GUIStyle_t1799908754 * L_8 = V_0;
		bool L_9 = GUI_RepeatButton_m4104469943(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_009d;
		}
	}
	{
		Event_t3028476042 * L_10 = Event_get_current_m2901774193(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector2_t2243707579  L_11 = Event_get_mousePosition_m3789571399(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_x_0();
		int32_t L_13 = __this->get_guiTextureX_4();
		V_2 = (((int32_t)((int32_t)((float)((float)((float)((float)L_12-(float)(((float)((float)L_13)))))+(float)(((float)((float)8))))))));
		float L_14 = (&V_1)->get_y_1();
		int32_t L_15 = __this->get_guiTextureY_5();
		V_3 = (((int32_t)((int32_t)((float)((float)((float)((float)L_14-(float)(((float)((float)L_15)))))+(float)(((float)((float)8))))))));
		Texture2D_t3542995729 * L_16 = __this->get_colorPickerTexture_3();
		int32_t L_17 = V_2;
		Texture2D_t3542995729 * L_18 = __this->get_colorPickerTexture_3();
		NullCheck(L_18);
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		int32_t L_20 = V_3;
		NullCheck(L_16);
		Color_t2020392075  L_21 = Texture2D_GetPixel_m1570987051(L_16, L_17, ((int32_t)((int32_t)L_19-(int32_t)L_20)), /*hidden argument*/NULL);
		V_4 = L_21;
		Material_t193706927 * L_22 = __this->get_targetSharedMaterial_2();
		Color_t2020392075  L_23 = V_4;
		NullCheck(L_22);
		Material_SetColor_m650857509(L_22, _stringLiteral4022078178, L_23, /*hidden argument*/NULL);
	}

IL_009d:
	{
		return;
	}
}
// System.Void ColorPicker_Material::Main()
extern "C"  void ColorPicker_Material_Main_m3552984878 (ColorPicker_Material_t1107773901 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
