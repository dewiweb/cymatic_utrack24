// rea decompile_all
// name: FUN_0040189a
// address: 0x40189a
// body: available
// range: 0x40189a-0x4018de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040189a(void)

{
  int in_EAX;
  ushort *puVar1;
  ushort *puVar2;
  int in_EDX;
  undefined4 *puVar3;
  char *pcVar4;
  
  puVar2 = *(ushort **)(in_EAX + 0x1c);
  puVar3 = *(undefined4 **)(in_EDX + 4);
  pcVar4 = *(char **)(in_EDX + 8);
  puVar1 = puVar2 + *(int *)(in_EAX + 0x18) * 0x14;
  for (; puVar2 < puVar1; puVar2 = puVar2 + 0x14) {
    *puVar3 = *(undefined4 *)(puVar2 + 8);
    puVar3[1] = *(undefined4 *)(puVar2 + 10);
    if ((*puVar2 & 1) == 0) {
      *pcVar4 = ((*puVar2 & 2) != 0) + '\x01';
    }
    else {
      *pcVar4 = '\0';
    }
    puVar3 = puVar3 + 2;
    pcVar4 = pcVar4 + 1;
  }
  return;
}

