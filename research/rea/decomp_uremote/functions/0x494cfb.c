// rea decompile_all
// name: FUN_00494cfb
// address: 0x494cfb
// body: available
// range: 0x494cfb-0x49505f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00494cfb(int *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_EDX;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_10;
  byte local_c;
  byte *local_8;
  
  iVar4 = *(int *)(in_EDX + 0x144);
  iVar10 = *(int *)(in_EDX + 0x148);
  bVar1 = *(byte *)((int)param_1 + 9);
  iVar9 = *param_1;
  if (((bVar1 < 9) && (iVar4 != 0)) || ((bVar1 == 0x10 && (iVar10 != 0)))) {
    cVar2 = (char)param_1[2];
    local_c = (byte)*(undefined4 *)(in_EDX + 0x13c);
    if (cVar2 == '\0') {
      if ((bVar1 == 2) && (local_8 = param_2, iVar9 != 0)) {
        local_10 = (iVar9 - 1U >> 2) + 1;
        do {
          uVar7 = (uint)*local_8;
          uVar5 = uVar7 & 0xc0;
          uVar6 = uVar7 & 0xc;
          uVar8 = uVar7 & 3;
          uVar7 = uVar7 & 0x30;
          local_10 = local_10 + -1;
          *local_8 = (byte)((byte)(*(byte *)(((uVar6 << 2 | uVar6) << 2 | (int)uVar6 >> 2 | uVar6) +
                                            iVar4) & 0xcf |
                                  *(byte *)((((uVar8 << 2 | uVar8) << 2 | uVar8) << 2 | uVar8) +
                                           iVar4) >> 2) >> 2 |
                           *(byte *)(((int)((int)uVar7 >> 2 | uVar7) >> 2 | uVar7 << 2 | uVar7) +
                                    iVar4) & 0xc3) >> 2 |
                     *(byte *)(((int)((int)((int)uVar5 >> 2 | uVar5) >> 2 | uVar5) >> 2 | uVar5) +
                              iVar4) & 0xc0;
          local_8 = local_8 + 1;
        } while (local_10 != 0);
      }
      cVar2 = *(char *)((int)param_1 + 9);
      if (cVar2 == '\x04') {
        if (iVar9 != 0) {
          iVar10 = (iVar9 - 1U >> 1) + 1;
          do {
            uVar6 = *param_2 & 0xf0;
            uVar5 = *param_2 & 0xf;
            *param_2 = *(byte *)(((int)uVar6 >> 4 | uVar6) + iVar4) & 0xf0 |
                       *(byte *)((uVar5 << 4 | uVar5) + iVar4) >> 4;
            param_2 = param_2 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else if (cVar2 == '\b') {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + iVar4);
          param_2 = param_2 + 1;
        }
      }
      else if (cVar2 == '\x10') {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(param_2[1] >> (local_c & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          *param_2 = (byte)((ushort)uVar3 >> 8);
          param_2[1] = (byte)uVar3;
          param_2 = param_2 + 2;
        }
      }
    }
    else if (cVar2 == '\x02') {
      if (bVar1 == 8) {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + iVar4);
          param_2[1] = *(byte *)((uint)param_2[1] + iVar4);
          param_2[2] = *(byte *)((uint)param_2[2] + iVar4);
          param_2 = param_2 + 3;
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(param_2[1] >> (local_c & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(param_2[3] >> (local_c & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(param_2[5] >> (local_c & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          param_2[5] = (byte)uVar3;
          param_2 = param_2 + 6;
        }
      }
    }
    else if (cVar2 == '\x04') {
      if (bVar1 == 8) {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + iVar4);
          param_2 = param_2 + 2;
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(param_2[1] >> (local_c & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          *param_2 = (byte)((ushort)uVar3 >> 8);
          param_2[1] = (byte)uVar3;
          param_2 = param_2 + 4;
        }
      }
    }
    else if (cVar2 == '\x06') {
      if (bVar1 == 8) {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + iVar4);
          param_2[1] = *(byte *)((uint)param_2[1] + iVar4);
          param_2[2] = *(byte *)((uint)param_2[2] + iVar4);
          param_2 = param_2 + 4;
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(param_2[1] >> (local_c & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(param_2[3] >> (local_c & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(param_2[5] >> (local_c & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          param_2[5] = (byte)uVar3;
          param_2 = param_2 + 8;
        }
      }
    }
  }
  return;
}

