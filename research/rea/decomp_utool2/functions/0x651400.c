// rea decompile_all
// name: FUN_00651400
// address: 0x651400
// body: available
// range: 0x651400-0x651611 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00651400(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint *in_ECX;
  int in_EDX;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *in_ECX;
  if ((char)in_ECX[2] == '\x03') {
    bVar1 = *(byte *)((int)in_ECX + 9);
    if (bVar1 < 8) {
      if (bVar1 == 1) {
        pbVar5 = (byte *)(in_EDX + -1 + uVar7);
        pbVar2 = (byte *)((uVar7 - 1 >> 3) + in_EDX);
        iVar3 = 7 - (uVar7 - 1 & 7);
        for (uVar6 = uVar7; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar5 = *pbVar2 >> ((byte)iVar3 & 0x1f) & 1;
          if (iVar3 == 7) {
            iVar3 = 0;
            pbVar2 = pbVar2 + -1;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          pbVar5 = pbVar5 + -1;
        }
      }
      else if (bVar1 == 2) {
        pbVar5 = (byte *)(in_EDX + -1 + uVar7);
        pbVar2 = (byte *)((uVar7 - 1 >> 2) + in_EDX);
        iVar3 = (3 - (uVar7 - 1 & 3)) * 2;
        for (uVar6 = uVar7; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar5 = *pbVar2 >> ((byte)iVar3 & 0x1f) & 3;
          if (iVar3 == 6) {
            iVar3 = 0;
            pbVar2 = pbVar2 + -1;
          }
          else {
            iVar3 = iVar3 + 2;
          }
          pbVar5 = pbVar5 + -1;
        }
      }
      else if (bVar1 == 4) {
        pbVar5 = (byte *)((uVar7 - 1 >> 1) + in_EDX);
        pbVar2 = (byte *)(in_EDX + -1 + uVar7);
        iVar3 = (uVar7 & 1) << 2;
        for (uVar6 = uVar7; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar2 = *pbVar5 >> ((byte)iVar3 & 0x1f) & 0xf;
          if (iVar3 == 4) {
            iVar3 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            iVar3 = iVar3 + 4;
          }
          pbVar2 = pbVar2 + -1;
        }
      }
      *(undefined1 *)((int)in_ECX + 9) = 8;
      *(undefined1 *)((int)in_ECX + 0xb) = 8;
      in_ECX[1] = uVar7;
    }
    if (*(char *)((int)in_ECX + 9) == '\b') {
      pbVar5 = (byte *)(in_EDX + -1 + uVar7);
      if (0 < param_3) {
        uVar6 = uVar7 * 4;
        puVar4 = (undefined1 *)(in_EDX + -1 + uVar6);
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          if ((int)(uint)*pbVar5 < param_3) {
            *puVar4 = *(undefined1 *)((uint)*pbVar5 + param_2);
          }
          else {
            *puVar4 = 0xff;
          }
          puVar4[-1] = *(undefined1 *)((uint)*pbVar5 * 3 + 2 + param_1);
          puVar4[-2] = *(undefined1 *)((uint)*pbVar5 * 3 + 1 + param_1);
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + -1;
          puVar4[-3] = *(undefined1 *)(param_1 + (uint)bVar1 * 3);
          puVar4 = puVar4 + -4;
        }
        in_ECX[2] = 0x20040806;
        in_ECX[1] = uVar6;
        return;
      }
      uVar6 = uVar7 * 3;
      puVar4 = (undefined1 *)(in_EDX + -1 + uVar6);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = *(undefined1 *)((uint)*pbVar5 * 3 + 2 + param_1);
        puVar4[-1] = *(undefined1 *)((uint)*pbVar5 * 3 + 1 + param_1);
        puVar4[-2] = *(undefined1 *)(param_1 + (uint)*pbVar5 * 3);
        pbVar5 = pbVar5 + -1;
        puVar4 = puVar4 + -3;
      }
      in_ECX[2] = 0x18030802;
      in_ECX[1] = uVar6;
    }
  }
  return;
}

