// rea decompile_all
// name: FUN_0046411d
// address: 0x46411d
// body: available
// range: 0x46411d-0x4642a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4642a3 with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_0046411d(undefined4 param_1,double *param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  undefined1 *local_2c;
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005db64b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_3 < 1) {
LAB_00464263:
    local_2c = &stack0xffffffc0;
    FUN_00465bec();
    FUN_00465c6b(&local_2c);
    local_c = 0;
    FUN_00461d2c();
    __CxxThrowException_8(local_28);
    pcVar1 = (code *)swi(3);
    fVar4 = (float10)(*pcVar1)();
    return fVar4;
  }
  cVar2 = FUN_0046595f();
  if (cVar2 == '\0') {
    cVar2 = FUN_0046595f();
    if (cVar2 == '\0') {
      if (param_3 != 1) goto LAB_00464263;
      cVar2 = FUN_0046595f();
      if (cVar2 == '\0') {
        cVar2 = FUN_0046595f();
        if (cVar2 == '\0') {
          cVar2 = FUN_0046595f();
          if (cVar2 == '\0') {
            cVar2 = FUN_0046595f();
            if (cVar2 == '\0') goto LAB_00464263;
            dVar5 = _fabs(*param_2);
            fVar4 = (float10)dVar5;
          }
          else {
            fVar4 = (float10)FUN_005b11a0(*param_2);
          }
        }
        else {
          fVar4 = (float10)FUN_005b04f0(*param_2);
        }
      }
      else {
        fVar4 = (float10)FUN_005b2500(*param_2);
      }
    }
    else {
      fVar4 = (float10)*param_2;
      iVar3 = 1;
      if (1 < param_3) {
        do {
          fVar4 = (float10)FUN_0043a995((double)fVar4,param_2[iVar3]);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_3);
      }
    }
  }
  else {
    fVar4 = (float10)*param_2;
    iVar3 = 1;
    if (1 < param_3) {
      do {
        fVar4 = (float10)FUN_00470687((double)fVar4,param_2[iVar3]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
  }
  ExceptionList = local_14;
  return fVar4;
}

