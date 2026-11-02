// rea decompile_all
// name: FUN_00488adc
// address: 0x488adc
// body: available
// range: 0x488adc-0x488b4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00488adc(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  int in_EDX;
  
  if (((((*(char *)(in_EDX + 0x48) != '\0') || (*(char *)(in_EDX + 0x10a) != '\0')) ||
       (*(int *)(in_EDX + 0x28) != 3)) ||
      (((*(int *)(in_EDX + 0x24) != 3 || (*(int *)(in_EDX + 0x2c) != 2)) ||
       ((*(int *)(in_EDX + 100) != 3 ||
        ((iVar1 = *(int *)(in_EDX + 0xc4), *(int *)(iVar1 + 8) != 2 ||
         (in_EAX = 1, *(int *)(iVar1 + 0x5c) != 1)))))))) ||
     ((*(int *)(iVar1 + 0xb0) != 1 ||
      (((((2 < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x60) != 1)) ||
         (*(int *)(iVar1 + 0xb4) != 1)) ||
        ((iVar2 = *(int *)(in_EDX + 0x118), *(int *)(iVar1 + 0x24) != iVar2 ||
         (*(int *)(iVar1 + 0x78) != iVar2)))) || (*(int *)(iVar1 + 0xcc) != iVar2)))))) {
    in_EAX = in_EAX & 0xffffff00;
  }
  return in_EAX;
}

