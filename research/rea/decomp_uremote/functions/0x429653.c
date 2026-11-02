// rea decompile_all
// name: FUN_00429653
// address: 0x429653
// body: available
// range: 0x429653-0x4296a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00429653(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_EAX + 0x74) = *(undefined4 *)(in_ECX + 0x18c);
  *(undefined4 *)(in_EAX + 0x80) = *(undefined4 *)(in_ECX + 0x198);
  *(undefined4 *)(in_EAX + 0x8c) = *(undefined4 *)(in_ECX + 0x1a4);
  *(undefined4 *)(in_EAX + 0x90) = *(undefined4 *)(in_ECX + 0x1a8);
  puVar3 = (undefined4 *)(in_EAX + 0x94);
  puVar1 = (undefined4 *)(in_ECX + 0x1bc);
  iVar2 = 3;
  do {
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar1 = puVar1 + 2;
    puVar3 = puVar3 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

