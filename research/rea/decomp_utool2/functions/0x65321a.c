// rea decompile_all
// name: FUN_0065321a
// address: 0x65321a
// body: available
// range: 0x65321a-0x6534c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065321a(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint in_EAX;
  uint uVar3;
  uint *in_ECX;
  undefined1 *puVar4;
  int in_EDX;
  undefined1 *puVar5;
  undefined1 unaff_BL;
  int unaff_EBP;
  int iVar6;
  
  uVar3 = in_EAX >> 8;
  *(uint **)(unaff_EBP + -4) = in_ECX;
  *(uint *)(unaff_EBP + 8) = uVar3;
  uVar2 = *in_ECX;
  if ((char)in_ECX[2] == '\0') {
    if (*(char *)((int)in_ECX + 9) == '\b') {
      puVar5 = (undefined1 *)(in_EDX + uVar2);
      puVar4 = puVar5 + uVar2;
      if ((*(byte *)(unaff_EBP + 0xc) & 0x80) == 0) {
        uVar3 = uVar2;
        if (uVar2 != 0) {
          do {
            puVar1 = puVar5 + -1;
            puVar5 = puVar5 + -1;
            puVar4[-1] = *puVar1;
            puVar4 = puVar4 + -2;
            *puVar4 = unaff_BL;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
          in_ECX = *(uint **)(unaff_EBP + -4);
        }
        *(undefined2 *)((int)in_ECX + 10) = 0x1002;
        in_ECX[1] = uVar2 * 2;
        return;
      }
      if (1 < uVar2) {
        iVar6 = uVar2 - 1;
        do {
          puVar4[-1] = unaff_BL;
          puVar5 = puVar5 + -1;
          puVar4 = puVar4 + -2;
          *puVar4 = *puVar5;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        in_ECX = *(uint **)(unaff_EBP + -4);
      }
      puVar4[-1] = unaff_BL;
      *(undefined2 *)((int)in_ECX + 10) = 0x1002;
      in_ECX[1] = uVar2 * 2;
      return;
    }
    if (*(char *)((int)in_ECX + 9) == '\x10') {
      puVar5 = (undefined1 *)(in_EDX + uVar2 * 2);
      puVar4 = puVar5 + uVar2 * 2;
      if ((*(byte *)(unaff_EBP + 0xc) & 0x80) == 0) {
        uVar3 = uVar2;
        if (uVar2 != 0) {
          do {
            puVar1 = puVar5 + -1;
            puVar5 = puVar5 + -2;
            puVar4[-1] = *puVar1;
            puVar4[-2] = *puVar5;
            puVar4[-3] = (char)*(undefined4 *)(unaff_EBP + 8);
            puVar4[-4] = unaff_BL;
            uVar3 = uVar3 - 1;
            puVar4 = puVar4 + -4;
          } while (uVar3 != 0);
          in_ECX = *(uint **)(unaff_EBP + -4);
        }
        *(undefined2 *)((int)in_ECX + 10) = 0x2002;
        in_ECX[1] = uVar2 * 4;
        return;
      }
      if (1 < uVar2) {
        iVar6 = uVar2 - 1;
        do {
          puVar4[-1] = (char)uVar3;
          puVar4[-2] = unaff_BL;
          puVar4[-3] = puVar5[-1];
          puVar4 = puVar4 + -4;
          *puVar4 = puVar5[-2];
          uVar3 = *(uint *)(unaff_EBP + 8);
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + -2;
        } while (iVar6 != 0);
        in_ECX = *(uint **)(unaff_EBP + -4);
      }
      puVar4[-1] = (char)uVar3;
      puVar4[-2] = unaff_BL;
      *(undefined2 *)((int)in_ECX + 10) = 0x2002;
      in_ECX[1] = uVar2 * 4;
      return;
    }
  }
  else if ((char)in_ECX[2] == '\x02') {
    if (*(char *)((int)in_ECX + 9) == '\b') {
      puVar5 = (undefined1 *)(in_EDX + uVar2 * 3);
      puVar4 = puVar5 + uVar2;
      if ((*(byte *)(unaff_EBP + 0xc) & 0x80) == 0) {
        uVar3 = uVar2;
        if (uVar2 != 0) {
          do {
            puVar4[-1] = puVar5[-1];
            puVar4[-2] = puVar5[-2];
            puVar4[-3] = puVar5[-3];
            puVar4[-4] = unaff_BL;
            uVar3 = uVar3 - 1;
            puVar4 = puVar4 + -4;
            puVar5 = puVar5 + -3;
          } while (uVar3 != 0);
          in_ECX = *(uint **)(unaff_EBP + -4);
        }
        *(undefined2 *)((int)in_ECX + 10) = 0x2004;
        in_ECX[1] = uVar2 * 4;
        return;
      }
      if (1 < uVar2) {
        iVar6 = uVar2 - 1;
        do {
          puVar4[-1] = unaff_BL;
          puVar4[-2] = puVar5[-1];
          puVar4[-3] = puVar5[-2];
          puVar4 = puVar4 + -4;
          *puVar4 = puVar5[-3];
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + -3;
        } while (iVar6 != 0);
        in_ECX = *(uint **)(unaff_EBP + -4);
      }
      puVar4[-1] = unaff_BL;
      *(undefined2 *)((int)in_ECX + 10) = 0x2004;
      in_ECX[1] = uVar2 * 4;
      return;
    }
    if (*(char *)((int)in_ECX + 9) == '\x10') {
      puVar5 = (undefined1 *)(in_EDX + uVar2 * 6);
      puVar4 = puVar5 + uVar2 * 2;
      if ((*(byte *)(unaff_EBP + 0xc) & 0x80) == 0) {
        uVar3 = uVar2;
        if (uVar2 != 0) {
          do {
            puVar4[-1] = puVar5[-1];
            puVar4[-2] = puVar5[-2];
            puVar4[-3] = puVar5[-3];
            puVar4[-4] = puVar5[-4];
            puVar4[-5] = puVar5[-5];
            puVar4[-6] = puVar5[-6];
            puVar4[-7] = (char)*(undefined4 *)(unaff_EBP + 8);
            puVar4[-8] = unaff_BL;
            uVar3 = uVar3 - 1;
            puVar4 = puVar4 + -8;
            puVar5 = puVar5 + -6;
          } while (uVar3 != 0);
          in_ECX = *(uint **)(unaff_EBP + -4);
        }
      }
      else {
        if (1 < uVar2) {
          iVar6 = uVar2 - 1;
          do {
            puVar4[-1] = (char)*(undefined4 *)(unaff_EBP + 8);
            puVar4[-2] = unaff_BL;
            puVar4[-3] = puVar5[-1];
            puVar4[-4] = puVar5[-2];
            puVar4[-5] = puVar5[-3];
            puVar4[-6] = puVar5[-4];
            puVar4[-7] = puVar5[-5];
            puVar4 = puVar4 + -8;
            *puVar4 = puVar5[-6];
            iVar6 = iVar6 + -1;
            puVar5 = puVar5 + -6;
          } while (iVar6 != 0);
          in_ECX = *(uint **)(unaff_EBP + -4);
        }
        puVar4[-1] = (char)*(undefined4 *)(unaff_EBP + 8);
        puVar4[-2] = unaff_BL;
      }
      *(undefined2 *)((int)in_ECX + 10) = 0x4004;
      in_ECX[1] = uVar2 * 8;
    }
  }
  return;
}

