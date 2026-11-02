// rea decompile_all
// name: FUN_00571430
// address: 0x571430
// body: available
// range: 0x571430-0x571599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00571430(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int local_2c;
  undefined4 *local_14;
  ushort local_c;
  
  FUN_0054f6b0();
  (**(code **)(*(int *)(in_ECX + -0xe8 + *(int *)(*(int *)(in_ECX + -0xe8) + 0xc)) + 0x3c))();
  cVar1 = FUN_00559230(param_1);
  iVar2 = (-(uint)(cVar1 != '\0') & 0xfffffffe) + 2;
  if (iVar2 == 0) {
    FUN_00573cd0(param_1);
    local_c = 0;
    while( true ) {
      local_14 = (undefined4 *)0x0;
      if (local_c < *(ushort *)(in_ECX + -0x7c)) {
        local_14 = *(undefined4 **)(*(int *)(in_ECX + -0x80) + (uint)local_c * 4);
      }
      local_c = local_c + 1;
      if (local_14 == (undefined4 *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0x110) {
        local_2c = 0;
      }
      else {
        local_2c = in_ECX + -0xe8 + *(int *)(*(int *)(in_ECX + -0xe8) + 0xc);
      }
      (**(code **)*local_14)(local_2c,param_1,0);
      FUN_00515860();
    }
  }
  FUN_0054f6f0();
  return iVar2;
}

