// rea decompile_all
// name: FUN_004bb2e0
// address: 0x4bb2e0
// body: available
// range: 0x4bb2e0-0x4bb3a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004bb2e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704578;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_006f3800("juceGLComponentOverlayShader");
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = operator_new(0x3c);
    *puVar3 = juce::ReferenceCountedObject::vftable;
    puVar3[1] = 0;
    puVar1 = puVar3 + 2;
    *puVar3 = `public:_void___thiscall_juce::OpenGLContext::copyTexture(juce::Rectangle<int>_const&,juce::Rectangle<int>_const&,int,int,bool)'
              ::__l7::OverlayShaderProgram::vftable;
    *puVar1 = in_ECX;
    puVar3[3] = 0;
    puVar3[4] = &DAT_00bfe12c;
    local_8 = 2;
    FUN_004bb3b0(puVar1);
    FUN_004bb500(puVar1);
    local_8 = 0xffffffff;
    FUN_006f36b0("juceGLComponentOverlayShader",puVar3);
  }
  local_8 = 3;
  (**(code **)(puVar3[2] + 0x38))(puVar3[3],uVar2);
  ExceptionList = local_10;
  return puVar3;
}

