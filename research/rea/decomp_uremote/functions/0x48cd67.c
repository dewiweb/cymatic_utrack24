// rea decompile_all
// name: FUN_0048cd67
// address: 0x48cd67
// body: available
// range: 0x48cd67-0x48ce81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048cd67(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  int local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  iVar1 = unaff_ESI[0x6a];
  local_1c = (int *)(iVar1 + 0x20);
  iVar4 = FUN_0048cc70();
  iVar2 = *unaff_ESI;
  if (unaff_ESI[0x19] == 3) {
    *(int *)(iVar2 + 0x18) = iVar4;
    *(int *)(iVar2 + 0x1c) = *local_1c;
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x5e;
  }
  else {
    *(undefined4 *)(iVar2 + 0x14) = 0x5f;
    *(int *)(*unaff_ESI + 0x18) = iVar4;
  }
  (**(code **)(*unaff_ESI + 4))();
  piVar5 = (int *)(**(code **)(unaff_ESI[1] + 8))();
  local_24 = 0;
  local_20 = piVar5;
  local_18 = iVar4;
  if (0 < unaff_ESI[0x19]) {
    do {
      iVar2 = *local_1c;
      iVar6 = local_18 / iVar2;
      local_c = 0;
      if (0 < iVar2) {
        local_14 = 0;
        do {
          uVar3 = FUN_0048cd3b(iVar2 + -1);
          for (iVar7 = local_14; iVar7 < iVar4; iVar7 = iVar7 + local_18) {
            local_8 = 0;
            if (0 < iVar6) {
              do {
                iVar8 = *local_20 + local_8;
                local_8 = local_8 + 1;
                *(undefined1 *)(iVar8 + iVar7) = uVar3;
              } while (local_8 < iVar6);
            }
          }
          local_c = local_c + 1;
          local_14 = local_14 + iVar6;
        } while (local_c < iVar2);
      }
      local_24 = local_24 + 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
      local_18 = iVar6;
    } while (local_24 < unaff_ESI[0x19]);
  }
  *(int *)(iVar1 + 0x14) = iVar4;
  *(int **)(iVar1 + 0x10) = piVar5;
  return;
}

