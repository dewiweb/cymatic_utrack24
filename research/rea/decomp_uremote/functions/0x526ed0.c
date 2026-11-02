// rea decompile_all
// name: FUN_00526ed0
// address: 0x526ed0
// body: available
// range: 0x526ed0-0x526f89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00526ed0(char param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 != '\0') {
    *(undefined4 *)(in_ECX + 0x2c) = param_2;
    if ((*(int *)(in_ECX + 0x38) == 0) || (cVar1 = FUN_00503cf0(&stack0x0000000c), cVar1 != '\0')) {
      FUN_00503de0(&stack0x0000000c);
      FUN_0050bef0(10,in_ECX + 0x1c);
    }
    iVar2 = FUN_0052e6e0();
    *(int *)(in_ECX + 0x38) = iVar2 + 2000;
    return;
  }
  cVar1 = FUN_00503fe0();
  if (cVar1 == '\0') {
    FUN_0050bef0(0xb,in_ECX + 0x1c);
    *(undefined4 *)(in_ECX + 0x38) = 0;
    FUN_00503de0(&DAT_0095c854);
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  return;
}

