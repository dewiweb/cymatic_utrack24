// rea decompile_all
// name: FUN_0063cb30
// address: 0x63cb30
// body: available
// range: 0x63cb30-0x63ccd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063cb30(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f689;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = *(int *)(in_ECX + 0x20);
  if (iVar3 == 0) {
    iVar3 = FUN_00611e80(&local_24,8,0);
  }
  else {
    if ((*(char *)(iVar3 + 0xc) == '\0') || (*(char *)(iVar3 + 0xd) != '\0')) goto LAB_0063ccaf;
    iVar3 = FUN_00623e60(8,iVar3 + 0xc,iVar3,iVar3 + 0xe);
  }
  if (iVar3 == 8) {
    if ((local_24 == *(int *)(in_ECX + 0x2c)) && (0 < local_20)) {
      local_1c = (void *)0x0;
      local_18 = local_20;
      FID_conflict__free((void *)0x0);
      local_1c = (void *)FUN_004c5556(local_20,1);
      local_8 = 0;
      iVar5 = 0;
      iVar3 = local_20;
      do {
        if (*(char *)(*(int *)(in_ECX + 0x34) + 0x3c) != '\0') {
          FID_conflict__free(local_1c);
          ExceptionList = local_10;
          return 0;
        }
        iVar4 = iVar3;
        if (0x10000 < iVar3) {
          iVar4 = 0x10000;
        }
        iVar1 = *(int *)(in_ECX + 0x20);
        local_14 = (int)local_1c + iVar5;
        if (iVar1 == 0) {
          iVar4 = FUN_00611e80(local_14,iVar4,0);
        }
        else {
          if ((*(char *)(iVar1 + 0xc) == '\0') || (*(char *)(iVar1 + 0xd) != '\0')) break;
          iVar4 = FUN_00623e60(iVar4,iVar1 + 0xc,iVar1,iVar1 + 0xe);
        }
        if (iVar4 < 1) break;
        iVar3 = iVar3 - iVar4;
        iVar5 = iVar5 + iVar4;
      } while (0 < iVar3);
      if (-1 < iVar5) {
        FUN_0063cce0(&local_1c);
      }
      FID_conflict__free(local_1c);
    }
  }
  else if (iVar3 < 0) {
LAB_0063ccaf:
    if (*(int *)(in_ECX + 0x20) != 0) {
      FUN_0063d0b0(uVar2);
    }
    FUN_0063cd60();
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 1;
}

