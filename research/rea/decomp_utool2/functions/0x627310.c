// rea decompile_all
// name: FUN_00627310
// address: 0x627310
// body: available
// range: 0x627310-0x6273a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00627310(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  
  iVar3 = *(int *)(in_ECX + 0x24);
  if (iVar3 + param_2 < *(uint *)(in_ECX + 0x20)) {
    iVar3 = *(int *)(in_ECX + 0x28) + iVar3;
  }
  else {
    if (iVar3 != 0) {
      iVar4 = FUN_006125b0(*(undefined4 *)(in_ECX + 0x28),iVar3);
      iVar3 = *(int *)(in_ECX + 0x24);
      *(undefined4 *)(in_ECX + 0x24) = 0;
      if (iVar4 != iVar3) {
        return false;
      }
    }
    if (*(uint *)(in_ECX + 0x20) <= param_2) {
      uVar5 = FUN_006125b0(param_1,param_2);
      if ((int)uVar5 < 0) {
        return false;
      }
      puVar1 = (uint *)(in_ECX + 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      *(int *)(in_ECX + 0x1c) =
           *(int *)(in_ECX + 0x1c) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar2,uVar5);
      return uVar5 == param_2;
    }
    iVar3 = *(int *)(in_ECX + 0x28) + *(int *)(in_ECX + 0x24);
  }
  FUN_004c2c30(iVar3,param_1,param_2);
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + param_2;
  puVar1 = (uint *)(in_ECX + 0x18);
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + (uint)CARRY4(uVar5,param_2);
  return true;
}

