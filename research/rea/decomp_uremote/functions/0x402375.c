// rea decompile_all
// name: FUN_00402375
// address: 0x402375
// body: available
// range: 0x402375-0x40254d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00402375(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  byte *local_10;
  uint local_8;
  
  if (param_2 == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 4);
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0x10);
  }
  piVar1 = (int *)(param_2 * 0x18c + 0x28 + in_ECX);
  if ((piVar1[0x61] != iVar2) || (piVar1[0x62] != iVar5)) {
    local_8 = 0;
    piVar1[0x61] = iVar2;
    piVar1[0x62] = iVar5;
    if (*(uint *)(in_ECX + 0x28c) != 0) {
      local_10 = (byte *)(in_ECX + 0x2a8);
      do {
        if ((*local_10 & 4) != 0) {
          iVar3 = local_8 * 0x1c + 0x290 + in_ECX;
          if (iVar3 != 0) {
            uVar4 = FUN_00401000(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(param_1 + 8));
            uVar7 = uVar4 + 0x28 & 0xffffffc0;
            if ((uVar4 != uVar7) && (param_2 == 1)) {
              iVar2 = FUN_0040d230(uVar7);
            }
          }
          break;
        }
        local_8 = local_8 + 1;
        local_10 = local_10 + 0x1c;
      } while (local_8 < *(uint *)(in_ECX + 0x28c));
    }
    *piVar1 = iVar2;
    piVar1[1] = iVar5;
    if (param_2 == 0) {
      *(int *)(in_ECX + 8) = iVar2;
      *(int *)(in_ECX + 0x10) = iVar5;
    }
    else {
      *(int *)(in_ECX + 0xc) = iVar2;
      *(int *)(in_ECX + 0x14) = iVar5;
    }
    local_8 = 0;
    if (piVar1[2] != 0) {
      piVar8 = piVar1 + 5;
      do {
        iVar3 = FUN_00401000(piVar8[-2],iVar2);
        local_8 = local_8 + 1;
        piVar8[-1] = iVar3;
        *piVar8 = iVar3;
        piVar8 = piVar8 + 3;
      } while (local_8 < (uint)piVar1[2]);
    }
    iVar3 = FUN_00401000(piVar1[0x34],iVar2);
    *(bool *)(piVar1 + 0x35) = iVar3 < 0x28;
    if ((param_2 == 1) && (local_8 = 0, piVar1[0x36] != 0)) {
      piVar8 = piVar1 + 0x3a;
      do {
        iVar3 = FUN_00401000(piVar8[-3],iVar2);
        piVar8[-2] = iVar3 + iVar5;
        piVar8[-1] = iVar3 + iVar5;
        iVar3 = FUN_00401000(*piVar8,iVar2);
        piVar8[3] = piVar8[3] & 0xfffffffe;
        piVar8[1] = iVar3 + iVar5;
        piVar8[2] = iVar3 + iVar5;
        iVar3 = FUN_00401000(piVar8[-3] - *piVar8,iVar2);
        if (iVar3 + 0x30U < 0x61) {
          iVar6 = iVar3;
          if (iVar3 < 0) {
            iVar6 = -iVar3;
          }
          if (iVar6 < 0x20) {
            iVar6 = 0;
          }
          else {
            iVar6 = ((0x2f < iVar5) - 1 & 0xffffffe0) + 0x40;
          }
          if (iVar3 < 0) {
            iVar6 = -iVar6;
          }
          uVar4 = piVar8[-2] + 0x20U & 0xffffffc0;
          piVar8[-1] = uVar4;
          piVar8[3] = piVar8[3] | 1;
          piVar8[2] = uVar4 - iVar6;
        }
        local_8 = local_8 + 1;
        piVar8 = piVar8 + 7;
      } while (local_8 < (uint)piVar1[0x36]);
    }
  }
  return;
}

