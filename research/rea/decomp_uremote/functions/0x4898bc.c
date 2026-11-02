// rea decompile_all
// name: FUN_004898bc
// address: 0x4898bc
// body: available
// range: 0x4898bc-0x489aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004898bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int local_48 [5];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined2 *local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar9 = param_1;
  local_c = *(int *)(param_1 + 0x198);
  local_1c = *(undefined4 *)(param_1 + 0x178);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(*(int *)(param_1 + 0x198) + 0x28) == 0)) &&
     (cVar3 = FUN_00489856(), cVar3 == '\0')) {
    return 0;
  }
  iVar6 = local_c;
  if (*(char *)(local_c + 8) == '\0') {
    local_10 = 0;
    iVar1 = *(int *)(param_1 + 0x140);
    local_30 = (*(undefined4 **)(param_1 + 0x18))[1];
    iVar2 = *(int *)(local_c + 0xc);
    local_34 = **(undefined4 **)(param_1 + 0x18);
    iVar10 = *(int *)(local_c + 0x10);
    local_24 = param_1;
    piVar11 = (int *)(local_c + 0x14);
    piVar12 = local_48;
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar12 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar12 = piVar12 + 1;
    }
    if (0 < iVar1) {
      local_14 = (int *)(param_1 + 0x144);
      param_1 = iVar2;
      do {
        local_20 = *(undefined2 **)(param_2 + local_10 * 4);
        local_18 = *local_14;
        iVar1 = *(int *)(iVar6 + 0x2c + *(int *)(*(int *)(iVar9 + 0x128 + *local_14 * 4) + 0x14) * 4
                        );
        if (iVar10 < 8) {
          cVar3 = FUN_004863c3(param_1,iVar10,0);
          if (cVar3 == '\0') {
            return 0;
          }
          param_1 = local_2c;
          iVar6 = local_c;
          iVar10 = local_28;
          if (7 < local_28) goto LAB_0048999a;
          uVar4 = 1;
LAB_004899c2:
          uVar5 = FUN_004864bd(iVar1,uVar4);
          if ((int)uVar5 < 0) {
            return 0;
          }
          param_1 = local_2c;
          iVar6 = local_c;
          iVar10 = local_28;
        }
        else {
LAB_0048999a:
          uVar5 = param_1 >> ((char)iVar10 - 8U & 0x1f) & 0xff;
          iVar2 = *(int *)(iVar1 + 0x90 + uVar5 * 4);
          if (iVar2 == 0) {
            uVar4 = 9;
            goto LAB_004899c2;
          }
          uVar5 = (uint)*(byte *)(uVar5 + 0x490 + iVar1);
          iVar10 = iVar10 - iVar2;
        }
        uVar8 = 0;
        if (uVar5 != 0) {
          if (iVar10 < (int)uVar5) {
            cVar3 = FUN_004863c3(param_1,iVar10,uVar5);
            if (cVar3 == '\0') {
              return 0;
            }
            param_1 = local_2c;
            iVar6 = local_c;
            iVar10 = local_28;
          }
          iVar10 = iVar10 - uVar5;
          local_8 = (1 << ((byte)uVar5 & 0x1f)) - 1;
          uVar8 = local_8 & param_1 >> ((byte)iVar10 & 0x1f);
          if ((int)uVar8 < *(int *)(&DAT_005ff308 + uVar5 * 4)) {
            uVar8 = *(int *)(&DAT_005ff348 + uVar5 * 4) + uVar8;
          }
        }
        local_14 = local_14 + 1;
        piVar11 = local_48 + local_18 + 1;
        *piVar11 = *piVar11 + uVar8;
        local_10 = local_10 + 1;
        *local_20 = (short)(*piVar11 << ((byte)local_1c & 0x1f));
        iVar2 = param_1;
      } while (local_10 < *(int *)(iVar9 + 0x140));
    }
    param_1 = iVar2;
    **(undefined4 **)(iVar9 + 0x18) = local_34;
    *(undefined4 *)(*(int *)(iVar9 + 0x18) + 4) = local_30;
    *(int *)(iVar6 + 0xc) = param_1;
    *(int *)(iVar6 + 0x10) = iVar10;
    piVar11 = local_48;
    piVar12 = (int *)(iVar6 + 0x14);
    for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar12 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar12 = piVar12 + 1;
    }
  }
  *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + -1;
  return 1;
}

