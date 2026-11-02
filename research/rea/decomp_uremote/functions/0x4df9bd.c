// rea decompile_all
// name: FUN_004df9bd
// address: 0x4df9bd
// body: available
// range: 0x4df9bd-0x4dfaef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004df9bd(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_ECX;
  int in_EDX;
  int iVar4;
  undefined1 local_34 [12];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc4;
  puVar1 = &LAB_005e4e0d;
  local_8 = 0x4df9cc;
  if (in_ECX != *(uint *)(in_EDX + 0xb0)) {
    FUN_004e27eb();
    (**(code **)(*(int *)(in_EDX + 0x70) + 4))(0);
    FUN_004df959();
    puVar1 = (undefined1 *)FUN_004df937();
    if (-1 < (int)in_ECX) {
      iVar4 = **(int **)(in_EDX + 0x88);
      uVar2 = FUN_00467165();
      (**(code **)(iVar4 + 0xc))(local_34,*(undefined4 *)(in_EDX + 0xac),uVar2);
      iVar4 = 0;
      local_8 = 0;
      if (local_28 == 0) {
        thunk_FUN_004c1d58();
        FUN_004e2891();
      }
      local_18 = *(undefined4 *)(in_EDX + 0x1c);
      if (in_ECX + 1 < *(uint *)(in_EDX + 0xa0)) {
        local_1c = *(int *)(*(int *)(in_EDX + 0x98) + (in_ECX + 1) * 4);
      }
      else {
        local_1c = 0;
      }
      if (in_ECX < *(uint *)(in_EDX + 0xa0)) {
        iVar4 = *(int *)(*(int *)(in_EDX + 0x98) + in_ECX * 4);
        local_24 = *(undefined4 *)(*(int *)(in_EDX + 0x98) + in_ECX * 4);
      }
      else {
        local_24 = 0;
      }
      local_20 = 0;
      local_1c = local_1c - iVar4;
      uVar2 = FUN_004f8a84();
      iVar4 = local_1c;
      local_14 = FUN_004c0992(in_EDX);
      FUN_004e248e(iVar4,uVar2);
      FUN_004e24c6();
      FUN_004e24fd();
      uVar3 = FUN_004e251d(iVar4);
      thunk_FUN_004e2732(local_34,uVar3,uVar2);
      local_8 = 0xffffffff;
      puVar1 = (undefined1 *)thunk_FUN_004f657d(local_34);
    }
  }
  return puVar1;
}

