// rea decompile_all
// name: FUN_0052a220
// address: 0x52a220
// body: available
// range: 0x52a220-0x52a3bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052a220(void)

{
  uint uVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  int in_ECX;
  short local_14;
  char local_d;
  ushort local_c;
  int local_8;
  
  uVar2 = 0;
  local_c = 0;
  do {
    local_8 = 0;
    uVar3 = (undefined2)((uint)uVar2 >> 0x10);
    if (0xf < local_c) {
LAB_0052a3aa:
      if (local_8 != 0) {
        FUN_0052f1a0();
        uVar3 = extraout_var_00;
      }
      return CONCAT22(uVar3,local_c);
    }
    FUN_00515830();
    local_d = '\0';
    local_14 = 2;
    local_8 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      local_14 = (**(code **)(**(int **)(in_ECX + 8) + 8))(&local_8);
    }
    if (local_14 == 0) {
      local_d = FUN_00532000(local_8);
    }
    if ((local_8 == 0) || (local_d == '\0')) {
      FUN_00515860();
      uVar3 = extraout_var;
      goto LAB_0052a3aa;
    }
    local_c = local_c + 1;
    uVar1 = *(uint *)(in_ECX + 0x18);
    *(uint *)(in_ECX + 0x18) = uVar1 + 1;
    *(uint *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + (uint)(0xfffffffe < uVar1);
    uVar1 = *(uint *)(in_ECX + 0x28);
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x40) + *(uint *)(in_ECX + 0x28);
    *(uint *)(in_ECX + 0x2c) =
         *(int *)(in_ECX + 0x2c) + (uint)CARRY4(*(uint *)(in_ECX + 0x40),uVar1);
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x30) + 0xc +
                         *(int *)(*(int *)(*(int *)(in_ECX + 0x30) + 0xc) + 4)) + 0x28))();
    FUN_0052a3c0(in_ECX + 0x38);
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x30) + 0xc +
                         *(int *)(*(int *)(*(int *)(in_ECX + 0x30) + 0xc) + 4)) + 0x2c))();
    FUN_00515860();
    uVar2 = FUN_0052f300();
  } while( true );
}

