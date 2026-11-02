// rea decompile_all
// name: FUN_004f0fc0
// address: 0x4f0fc0
// body: available
// range: 0x4f0fc0-0x4f1136 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f0fc0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705ca4;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004b1810(local_14);
  }
  iVar4 = FUN_006f6dd6(uVar3,0,&juce::DragAndDropContainer::RTTI_Type_Descriptor,
                       &DragDropHelper_Container::RTTI_Type_Descriptor,0);
  if (iVar4 != 0) {
    if ((char)in_ECX[2] == '\0') {
      FUN_0040ed50();
      (**(code **)(*in_ECX + 4))(in_ECX + 4);
      if (in_ECX[6] < 1) goto LAB_004f1119;
      local_34 = 0;
      local_30 = 0;
      uVar2 = *(uint *)(param_1 + 0x10);
      in_ECX[3] = uVar2;
      *(byte *)((int)in_ECX + 10) = (byte)(uVar2 >> 1) & 1;
      *(byte *)((int)in_ECX + 0xb) = *(byte *)(in_ECX + 3) & 1;
      FUN_004f09a0(&local_2c);
      local_8 = 0;
      FUN_006368e0(in_ECX + 4);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (local_2c != (undefined4 *)0x0) {
        LOCK();
        local_2c[1] = local_2c[1] + 1;
        UNLOCK();
      }
      FUN_006e3f40(local_24,in_ECX[1],local_2c,1,&local_34);
      (**(code **)(*local_24[0] + 0x54))(local_1c);
      *(undefined1 *)(in_ECX + 2) = 1;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x10);
      if (uVar2 == in_ECX[3]) goto LAB_004f1119;
      in_ECX[3] = uVar2;
      *(byte *)((int)in_ECX + 10) = (byte)(uVar2 >> 1) & 1;
      *(byte *)((int)in_ECX + 0xb) = *(byte *)(in_ECX + 3) & 1;
      FUN_004f09a0(&local_28);
      local_8 = 2;
      local_2c = local_28;
      if (*(int *)(iVar4 + 4) != 0) {
        FUN_004908f0(&local_28);
        local_2c = local_28;
      }
    }
    if (local_2c != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_2c + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*local_2c)(1);
      }
    }
  }
LAB_004f1119:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

