// rea decompile_all
// name: FUN_004d057f
// address: 0x4d057f
// body: available
// range: 0x4d057f-0x4d06aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d057f(undefined4 param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 uVar6;
  int iVar7;
  
  piVar1 = in_ECX + 1;
  cVar3 = FUN_004f5fe9(0);
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = '\0';
  if (param_2 != '\0') {
    iVar4 = thunk_FUN_004c1265();
    if (*piVar1 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*piVar1 + 8);
    }
    if (iVar4 == iVar7) {
      iVar7 = *(int *)(iVar4 + 0x10);
      iVar4 = *(int *)(iVar4 + 0x14);
    }
    else {
      if (*piVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*piVar1 + 8);
      }
      piVar5 = (int *)FUN_004c08d2(iVar4,uVar6,0,0);
      iVar7 = *piVar5;
      iVar4 = piVar5[1];
    }
    cVar3 = FUN_004f5e38(iVar7,iVar4);
    in_ECX[7] = iVar7;
    in_ECX[8] = iVar4;
  }
  if (*piVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*piVar1 + 8);
  }
  if (in_ECX[9] == *(int *)(iVar4 + 0x18)) {
    if (*piVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*piVar1 + 8);
    }
    cVar2 = '\0';
    if (in_ECX[10] == *(int *)(iVar4 + 0x1c)) goto LAB_004d0663;
  }
  cVar2 = '\x01';
LAB_004d0663:
  if (*piVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*piVar1 + 8);
  }
  iVar4 = *(int *)(iVar4 + 0x1c);
  if (*piVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*piVar1 + 8);
  }
  in_ECX[9] = *(int *)(iVar7 + 0x18);
  in_ECX[10] = iVar4;
  if ((cVar3 != '\0') || (cVar2 != '\0')) {
    (**(code **)(*in_ECX + 0x20))(cVar3,cVar2);
  }
  return;
}

