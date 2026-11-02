// rea decompile_all
// name: FUN_004e16d2
// address: 0x4e16d2
// body: available
// range: 0x4e16d2-0x4e179a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004e16d2(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  local_1c = 0;
  if (0 < *(int *)(unaff_ESI + 0xc4)) {
    do {
      iVar2 = FUN_00440367(*(int *)(unaff_ESI + 0xa0) - local_8);
      if (local_1c < *(uint *)(unaff_ESI + 0xe0)) {
        local_14 = *(int *)(*(int *)(unaff_ESI + 0xd8) + local_1c * 4);
      }
      else {
        local_14 = 0;
      }
      iVar3 = ((*(int *)(unaff_ESI + 0xb0) - *(int *)(unaff_ESI + 0xcc)) -
              *(int *)(unaff_ESI + 0x14)) + 2;
      if (0 < iVar2) {
        local_10 = local_8 << 2;
        local_18 = iVar2;
        do {
          iVar1 = *(int *)(local_10 + *(int *)(unaff_ESI + 0x98));
          FUN_004c09cc(local_c,iVar3,*(undefined4 *)(iVar1 + 0x1c));
          iVar3 = iVar3 + *(int *)(iVar1 + 0x1c);
          local_10 = local_10 + 4;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_c = local_c + local_14;
      local_8 = local_8 + iVar2;
      local_1c = local_1c + 1;
    } while ((int)local_1c < *(int *)(unaff_ESI + 0xc4));
  }
  return local_c;
}

