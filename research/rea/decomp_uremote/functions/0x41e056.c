// rea decompile_all
// name: FUN_0041e056
// address: 0x41e056
// body: available
// range: 0x41e056-0x41e0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041e056(char param_1)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  int unaff_ESI;
  
  if (*(int *)(in_EAX + 0x5c) == 0) {
    iVar2 = *(int *)(in_EAX + 0x28);
    *(int *)(in_EAX + 0x58) = iVar2;
    *(int *)(in_EAX + 0x5c) = iVar2;
    *(int *)(in_EAX + 0x28) = iVar2 + 0x20;
  }
  if (*(uint *)(in_EAX + 0x28) < *(uint *)(in_EAX + 0x24)) {
    *(undefined4 *)(*(int *)(in_EAX + 0x58) + 0xc) = 0;
    *(undefined4 *)(*(int *)(in_EAX + 0x58) + 0x14) = 0;
    *(undefined4 *)(*(int *)(in_EAX + 0x58) + 0x10) = 0;
    *(undefined4 *)(*(int *)(in_EAX + 0x58) + 8) = *(undefined4 *)(in_EAX + 0x28);
    *(undefined4 *)(*(int *)(in_EAX + 0x58) + 4) = 0;
    *(undefined4 *)(*(int *)(in_EAX + 0x58) + 0x1c) = 0;
    *(uint *)(*(int *)(in_EAX + 0x58) + 0xc) = (uint)*(byte *)(in_EAX + 0xb4);
    if (unaff_ESI == 1) {
      puVar1 = (uint *)(*(int *)(in_EAX + 0x58) + 0xc);
      *puVar1 = *puVar1 | 8;
      if (param_1 != '\0') {
        puVar1 = (uint *)(*(int *)(in_EAX + 0x58) + 0xc);
        *puVar1 = *puVar1 | 0x20;
      }
    }
    else {
      if (unaff_ESI != 2) {
        *(undefined4 *)(in_EAX + 0x2c) = 0x14;
        return 1;
      }
      if (param_1 != '\0') {
        puVar1 = (uint *)(*(int *)(in_EAX + 0x58) + 0xc);
        *puVar1 = *puVar1 | 0x10;
      }
    }
    if (*(int *)(in_EAX + 0x60) == 0) {
      *(undefined4 *)(in_EAX + 0x60) = *(undefined4 *)(in_EAX + 0x58);
    }
    *(int *)(in_EAX + 100) = unaff_ESI;
    *(undefined1 *)(in_EAX + 0x56) = 1;
    *(undefined1 *)(in_EAX + 0x57) = 0;
    return 0;
  }
  *(undefined4 *)(in_EAX + 0x2c) = 0x62;
  return 1;
}

