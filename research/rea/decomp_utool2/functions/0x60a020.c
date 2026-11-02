// rea decompile_all
// name: FUN_0060a020
// address: 0x60a020
// body: available
// range: 0x60a020-0x60a0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060a020(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  undefined4 extraout_EDX;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar5 = 0;
  if (param_2 < *(uint *)(in_ECX + 0x90)) {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x88) + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  uVar4 = FUN_006f6dd6(uVar1,0,&juce::AudioProcessorParameter::RTTI_Type_Descriptor,
                       &juce::AudioProcessorParameterWithID::RTTI_Type_Descriptor,0);
  uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    if ((int)param_2 < 0) {
      iVar2 = FUN_006104a0();
      *(undefined1 *)(iVar2 + -1) = 0x2d;
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_006104a0();
    }
    FUN_004557e0(&local_9 + -iVar2);
    uVar1 = extraout_EDX;
  }
  else {
    iVar2 = *(int *)((int)uVar4 + 0xc);
    *param_1 = iVar2;
    piVar3 = (int *)(iVar2 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar1,uVar5);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar1,uVar5);
  return;
}

