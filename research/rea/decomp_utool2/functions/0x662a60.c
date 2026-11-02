// rea decompile_all
// name: FUN_00662a60
// address: 0x662a60
// body: available
// range: 0x662a60-0x662f1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662a60(int *param_1,int *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint local_148;
  int local_130;
  int local_12c;
  int local_124;
  int local_118;
  int local_114;
  int local_10c [65];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar3 = param_1[0x5c];
  iVar4 = param_1[0x66];
  uVar12 = 1 << ((byte)param_1[0x5e] & 0x1f);
  uVar13 = -1 << ((byte)param_1[0x5e] & 0x1f);
  if (((param_1[0x3f] != 0) && (*(int *)(iVar4 + 0x28) == 0)) &&
     (cVar9 = FUN_00663470(), cVar9 == '\0')) goto LAB_00662f08;
  if (*(char *)(iVar4 + 8) != '\0') goto LAB_00662ed0;
  iVar16 = *(int *)(iVar4 + 0xc);
  iVar19 = *(int *)(iVar4 + 0x10);
  uVar5 = *(undefined4 *)param_1[6];
  iVar18 = param_1[0x5b];
  uVar6 = ((undefined4 *)param_1[6])[1];
  local_114 = *(int *)(iVar4 + 0x14);
  iVar7 = *(int *)(iVar4 + 0x3c);
  iVar8 = *param_2;
  local_124 = 0;
  sVar10 = (short)uVar13;
  iVar17 = iVar16;
  if (local_114 != 0) {
joined_r0x00662df1:
    do {
      local_10c[0] = iVar17;
      if (iVar3 < iVar18) goto LAB_00662e8f;
      psVar1 = (short *)(iVar8 + (&DAT_00c02140)[iVar18] * 2);
      if (*(short *)(iVar8 + (&DAT_00c02140)[iVar18] * 2) != 0) {
        if (iVar19 < 1) {
          cVar9 = FUN_00667430(iVar19,1);
          if (cVar9 == '\0') goto joined_r0x00662eee;
          local_10c[0] = local_130;
          iVar16 = local_130;
          iVar19 = local_12c;
        }
        iVar19 = iVar19 + -1;
        if (((iVar16 >> ((byte)iVar19 & 0x1f) & 1U) != 0) &&
           (sVar2 = *psVar1, iVar16 = local_10c[0], (uVar12 & (int)sVar2) == 0)) {
          sVar11 = (short)uVar12;
          if (sVar2 < 0) {
            sVar11 = sVar10;
          }
          *psVar1 = sVar11 + sVar2;
        }
      }
      iVar18 = iVar18 + 1;
      iVar17 = local_10c[0];
    } while( true );
  }
  local_114 = 0;
  local_10c[0] = iVar16;
  for (; iVar17 = iVar16, iVar18 <= iVar3; iVar18 = iVar18 + 1) {
    if (iVar19 < 8) {
      cVar9 = FUN_00667430(iVar19,0);
      if (cVar9 == '\0') goto joined_r0x00662eee;
      local_10c[0] = local_130;
      iVar16 = local_130;
      iVar19 = local_12c;
      if (7 < local_12c) goto LAB_00662b8c;
      uVar14 = 1;
LAB_00662bbe:
      uVar15 = FUN_00667350(iVar19,iVar7,uVar14);
      if ((int)uVar15 < 0) goto joined_r0x00662eee;
      local_10c[0] = local_130;
      iVar16 = local_130;
      iVar19 = local_12c;
    }
    else {
LAB_00662b8c:
      uVar15 = iVar16 >> ((char)iVar19 - 8U & 0x1f) & 0xff;
      iVar17 = *(int *)(iVar7 + 0x90 + uVar15 * 4);
      if (iVar17 == 0) {
        uVar14 = 9;
        goto LAB_00662bbe;
      }
      iVar19 = iVar19 - iVar17;
      uVar15 = (uint)*(byte *)(uVar15 + 0x490 + iVar7);
    }
    local_118 = (int)uVar15 >> 4;
    if ((uVar15 & 0xf) == 0) {
      if (local_118 != 0xf) {
        local_114 = 1 << ((byte)local_118 & 0x1f);
        if (local_118 != 0) {
          if (iVar19 < local_118) {
            cVar9 = FUN_00667430(iVar19,local_118);
            if (cVar9 == '\0') goto joined_r0x00662eee;
            local_10c[0] = local_130;
            iVar16 = local_130;
            iVar19 = local_12c;
          }
          iVar19 = iVar19 - local_118;
          local_114 = local_114 + (iVar16 >> ((byte)iVar19 & 0x1f) & local_114 - 1U);
        }
        iVar17 = local_10c[0];
        iVar16 = local_10c[0];
        if (local_114 != 0) goto joined_r0x00662df1;
        break;
      }
      local_148 = 0;
    }
    else {
      if ((uVar15 & 0xf) != 1) {
        *(undefined4 *)(*param_1 + 0x14) = 0x76;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      if (iVar19 < 1) {
        cVar9 = FUN_00667430(iVar19,1);
        if (cVar9 == '\0') goto joined_r0x00662eee;
        local_10c[0] = local_130;
        iVar19 = local_12c;
      }
      iVar19 = iVar19 + -1;
      iVar16 = local_10c[0];
      local_148 = uVar13;
      if ((local_10c[0] >> ((byte)iVar19 & 0x1f) & 1U) != 0) {
        local_148 = uVar12;
      }
    }
    do {
      psVar1 = (short *)(iVar8 + (&DAT_00c02140)[iVar18] * 2);
      if (*(short *)(iVar8 + (&DAT_00c02140)[iVar18] * 2) == 0) {
        local_118 = local_118 + -1;
        if (local_118 < 0) break;
      }
      else {
        if (iVar19 < 1) {
          cVar9 = FUN_00667430(iVar19,1);
          if (cVar9 == '\0') goto joined_r0x00662eee;
          local_10c[0] = local_130;
          iVar16 = local_130;
          iVar19 = local_12c;
        }
        iVar19 = iVar19 + -1;
        if (((iVar16 >> ((byte)iVar19 & 0x1f) & 1U) != 0) &&
           (sVar2 = *psVar1, iVar16 = local_10c[0], (uVar12 & (int)sVar2) == 0)) {
          sVar11 = sVar10;
          if (-1 < sVar2) {
            sVar11 = (short)uVar12;
          }
          *psVar1 = sVar11 + sVar2;
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 <= iVar3);
    if (local_148 != 0) {
      iVar17 = (&DAT_00c02140)[iVar18];
      *(short *)(iVar8 + iVar17 * 2) = (short)local_148;
      local_10c[local_124 + 1] = iVar17;
      local_124 = local_124 + 1;
    }
  }
LAB_00662e9c:
  *(undefined4 *)param_1[6] = uVar5;
  *(undefined4 *)(param_1[6] + 4) = uVar6;
  *(int *)(iVar4 + 0x10) = iVar19;
  *(int *)(iVar4 + 0xc) = iVar17;
  *(int *)(iVar4 + 0x14) = local_114;
LAB_00662ed0:
  *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + -1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_00662e8f:
  local_114 = local_114 + -1;
  goto LAB_00662e9c;
joined_r0x00662eee:
  for (; 0 < local_124; local_124 = local_124 + -1) {
    *(undefined2 *)(iVar8 + local_10c[local_124] * 2) = 0;
  }
LAB_00662f08:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

