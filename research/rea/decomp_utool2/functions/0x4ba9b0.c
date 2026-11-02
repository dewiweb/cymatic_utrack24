// rea decompile_all
// name: FUN_004ba9b0
// address: 0x4ba9b0
// body: available
// range: 0x4ba9b0-0x4baaa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba9b0(undefined4 param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007044ba;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  local_8 = 0;
  *in_ECX = juce::OpenGLRendering::ShaderContext::vftable;
  FUN_004b9a50(param_1);
  local_8._0_1_ = 1;
  pvVar3 = operator_new(0x68);
  local_8._0_1_ = 2;
  FUN_004bc800(in_ECX + 7);
  local_8 = CONCAT31(local_8._1_3_,3);
  operator_new(0x28);
  iVar4 = FUN_00468990(uVar2);
  *(int *)((int)pvVar3 + 0x54) = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  *(undefined1 *)((int)pvVar3 + 0x5c) = 0;
  *(undefined4 **)((int)pvVar3 + 0x58) = in_ECX + 5;
  *(undefined4 *)((int)pvVar3 + 0x60) = 0;
  *(undefined4 *)((int)pvVar3 + 100) = 0;
  pvVar1 = (void *)in_ECX[1];
  if ((pvVar1 != pvVar3) && (in_ECX[1] = pvVar3, pvVar1 != (void *)0x0)) {
    FUN_004bdbc0();
    FUN_004bfe14(pvVar1,0x68);
  }
  ExceptionList = local_10;
  return;
}

