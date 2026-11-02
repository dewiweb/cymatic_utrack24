// rea decompile_all
// name: FUN_005c5fa0
// address: 0x5c5fa0
// body: available
// range: 0x5c5fa0-0x5c6026 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005c5fa0(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint *puVar3;
  int *in_ECX;
  uint uVar4;
  ushort *in_EDX;
  int iVar5;
  
  uVar4 = *(uint *)*in_ECX;
  puVar3 = (uint *)*in_ECX + 1;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  *in_ECX = (int)puVar3;
  if (uVar4 != 0x4d546864) {
    if (uVar4 == 0x52494646) {
      iVar5 = 0;
      do {
        uVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        *in_ECX = (int)puVar3;
        if ((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ==
            0x4d546864) goto LAB_005c5fe3;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
    }
    return (uint)puVar3 & 0xffffff00;
  }
LAB_005c5fe3:
  uVar4 = *(uint *)*in_ECX;
  puVar3 = (uint *)*in_ECX + 1;
  *in_ECX = (int)puVar3;
  uVar2 = (ushort)*puVar3;
  *param_1 = uVar2 << 8 | uVar2 >> 8;
  *in_ECX = *in_ECX + 2;
  *param_2 = *(ushort *)*in_ECX << 8 | *(ushort *)*in_ECX >> 8;
  *in_ECX = *in_ECX + 2;
  puVar1 = (ushort *)*in_ECX;
  uVar2 = *puVar1;
  uVar2 = uVar2 << 8 | uVar2 >> 8;
  *in_EDX = uVar2;
  *in_ECX = *in_ECX + ((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                       uVar4 << 0x18) - 4);
  return CONCAT31((int3)(CONCAT22((short)((uint)puVar1 >> 0x10),uVar2) >> 8),1);
}

