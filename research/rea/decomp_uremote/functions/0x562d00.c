// rea decompile_all
// name: FUN_00562d00
// address: 0x562d00
// body: available
// range: 0x562d00-0x562ea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562d00(void)

{
  uint uVar1;
  short sVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int in_ECX;
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  undefined1 local_c [6];
  char local_6;
  char local_5;
  
  local_6 = '\0';
  sVar2 = FUN_00568ee0();
  local_5 = sVar2 != 0;
  puVar3 = (undefined4 *)FUN_00579570(local_c);
  *(undefined4 *)(in_ECX + 0x7c) = *puVar3;
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(in_ECX + 0x7c);
  puVar4 = (uint *)FUN_00569390(local_18,&local_6);
  uVar1 = *puVar4;
  puVar4 = (uint *)FUN_00569390(local_1c,&local_6);
  *(uint *)(in_ECX + 0x74) = uVar1 | *puVar4;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
  if ((*(byte *)(in_ECX + 0x154) >> 2 & 1) != 0) {
    local_6 = '\0';
  }
  if (local_6 == '\0') {
    *(uint *)(in_ECX + 0x6c) = *(uint *)(in_ECX + 0x6c) & 0xfbffffff;
  }
  else {
    *(uint *)(in_ECX + 0x6c) = *(uint *)(in_ECX + 0x6c) | 0x4000000;
  }
  if (local_5 == '\0') {
    *(uint *)(in_ECX + 0x6c) = *(uint *)(in_ECX + 0x6c) & 0xff7fffff;
  }
  else {
    *(uint *)(in_ECX + 0x6c) = *(uint *)(in_ECX + 0x6c) | 0x800000;
  }
  return;
}

