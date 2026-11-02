// rea decompile_all
// name: FUN_00489aa8
// address: 0x489aa8
// body: available
// range: 0x489aa8-0x489cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00489aa8(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_30;
  int local_2c;
  int local_10;
  int local_c;
  int local_8;
  
  iVar7 = param_1;
  iVar1 = *(int *)(param_1 + 0x170);
  uVar9 = *(undefined4 *)(param_1 + 0x178);
  iVar2 = *(int *)(param_1 + 0x198);
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(iVar2 + 0x28) != 0)) ||
     (cVar8 = FUN_00489856(), cVar8 != '\0')) {
    if (*(char *)(iVar2 + 8) == '\0') {
      if (*(int *)(iVar2 + 0x14) == 0) {
        uVar3 = **(undefined4 **)(param_1 + 0x18);
        uVar4 = (*(undefined4 **)(param_1 + 0x18))[1];
        iVar13 = *(int *)(iVar2 + 0xc);
        iVar5 = *param_2;
        iVar6 = *(int *)(iVar2 + 0x3c);
        iVar10 = *(int *)(iVar2 + 0x10);
        local_10 = iVar13;
        for (local_8 = *(int *)(param_1 + 0x16c); local_8 <= iVar1; local_8 = local_8 + 1) {
          if (iVar10 < 8) {
            cVar8 = FUN_004863c3(iVar13,iVar10,0);
            if (cVar8 == '\0') goto LAB_00489ae6;
            local_10 = local_30;
            iVar10 = local_2c;
            iVar13 = local_30;
            if (7 < local_2c) goto LAB_00489b68;
            uVar11 = 1;
LAB_00489b98:
            param_1 = FUN_004864bd(iVar6,uVar11);
            if ((int)param_1 < 0) goto LAB_00489ae6;
            local_10 = local_30;
            iVar10 = local_2c;
            iVar13 = local_30;
          }
          else {
LAB_00489b68:
            uVar14 = iVar13 >> ((char)iVar10 - 8U & 0x1f) & 0xff;
            iVar12 = *(int *)(iVar6 + 0x90 + uVar14 * 4);
            if (iVar12 == 0) {
              uVar11 = 9;
              goto LAB_00489b98;
            }
            iVar10 = iVar10 - iVar12;
            param_1 = (uint)*(byte *)(uVar14 + 0x490 + iVar6);
          }
          iVar12 = (int)param_1 >> 4;
          param_1 = param_1 & 0xf;
          if (param_1 == 0) {
            if (iVar12 != 0xf) {
              local_c = 1 << ((byte)iVar12 & 0x1f);
              if (iVar12 != 0) {
                if ((iVar10 < iVar12) &&
                   (cVar8 = FUN_004863c3(iVar13,iVar10,iVar12), iVar10 = local_2c, iVar13 = local_30
                   , cVar8 == '\0')) goto LAB_00489ae6;
                iVar10 = iVar10 - iVar12;
                local_c = local_c + (iVar13 >> ((byte)iVar10 & 0x1f) & local_c - 1U);
              }
              local_c = local_c + -1;
              goto LAB_00489c95;
            }
            local_8 = local_8 + 0xf;
          }
          else {
            local_8 = local_8 + iVar12;
            if (iVar10 < (int)param_1) {
              cVar8 = FUN_004863c3(iVar13,iVar10,param_1);
              if (cVar8 == '\0') goto LAB_00489ae6;
              local_10 = local_30;
              iVar10 = local_2c;
              iVar13 = local_30;
            }
            iVar10 = iVar10 - param_1;
            uVar14 = (1 << (sbyte)param_1) - 1U & iVar13 >> ((byte)iVar10 & 0x1f);
            if ((int)uVar14 < *(int *)(&DAT_005ff308 + param_1 * 4)) {
              uVar14 = *(int *)(&DAT_005ff348 + param_1 * 4) + uVar14;
            }
            *(short *)(iVar5 + (&DAT_005ff498)[local_8] * 2) =
                 (short)(uVar14 << ((byte)uVar9 & 0x1f));
            iVar13 = local_10;
          }
        }
        local_c = 0;
LAB_00489c95:
        **(undefined4 **)(iVar7 + 0x18) = uVar3;
        *(undefined4 *)(*(int *)(iVar7 + 0x18) + 4) = uVar4;
        *(int *)(iVar2 + 0x10) = iVar10;
        *(int *)(iVar2 + 0xc) = iVar13;
      }
      else {
        local_c = *(int *)(iVar2 + 0x14) + -1;
      }
      *(int *)(iVar2 + 0x14) = local_c;
    }
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
    uVar9 = 1;
  }
  else {
LAB_00489ae6:
    uVar9 = 0;
  }
  return uVar9;
}

