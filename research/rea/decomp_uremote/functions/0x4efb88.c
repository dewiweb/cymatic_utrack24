// rea decompile_all
// name: FUN_004efb88
// address: 0x4efb88
// body: available
// range: 0x4efb88-0x4efc1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004efb88(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *in_EAX;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 in_CL;
  char extraout_CL;
  undefined4 uVar6;
  
  *(undefined1 *)(in_EAX + 0x1c) = in_CL;
  cVar2 = FUN_004c044d();
  if (cVar2 != '\0') {
    puVar1 = (undefined4 *)in_EAX[0x1d];
    if ((puVar1 != (undefined4 *)0x0) && (in_EAX[0x1d] = 0, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    uVar6 = 0;
    uVar3 = (**(code **)(*in_EAX + 0xb4))(0);
    FUN_004c01b6(uVar3,uVar6);
    return;
  }
  if ((extraout_CL == '\0') || (cVar2 = FUN_004c04c2(), cVar2 == '\0')) {
    puVar1 = (undefined4 *)in_EAX[0x1d];
    if ((puVar1 != (undefined4 *)0x0) && (in_EAX[0x1d] = 0, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    return;
  }
  if (in_EAX[0x1d] != 0) {
    return;
  }
  piVar4 = (int *)thunk_FUN_004c1d58();
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x38))();
  puVar1 = (undefined4 *)in_EAX[0x1d];
  if ((puVar1 != puVar5) && (in_EAX[0x1d] = (int)puVar5, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  if (in_EAX[0x1d] == 0) {
    return;
  }
  FUN_004f06f2();
  return;
}

