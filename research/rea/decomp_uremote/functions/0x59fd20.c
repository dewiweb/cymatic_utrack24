// rea decompile_all
// name: FUN_0059fd20
// address: 0x59fd20
// body: available
// range: 0x59fd20-0x59ff5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0059fd20(void)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_8;
  
  local_8 = 0x11;
  FUN_0054f6b0();
  if (*(short *)(in_ECX + -0x40) == 1) {
    if ((*(ushort *)(in_ECX + -0x38) & 2) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(undefined2 *)(in_ECX + -0x36);
    }
    piVar2 = (int *)(*(code *)**(undefined4 **)
                                (in_ECX + -0x144 + *(int *)(*(int *)(in_ECX + -0x144) + 4)))();
    iVar3 = (**(code **)(*piVar2 + 0x160))
                      (*(undefined2 *)(in_ECX + -0x3e),*(undefined2 *)(in_ECX + -0x3c),uVar1,0);
    if (iVar3 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = iVar3 + 4 + *(int *)(*(int *)(iVar3 + 4) + 0xc);
    }
    local_8 = FUN_00567ef0(local_30,1);
    (**(code **)(*(int *)(iVar3 + 4 + *(int *)(*(int *)(iVar3 + 4) + 8)) + 4))();
  }
  else if (*(short *)(in_ECX + -0x40) == 2) {
    if ((*(ushort *)(in_ECX + -0x38) & 2) == 0) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *(undefined2 *)(in_ECX + -0x36);
    }
    piVar2 = (int *)(*(code *)**(undefined4 **)
                                (in_ECX + -0x144 + *(int *)(*(int *)(in_ECX + -0x144) + 4)))();
    iVar3 = (**(code **)(*piVar2 + 0x16c))
                      (*(undefined2 *)(in_ECX + -0x3e),*(undefined2 *)(in_ECX + -0x3c),uVar1,0);
    if (iVar3 == 0) {
      local_3c = 0;
    }
    else {
      local_3c = iVar3 + 4 + *(int *)(*(int *)(iVar3 + 4) + 0xc);
    }
    local_8 = FUN_00567ef0(local_3c,1);
    (**(code **)(*(int *)(iVar3 + 4 + *(int *)(*(int *)(iVar3 + 4) + 8)) + 4))();
  }
  FUN_0054f6f0();
  return local_8;
}

