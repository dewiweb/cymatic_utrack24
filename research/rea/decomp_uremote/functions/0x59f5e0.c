// rea decompile_all
// name: FUN_0059f5e0
// address: 0x59f5e0
// body: available
// range: 0x59f5e0-0x59f812 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0059f5e0(undefined2 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int local_38;
  int local_30;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == 1) {
    local_8 = 1;
  }
  else if (param_2 == 2) {
    local_8 = 2;
  }
  else {
    local_8 = 0;
  }
  local_c = 0x11;
  FUN_0054f6b0();
  if (*(short *)(in_ECX + -0x40) == 1) {
    piVar2 = (int *)(*(code *)**(undefined4 **)
                                (in_ECX + -0x144 + *(int *)(*(int *)(in_ECX + -0x144) + 4)))();
    iVar1 = (**(code **)(*piVar2 + 0x160))
                      (*(undefined2 *)(in_ECX + -0x3e),*(undefined2 *)(in_ECX + -0x3c),param_1,
                       local_8);
    if (iVar1 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = iVar1 + 4 + *(int *)(*(int *)(iVar1 + 4) + 0xc);
    }
    local_c = FUN_00567ef0(local_30,1);
    (**(code **)(*(int *)(iVar1 + 4 + *(int *)(*(int *)(iVar1 + 4) + 8)) + 4))();
  }
  else if (*(short *)(in_ECX + -0x40) == 2) {
    piVar2 = (int *)(*(code *)**(undefined4 **)
                                (in_ECX + -0x144 + *(int *)(*(int *)(in_ECX + -0x144) + 4)))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x16c))
                              (*(undefined2 *)(in_ECX + -0x3e),*(undefined2 *)(in_ECX + -0x3c),
                               param_1,local_8);
    if (param_2 == 3) {
      (**(code **)(*piVar2 + 0x34))();
    }
    if (piVar2 == (int *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = (int)piVar2 + *(int *)(piVar2[1] + 0xc) + 4;
    }
    local_c = FUN_00567ef0(local_38,1);
    (**(code **)(*(int *)((int)piVar2 + *(int *)(piVar2[1] + 8) + 4) + 4))();
  }
  FUN_0054f6f0();
  return local_c;
}

