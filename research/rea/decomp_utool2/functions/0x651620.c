// rea decompile_all
// name: FUN_00651620
// address: 0x651620
// body: available
// range: 0x651620-0x651705 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00651620(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  int in_EDX;
  byte *pbVar6;
  
  bVar1 = *(byte *)(in_ECX + 2);
  iVar5 = *in_ECX;
  if ((bVar1 & 4) != 0) {
    if (*(char *)((int)in_ECX + 9) == '\b') {
      iVar3 = *(int *)(param_1 + 0x14c);
      if (iVar3 != 0) {
        pbVar6 = (byte *)(in_EDX + -1);
        if (iVar5 == 0) {
          return;
        }
        do {
          pbVar6 = pbVar6 + (uint)((bVar1 & 2) != 0) * 2 + 2;
          *pbVar6 = *(byte *)((uint)*pbVar6 + iVar3);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return;
      }
    }
    else if (*(char *)((int)in_ECX + 9) == '\x10') {
      iVar3 = *(int *)(param_1 + 0x154);
      uVar4 = *(undefined4 *)(param_1 + 0x13c);
      if (iVar3 != 0) {
        pbVar6 = (byte *)(in_EDX + -2);
        if (iVar5 == 0) {
          return;
        }
        do {
          pbVar6 = pbVar6 + (uint)((bVar1 & 2) != 0) * 4 + 4;
          uVar2 = *(undefined2 *)
                   (*(int *)(iVar3 + (uint)(pbVar6[1] >> ((byte)uVar4 & 0x1f)) * 4) +
                   (uint)*pbVar6 * 2);
          pbVar6[1] = (byte)uVar2;
          *pbVar6 = (byte)((ushort)uVar2 >> 8);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return;
      }
    }
  }
  FUN_006563b0();
  return;
}

