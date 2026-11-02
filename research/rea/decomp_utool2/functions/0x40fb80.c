// rea decompile_all
// name: FUN_0040fb80
// address: 0x40fb80
// body: available
// range: 0x40fb80-0x40fc2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040fb80(void)

{
  int iVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = in_EDX - in_ECX >> 2;
  if ((1 < (int)local_10) && (iVar3 = (int)(local_10 - (in_EDX - in_ECX >> 0x1f)) >> 1, 0 < iVar3))
  {
    local_14 = local_10 - 1;
    local_c = local_14 / 2;
    do {
      uVar2 = *(undefined4 *)(in_ECX + -4 + iVar3 * 4);
      iVar4 = iVar3 + -1;
      iVar3 = iVar4;
      local_18 = uVar2;
      local_8 = iVar4;
      if (iVar4 < local_c) {
        do {
          iVar4 = iVar3 * 2 + 2;
          iVar1 = FUN_0040f400();
          if (iVar1 < 0) {
            iVar4 = iVar3 * 2 + 1;
          }
          *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + iVar4 * 4);
          uVar2 = extraout_ECX;
          iVar3 = iVar4;
        } while (iVar4 < local_c);
      }
      iVar3 = local_8;
      if ((iVar4 == local_c) && ((local_10 & 1) == 0)) {
        *(undefined4 *)(in_ECX + iVar4 * 4) = *(undefined4 *)(in_ECX + -4 + local_10 * 4);
      }
      FUN_0040fec0(local_8,&local_18,uVar2);
    } while (0 < iVar3);
  }
  return;
}

