// rea decompile_all
// name: FUN_006f22a0
// address: 0x6f22a0
// body: available
// range: 0x6f22a0-0x6f25d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006f22a0(int *param_1,int *param_2)

{
  uint uVar1;
  wint_t wVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _locale_t unaff_EDI;
  int iVar6;
  char cVar7;
  char cVar8;
  
  iVar6 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = 0;
  do {
    if (((uint)param_1[2] < (uint)((int *)*param_1)[2]) &&
       (*(int *)(*(int *)*param_1 + param_1[2] * 4) != 0)) {
      FUN_0044ebd0(param_1[3]);
      wVar2 = FUN_00426f70();
    }
    else {
      wVar2 = 0;
    }
    iVar3 = FID_conflict___iswspace_l(wVar2,unaff_EDI);
    if (iVar3 == 0) break;
    if (iVar6 != 0) {
      piVar5 = (int *)*param_1;
      uVar1 = param_1[2];
      if (uVar1 < (uint)piVar5[2]) {
        if (*(int *)(*piVar5 + uVar1 * 4) != 0) {
          FUN_0044ebd0(param_1[3]);
          iVar3 = FUN_00426f70();
          if (iVar3 == 10) break;
          piVar5 = (int *)*param_1;
        }
        if ((uVar1 < (uint)piVar5[2]) && (*(int *)(*piVar5 + uVar1 * 4) != 0)) {
          FUN_0044ebd0(param_1[3]);
          iVar3 = FUN_00426f70();
          if (iVar3 == 0xd) break;
        }
      }
    }
    iVar6 = iVar6 + 1;
    iVar3 = 1;
    FUN_006f2c40(param_1[1]);
    if (param_1[2] < ((int *)*param_1)[2]) {
      iVar4 = *(int *)(*(int *)*param_1 + param_1[2] * 4);
      if ((param_1[3] + 1 < *(int *)(iVar4 + 8)) && (*(int *)(iVar4 + 0xc) + 1 <= param_1[3] + 1)) {
        iVar3 = 2;
      }
    }
    FUN_006f2c40(param_1[1] + iVar3);
  } while (iVar6 < 0x100);
  if (iVar6 == 0) {
    if (((uint)param_1[2] < (uint)((int *)*param_1)[2]) &&
       (*(int *)(*(int *)*param_1 + param_1[2] * 4) != 0)) {
      FUN_0044ebd0(param_1[3]);
      iVar6 = FUN_00426f70();
    }
    else {
      iVar6 = 0;
    }
    iVar4 = FID_conflict__iswalnum((wint_t)iVar6,unaff_EDI);
    iVar3 = 0;
    if ((iVar4 == 0) && (iVar6 != 0x5f)) {
      iVar6 = FID_conflict___iswspace_l((wint_t)iVar6,unaff_EDI);
      cVar7 = iVar6 == 0;
    }
    else {
      cVar7 = '\x02';
    }
    while( true ) {
      if (((uint)param_1[2] < (uint)((int *)*param_1)[2]) &&
         (*(int *)(*(int *)*param_1 + param_1[2] * 4) != 0)) {
        FUN_0044ebd0(param_1[3]);
        iVar6 = FUN_00426f70();
      }
      else {
        iVar6 = 0;
      }
      iVar4 = FID_conflict__iswalnum((wint_t)iVar6,unaff_EDI);
      if ((iVar4 == 0) && (iVar6 != 0x5f)) {
        iVar6 = FID_conflict___iswspace_l((wint_t)iVar6,unaff_EDI);
        cVar8 = iVar6 == 0;
      }
      else {
        cVar8 = '\x02';
      }
      if (cVar7 != cVar8) break;
      iVar3 = iVar3 + 1;
      iVar6 = 1;
      FUN_006f2c40(param_1[1]);
      if (param_1[2] < ((int *)*param_1)[2]) {
        iVar4 = *(int *)(*(int *)*param_1 + param_1[2] * 4);
        if ((param_1[3] + 1 < *(int *)(iVar4 + 8)) && (*(int *)(iVar4 + 0xc) + 1 <= param_1[3] + 1))
        {
          iVar6 = 2;
        }
      }
      FUN_006f2c40(param_1[1] + iVar6);
      if (0xff < iVar3) {
        return param_1;
      }
    }
    while (iVar3 < 0x100) {
      if (((uint)param_1[2] < (uint)((int *)*param_1)[2]) &&
         (*(int *)(*(int *)*param_1 + param_1[2] * 4) != 0)) {
        FUN_0044ebd0(param_1[3]);
        wVar2 = FUN_00426f70();
      }
      else {
        wVar2 = 0;
      }
      iVar6 = FID_conflict___iswspace_l(wVar2,unaff_EDI);
      if (iVar6 == 0) {
        return param_1;
      }
      if (iVar3 != 0) {
        piVar5 = (int *)*param_1;
        uVar1 = param_1[2];
        if (uVar1 < (uint)piVar5[2]) {
          if (*(int *)(*piVar5 + uVar1 * 4) != 0) {
            FUN_0044ebd0(param_1[3]);
            iVar6 = FUN_00426f70();
            if (iVar6 == 10) {
              return param_1;
            }
            piVar5 = (int *)*param_1;
          }
          if ((uVar1 < (uint)piVar5[2]) && (*(int *)(*piVar5 + uVar1 * 4) != 0)) {
            FUN_0044ebd0(param_1[3]);
            iVar6 = FUN_00426f70();
            if (iVar6 == 0xd) {
              return param_1;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar6 = 1;
      FUN_006f2c40(param_1[1]);
      if (param_1[2] < ((int *)*param_1)[2]) {
        iVar4 = *(int *)(*(int *)*param_1 + param_1[2] * 4);
        if ((param_1[3] + 1 < *(int *)(iVar4 + 8)) && (*(int *)(iVar4 + 0xc) + 1 <= param_1[3] + 1))
        {
          iVar6 = 2;
        }
      }
      FUN_006f2c40(param_1[1] + iVar6);
    }
  }
  return param_1;
}

