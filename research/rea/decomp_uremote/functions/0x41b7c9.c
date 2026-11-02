// rea decompile_all
// name: FUN_0041b7c9
// address: 0x41b7c9
// body: available
// range: 0x41b7c9-0x41b81a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041b7c9(void)

{
  uint uVar1;
  int in_EAX;
  uint *puVar2;
  int in_ECX;
  uint *puVar3;
  uint uVar4;
  int in_EDX;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar2 = (uint *)(in_EAX * 0x10 + *(int *)(in_EDX + 8));
  puVar3 = (uint *)(in_ECX * 0x10 + *(int *)(in_EDX + 8));
  pbVar5 = (byte *)puVar3[2];
  uVar4 = *puVar3;
  pbVar6 = (byte *)puVar2[2];
  uVar1 = *puVar2;
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  for (; 7 < uVar4; uVar4 = uVar4 - 8) {
    if ((*pbVar5 & *pbVar6) != 0) {
      return 1;
    }
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  if (uVar4 == 0) {
    return 0;
  }
  return (uint)(*pbVar6 & *pbVar5) & ~(0xff >> ((byte)uVar4 & 0x1f));
}

