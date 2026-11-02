// rea decompile_all
// name: FUN_00673fa0
// address: 0x673fa0
// body: available
// range: 0x673fa0-0x674065 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00673fa0(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined1 local_28 [16];
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720516;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = (void *)0x0;
  pvVar2 = operator_new(0x5c);
  local_8 = 0;
  local_18 = pvVar2;
  uVar3 = FUN_00673860(local_28);
  FUN_0046e2a0(uVar3);
  iVar4 = *param_1;
  *(int *)((int)pvVar2 + 0x54) = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  operator_new(0x28);
  iVar4 = FUN_00468990(uVar1);
  *(int *)((int)pvVar2 + 0x58) = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  in_ECX[1] = pvVar2;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = juce::LowLevelGraphicsSoftwareRenderer::vftable;
  ExceptionList = local_10;
  return;
}

