// rea decompile_all
// name: FUN_005804f0
// address: 0x5804f0
// body: available
// range: 0x5804f0-0x580621 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005804f0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071283e;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006e3660(param_1);
  in_ECX[0x38] = juce::Timer::vftable;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  *in_ECX = MainContentComponent::HeadButton::vftable;
  in_ECX[0x1c] = MainContentComponent::HeadButton::vftable;
  in_ECX[0x38] = MainContentComponent::HeadButton::vftable;
  in_ECX[0x3d] = param_2;
  in_ECX[0x3e] = 0xffffffff;
  in_ECX[0x3f] = 0;
  local_8 = 2;
  if ((in_ECX[0x2d] != 1) && (in_ECX[0x2d] = 1, *(char *)(in_ECX + 0x36) != '\0')) {
    FUN_006c8780(1);
  }
  *(undefined1 *)((int)in_ECX + 0xd9) = 1;
  if (param_3 != 0) {
    FUN_004097d0(param_3);
  }
  puVar5 = (undefined4 *)FUN_00683790(0x1397,uVar4);
  uVar3 = in_ECX[0x3f];
  in_ECX[0x3f] = *puVar5;
  *puVar5 = uVar3;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_1 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

