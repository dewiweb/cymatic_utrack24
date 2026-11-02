// rea decompile_all
// name: FUN_0046bc90
// address: 0x46bc90
// body: available
// range: 0x46bc90-0x46befd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046bc90(undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  float *pfVar2;
  WORD WVar3;
  uint uVar4;
  LPWORD pgi;
  DWORD DVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  float fVar9;
  LPCWSTR local_8;
  
  FUN_00458890();
  uVar4 = FUN_00464340();
  pgi = (LPWORD)FUN_004c554b(uVar4 * 2 + 2);
  fVar9 = 0.0;
  param_1 = 0.0;
  pgi[uVar4] = 0xffff;
  DVar5 = GetGlyphIndicesW(*(HDC *)(in_ECX + 0x34),local_8,uVar4,pgi,1);
  if (DVar5 != 0xffffffff) {
    if (param_2[1] < (int)uVar4) {
      FUN_00409cf0((int)uVar4 / 2 + 8 + uVar4 & 0xfffffff8);
    }
    if (param_3[1] < (int)(uVar4 + 1)) {
      FUN_00409cf0((int)(uVar4 + 1) / 2 + uVar4 + 9 & 0xfffffff8);
    }
    local_8 = (LPCWSTR)0x0;
    if (uVar4 != 0) {
      do {
        WVar3 = pgi[(int)local_8];
        iVar6 = param_2[2];
        iVar7 = iVar6 + 1;
        if (param_2[1] < iVar7) {
          if (iVar7 < 0) {
            iVar7 = iVar6 + 2;
          }
          uVar8 = iVar6 + 9 + (iVar7 >> 1) & 0xfffffff8;
          if (param_2[1] != uVar8) {
            if ((int)uVar8 < 1) {
              FID_conflict__free((void *)*param_2);
              *param_2 = 0;
            }
            else if (*param_2 == 0) {
              iVar6 = FUN_004c554b();
              *param_2 = iVar6;
            }
            else {
              iVar6 = FUN_004c553b(*param_2,uVar8 * 4);
              *param_2 = iVar6;
            }
            param_2[1] = uVar8;
          }
        }
        iVar6 = param_2[2];
        param_2[2] = iVar6 + 1;
        piVar1 = (int *)(*param_2 + iVar6 * 4);
        if (piVar1 != (int *)0x0) {
          *piVar1 = (int)(short)WVar3;
        }
        iVar6 = param_3[2];
        iVar7 = iVar6 + 1;
        if (param_3[1] < iVar7) {
          if (iVar7 < 0) {
            iVar7 = iVar6 + 2;
          }
          uVar8 = iVar6 + 9 + (iVar7 >> 1) & 0xfffffff8;
          if (param_3[1] != uVar8) {
            if ((int)uVar8 < 1) {
              FID_conflict__free((void *)*param_3);
              *param_3 = 0;
            }
            else if (*param_3 == 0) {
              iVar6 = FUN_004c554b();
              *param_3 = iVar6;
            }
            else {
              iVar6 = FUN_004c553b(*param_3,uVar8 * 4);
              *param_3 = iVar6;
            }
            param_3[1] = uVar8;
          }
        }
        iVar6 = param_3[2];
        param_3[2] = iVar6 + 1;
        pfVar2 = (float *)(*param_3 + iVar6 * 4);
        if (pfVar2 != (float *)0x0) {
          *pfVar2 = param_1;
          fVar9 = param_1;
        }
        FUN_0046c790(*(undefined4 *)(in_ECX + 0x34),(int)(short)pgi[(int)local_8],
                     (int)(short)pgi[(int)local_8 + 1]);
        fVar9 = fVar9 + param_1;
        local_8 = (LPCWSTR)((int)local_8 + 1);
        param_1 = fVar9;
      } while (local_8 < uVar4);
    }
  }
  iVar6 = param_3[2] + 1;
  if ((param_3[1] < iVar6) && (uVar4 = param_3[2] + 9 + iVar6 / 2 & 0xfffffff8, param_3[1] != uVar4)
     ) {
    if ((int)uVar4 < 1) {
      FID_conflict__free((void *)*param_3);
      *param_3 = 0;
    }
    else if (*param_3 == 0) {
      iVar6 = FUN_004c554b();
      *param_3 = iVar6;
    }
    else {
      iVar6 = FUN_004c553b(*param_3,uVar4 * 4);
      *param_3 = iVar6;
    }
    param_3[1] = uVar4;
  }
  iVar6 = param_3[2];
  param_3[2] = iVar6 + 1;
  pfVar2 = (float *)(*param_3 + iVar6 * 4);
  if (pfVar2 != (float *)0x0) {
    *pfVar2 = param_1;
  }
  FID_conflict__free(pgi);
  return;
}

