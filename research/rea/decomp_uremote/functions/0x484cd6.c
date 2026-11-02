// rea decompile_all
// name: FUN_00484cd6
// address: 0x484cd6
// body: available
// range: 0x484cd6-0x484eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00484cd6(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int local_30;
  int local_28;
  int *local_24;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  
  iVar2 = *(int *)(param_1 + 0x11c);
  iVar3 = *(int *)(param_1 + 0x188);
  uVar13 = *(int *)(param_1 + 0x138) - 1;
  iVar10 = *(int *)(iVar3 + 0x18);
  do {
    if (*(int *)(iVar3 + 0x1c) <= iVar10) {
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
      puVar1 = (uint *)(param_1 + 0x80);
      *puVar1 = *puVar1 + 1;
      if (*puVar1 < *(uint *)(param_1 + 0x11c)) {
        FUN_00484c4c();
        uVar14 = 3;
      }
      else {
        (**(code **)(*(int *)(param_1 + 400) + 0xc))(param_1);
        uVar14 = 4;
      }
      return uVar14;
    }
    for (uVar4 = *(uint *)(iVar3 + 0x14); uVar4 <= uVar13; uVar4 = uVar4 + 1) {
      FUN_0048e721(*(undefined4 *)(iVar3 + 0x20),*(int *)(param_1 + 0x140) << 7);
      cVar8 = (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1,iVar3 + 0x20);
      if (cVar8 == '\0') {
        *(int *)(iVar3 + 0x18) = iVar10;
        *(uint *)(iVar3 + 0x14) = uVar4;
        return 0;
      }
      iVar11 = 0;
      local_18 = 0;
      local_28 = 0;
      if (0 < *(int *)(param_1 + 0x124)) {
        local_24 = (int *)(param_1 + 0x128);
        do {
          iVar5 = *local_24;
          if (*(char *)(iVar5 + 0x30) == '\0') {
            iVar11 = iVar11 + *(int *)(iVar5 + 0x3c);
            local_18 = iVar11;
          }
          else {
            iVar9 = *(int *)(iVar5 + 4) * 4;
            pcVar6 = *(code **)(*(int *)(param_1 + 0x19c) + 4 + iVar9);
            if (uVar4 < uVar13) {
              iVar12 = *(int *)(iVar5 + 0x34);
            }
            else {
              iVar12 = *(int *)(iVar5 + 0x44);
            }
            iVar7 = *(int *)(iVar5 + 0x40);
            local_c = 0;
            local_1c = *(int *)(iVar9 + param_2) + *(int *)(iVar5 + 0x24) * iVar10 * 4;
            if (0 < *(int *)(iVar5 + 0x38)) {
              do {
                if (((*(uint *)(param_1 + 0x80) < iVar2 - 1U) ||
                    (local_c + iVar10 < *(int *)(iVar5 + 0x48))) && (0 < iVar12)) {
                  local_14 = (undefined4 *)(iVar3 + 0x20 + iVar11 * 4);
                  local_30 = iVar12;
                  local_10 = iVar7 * uVar4;
                  do {
                    (*pcVar6)(param_1,iVar5,*local_14,local_1c,local_10);
                    local_10 = local_10 + *(int *)(iVar5 + 0x24);
                    local_14 = local_14 + 1;
                    local_30 = local_30 + -1;
                    iVar11 = local_18;
                  } while (local_30 != 0);
                }
                iVar11 = iVar11 + *(int *)(iVar5 + 0x34);
                local_c = local_c + 1;
                local_1c = local_1c + *(int *)(iVar5 + 0x24) * 4;
                local_18 = iVar11;
              } while (local_c < *(int *)(iVar5 + 0x38));
            }
          }
          local_28 = local_28 + 1;
          local_24 = local_24 + 1;
        } while (local_28 < *(int *)(param_1 + 0x124));
      }
    }
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar10 = iVar10 + 1;
  } while( true );
}

