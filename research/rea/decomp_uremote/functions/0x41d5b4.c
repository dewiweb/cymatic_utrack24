// rea decompile_all
// name: FUN_0041d5b4
// address: 0x41d5b4
// body: available
// range: 0x41d5b4-0x41d784 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d5b4(void)

{
  int in_EAX;
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_5c [16];
  int local_1c;
  int local_18;
  undefined4 local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  
  uVar6 = in_ECX[2];
  local_14 = *(undefined4 *)(in_EAX * 0xcc + 200 + in_ECX[6]);
  uVar7 = *in_ECX * 0x30 + uVar6;
  uVar1 = 0;
  local_1c = in_ECX[4];
  uVar5 = uVar6;
  if (uVar6 < uVar7) {
    do {
      if ((*(byte *)(uVar5 + 0x10) & 0x10) != 0) {
        uVar1 = uVar1 + 1;
      }
      uVar5 = uVar5 + 0x30;
    } while (uVar5 < uVar7);
    if (uVar1 != 0) {
      if (uVar1 < 0x11) {
        puVar2 = local_5c;
        local_c = puVar2;
      }
      else {
        puVar2 = (uint *)FUN_00411976(4,0,&local_18);
        local_c = puVar2;
        if (local_18 != 0) {
          return;
        }
      }
      local_8 = 0;
      local_10 = puVar2;
      uVar5 = uVar6;
      do {
        puVar3 = local_10;
        if ((*(byte *)(uVar5 + 0x10) & 0x10) != 0) {
          while (puVar2 < puVar3) {
            uVar1 = puVar3[-1];
            if (*(int *)(uVar1 + 0x24) <= *(int *)(uVar5 + 0x24)) break;
            *puVar3 = uVar1;
            puVar3 = puVar3 + -1;
          }
          local_8 = local_8 + 1;
          local_10 = local_10 + 1;
          *puVar3 = uVar5;
        }
        uVar5 = uVar5 + 0x30;
      } while (uVar5 < uVar7);
      puVar3 = (uint *)(uVar6 + 0xc);
      local_18 = ((uVar7 - uVar6) - 1) / 0x30 + 1;
      local_c = puVar2;
      do {
        if ((puVar3[1] & 0x10) == 0) {
          uVar6 = *puVar3;
          if ((uVar6 & 2) != 0) {
            if ((((char)puVar3[2] == '\x04') || ((char)puVar3[2] != *(char *)((int)puVar3 + 9))) ||
               (((puVar3[1] & 0x40) == 0 && ((uVar6 & 4) == 0)))) goto LAB_0041d763;
            *puVar3 = uVar6 & 0xfffffffd;
          }
          uVar6 = 0;
          if (local_8 == 0) {
LAB_0041d6d8:
            uVar6 = *puVar2;
            uVar5 = puVar3[6];
LAB_0041d6dd:
            iVar4 = thunk_FUN_00401000(uVar5 - *(int *)(uVar6 + 0x24),local_14);
            uVar6 = iVar4 + *(int *)(uVar6 + 0x2c);
          }
          else {
            uVar5 = puVar3[6];
            do {
              if ((int)uVar5 < *(int *)(puVar2[uVar6] + 0x24)) break;
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_8);
            if (uVar6 == 0) goto LAB_0041d6d8;
            uVar6 = puVar2[uVar6 - 1];
            uVar1 = local_8;
            if (local_8 == 0) {
LAB_0041d71e:
              uVar6 = local_c[uVar1 - 1];
              goto LAB_0041d6dd;
            }
            local_10 = local_c + (local_8 - 1);
            do {
              if (*(int *)(*local_10 + 0x24) < (int)uVar5) break;
              local_10 = local_10 + -1;
              uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
            if (uVar1 == local_8) goto LAB_0041d71e;
            uVar1 = local_c[uVar1];
            if (uVar5 == *(uint *)(uVar6 + 0x24)) {
              uVar6 = *(uint *)(uVar6 + 0x2c);
            }
            else if (uVar5 == *(uint *)(uVar1 + 0x24)) {
              uVar6 = *(uint *)(uVar1 + 0x2c);
            }
            else {
              local_10 = *(uint **)(uVar6 + 0x2c);
              iVar4 = FUN_0040d230(*(int *)(uVar1 + 0x2c) - (int)local_10);
              uVar6 = iVar4 + (int)local_10;
            }
          }
          puVar3[1] = puVar3[1] | 0x20;
          puVar3[8] = uVar6;
          puVar2 = local_c;
        }
LAB_0041d763:
        puVar3 = puVar3 + 0xc;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      if (puVar2 != local_5c) {
        FUN_00411a5c(puVar2);
      }
    }
  }
  return;
}

