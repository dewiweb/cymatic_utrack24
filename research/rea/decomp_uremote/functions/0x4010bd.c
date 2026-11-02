// rea decompile_all
// name: FUN_004010bd
// address: 0x4010bd
// body: available
// range: 0x4010bd-0x4011f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004010bd(int param_1)

{
  void *_Dst;
  int iVar1;
  undefined **ppuVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int local_8;
  
  _Dst = *(void **)(param_1 + 8);
  _memset(_Dst,0x7f,*(size_t *)(param_1 + 4));
  iVar1 = FUN_0040f80d();
  if (iVar1 == 0) {
    local_8 = 0;
    ppuVar2 = &PTR_DAT_008f96cc;
    do {
      puVar3 = *(uint **)(*ppuVar2 + 4);
      if (puVar3 != (uint *)0x0) {
        for (; uVar5 = *puVar3, uVar5 != 0; puVar3 = puVar3 + 2) {
          uVar4 = FUN_0040f9ab(uVar5);
          if (((uVar4 != 0) && (uVar4 < *(uint *)(param_1 + 4))) &&
             (*(char *)(uVar4 + (int)_Dst) == '\x7f')) {
            *(char *)(uVar4 + (int)_Dst) = (char)local_8;
          }
          while ((uVar5 = FUN_0040fa14(uVar5), uVar4 != 0 && (uVar5 <= puVar3[1]))) {
            if ((uVar4 < *(uint *)(param_1 + 4)) && (*(char *)(uVar4 + (int)_Dst) == '\x7f')) {
              *(char *)(uVar4 + (int)_Dst) = (char)local_8;
            }
          }
        }
      }
      local_8 = local_8 + 1;
      ppuVar2 = &PTR_DAT_008f96cc + local_8;
    } while (*ppuVar2 != (undefined *)0x0);
    uVar5 = 0x30;
    do {
      uVar4 = FUN_0040f9ab(uVar5);
      if ((uVar4 != 0) && (uVar4 < *(uint *)(param_1 + 4))) {
        *(byte *)(uVar4 + (int)_Dst) = *(byte *)(uVar4 + (int)_Dst) | 0x80;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x3a);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      if ((*(byte *)(iVar1 + (int)_Dst) & 0x7f) == 0x7f) {
        *(byte *)(iVar1 + (int)_Dst) = *(byte *)(iVar1 + (int)_Dst) & 0x82 | 2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  FUN_0040f872();
  return 0;
}

