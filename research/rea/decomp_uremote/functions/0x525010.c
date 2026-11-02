// rea decompile_all
// name: FUN_00525010
// address: 0x525010
// body: available
// range: 0x525010-0x5251d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525010(int param_1)

{
  int *in_ECX;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined4 *)(*in_ECX + 0x170) = 2;
    FUN_00501f30(PTR_DAT_00951028);
    FUN_0050b230();
  }
  else if (*(int *)(param_1 + 0x30) == 1) {
    *(undefined2 *)(*in_ECX + 0x150) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(*in_ECX + 0x15c) = 0;
    FUN_00501e80(param_1 + 0x18);
    FUN_00501ba0();
    FUN_00501e80(param_1 + 0x28);
    *(undefined4 *)(*in_ECX + 0x170) = 3;
    FUN_005251e0();
  }
  else if (*(int *)(param_1 + 0x30) == 2) {
    *(undefined2 *)(*in_ECX + 0x150) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(*in_ECX + 0x15c) = *(undefined2 *)(param_1 + 0x36);
    FUN_00501e80(param_1 + 0x18);
    FUN_00501e80(param_1 + 0x20);
    FUN_00501e80(param_1 + 0x28);
    *(undefined4 *)(*in_ECX + 0x170) = 4;
    FUN_005251e0();
  }
  else {
    *(undefined4 *)(*in_ECX + 0x170) = 2;
    FUN_00501f30(PTR_DAT_00951028);
    FUN_0050b230();
  }
  return;
}

