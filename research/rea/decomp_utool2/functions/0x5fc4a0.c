// rea decompile_all
// name: FUN_005fc4a0
// address: 0x5fc4a0
// body: available
// range: 0x5fc4a0-0x5fc649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005fc4a0(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint local_14;
  byte *local_c;
  int local_8;
  
  if (in_EDX != 0) {
    if ((*(int *)(in_ECX + 0x8c) == 0) && (*(uint *)(in_ECX + 0x88) < 0x15888)) {
      return 0;
    }
    lVar9 = __aullrem(*(uint *)(in_ECX + 0x88),*(int *)(in_ECX + 0x8c),0x24c,0);
    if (lVar9 != 0) {
      return 0;
    }
  }
  uVar3 = *(uint *)(in_ECX + 0x94);
  if ((uVar3 == 0) ||
     ((in_EDX != 0 && (*(char *)(*(int *)(in_ECX + 0x98) + -0x20 + uVar3 * 0x28) != -0x56)))) {
    return 0;
  }
  local_14 = 0;
  if (uVar3 != 0) {
    iVar4 = *(int *)(in_ECX + 0x98);
    iVar6 = 0;
    iVar1 = iVar4 + 8;
    iVar5 = iVar4;
    local_c = (byte *)(iVar4 + 0x1c);
    local_8 = iVar4;
    do {
      bVar2 = *(byte *)(iVar1 + iVar6);
      if (((bVar2 == 0) ||
          ((in_EDX != 0 &&
           ((((bVar2 == 0 || (99 < bVar2)) && (bVar2 != 0xaa)) ||
            (lVar9 = __aullrem(*(undefined4 *)((iVar4 - iVar1) + iVar1 + iVar6),
                               *(undefined4 *)((iVar4 - iVar1) + 4 + iVar1 + iVar6),0x24c,0),
            iVar5 = local_8, lVar9 != 0)))))) ||
         ((local_14 < uVar3 - 1 &&
          ((((byte *)(iVar4 + 0x1c))[iVar6] == 0 ||
           (1 < *(byte *)(*(int *)(iVar6 + 0x20 + iVar4) + 8))))))) {
        return 0;
      }
      uVar7 = 0;
      bVar2 = *local_c;
      if (bVar2 != 0) {
        iVar8 = 0;
        do {
          if ((in_EDX != 0) &&
             (iVar5 = *(int *)(iVar6 + 0x20 + iVar5),
             lVar9 = __aullrem(*(undefined4 *)(iVar5 + iVar8),*(undefined4 *)(iVar5 + 4 + iVar8),
                               0x24c,0), lVar9 != 0)) {
            return 0;
          }
          if ((uVar7 != 0) &&
             (local_8 = *(int *)(in_ECX + 0x98), iVar5 = *(int *)(iVar6 + 0x20 + local_8),
             (uint)*(byte *)(iVar5 + 8 + iVar8) != *(byte *)(iVar5 + -8 + iVar8) + 1)) {
            return 0;
          }
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + 0x10;
          iVar5 = local_8;
        } while (uVar7 < bVar2);
      }
      local_c = local_c + 0x28;
      local_14 = local_14 + 1;
      iVar6 = iVar6 + 0x28;
    } while (local_14 < uVar3);
  }
  return 1;
}

