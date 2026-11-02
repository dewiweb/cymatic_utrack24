// rea decompile_all
// name: FUN_004ff91f
// address: 0x4ff91f
// body: available
// range: 0x4ff91f-0x4ff9fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ff91f(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *unaff_EDI;
  int iVar5;
  undefined4 *local_64 [5];
  undefined1 local_50 [24];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9cdd;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*unaff_EDI != 0) {
    cVar2 = FUN_0047e3d7(DAT_00955fd4 ^ (uint)&stack0xffffff90);
    if (cVar2 == '\0') {
      FUN_0047888f();
      local_c = 0;
      FUN_0047e37c();
      FUN_004a966f();
      FUN_004ff8c3(local_38,param_2);
      FUN_004f7994();
    }
    else {
      FUN_004feb50();
      iVar5 = unaff_EDI[0x13];
      iVar1 = *(int *)*unaff_EDI;
      uVar3 = FUN_00474f97(local_50);
      (**(code **)(iVar1 + 0x20))(local_64,param_1,uVar3,iVar5);
      FUN_004a7c57();
      if (local_64[0] != (undefined4 *)0x0) {
        piVar4 = local_64[0] + 1;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*local_64[0])(1);
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

