// rea decompile_all
// name: FUN_0042d343
// address: 0x42d343
// body: available
// range: 0x42d343-0x42d529 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042d343(void)

{
  int iVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_30;
  ushort local_2c;
  ushort local_2a;
  ushort local_24;
  byte local_22;
  int local_20;
  int local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  iVar5 = *(int *)(in_EAX + 0x68);
  local_14 = *(undefined4 *)(iVar5 + 0x1c);
  iVar1 = *(int *)(in_EAX + 0x2c8);
  local_c = iVar1;
  local_8 = (**(code **)(in_EAX + 0x1fc))();
  if (local_8 == 0) {
    iVar3 = FUN_004d021d();
    local_18 = iVar3;
    local_8 = FUN_00411560(iVar5,&local_30);
    if (local_8 == 0) {
      *(uint *)(iVar1 + 0x18) = (uint)local_2a;
      *(uint *)(iVar1 + 0x20) = (uint)local_24;
      local_10 = local_20 + iVar3;
      if ((local_30 == 0x10000) && (local_2c == **(ushort **)(iVar1 + 8))) {
        uVar4 = FUN_00411976(4,0,&local_8);
        *(undefined4 *)(iVar1 + 0x24) = uVar4;
        if (local_8 == 0) {
          if ((local_22 & 1) == 0) {
            iVar5 = FUN_004111b5();
            if (iVar5 != 0) {
              return iVar5;
            }
            uVar7 = 0;
            local_8 = 0;
            do {
              uVar6 = FUN_00411277();
              *(uint *)(*(int *)(local_c + 0x24) + uVar7 * 4) = local_10 + (uVar6 & 0xffff) * 2;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= *(uint *)(local_c + 0x20));
          }
          else {
            iVar5 = FUN_004111b5();
            if (iVar5 != 0) {
              return iVar5;
            }
            uVar7 = 0;
            local_8 = 0;
            do {
              iVar5 = FUN_004112c7();
              *(int *)(*(int *)(local_c + 0x24) + uVar7 * 4) = iVar5 + local_10;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= *(uint *)(local_c + 0x20));
          }
          FUN_00411249();
          uVar7 = local_c;
          if (*(int *)(local_c + 0x18) != 0) {
            uVar4 = FUN_00411976(4,0,&local_8);
            *(undefined4 *)(uVar7 + 0x1c) = uVar4;
            if (((local_8 == 0) && (local_8 = FUN_0041106d(), uVar7 = local_c, local_8 == 0)) &&
               (local_8 = FUN_004111b5(), local_8 == 0)) {
              local_c = 0;
              if (*(int *)(uVar7 + 0x18) != 0) {
                uVar6 = (uint)local_2c;
                do {
                  uVar8 = 0;
                  if (uVar6 != 0) {
                    do {
                      sVar2 = FUN_00411277();
                      *(int *)(*(int *)(uVar7 + 0x1c) + (local_2c * local_c + uVar8) * 4) =
                           (int)sVar2 << 2;
                      uVar6 = (uint)local_2c;
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < uVar6);
                  }
                  local_c = local_c + 1;
                } while (local_c < *(uint *)(uVar7 + 0x18));
              }
              FUN_00411249();
            }
          }
        }
      }
      else {
        local_8 = 8;
      }
    }
  }
  return local_8;
}

