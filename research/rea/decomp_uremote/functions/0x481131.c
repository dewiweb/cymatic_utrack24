// rea decompile_all
// name: FUN_00481131
// address: 0x481131
// body: available
// range: 0x481131-0x48119e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00481131(char param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  int *in_EAX;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  uVar3 = FUN_00480fae();
  if ((char)uVar3 == '\0') {
LAB_00481145:
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    puVar1 = (undefined1 *)*in_EAX;
    *puVar1 = 0xff;
    piVar4 = in_EAX + 1;
    *piVar4 = *piVar4 + -1;
    *in_EAX = (int)(puVar1 + 1);
    if (*piVar4 == 0) {
      uVar3 = FUN_00480eea();
      if ((char)uVar3 == '\0') goto LAB_00481145;
    }
    pcVar2 = (char *)*in_EAX;
    *pcVar2 = param_1 + -0x30;
    piVar4 = in_EAX + 1;
    *piVar4 = *piVar4 + -1;
    *in_EAX = (int)(pcVar2 + 1);
    if (*piVar4 == 0) {
      uVar3 = FUN_00480eea();
      if ((char)uVar3 == '\0') goto LAB_00481145;
    }
    piVar4 = (int *)in_EAX[8];
    iVar5 = 0;
    if (0 < piVar4[0x39]) {
      piVar4 = in_EAX + 4;
      do {
        *piVar4 = 0;
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar5 < *(int *)(in_EAX[8] + 0xe4));
    }
    uVar3 = CONCAT31((int3)((uint)piVar4 >> 8),1);
  }
  return uVar3;
}

