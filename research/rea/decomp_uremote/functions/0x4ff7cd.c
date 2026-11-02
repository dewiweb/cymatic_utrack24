// rea decompile_all
// name: FUN_004ff7cd
// address: 0x4ff7cd
// body: available
// range: 0x4ff7cd-0x4ff8c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004ff7cd(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int *unaff_EDI;
  undefined4 *local_4c;
  undefined1 local_48 [52];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de033;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*unaff_EDI != 0) {
    if ((char)unaff_EDI[9] == '\0') {
      if (*(char *)((int)unaff_EDI + 0x25) != '\0') {
        FUN_0047888f(DAT_00955fd4 ^ (uint)&stack0xffffffa8);
        local_c = 0;
        FUN_004a966f();
        FUN_004ff8c3(extraout_ECX,&DAT_0095d798);
        FUN_004f7994();
        goto LAB_004ff8a8;
      }
      FUN_004feb50();
      iVar1 = *(int *)*unaff_EDI;
      uVar2 = FUN_004a9659(unaff_EDI + 1,local_48);
    }
    else {
      FUN_004feb50();
      iVar1 = *(int *)*unaff_EDI;
      uVar2 = FUN_0047513c(local_48,param_1);
    }
    (**(code **)(iVar1 + 0xc))(&local_4c,uVar2);
    FUN_004a7c57();
    if (local_4c != (undefined4 *)0x0) {
      piVar3 = local_4c + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*local_4c)(1);
      }
    }
  }
LAB_004ff8a8:
  ExceptionList = local_14;
  return *unaff_EDI != 0;
}

