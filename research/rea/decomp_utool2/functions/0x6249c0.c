// rea decompile_all
// name: FUN_006249c0
// address: 0x6249c0
// body: available
// range: 0x6249c0-0x624c88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x624c88 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_006249c0(undefined4 *param_1,double *param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  double *pdVar5;
  undefined4 extraout_ECX_00;
  int iVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  undefined **local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d59a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 < 1) {
LAB_00624c37:
    FUN_00637690(param_1);
    piVar4 = (int *)FUN_006377c0(in_ECX);
    local_8 = 0;
    uStack_1c = 0;
    local_18 = 0;
    local_20 = juce::Expression::Helpers::EvaluationError::vftable;
    iStack_14 = *piVar4;
    piVar4 = (int *)(iStack_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    __CxxThrowException_8(&local_20,&DAT_00c4d140);
    pcVar1 = (code *)swi(3);
    fVar7 = (float10)(*pcVar1)();
    return fVar7;
  }
  iVar3 = FUN_00448730(*param_1,&DAT_00c010d8,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar3 == 0) {
    iVar3 = 1;
    dVar9 = *param_2;
    local_18 = SUB84(dVar9,0);
    iStack_14 = (int)((ulonglong)dVar9 >> 0x20);
    if (param_3 < 2) goto LAB_00624a8b;
    if (4 < param_3) {
      iVar6 = (param_3 - 5U >> 2) + 1;
      iVar3 = iVar6 * 4 + 1;
      pdVar5 = param_2 + 3;
      do {
        dVar8 = pdVar5[-2];
        if (dVar9 <= pdVar5[-2]) {
          dVar8 = dVar9;
        }
        dVar9 = pdVar5[-1];
        if (dVar8 <= pdVar5[-1]) {
          dVar9 = dVar8;
        }
        dVar8 = *pdVar5;
        if (dVar9 <= *pdVar5) {
          dVar8 = dVar9;
        }
        dVar9 = pdVar5[1];
        if (dVar8 <= pdVar5[1]) {
          dVar9 = dVar8;
        }
        iVar6 = iVar6 + -1;
        pdVar5 = pdVar5 + 4;
      } while (iVar6 != 0);
      local_18 = SUB84(dVar9,0);
      iStack_14 = (int)((ulonglong)dVar9 >> 0x20);
    }
    if (param_3 <= iVar3) goto LAB_00624a8b;
    do {
      pdVar5 = param_2 + iVar3;
      iVar3 = iVar3 + 1;
      dVar8 = *pdVar5;
      if (dVar9 <= *pdVar5) {
        dVar8 = dVar9;
      }
      dVar9 = dVar8;
    } while (iVar3 < param_3);
  }
  else {
    iVar3 = FUN_00448730(*param_1,&DAT_00c010d4);
    if (iVar3 != 0) {
      in_ECX = extraout_ECX;
      if (param_3 == 1) {
        iVar3 = FUN_00448730(*param_1,&DAT_00c010e0);
        if (iVar3 == 0) {
          dVar9 = *param_2;
          FUN_006f9250();
          ExceptionList = local_10;
          return (float10)dVar9;
        }
        cVar2 = FUN_00634f60();
        if (cVar2 != '\0') {
          dVar9 = *param_2;
          FUN_006f7d20();
          ExceptionList = local_10;
          return (float10)dVar9;
        }
        cVar2 = FUN_00634f60();
        if (cVar2 != '\0') {
          dVar9 = *param_2;
          FUN_006f9520();
          ExceptionList = local_10;
          return (float10)dVar9;
        }
        cVar2 = FUN_00634f60();
        in_ECX = extraout_ECX_00;
        if (cVar2 != '\0') {
          dVar9 = *param_2;
          FUN_00413660();
          ExceptionList = local_10;
          return (float10)dVar9;
        }
      }
      goto LAB_00624c37;
    }
    iVar3 = 1;
    dVar9 = *param_2;
    local_18 = SUB84(dVar9,0);
    iStack_14 = (int)((ulonglong)dVar9 >> 0x20);
    if (param_3 < 2) goto LAB_00624a8b;
    if (4 < param_3) {
      iVar6 = (param_3 - 5U >> 2) + 1;
      iVar3 = iVar6 * 4 + 1;
      pdVar5 = param_2 + 3;
      do {
        dVar8 = pdVar5[-2];
        if (pdVar5[-2] <= dVar9) {
          dVar8 = dVar9;
        }
        dVar9 = pdVar5[-1];
        if (pdVar5[-1] <= dVar8) {
          dVar9 = dVar8;
        }
        dVar8 = *pdVar5;
        if (*pdVar5 <= dVar9) {
          dVar8 = dVar9;
        }
        dVar9 = pdVar5[1];
        if (pdVar5[1] <= dVar8) {
          dVar9 = dVar8;
        }
        iVar6 = iVar6 + -1;
        pdVar5 = pdVar5 + 4;
      } while (iVar6 != 0);
      local_18 = SUB84(dVar9,0);
      iStack_14 = (int)((ulonglong)dVar9 >> 0x20);
    }
    if (param_3 <= iVar3) goto LAB_00624a8b;
    do {
      pdVar5 = param_2 + iVar3;
      iVar3 = iVar3 + 1;
      dVar8 = *pdVar5;
      if (*pdVar5 <= dVar9) {
        dVar8 = dVar9;
      }
      dVar9 = dVar8;
    } while (iVar3 < param_3);
  }
  local_18 = SUB84(dVar8,0);
  iStack_14 = (int)((ulonglong)dVar8 >> 0x20);
LAB_00624a8b:
  ExceptionList = local_10;
  return (float10)(double)CONCAT44(iStack_14,local_18);
}

