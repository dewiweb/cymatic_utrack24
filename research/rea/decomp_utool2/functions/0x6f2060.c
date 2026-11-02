// rea decompile_all
// name: FUN_006f2060
// address: 0x6f2060
// body: available
// range: 0x6f2060-0x6f2291 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006f2060(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  _locale_t unaff_EDI;
  int iVar6;
  char cVar7;
  char cVar8;
  int local_1c [4];
  char local_c;
  uint local_8;
  
  local_8 = 0;
  iVar6 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = 0;
  bVar1 = false;
  while( true ) {
    piVar3 = (int *)FUN_006f2b80(local_1c,0xffffffff);
    if (((uint)piVar3[2] < (uint)((int *)*piVar3)[2]) &&
       (*(int *)(*(int *)*piVar3 + piVar3[2] * 4) != 0)) {
      FUN_0044ebd0(piVar3[3]);
      iVar4 = FUN_00426f70();
    }
    else {
      iVar4 = 0;
    }
    if ((local_c != '\0') && (local_c = '\0', local_1c[0] != 0)) {
      FUN_00415ff0(local_1c);
    }
    if ((iVar4 == 0xd) || (bVar2 = bVar1, iVar4 == 10)) break;
LAB_006f2106:
    bVar1 = bVar2;
    iVar4 = FID_conflict___iswspace_l((wint_t)iVar4,unaff_EDI);
    if (iVar4 == 0) goto LAB_006f213a;
    FUN_006f2c40(param_1[1] + -1);
    iVar6 = iVar6 + 1;
    if (0xff < iVar6) {
      return param_1;
    }
  }
  bVar1 = true;
  bVar2 = true;
  if (iVar6 < 1) goto LAB_006f2106;
LAB_006f213a:
  if (0xff < iVar6) {
    return param_1;
  }
  if (bVar1) {
    return param_1;
  }
  piVar3 = (int *)FUN_006f2b80(local_1c,0xffffffff);
  if (((uint)piVar3[2] < (uint)((int *)*piVar3)[2]) &&
     (*(int *)(*(int *)*piVar3 + piVar3[2] * 4) != 0)) {
    FUN_0044ebd0(piVar3[3]);
    iVar4 = FUN_00426f70();
  }
  else {
    iVar4 = 0;
  }
  iVar5 = FID_conflict__iswalnum((wint_t)iVar4,unaff_EDI);
  if ((iVar5 == 0) && (iVar4 != 0x5f)) {
    iVar4 = FID_conflict___iswspace_l((wint_t)iVar4,unaff_EDI);
    cVar7 = iVar4 == 0;
  }
  else {
    cVar7 = '\x02';
  }
  if ((local_c != '\0') && (local_c = '\0', local_1c[0] != 0)) {
    FUN_00415ff0(local_1c);
  }
  do {
    if (iVar6 < 0x100) {
      local_8 = local_8 | 1;
      piVar3 = (int *)FUN_006f2b80(local_1c,0xffffffff);
      if (((uint)piVar3[2] < (uint)((int *)*piVar3)[2]) &&
         (*(int *)(*(int *)*piVar3 + piVar3[2] * 4) != 0)) {
        FUN_0044ebd0(piVar3[3]);
        iVar4 = FUN_00426f70();
      }
      else {
        iVar4 = 0;
      }
      iVar5 = FID_conflict__iswalnum((wint_t)iVar4,unaff_EDI);
      if ((iVar5 == 0) && (iVar4 != 0x5f)) {
        iVar4 = FID_conflict___iswspace_l((wint_t)iVar4,unaff_EDI);
        cVar8 = iVar4 == 0;
      }
      else {
        cVar8 = '\x02';
      }
      if (cVar7 != cVar8) goto LAB_006f224c;
      bVar1 = true;
    }
    else {
LAB_006f224c:
      bVar1 = false;
    }
    if ((((local_8 & 1) != 0) && (local_8 = local_8 & 0xfffffffe, local_c != '\0')) &&
       (local_c = '\0', local_1c[0] != 0)) {
      FUN_00415ff0(local_1c);
    }
    if (!bVar1) {
      return param_1;
    }
    FUN_006f2c40(param_1[1] + -1);
    iVar6 = iVar6 + 1;
  } while( true );
}

