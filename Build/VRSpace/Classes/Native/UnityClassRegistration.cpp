template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class DirectorPlayer; template <> void RegisterClass<DirectorPlayer>();
class Animator; template <> void RegisterClass<Animator>();
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; template <> void RegisterClass<GUITexture>();
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; template <> void RegisterClass<Skybox>();
class Terrain; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; template <> void RegisterClass<AudioMixer>();
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterClass<AudioMixerGroup>();
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterClass<AudioMixerSnapshot>();
class AudioMixerSnapshotController; 
class Avatar; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; 
class AnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class CubemapArray; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class WebCamTexture; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 84 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. QualitySettings
	RegisterClass<QualitySettings>();
	//6. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. MeshFilter
	RegisterClass<MeshFilter>();
	//9. Renderer
	RegisterClass<Renderer>();
	//10. Skybox
	RegisterClass<Skybox>();
	//11. LineRenderer
	RegisterClass<LineRenderer>();
	//12. GUITexture
	RegisterClass<GUITexture>();
	//13. GUIElement
	RegisterClass<GUIElement>();
	//14. GUILayer
	RegisterClass<GUILayer>();
	//15. Light
	RegisterClass<Light>();
	//16. Mesh
	RegisterClass<Mesh>();
	//17. NamedObject
	RegisterClass<NamedObject>();
	//18. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//19. NetworkView
	RegisterClass<NetworkView>();
	//20. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//21. Transform
	RegisterClass<Transform>();
	//22. Shader
	RegisterClass<Shader>();
	//23. Material
	RegisterClass<Material>();
	//24. Sprite
	RegisterClass<Sprite>();
	//25. Texture
	RegisterClass<Texture>();
	//26. Texture2D
	RegisterClass<Texture2D>();
	//27. RenderTexture
	RegisterClass<RenderTexture>();
	//28. ParticleSystem
	RegisterClass<ParticleSystem>();
	//29. Rigidbody
	RegisterClass<Rigidbody>();
	//30. Collider
	RegisterClass<Collider>();
	//31. AudioClip
	RegisterClass<AudioClip>();
	//32. SampleClip
	RegisterClass<SampleClip>();
	//33. AudioSource
	RegisterClass<AudioSource>();
	//34. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//35. AudioMixer
	RegisterClass<AudioMixer>();
	//36. Animator
	RegisterClass<Animator>();
	//37. DirectorPlayer
	RegisterClass<DirectorPlayer>();
	//38. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//39. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//40. UI::Canvas
	RegisterClass<UI::Canvas>();
	//41. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//42. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//43. AudioMixerGroup
	RegisterClass<AudioMixerGroup>();
	//44. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//45. Collider2D
	RegisterClass<Collider2D>();
	//46. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//47. PreloadData
	RegisterClass<PreloadData>();
	//48. Cubemap
	RegisterClass<Cubemap>();
	//49. Texture3D
	RegisterClass<Texture3D>();
	//50. Texture2DArray
	RegisterClass<Texture2DArray>();
	//51. TimeManager
	RegisterClass<TimeManager>();
	//52. AudioManager
	RegisterClass<AudioManager>();
	//53. InputManager
	RegisterClass<InputManager>();
	//54. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//55. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//56. TextAsset
	RegisterClass<TextAsset>();
	//57. PhysicsManager
	RegisterClass<PhysicsManager>();
	//58. TagManager
	RegisterClass<TagManager>();
	//59. ScriptMapper
	RegisterClass<ScriptMapper>();
	//60. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//61. MonoScript
	RegisterClass<MonoScript>();
	//62. MonoManager
	RegisterClass<MonoManager>();
	//63. PlayerSettings
	RegisterClass<PlayerSettings>();
	//64. BuildSettings
	RegisterClass<BuildSettings>();
	//65. ResourceManager
	RegisterClass<ResourceManager>();
	//66. NetworkManager
	RegisterClass<NetworkManager>();
	//67. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//68. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//69. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//70. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//71. LevelGameManager
	RegisterClass<LevelGameManager>();
	//72. MeshRenderer
	RegisterClass<MeshRenderer>();
	//73. MeshCollider
	RegisterClass<MeshCollider>();
	//74. AudioListener
	RegisterClass<AudioListener>();
	//75. RenderSettings
	RegisterClass<RenderSettings>();
	//76. Animation
	RegisterClass<Animation>();
	//77. FlareLayer
	RegisterClass<FlareLayer>();
	//78. SphereCollider
	RegisterClass<SphereCollider>();
	//79. LightmapSettings
	RegisterClass<LightmapSettings>();
	//80. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//81. AudioMixerSnapshot
	RegisterClass<AudioMixerSnapshot>();
	//82. BoxCollider
	RegisterClass<BoxCollider>();
	//83. CapsuleCollider
	RegisterClass<CapsuleCollider>();

}
