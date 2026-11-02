// rea decompile_all
// name: FUN_00409179
// address: 0x409179
// body: available
// range: 0x409179-0x40920b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00409179(uint param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 in_EAX;
  undefined3 uVar3;
  uint uVar4;
  char *in_EDX;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char local_5;
  
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  local_5 = '\0';
  if (*in_EDX == '\0') {
    local_5 = *(char *)(param_1 + *(int *)(in_EDX + 8));
    uVar3 = (undefined3)((uint)*(int *)(in_EDX + 8) >> 8);
  }
  else if (*in_EDX == '\x03') {
    if (param_1 - *(int *)(in_EDX + 0x10) < *(uint *)(in_EDX + 0x14)) {
      local_5 = in_EDX[0x18];
      uVar3 = (undefined3)(param_1 - *(int *)(in_EDX + 0x10) >> 8);
    }
    else {
      puVar2 = *(undefined1 **)(in_EDX + 8);
      pcVar5 = puVar2 + 2;
      uVar7 = (uint)CONCAT11(*puVar2,puVar2[1]);
      do {
        uVar3 = 0;
        if (param_1 < uVar7) break;
        cVar1 = *pcVar5;
        pcVar6 = pcVar5 + 3;
        uVar3 = 0;
        uVar4 = (uint)CONCAT11(pcVar5[1],pcVar5[2]);
        if (param_1 < uVar4) {
          *(uint *)(in_EDX + 0x10) = uVar7;
          *(uint *)(in_EDX + 0x14) = uVar4 - uVar7;
          in_EDX[0x18] = cVar1;
          local_5 = cVar1;
          break;
        }
        pcVar5 = pcVar6;
        uVar7 = uVar4;
      } while (pcVar6 < puVar2 + *(int *)(in_EDX + 0xc));
    }
  }
  return CONCAT31(uVar3,local_5);
}

