// rea decompile_all
// name: FUN_00483d36
// address: 0x483d36
// body: available
// range: 0x483d36-0x483e3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00483d36(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *_Src;
  undefined4 *puVar3;
  int iVar4;
  int unaff_ESI;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  int local_8;
  
  iVar4 = *(int *)(unaff_ESI + 0x144);
  iVar1 = *(int *)(unaff_ESI + 0xdc);
  local_8 = (*(code *)**(undefined4 **)(unaff_ESI + 4))();
  local_18 = 0;
  if (0 < *(int *)(unaff_ESI + 0x3c)) {
    local_c = (void *)(local_8 + iVar1 * 4);
    local_14 = (undefined4 *)(iVar4 + 8);
    do {
      _Src = (undefined4 *)(**(code **)(*(int *)(unaff_ESI + 4) + 8))();
      _memcpy(local_c,_Src,iVar1 * 0xc);
      if (0 < iVar1) {
        local_10 = _Src + iVar1 * 2;
        puVar3 = (undefined4 *)(iVar1 * 0x10 + local_8);
        iVar4 = local_8 - (int)_Src;
        local_1c = iVar1;
        do {
          uVar2 = *local_10;
          local_10 = local_10 + 1;
          *(undefined4 *)(iVar4 + (int)_Src) = uVar2;
          *puVar3 = *_Src;
          _Src = _Src + 1;
          puVar3 = puVar3 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      *local_14 = local_c;
      local_8 = local_8 + iVar1 * 0x14;
      local_c = (void *)((int)local_c + iVar1 * 0x14);
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    } while (local_18 < *(int *)(unaff_ESI + 0x3c));
  }
  return;
}

