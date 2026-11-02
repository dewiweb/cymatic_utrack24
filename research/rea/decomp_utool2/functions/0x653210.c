// rea decompile_all
// name: FUN_00653210
// address: 0x653210
// body: available
// range: 0x653210-0x653219 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00653210(undefined4 param_1,byte param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint *in_ECX;
  undefined1 *puVar5;
  int in_EDX;
  undefined1 *puVar6;
  undefined1 uVar7;
  int iVar8;
  
  uVar4 = (undefined1)((uint)param_1 >> 8);
  uVar2 = *in_ECX;
  uVar7 = (undefined1)param_1;
  if ((char)in_ECX[2] == '\0') {
    if (*(char *)((int)in_ECX + 9) == '\b') {
      puVar6 = (undefined1 *)(in_EDX + uVar2);
      puVar5 = puVar6 + uVar2;
      uVar3 = uVar2;
      if ((param_2 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar1 = puVar6 + -1;
          puVar6 = puVar6 + -1;
          puVar5[-1] = *puVar1;
          puVar5 = puVar5 + -2;
          *puVar5 = uVar7;
        }
        *(undefined2 *)((int)in_ECX + 10) = 0x1002;
        in_ECX[1] = uVar2 * 2;
        return;
      }
      if (1 < uVar2) {
        iVar8 = uVar2 - 1;
        do {
          puVar5[-1] = uVar7;
          puVar6 = puVar6 + -1;
          puVar5 = puVar5 + -2;
          *puVar5 = *puVar6;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      puVar5[-1] = uVar7;
      *(undefined2 *)((int)in_ECX + 10) = 0x1002;
      in_ECX[1] = uVar2 * 2;
      return;
    }
    if (*(char *)((int)in_ECX + 9) == '\x10') {
      puVar6 = (undefined1 *)(in_EDX + uVar2 * 2);
      puVar5 = puVar6 + uVar2 * 2;
      uVar3 = uVar2;
      if ((param_2 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar1 = puVar6 + -1;
          puVar6 = puVar6 + -2;
          puVar5[-1] = *puVar1;
          puVar5[-2] = *puVar6;
          puVar5[-3] = uVar4;
          puVar5[-4] = uVar7;
          puVar5 = puVar5 + -4;
        }
        *(undefined2 *)((int)in_ECX + 10) = 0x2002;
        in_ECX[1] = uVar2 * 4;
        return;
      }
      if (1 < uVar2) {
        iVar8 = uVar2 - 1;
        do {
          puVar5[-1] = uVar4;
          puVar5[-2] = uVar7;
          puVar5[-3] = puVar6[-1];
          puVar5 = puVar5 + -4;
          *puVar5 = puVar6[-2];
          iVar8 = iVar8 + -1;
          puVar6 = puVar6 + -2;
        } while (iVar8 != 0);
      }
      puVar5[-1] = uVar4;
      puVar5[-2] = uVar7;
      *(undefined2 *)((int)in_ECX + 10) = 0x2002;
      in_ECX[1] = uVar2 * 4;
      return;
    }
  }
  else if ((char)in_ECX[2] == '\x02') {
    if (*(char *)((int)in_ECX + 9) == '\b') {
      puVar6 = (undefined1 *)(in_EDX + uVar2 * 3);
      puVar5 = puVar6 + uVar2;
      uVar3 = uVar2;
      if ((param_2 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5[-1] = puVar6[-1];
          puVar5[-2] = puVar6[-2];
          puVar5[-3] = puVar6[-3];
          puVar5[-4] = uVar7;
          puVar6 = puVar6 + -3;
          puVar5 = puVar5 + -4;
        }
        *(undefined2 *)((int)in_ECX + 10) = 0x2004;
        in_ECX[1] = uVar2 * 4;
        return;
      }
      if (1 < uVar2) {
        iVar8 = uVar2 - 1;
        do {
          puVar5[-1] = uVar7;
          puVar5[-2] = puVar6[-1];
          puVar5[-3] = puVar6[-2];
          puVar5 = puVar5 + -4;
          *puVar5 = puVar6[-3];
          iVar8 = iVar8 + -1;
          puVar6 = puVar6 + -3;
        } while (iVar8 != 0);
      }
      puVar5[-1] = uVar7;
      *(undefined2 *)((int)in_ECX + 10) = 0x2004;
      in_ECX[1] = uVar2 * 4;
      return;
    }
    if (*(char *)((int)in_ECX + 9) == '\x10') {
      puVar6 = (undefined1 *)(in_EDX + uVar2 * 6);
      puVar5 = puVar6 + uVar2 * 2;
      uVar3 = uVar2;
      if ((param_2 & 0x80) == 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5[-1] = puVar6[-1];
          puVar5[-2] = puVar6[-2];
          puVar5[-3] = puVar6[-3];
          puVar5[-4] = puVar6[-4];
          puVar5[-5] = puVar6[-5];
          puVar5[-6] = puVar6[-6];
          puVar5[-7] = uVar4;
          puVar5[-8] = uVar7;
          puVar6 = puVar6 + -6;
          puVar5 = puVar5 + -8;
        }
      }
      else {
        if (1 < uVar2) {
          iVar8 = uVar2 - 1;
          do {
            puVar5[-1] = uVar4;
            puVar5[-2] = uVar7;
            puVar5[-3] = puVar6[-1];
            puVar5[-4] = puVar6[-2];
            puVar5[-5] = puVar6[-3];
            puVar5[-6] = puVar6[-4];
            puVar5[-7] = puVar6[-5];
            puVar5 = puVar5 + -8;
            *puVar5 = puVar6[-6];
            iVar8 = iVar8 + -1;
            puVar6 = puVar6 + -6;
          } while (iVar8 != 0);
        }
        puVar5[-1] = uVar4;
        puVar5[-2] = uVar7;
      }
      *(undefined2 *)((int)in_ECX + 10) = 0x4004;
      in_ECX[1] = uVar2 * 8;
    }
  }
  return;
}

