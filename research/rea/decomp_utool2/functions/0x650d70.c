// rea decompile_all
// name: FUN_00650d70
// address: 0x650d70
// body: available
// range: 0x650d70-0x650e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650d70(void)

{
  byte bVar1;
  char *pcVar2;
  int *in_ECX;
  uint uVar3;
  int in_EDX;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int local_8;
  
  bVar1 = *(byte *)(in_ECX + 2);
  if ((bVar1 & 2) != 0) {
    iVar7 = *in_ECX;
    if (*(char *)((int)in_ECX + 9) == '\b') {
      if (bVar1 == 2) {
        iVar4 = 3;
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        iVar4 = 4;
      }
      if (iVar7 != 0) {
        pcVar2 = (char *)(in_EDX + 2);
        do {
          pcVar2[-2] = pcVar2[-2] + pcVar2[-1];
          *pcVar2 = *pcVar2 + pcVar2[-1];
          pcVar2 = pcVar2 + iVar4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        return;
      }
    }
    else if (*(char *)((int)in_ECX + 9) == '\x10') {
      if (bVar1 == 2) {
        local_8 = 6;
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        local_8 = 8;
      }
      if (iVar7 != 0) {
        puVar6 = (undefined1 *)(in_EDX + 1);
        do {
          uVar5 = (uint)CONCAT11(puVar6[-1],*puVar6) + (uint)CONCAT11(puVar6[1],puVar6[2]) & 0xffff;
          *puVar6 = (char)uVar5;
          uVar3 = (uint)CONCAT11(puVar6[3],puVar6[4]) + (uint)CONCAT11(puVar6[1],puVar6[2]) & 0xffff
          ;
          puVar6[-1] = (char)(uVar5 >> 8);
          puVar6[3] = (char)(uVar3 >> 8);
          puVar6[4] = (char)uVar3;
          puVar6 = puVar6 + local_8;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  return;
}

