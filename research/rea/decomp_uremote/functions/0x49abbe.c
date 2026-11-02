// rea decompile_all
// name: FUN_0049abbe
// address: 0x49abbe
// body: available
// range: 0x49abbe-0x49ac87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049abbe(void)

{
  byte bVar1;
  int *in_EAX;
  char *pcVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  int iStack_1c;
  int local_c;
  int local_8;
  
  bVar1 = *(byte *)(in_EAX + 2);
  if ((bVar1 & 2) != 0) {
    local_c = *in_EAX;
    if (*(char *)((int)in_EAX + 9) == '\b') {
      if (bVar1 == 2) {
        iStack_1c = 3;
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        iStack_1c = 4;
      }
      if (local_c != 0) {
        pcVar2 = (char *)(in_ECX + 2);
        do {
          pcVar2[-2] = pcVar2[-2] - pcVar2[-1];
          *pcVar2 = *pcVar2 - pcVar2[-1];
          pcVar2 = pcVar2 + iStack_1c;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
    }
    else if (*(char *)((int)in_EAX + 9) == '\x10') {
      if (bVar1 == 2) {
        local_8 = 6;
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        local_8 = 8;
      }
      if (local_c != 0) {
        puVar3 = (undefined1 *)(in_ECX + 1);
        do {
          uVar4 = (uint)CONCAT11(puVar3[-1],*puVar3) - (uint)CONCAT11(puVar3[1],puVar3[2]) & 0xffff;
          uVar5 = (uint)CONCAT11(puVar3[3],puVar3[4]) - (uint)CONCAT11(puVar3[1],puVar3[2]) & 0xffff
          ;
          *puVar3 = (char)uVar4;
          puVar3[-1] = (char)(uVar4 >> 8);
          puVar3[3] = (char)(uVar5 >> 8);
          puVar3[4] = (char)uVar5;
          puVar3 = puVar3 + local_8;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
    }
  }
  return;
}

