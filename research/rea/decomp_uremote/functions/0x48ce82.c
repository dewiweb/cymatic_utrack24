// rea decompile_all
// name: FUN_0048ce82
// address: 0x48ce82
// body: available
// range: 0x48ce82-0x48cf98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ce82(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int unaff_EBX;
  char local_1c;
  int *local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  iVar4 = *(int *)(unaff_EBX + 0x1a8);
  if (*(int *)(unaff_EBX + 0x4c) == 1) {
    local_10 = 0x1fe;
    *(undefined1 *)(iVar4 + 0x1c) = 1;
  }
  else {
    local_10 = 0;
    *(undefined1 *)(iVar4 + 0x1c) = 0;
  }
  uVar6 = (**(code **)(*(int *)(unaff_EBX + 4) + 8))();
  *(undefined4 *)(iVar4 + 0x18) = uVar6;
  iVar7 = *(int *)(iVar4 + 0x14);
  local_14 = 0;
  if (0 < *(int *)(unaff_EBX + 100)) {
    local_18 = (int *)(iVar4 + 0x20);
    do {
      iVar7 = iVar7 / *local_18;
      if (local_10 != 0) {
        piVar1 = (int *)(*(int *)(iVar4 + 0x18) + local_14 * 4);
        *piVar1 = *piVar1 + 0xff;
      }
      puVar5 = *(undefined1 **)(*(int *)(iVar4 + 0x18) + local_14 * 4);
      cVar2 = '\0';
      iVar8 = FUN_0048cd54();
      local_8 = 0;
      do {
        while (iVar8 < local_8) {
          cVar2 = cVar2 + '\x01';
          iVar8 = FUN_0048cd54();
        }
        local_1c = (char)iVar7;
        iVar3 = local_8 + 1;
        puVar5[local_8] = local_1c * cVar2;
        local_8 = iVar3;
      } while (iVar3 < 0x100);
      if (local_10 != 0) {
        local_8 = 1;
        local_c = puVar5;
        do {
          local_c = local_c + -1;
          *local_c = *puVar5;
          iVar8 = local_8 + 1;
          (puVar5 + 0xff)[local_8] = puVar5[0xff];
          local_8 = iVar8;
        } while (iVar8 < 0x100);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    } while (local_14 < *(int *)(unaff_EBX + 100));
  }
  return;
}

