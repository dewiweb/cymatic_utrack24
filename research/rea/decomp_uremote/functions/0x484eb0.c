// rea decompile_all
// name: FUN_00484eb0
// address: 0x484eb0
// body: available
// range: 0x484eb0-0x48504b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00484eb0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int aiStack_38 [4];
  int *local_28;
  uint local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar3 = param_1;
  param_1 = 0;
  iVar2 = *(int *)(iVar3 + 0x188);
  if (0 < *(int *)(iVar3 + 0x124)) {
    local_8 = (int *)(iVar3 + 0x128);
    do {
      iVar5 = *(int *)(*local_8 + 0xc);
      iVar5 = (**(code **)(*(int *)(iVar3 + 4) + 0x20))
                        (iVar3,*(undefined4 *)(iVar2 + 0x48 + *(int *)(*local_8 + 4) * 4),
                         *(int *)(iVar3 + 0x80) * iVar5,iVar5,1);
      local_8 = local_8 + 1;
      aiStack_38[param_1] = iVar5;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar3 + 0x124));
  }
  local_8 = *(int **)(iVar2 + 0x18);
  do {
    if (*(int *)(iVar2 + 0x1c) <= (int)local_8) {
      puVar1 = (uint *)(iVar3 + 0x80);
      *puVar1 = *puVar1 + 1;
      if (*puVar1 < *(uint *)(iVar3 + 0x11c)) {
        FUN_00484c4c();
        uVar9 = 3;
      }
      else {
        (**(code **)(*(int *)(iVar3 + 400) + 0xc))(iVar3);
        uVar9 = 4;
      }
      return uVar9;
    }
    uVar8 = *(uint *)(iVar2 + 0x14);
    local_24 = uVar8;
    if (uVar8 < *(uint *)(iVar3 + 0x138)) {
      do {
        local_10 = 0;
        param_1 = 0;
        if (0 < *(int *)(iVar3 + 0x124)) {
          local_20 = (int *)(iVar3 + 0x128);
          do {
            iVar5 = *local_20;
            iVar7 = *(int *)(iVar5 + 0x34);
            local_1c = 0;
            if (0 < *(int *)(iVar5 + 0x38)) {
              local_c = iVar7 * uVar8;
              local_c = iVar7 * uVar8 * 0x80;
              local_18 = (int *)(aiStack_38[param_1] + (int)local_8 * 4);
              do {
                iVar6 = *local_18 + local_c;
                local_14 = 0;
                if (0 < iVar7) {
                  local_28 = (int *)(iVar2 + 0x20 + local_10 * 4);
                  do {
                    local_10 = local_10 + 1;
                    *local_28 = iVar6;
                    local_28 = local_28 + 1;
                    iVar6 = iVar6 + 0x80;
                    local_14 = local_14 + 1;
                    iVar7 = *(int *)(iVar5 + 0x34);
                  } while (local_14 < iVar7);
                }
                local_1c = local_1c + 1;
                local_18 = local_18 + 1;
              } while (local_1c < *(int *)(iVar5 + 0x38));
            }
            param_1 = param_1 + 1;
            local_20 = local_20 + 1;
          } while (param_1 < *(int *)(iVar3 + 0x124));
        }
        local_24 = uVar8;
        cVar4 = (**(code **)(*(int *)(iVar3 + 0x198) + 4))(iVar3,iVar2 + 0x20);
        if (cVar4 == '\0') {
          *(int **)(iVar2 + 0x18) = local_8;
          *(uint *)(iVar2 + 0x14) = uVar8;
          return 0;
        }
        uVar8 = uVar8 + 1;
        local_24 = uVar8;
      } while (uVar8 < *(uint *)(iVar3 + 0x138));
    }
    *(undefined4 *)(iVar2 + 0x14) = 0;
    local_8 = (int *)((int)local_8 + 1);
  } while( true );
}

