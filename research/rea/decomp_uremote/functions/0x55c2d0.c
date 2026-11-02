// rea decompile_all
// name: FUN_0055c2d0
// address: 0x55c2d0
// body: available
// range: 0x55c2d0-0x55c39a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c2d0(undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6,undefined4 param_7)

{
  int in_ECX;
  
  if ((param_5 & 0x80000000) == 0) {
    *(undefined2 *)(in_ECX + 0x48) = *(undefined2 *)(**(int **)(in_ECX + 0x88) + 0x150);
  }
  else {
    *(undefined2 *)(in_ECX + 0x48) = DAT_0095100c;
  }
  *(undefined2 *)(in_ECX + 0x4a) = param_1;
  *(undefined4 *)(in_ECX + 0x4c) = param_2;
  *(undefined2 *)(in_ECX + 0x50) = param_3;
  *(undefined4 *)(in_ECX + 0x54) = param_4;
  *(uint *)(in_ECX + 0x6c) = param_5;
  *(uint *)(in_ECX + 0x70) = param_5;
  *(undefined4 *)(in_ECX + 0x84) = param_6;
  FUN_00501f30(param_7);
  FUN_005289f0(10,**(int **)(in_ECX + 0x88) + 0x4c0);
  return;
}

