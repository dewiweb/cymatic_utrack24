// rea decompile_all
// name: FUN_0064b3c0
// address: 0x64b3c0
// body: available
// range: 0x64b3c0-0x64b460 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b3c0(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  uint *in_EDX;
  byte *pbVar4;
  
  if (*(char *)(in_ECX + 8) == '\0') {
    uVar1 = *(uint *)(in_ECX + 4);
    uVar2 = 0;
    if (uVar1 != 0) {
      if (0x1f < uVar1) {
        do {
          uVar2 = uVar2 + 0x20;
          *in_EDX = ~*in_EDX;
          in_EDX[1] = ~in_EDX[1];
          in_EDX[2] = ~in_EDX[2];
          in_EDX[3] = ~in_EDX[3];
          in_EDX[4] = ~in_EDX[4];
          in_EDX[5] = ~in_EDX[5];
          in_EDX[6] = ~in_EDX[6];
          in_EDX[7] = ~in_EDX[7];
          in_EDX = in_EDX + 8;
        } while (uVar2 < (uVar1 & 0xffffffe0));
      }
      if (uVar2 < uVar1) {
        iVar3 = uVar1 - uVar2;
        do {
          *(byte *)in_EDX = ~(byte)*in_EDX;
          in_EDX = (uint *)((int)in_EDX + 1);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        return;
      }
    }
  }
  else if (*(char *)(in_ECX + 8) == '\x04') {
    if (*(char *)(in_ECX + 9) == '\b') {
      if (*(int *)(in_ECX + 4) != 0) {
        iVar3 = (*(int *)(in_ECX + 4) - 1U >> 1) + 1;
        do {
          *(byte *)in_EDX = ~(byte)*in_EDX;
          in_EDX = (uint *)((int)in_EDX + 2);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        return;
      }
    }
    else if ((*(char *)(in_ECX + 9) == '\x10') && (*(int *)(in_ECX + 4) != 0)) {
      iVar3 = (*(int *)(in_ECX + 4) - 1U >> 2) + 1;
      pbVar4 = (byte *)((int)in_EDX + 1);
      do {
        pbVar4[-1] = ~pbVar4[-1];
        *pbVar4 = ~*pbVar4;
        iVar3 = iVar3 + -1;
        pbVar4 = pbVar4 + 4;
      } while (iVar3 != 0);
    }
  }
  return;
}

