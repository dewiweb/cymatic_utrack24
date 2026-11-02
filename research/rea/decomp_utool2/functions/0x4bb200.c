// rea decompile_all
// name: FUN_004bb200
// address: 0x4bb200
// body: available
// range: 0x4bb200-0x4bb2ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb200(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 uStack_30;
  TypeDescriptor *pTStack_2c;
  TypeDescriptor *pTStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcdb6;
  local_10 = ExceptionList;
  uStack_20 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_24 = 0x4bb22f;
  FUN_0063eab0();
  if (*(int *)(in_ECX + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(in_ECX + 4) + 8);
  }
  uStack_24 = 0;
  pTStack_28 = &juce::OpenGLContext::CachedImage::RTTI_Type_Descriptor;
  pTStack_2c = &juce::CachedComponentImage::RTTI_Type_Descriptor;
  local_8 = 0;
  uStack_30 = 0;
  iVar2 = FUN_006f6dd6(*(undefined4 *)(iVar3 + 0x40));
  local_8 = 0xffffffff;
  if (iVar2 != 0) {
    uStack_24 = 0x4bb26f;
    FUN_004bb1b0();
  }
  if (*(int *)(iVar3 + 0x40) != 0) {
    puVar1 = *(undefined4 **)(iVar3 + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x40) = 0;
      uStack_24 = 1;
      pTStack_28 = (TypeDescriptor *)0x4bb289;
      (**(code **)*puVar1)();
    }
    FUN_006e6400(&uStack_30);
    FUN_006ce9f0(1);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x40) + 0xc0) = 0;
  ExceptionList = local_10;
  return;
}

