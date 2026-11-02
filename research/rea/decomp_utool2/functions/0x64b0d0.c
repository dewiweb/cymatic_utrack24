// rea decompile_all
// name: FUN_0064b0d0
// address: 0x64b0d0
// body: available
// range: 0x64b0d0-0x64b183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b0d0(void)

{
  byte bVar1;
  undefined1 uVar2;
  int *in_ECX;
  undefined1 *in_EDX;
  undefined1 *puVar3;
  int iVar4;
  
  bVar1 = *(byte *)(in_ECX + 2);
  if ((bVar1 & 2) != 0) {
    iVar4 = *in_ECX;
    if (*(char *)((int)in_ECX + 9) == '\b') {
      if (bVar1 == 2) {
        if (iVar4 != 0) {
          do {
            uVar2 = *in_EDX;
            *in_EDX = in_EDX[2];
            in_EDX[2] = uVar2;
            iVar4 = iVar4 + -1;
            in_EDX = in_EDX + 3;
          } while (iVar4 != 0);
          return;
        }
      }
      else if ((bVar1 == 6) && (iVar4 != 0)) {
        do {
          uVar2 = *in_EDX;
          *in_EDX = in_EDX[2];
          in_EDX[2] = uVar2;
          iVar4 = iVar4 + -1;
          in_EDX = in_EDX + 4;
        } while (iVar4 != 0);
        return;
      }
    }
    else if (*(char *)((int)in_ECX + 9) == '\x10') {
      if (bVar1 == 2) {
        if (iVar4 != 0) {
          puVar3 = in_EDX + 1;
          do {
            uVar2 = puVar3[-1];
            puVar3[-1] = puVar3[3];
            puVar3[3] = uVar2;
            uVar2 = *puVar3;
            *puVar3 = puVar3[4];
            puVar3[4] = uVar2;
            iVar4 = iVar4 + -1;
            puVar3 = puVar3 + 6;
          } while (iVar4 != 0);
          return;
        }
      }
      else if ((bVar1 == 6) && (iVar4 != 0)) {
        puVar3 = in_EDX + 1;
        do {
          uVar2 = puVar3[-1];
          puVar3[-1] = puVar3[3];
          puVar3[3] = uVar2;
          uVar2 = *puVar3;
          *puVar3 = puVar3[4];
          puVar3[4] = uVar2;
          iVar4 = iVar4 + -1;
          puVar3 = puVar3 + 8;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}

