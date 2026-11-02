// rea decompile_all
// name: FUN_0064af80
// address: 0x64af80
// body: available
// range: 0x64af80-0x64b0af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064af80(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int in_ECX;
  uint uVar4;
  int *in_EDX;
  uint uVar5;
  
  if (((int)(uint)*(ushort *)(in_ECX + 0xfc) < 1 << (*(byte *)((int)in_EDX + 9) & 0x1f)) &&
     (*(ushort *)(in_ECX + 0xfc) != 0)) {
    pbVar1 = *(byte **)(in_ECX + 0xd8);
    pbVar3 = pbVar1 + in_EDX[1];
    uVar4 = -((uint)*(byte *)((int)in_EDX + 0xb) * *in_EDX) & 7;
    switch(*(byte *)((int)in_EDX + 9)) {
    case 1:
      if (pbVar1 < pbVar3) {
        do {
          if (*pbVar3 >> (sbyte)uVar4 != 0) {
            *(undefined4 *)(in_ECX + 0x100) = 1;
          }
          pbVar3 = pbVar3 + -1;
          uVar4 = 0;
        } while (pbVar1 < pbVar3);
        return;
      }
      break;
    case 2:
      if (pbVar1 < pbVar3) {
        uVar5 = *(uint *)(in_ECX + 0x100);
        do {
          bVar2 = *pbVar3 >> (sbyte)uVar4;
          if ((int)uVar5 < (int)(bVar2 & 3)) {
            uVar5 = bVar2 & 3;
          }
          uVar4 = bVar2 >> 2 & 3;
          if ((int)uVar5 < (int)uVar4) {
            uVar5 = uVar4;
          }
          uVar4 = bVar2 >> 4 & 3;
          if ((int)uVar5 < (int)uVar4) {
            uVar5 = uVar4;
          }
          if ((int)uVar5 < (int)(uint)(bVar2 >> 6)) {
            uVar5 = (uint)(bVar2 >> 6);
          }
          pbVar3 = pbVar3 + -1;
          uVar4 = 0;
        } while (pbVar1 < pbVar3);
        *(uint *)(in_ECX + 0x100) = uVar5;
        return;
      }
      break;
    case 4:
      if (pbVar1 < pbVar3) {
        uVar5 = *(uint *)(in_ECX + 0x100);
        do {
          bVar2 = *pbVar3 >> (sbyte)uVar4;
          uVar4 = bVar2 & 0xf;
          if ((int)uVar5 < (int)uVar4) {
            uVar5 = uVar4;
          }
          uVar4 = (uint)(bVar2 >> 4);
          if ((int)uVar5 < (int)uVar4) {
            uVar5 = uVar4;
          }
          pbVar3 = pbVar3 + -1;
          uVar4 = 0;
        } while (pbVar1 < pbVar3);
        *(uint *)(in_ECX + 0x100) = uVar5;
        return;
      }
      break;
    case 8:
      if (pbVar1 < pbVar3) {
        uVar4 = *(uint *)(in_ECX + 0x100);
        do {
          if ((int)uVar4 < (int)(uint)*pbVar3) {
            uVar4 = (uint)*pbVar3;
          }
          pbVar3 = pbVar3 + -1;
        } while (pbVar1 < pbVar3);
        *(uint *)(in_ECX + 0x100) = uVar4;
      }
    }
  }
  return;
}

