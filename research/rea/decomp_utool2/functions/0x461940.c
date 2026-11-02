// rea decompile_all
// name: FUN_00461940
// address: 0x461940
// body: available
// range: 0x461940-0x461a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00461940(uint param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00700c28;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 < *(uint *)(in_ECX + 0x20)) {
    puVar5 = *(undefined4 **)(*(int *)(in_ECX + 0x18) + param_1 * 4);
  }
  else {
    puVar5 = (undefined4 *)0x0;
  }
  iVar4 = in_ECX + 0x18;
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    puVar5[1] = puVar5[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    if (param_2 == 0) {
      FUN_00462540(param_1);
      puVar5[0xc] = 0;
      LOCK();
      puVar5[1] = puVar5[1] + 1;
      UNLOCK();
      FUN_00461210(param_1,puVar5,0,0,0);
      FUN_00461340(uVar2);
    }
    else {
      puVar3 = operator_new(0x14);
      *puVar3 = juce::ValueTree::SharedObject::AddOrRemoveChildAction::vftable;
      puVar3[1] = in_ECX;
      if (in_ECX != 0) {
        LOCK();
        *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
        UNLOCK();
      }
      if (param_1 < *(uint *)(in_ECX + 0x20)) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + param_1 * 4);
      }
      else {
        iVar4 = 0;
      }
      puVar3[2] = iVar4;
      if (iVar4 != 0) {
        LOCK();
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        UNLOCK();
      }
      puVar3[3] = param_1;
      *(undefined1 *)(puVar3 + 4) = 1;
      FUN_0063ba90(puVar3);
    }
    LOCK();
    piVar1 = puVar5 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar4 = (**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return iVar4;
}

