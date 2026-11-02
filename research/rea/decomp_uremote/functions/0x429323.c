// rea decompile_all
// name: FUN_00429323
// address: 0x429323
// body: available
// range: 0x429323-0x42934c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00429323(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_EDX;
  
  puVar1 = (undefined4 *)(in_EAX + 0x1b4 + in_EDX * 8);
  *(undefined4 *)(in_EAX + 0x164) = *puVar1;
  uVar2 = puVar1[1];
  *(undefined4 *)(in_EAX + 0x168) = 0;
  *(undefined4 *)(in_EAX + 0x16c) = uVar2;
  *(int *)(in_EAX + 0x160) = in_EDX;
  return 0;
}

