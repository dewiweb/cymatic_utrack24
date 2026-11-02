// rea decompile_all
// name: FUN_00414bcb
// address: 0x414bcb
// body: available
// range: 0x414bcb-0x414e5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00414bcb(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  char *pcVar6;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_1c = 0;
  local_14 = 0;
  local_c = *(undefined4 *)(param_2 + 100);
  local_8 = FUN_00414ae9(*(undefined4 *)(param_2 + 0xbc),1,&local_18,&local_20);
  if (((local_8 == 0) && (uVar2 = FUN_004114f7(), local_8 == 0)) && ((uVar2 & 0xffffff00) == 0)) {
    local_18 = uVar2 >> 2 & 1;
    if (local_18 == 0) {
      uVar2 = FUN_004114f7();
    }
    else {
      uVar2 = FUN_0041148f();
    }
    local_10 = uVar2;
    if (local_8 == 0) {
      if (uVar2 <= local_20 / 9) {
        *(uint *)(param_2 + 0x118) = uVar2;
        iVar3 = FUN_00411976(0xc,0,&local_8);
        uVar5 = 0;
        local_1c = iVar3;
        if (local_8 != 0) goto LAB_00414e33;
        iVar1 = local_8;
        if (uVar2 != 0) {
          do {
            local_8 = iVar1;
            local_8 = FUN_00411560(param_1,iVar3);
            if (local_8 != 0) goto LAB_00414e33;
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + 0xc;
            iVar1 = 0;
          } while (uVar5 < uVar2);
        }
        if (((uVar2 & 3) != 0) && (local_8 = FUN_00411095(4 - (uVar2 & 3)), local_8 != 0)) {
          local_8 = 0x53;
          goto LAB_00414e33;
        }
        if (local_18 == 1) {
          uVar2 = FUN_0041148f();
        }
        else {
          uVar2 = FUN_004114f7();
        }
        local_18 = uVar2;
        if (local_8 != 0) goto LAB_00414e33;
        if (uVar2 <= local_20 + local_10 * -9) {
          local_14 = FUN_00411976(1,0,&local_8);
          if (((local_8 == 0) && (local_8 = FUN_004110b4(local_14,uVar2), local_8 == 0)) &&
             (iVar3 = FUN_00411976(0xc,0,&local_8), local_8 == 0)) {
            *(int *)(param_2 + 0x11c) = iVar3;
            param_2 = 0;
            if (local_10 != 0) {
              puVar4 = (uint *)(iVar3 + 8);
              pcVar6 = (char *)(local_1c + 4);
              iVar3 = iVar3 - local_1c;
              do {
                uVar2 = *(uint *)(pcVar6 + -4);
                if (((int)uVar2 < 0) || (local_18 < uVar2)) {
LAB_00414e52:
                  local_8 = 9;
                  goto LAB_00414e33;
                }
                uVar2 = FUN_00411aaa(local_c,uVar2 + local_14,&local_8);
                puVar4[-2] = uVar2;
                if (local_8 != 0) goto LAB_00414e33;
                pcVar6[iVar3] = *pcVar6;
                uVar2 = *(uint *)(pcVar6 + 4);
                if (*pcVar6 == '\0') {
                  *puVar4 = uVar2;
                }
                else {
                  if (((int)uVar2 < 0) || (local_18 < uVar2)) goto LAB_00414e52;
                  uVar2 = FUN_00411aaa(local_c,uVar2 + local_14,&local_8);
                  *puVar4 = uVar2;
                  if (local_8 != 0) goto LAB_00414e33;
                }
                param_2 = param_2 + 1;
                pcVar6 = pcVar6 + 0xc;
                puVar4 = puVar4 + 3;
              } while (param_2 < local_10);
            }
            local_8 = 0;
          }
          goto LAB_00414e33;
        }
      }
      local_8 = 8;
    }
  }
LAB_00414e33:
  FUN_00411a5c(local_1c);
  FUN_00411a5c(local_14);
  return local_8;
}

