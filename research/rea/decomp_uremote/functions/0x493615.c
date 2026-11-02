// rea decompile_all
// name: FUN_00493615
// address: 0x493615
// body: available
// range: 0x493615-0x493845 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00493615(int param_1,int param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint *unaff_ESI;
  undefined1 *puVar8;
  int local_8;
  
  uVar3 = *unaff_ESI;
  uVar7 = (undefined1)param_2;
  uVar6 = (undefined1)((uint)param_2 >> 8);
  if ((char)unaff_ESI[2] == '\0') {
    if (*(char *)((int)unaff_ESI + 9) == '\b') {
      puVar4 = (undefined1 *)(param_1 + uVar3);
      puVar8 = puVar4 + uVar3;
      uVar1 = uVar3;
      if ((param_3 & 0x80) == 0) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          puVar4 = puVar4 + -1;
          puVar8[-1] = *puVar4;
          puVar8 = puVar8 + -2;
          *puVar8 = uVar7;
        }
      }
      else {
        if (1 < uVar3) {
          param_2 = uVar3 - 1;
          do {
            puVar4 = puVar4 + -1;
            puVar8[-1] = uVar7;
            puVar8 = puVar8 + -2;
            param_2 = param_2 + -1;
            *puVar8 = *puVar4;
          } while (param_2 != 0);
        }
        puVar8[-1] = uVar7;
      }
      *(undefined1 *)((int)unaff_ESI + 10) = 2;
      *(undefined1 *)((int)unaff_ESI + 0xb) = 0x10;
      uVar3 = uVar3 * 2;
    }
    else {
      if (*(char *)((int)unaff_ESI + 9) != '\x10') {
        return;
      }
      if ((param_3 & 0x80) == 0) {
        puVar8 = (undefined1 *)(param_1 + uVar3 * 2);
        puVar4 = puVar8 + uVar3 * 2;
        for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 - 1) {
          puVar5 = puVar8 + -1;
          puVar8 = puVar8 + -2;
          puVar4[-1] = *puVar5;
          puVar4[-2] = *puVar8;
          puVar4[-3] = uVar6;
          puVar4 = puVar4 + -4;
          *puVar4 = uVar7;
        }
      }
      else {
        puVar8 = (undefined1 *)(param_1 + uVar3 * 2);
        puVar4 = puVar8 + uVar3 * 2;
        if (1 < uVar3) {
          local_8 = uVar3 - 1;
          do {
            puVar4[-1] = uVar6;
            puVar4[-2] = uVar7;
            puVar4[-3] = puVar8[-1];
            puVar8 = puVar8 + -2;
            puVar4 = puVar4 + -4;
            local_8 = local_8 + -1;
            *puVar4 = *puVar8;
          } while (local_8 != 0);
        }
        puVar4[-1] = uVar6;
        puVar4[-2] = uVar7;
      }
      *(undefined1 *)((int)unaff_ESI + 10) = 2;
      *(undefined1 *)((int)unaff_ESI + 0xb) = 0x20;
      uVar3 = uVar3 << 2;
    }
  }
  else {
    if ((char)unaff_ESI[2] != '\x02') {
      return;
    }
    if (*(char *)((int)unaff_ESI + 9) == '\b') {
      puVar4 = (undefined1 *)(uVar3 * 3 + param_1);
      puVar8 = puVar4 + uVar3;
      uVar1 = uVar3;
      if ((param_3 & 0x80) == 0) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          puVar8[-1] = puVar4[-1];
          puVar8[-2] = puVar4[-2];
          puVar4 = puVar4 + -3;
          puVar8[-3] = *puVar4;
          puVar8 = puVar8 + -4;
          *puVar8 = uVar7;
        }
      }
      else {
        if (1 < uVar3) {
          param_2 = uVar3 - 1;
          do {
            puVar8[-1] = uVar7;
            puVar8[-2] = puVar4[-1];
            puVar5 = puVar4 + -2;
            puVar4 = puVar4 + -3;
            puVar8[-3] = *puVar5;
            puVar8 = puVar8 + -4;
            param_2 = param_2 + -1;
            *puVar8 = *puVar4;
          } while (param_2 != 0);
        }
        puVar8[-1] = uVar7;
      }
      *(undefined1 *)((int)unaff_ESI + 0xb) = 0x20;
      iVar2 = 2;
    }
    else {
      if (*(char *)((int)unaff_ESI + 9) != '\x10') {
        return;
      }
      if ((param_3 & 0x80) == 0) {
        puVar4 = (undefined1 *)(uVar3 * 6 + param_1);
        puVar8 = puVar4 + uVar3 * 2;
        for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 - 1) {
          puVar8[-1] = puVar4[-1];
          puVar8[-2] = puVar4[-2];
          puVar8[-3] = puVar4[-3];
          puVar8[-4] = puVar4[-4];
          puVar8[-5] = puVar4[-5];
          puVar4 = puVar4 + -6;
          puVar8[-6] = *puVar4;
          puVar8[-7] = uVar6;
          puVar8 = puVar8 + -8;
          *puVar8 = uVar7;
        }
      }
      else {
        puVar4 = (undefined1 *)(uVar3 * 6 + param_1);
        puVar8 = puVar4 + uVar3 * 2;
        if (1 < uVar3) {
          local_8 = uVar3 - 1;
          do {
            puVar8[-1] = uVar6;
            puVar8[-2] = uVar7;
            puVar8[-3] = puVar4[-1];
            puVar8[-4] = puVar4[-2];
            puVar8[-5] = puVar4[-3];
            puVar8[-6] = puVar4[-4];
            puVar5 = puVar4 + -5;
            puVar4 = puVar4 + -6;
            puVar8[-7] = *puVar5;
            puVar8 = puVar8 + -8;
            local_8 = local_8 + -1;
            *puVar8 = *puVar4;
          } while (local_8 != 0);
        }
        puVar8[-1] = uVar6;
        puVar8[-2] = uVar7;
      }
      iVar2 = 3;
      *(undefined1 *)((int)unaff_ESI + 0xb) = 0x40;
    }
    uVar3 = uVar3 << iVar2;
    *(undefined1 *)((int)unaff_ESI + 10) = 4;
  }
  unaff_ESI[1] = uVar3;
  return;
}

