// rea decompile_all
// name: FUN_00663240
// address: 0x663240
// body: available
// range: 0x663240-0x663465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663240(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int local_3c;
  int local_38;
  int local_28;
  int aiStack_18 [4];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(param_1 + 0x198);
  uVar2 = *(undefined4 *)(param_1 + 0x178);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar1 + 0x28) == 0)) &&
     (cVar10 = FUN_00663470(), cVar10 == '\0')) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (*(char *)(iVar1 + 8) == '\0') {
    uVar9 = *(undefined4 *)(iVar1 + 0x14);
    iVar15 = *(int *)(iVar1 + 0xc);
    iVar16 = *(int *)(iVar1 + 0x10);
    uVar3 = **(undefined4 **)(param_1 + 0x18);
    uVar4 = (*(undefined4 **)(param_1 + 0x18))[1];
    aiStack_18[3] = *(undefined4 *)(iVar1 + 0x24);
    aiStack_18[0] = *(int *)(iVar1 + 0x18);
    aiStack_18[1] = *(undefined4 *)(iVar1 + 0x1c);
    aiStack_18[2] = *(undefined4 *)(iVar1 + 0x20);
    local_28 = 0;
    if (0 < *(int *)(param_1 + 0x140)) {
      piVar13 = (int *)(param_1 + 0x144);
      do {
        psVar5 = *(short **)(param_2 + local_28 * 4);
        iVar6 = *piVar13;
        iVar7 = *(int *)(iVar1 + 0x2c + *(int *)(*(int *)(param_1 + 0x128 + iVar6 * 4) + 0x14) * 4);
        if (iVar16 < 8) {
          cVar10 = FUN_00667430(iVar16,0);
          if (cVar10 == '\0') goto LAB_00663453;
          iVar15 = local_3c;
          iVar16 = local_38;
          if (7 < local_38) goto LAB_0066333e;
          uVar11 = 1;
LAB_00663364:
          uVar12 = FUN_00667350(iVar16,iVar7,uVar11);
          iVar15 = local_3c;
          iVar16 = local_38;
          if ((int)uVar12 < 0) goto LAB_00663453;
        }
        else {
LAB_0066333e:
          uVar12 = iVar15 >> ((char)iVar16 - 8U & 0x1f) & 0xff;
          iVar8 = *(int *)(iVar7 + 0x90 + uVar12 * 4);
          if (iVar8 == 0) {
            uVar11 = 9;
            goto LAB_00663364;
          }
          uVar12 = (uint)*(byte *)(uVar12 + 0x490 + iVar7);
          iVar16 = iVar16 - iVar8;
        }
        uVar14 = 0;
        if (uVar12 != 0) {
          if ((iVar16 < (int)uVar12) &&
             (cVar10 = FUN_00667430(iVar16,uVar12), iVar15 = local_3c, iVar16 = local_38,
             cVar10 == '\0')) {
LAB_00663453:
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar16 = iVar16 - uVar12;
          uVar14 = (1 << ((byte)uVar12 & 0x1f)) - 1U & iVar15 >> ((byte)iVar16 & 0x1f);
          if ((int)uVar14 < *(int *)(&DAT_00c02390 + uVar12 * 4)) {
            uVar14 = *(int *)(&DAT_00c020f0 + uVar12 * 4) + uVar14;
          }
        }
        piVar13 = piVar13 + 1;
        aiStack_18[iVar6] = aiStack_18[iVar6] + uVar14;
        *psVar5 = (short)aiStack_18[iVar6] << ((byte)uVar2 & 0x1f);
        local_28 = local_28 + 1;
      } while (local_28 < *(int *)(param_1 + 0x140));
    }
    **(undefined4 **)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uVar4;
    *(undefined4 *)(iVar1 + 0x14) = uVar9;
    *(int *)(iVar1 + 0x18) = aiStack_18[0];
    *(int *)(iVar1 + 0x1c) = aiStack_18[1];
    *(int *)(iVar1 + 0x20) = aiStack_18[2];
    *(int *)(iVar1 + 0xc) = iVar15;
    *(int *)(iVar1 + 0x10) = iVar16;
    *(int *)(iVar1 + 0x24) = aiStack_18[3];
  }
  *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

