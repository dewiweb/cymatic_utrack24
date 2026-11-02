// rea decompile_all
// name: FUN_004066c0
// address: 0x4066c0
// body: available
// range: 0x4066c0-0x4068a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double * FUN_004066c0(double param_1,double param_2)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  void *_Memory;
  double *pdVar4;
  uint uVar5;
  double *pdVar6;
  undefined4 extraout_ECX;
  double in_XMM2_Qa;
  double in_XMM3_Qa;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fbf98;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7b0);
  local_8 = 0;
  pdVar4 = (double *)0x0;
  pdVar1 = DAT_00c8a7c8;
  do {
    pdVar6 = pdVar1;
    pdVar3 = pdVar4;
    if (pdVar6 == (double *)0x0) goto LAB_004067d6;
    if ((((*pdVar6 == in_XMM2_Qa) && (pdVar6[1] == in_XMM3_Qa)) && (pdVar6[2] == param_1)) &&
       ((*(int *)(pdVar6 + 3) == 0 && (pdVar6[4] == param_2)))) {
      *(int *)((int)pdVar6 + 0x2c) = *(int *)((int)pdVar6 + 0x2c) + 1;
      pdVar1 = DAT_00c8a7c8;
      if (pdVar3 == (double *)0x0) goto LAB_00406884;
      *(undefined4 *)(pdVar3 + 5) = *(undefined4 *)(pdVar6 + 5);
      goto LAB_00406837;
    }
    pdVar1 = *(double **)(pdVar6 + 5);
    pdVar4 = pdVar6;
  } while ((pdVar1 != (double *)0x0) || (DAT_00c8a5dc < 0x60));
  iVar2 = *(int *)((int)pdVar6 + 0x2c);
  *(undefined4 *)(pdVar3 + 5) = 0;
  pdVar1 = DAT_00c8a7c8;
  if (iVar2 == 0) {
    FUN_00406690(pdVar3);
    DAT_00c8a5dc = DAT_00c8a5dc + -1;
  }
  else {
    DAT_00c8a7c8 = (double *)0x0;
    *(double **)(pdVar6 + 5) = pdVar1;
    FUN_004086f0(pdVar6);
  }
LAB_004067d6:
  pdVar6 = (double *)FUN_004c554b(0x50,uVar5);
  if (pdVar6 == (double *)0x0) {
    pdVar6 = (double *)0x0;
  }
  else {
    *(undefined4 *)((int)pdVar6 + 0x2c) = 1;
    *(undefined4 *)(pdVar6 + 9) = 0;
  }
  DAT_00c8a5dc = DAT_00c8a5dc + 1;
  *pdVar6 = in_XMM2_Qa;
  pdVar6[1] = in_XMM3_Qa;
  pdVar6[2] = param_1;
  *(undefined4 *)(pdVar6 + 3) = 0;
  pdVar6[4] = param_2;
  FUN_00405b70(extraout_ECX);
LAB_00406837:
  pdVar1 = DAT_00c8a7c8;
  DAT_00c8a7c8 = (void *)0x0;
  *(double **)(pdVar6 + 5) = pdVar1;
  _Memory = DAT_00c8a7c8;
  DAT_00c8a7c8 = (double *)0x0;
  pdVar1 = pdVar6;
  if (_Memory != (void *)0x0) {
    if (*(int *)((int)_Memory + 0x28) != 0) {
      FUN_00406690(*(int *)((int)_Memory + 0x28));
    }
    FID_conflict__free(*(void **)((int)_Memory + 0x48));
    FID_conflict__free(_Memory);
  }
LAB_00406884:
  DAT_00c8a7c8 = pdVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7b0);
  ExceptionList = local_10;
  return pdVar6;
}

