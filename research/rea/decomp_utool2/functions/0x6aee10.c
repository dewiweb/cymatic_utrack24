// rea decompile_all
// name: FUN_006aee10
// address: 0x6aee10
// body: available
// range: 0x6aee10-0x6af134 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006aee10(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_18;
  int local_10;
  
  dVar8 = 0.0;
  local_30 = 0;
  iVar2 = param_1;
  if (param_1 < param_2) {
    do {
      iVar6 = *(int *)(*in_ECX + iVar2 * 4);
      dVar7 = *(double *)(iVar6 + 8);
      if (dVar7 < 0.0) {
        dVar7 = dVar7 * (double)-in_ECX[3];
      }
      local_20 = SUB84(dVar7 + 6755399441055744.0,0);
      local_30 = local_30 + local_20;
      dVar7 = *(double *)(iVar6 + 0x18);
      *(int *)(iVar6 + 4) = local_20;
      if (dVar7 < 0.0) {
        dVar7 = dVar7 * (double)-in_ECX[3];
      }
      iVar2 = iVar2 + 1;
      local_20 = SUB84(dVar7 + 6755399441055744.0,0);
      dVar8 = dVar8 + (double)local_20;
    } while (iVar2 < param_2);
    if (0.0 < dVar8) goto LAB_006aeebe;
  }
  dVar8 = 1.0;
LAB_006aeebe:
  local_30 = param_3 - local_30;
  if (0 < local_30) {
    while( true ) {
      local_24 = 0;
      local_2c = 0;
      if (param_1 < param_2) {
        piVar3 = (int *)(*in_ECX + param_1 * 4);
        iVar6 = 0;
        iVar2 = param_2 - param_1;
        do {
          local_2c = iVar2;
          iVar2 = *piVar3;
          dVar7 = *(double *)(iVar2 + 0x18);
          if (dVar7 < 0.0) {
            dVar7 = dVar7 * (double)-in_ECX[3];
          }
          local_20 = SUB84(dVar7 + 6755399441055744.0,0);
          dVar7 = *(double *)(iVar2 + 0x10);
          if (dVar7 < 0.0) {
            dVar7 = dVar7 * (double)-in_ECX[3];
          }
          iVar2 = *(int *)(iVar2 + 4);
          local_18 = SUB84(((double)local_20 * (double)param_3) / dVar8 + 6755399441055744.0,0);
          local_20 = SUB84(dVar7 + 6755399441055744.0,0);
          iVar1 = iVar2;
          if (iVar2 < local_20) {
            iVar1 = local_20;
          }
          iVar5 = iVar2;
          if ((iVar2 <= local_18) && (iVar5 = local_18, iVar1 < local_18)) {
            iVar5 = iVar1;
          }
          piVar3 = piVar3 + 1;
          iVar1 = iVar6 + 1;
          if (iVar5 <= iVar2) {
            iVar1 = iVar6;
          }
          iVar2 = local_2c + -1;
          iVar6 = iVar1;
          local_2c = iVar1;
        } while (iVar2 != 0);
      }
      if (param_2 <= param_1) break;
      iVar2 = param_1;
      do {
        iVar6 = *(int *)(*in_ECX + iVar2 * 4);
        dVar7 = *(double *)(iVar6 + 0x18);
        if (dVar7 < 0.0) {
          dVar7 = dVar7 * (double)-in_ECX[3];
        }
        local_18 = SUB84(dVar7 + 6755399441055744.0,0);
        dVar7 = *(double *)(iVar6 + 0x10);
        if (dVar7 < 0.0) {
          dVar7 = dVar7 * (double)-in_ECX[3];
        }
        iVar1 = *(int *)(iVar6 + 4);
        local_10 = SUB84(((double)local_18 * (double)param_3) / dVar8 + 6755399441055744.0,0);
        local_18 = SUB84(dVar7 + 6755399441055744.0,0);
        iVar5 = iVar1;
        if (iVar1 < local_18) {
          iVar5 = local_18;
        }
        iVar4 = iVar1;
        if ((iVar1 <= local_10) && (iVar4 = local_10, iVar5 < local_10)) {
          iVar4 = iVar5;
        }
        iVar4 = iVar4 - iVar1;
        if (0 < iVar4) {
          iVar5 = 1;
          if (1 < local_2c) {
            iVar5 = local_2c;
          }
          if (local_30 / iVar5 < iVar4) {
            iVar4 = local_30 / iVar5;
          }
          if (0 < iVar4) {
            local_24 = local_24 + 1;
            local_2c = local_2c + -1;
            *(int *)(iVar6 + 4) = iVar1 + iVar4;
            local_30 = local_30 - iVar4;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
      if ((local_24 < 1) || (local_30 < 1)) break;
    }
  }
  iVar6 = 0;
  iVar2 = 0;
  if (param_2 <= param_1) {
    return param_4;
  }
  if (1 < param_2 - param_1) {
    iVar1 = param_1 * 4;
    iVar5 = ((param_2 - param_1) - 2U >> 1) + 1;
    param_1 = param_1 + iVar5 * 2;
    piVar3 = (int *)(*in_ECX + iVar1);
    do {
      iVar6 = iVar6 + *(int *)(*piVar3 + 4);
      iVar2 = iVar2 + *(int *)(piVar3[1] + 4);
      iVar5 = iVar5 + -1;
      piVar3 = piVar3 + 2;
    } while (iVar5 != 0);
  }
  if (param_2 <= param_1) {
    return iVar2 + iVar6 + param_4;
  }
  return iVar2 + iVar6 + param_4 + *(int *)(*(int *)(*in_ECX + param_1 * 4) + 4);
}

