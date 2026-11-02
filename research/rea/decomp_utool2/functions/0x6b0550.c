// rea decompile_all
// name: FUN_006b0550
// address: 0x6b0550
// body: available
// range: 0x6b0550-0x6b06d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b0550(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)(in_ECX + 0x70) != 0) && (*(int *)(*(int *)(in_ECX + 0x70) + 8) != 0)) {
    local_14 = *(int *)(in_ECX + 0x78);
    local_10 = *(int *)(in_ECX + 0x7c);
    local_c = *(int *)(in_ECX + 0x80);
    local_8 = *(int *)(in_ECX + 0x84);
    switch(*(undefined4 *)(in_ECX + 0x88)) {
    case 0:
      iVar2 = local_c + local_14;
      uVar4 = FUN_006c9a60();
      iVar1 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      iVar1 = (local_14 - iVar2) + local_c;
      local_14 = iVar2;
      local_c = 0;
      if (0 < iVar1) {
        local_c = iVar1;
      }
      break;
    case 1:
      uVar4 = FUN_006c9a60();
      iVar2 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
      local_c = 0;
      if (0 < iVar2) {
        local_c = iVar2;
      }
      break;
    case 2:
      iVar2 = local_8 + local_10;
      uVar4 = FUN_006c9a30();
      iVar1 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      iVar1 = (local_10 - iVar2) + local_8;
      local_10 = iVar2;
      local_8 = 0;
      if (0 < iVar1) {
        local_8 = iVar1;
      }
      break;
    case 3:
      uVar4 = FUN_006c9a30();
      iVar2 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
      local_8 = 0;
      if (0 < iVar2) {
        local_8 = iVar2;
      }
    }
    if (*(int *)(in_ECX + 0x74) != 0) {
      if (*(int *)(in_ECX + 0x70) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x70) + 8);
      }
      iVar2 = *(int *)(in_ECX + 0x88);
      FUN_006d14d0(uVar3,&local_14,iVar2 == 2,iVar2 == 0,iVar2 == 3,iVar2 == 1);
      return;
    }
    if (*(int *)(in_ECX + 0x70) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x70) + 8);
    }
    if (*(int **)(iVar2 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 0x20) + 4))(&local_14);
      return;
    }
    FUN_006e9790(local_14,local_10,local_c,local_8);
  }
  return;
}

