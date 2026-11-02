// rea decompile_all
// name: FUN_00521180
// address: 0x521180
// body: available
// range: 0x521180-0x521245 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00521180(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070a8e9;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  operator_new(0x280);
  local_8 = 0;
  iVar4 = FUN_005210c0(in_ECX);
  local_8 = 0xffffffff;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0040de70(iVar4);
  }
  if (*(int *)(in_ECX + 0x74) != iVar4) {
    if (iVar4 != 0) {
      LOCK();
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      UNLOCK();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x74);
    *(int *)(in_ECX + 0x74) = iVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar2 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar2)(1,uVar3);
      }
    }
  }
  local_8 = 1;
  if (*(int *)(in_ECX + 0x74) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x74) + 8);
  }
  FUN_006f6dd6(uVar5,0,&juce::Component::RTTI_Type_Descriptor,&TVIBase::RTTI_Type_Descriptor,0);
  ExceptionList = local_10;
  return;
}

