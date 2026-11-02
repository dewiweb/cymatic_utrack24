// rea decompile_all
// name: FUN_0065b110
// address: 0x65b110
// body: available
// range: 0x65b110-0x65b300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b110(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_EDX;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int local_414;
  int aiStack_408 [256];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(in_ECX + 0x70);
  iVar13 = 0x7fffffff;
  local_414 = 0;
  iVar6 = param_1 + 0x1c;
  iVar9 = param_2 + 0x18;
  if (0 < iVar1) {
    piVar2 = *(int **)(in_ECX + 0x74);
    pbVar11 = (byte *)piVar2[1];
    iVar7 = *piVar2 - (int)pbVar11;
    iVar3 = piVar2[2] - (int)pbVar11;
    do {
      uVar4 = (uint)pbVar11[iVar7];
      iVar5 = in_EDX + 0x18;
      if ((int)uVar4 < in_EDX) {
        iVar10 = (uVar4 - in_EDX) * 2;
        iVar10 = iVar10 * iVar10;
        iVar5 = uVar4 - iVar5;
      }
      else {
        if (iVar5 < (int)uVar4) {
          iVar10 = (uVar4 - iVar5) * 2;
          iVar10 = iVar10 * iVar10;
        }
        else {
          iVar10 = 0;
          if ((int)uVar4 <= in_EDX * 2 + 0x18 >> 1) {
            iVar5 = uVar4 - iVar5;
            goto LAB_0065b1d7;
          }
        }
        iVar5 = uVar4 - in_EDX;
      }
LAB_0065b1d7:
      uVar4 = (uint)*pbVar11;
      if ((int)uVar4 < param_1) {
        iVar12 = (uVar4 - iVar6) * 3;
        iVar8 = (uVar4 - param_1) * 3;
        iVar10 = iVar10 + iVar8 * iVar8;
        iVar12 = iVar12 * iVar12;
      }
      else {
        if (iVar6 < (int)uVar4) {
          iVar12 = (uVar4 - iVar6) * 3;
          iVar10 = iVar10 + iVar12 * iVar12;
          iVar12 = uVar4 - param_1;
        }
        else if (param_1 + iVar6 >> 1 < (int)uVar4) {
          iVar12 = uVar4 - param_1;
        }
        else {
          iVar12 = uVar4 - iVar6;
        }
        iVar12 = iVar12 * 3 * iVar12 * 3;
      }
      uVar4 = (uint)pbVar11[iVar3];
      if ((int)uVar4 < param_2) {
        iVar10 = iVar10 + (uVar4 - param_2) * (uVar4 - param_2);
        iVar8 = uVar4 - iVar9;
      }
      else {
        if (iVar9 < (int)uVar4) {
          iVar10 = iVar10 + (uVar4 - iVar9) * (uVar4 - iVar9);
        }
        else if ((int)uVar4 <= iVar9 + param_2 >> 1) {
          iVar8 = uVar4 - iVar9;
          goto LAB_0065b287;
        }
        iVar8 = uVar4 - param_2;
      }
LAB_0065b287:
      aiStack_408[local_414] = iVar10;
      iVar5 = iVar8 * iVar8 + iVar12 + iVar5 * 2 * iVar5 * 2;
      if (iVar5 < iVar13) {
        iVar13 = iVar5;
      }
      local_414 = local_414 + 1;
      pbVar11 = pbVar11 + 1;
    } while (local_414 < iVar1);
  }
  iVar6 = 0;
  iVar9 = 0;
  if (0 < iVar1) {
    do {
      if (aiStack_408[iVar9] <= iVar13) {
        *(char *)(param_3 + iVar6) = (char)iVar9;
        iVar6 = iVar6 + 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

