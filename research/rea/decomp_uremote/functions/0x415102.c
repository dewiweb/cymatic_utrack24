// rea decompile_all
// name: FUN_00415102
// address: 0x415102
// body: available
// range: 0x415102-0x4152ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00415102(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_2c = 0;
  local_c = *(undefined4 *)(param_1 + 100);
  local_8 = FUN_00414ae9(*(undefined4 *)(param_1 + 0xbc),0x20,&local_14,&local_28);
  if ((local_8 == 0) && (local_8 = FUN_004111b5(), local_8 == 0)) {
    local_14 = FUN_004112fb();
    local_24 = local_14 >> 2 & 1;
    if (local_24 == 0) {
      sVar1 = FUN_0041129f();
      local_1c = (int)sVar1;
      sVar2 = FUN_0041129f();
      sVar1 = FUN_0041129f();
      local_18 = (int)sVar1;
      sVar1 = FUN_0041129f();
      uVar3 = FUN_0041129f();
    }
    else {
      sVar1 = FUN_00411277();
      local_1c = (int)sVar1;
      sVar2 = FUN_00411277();
      sVar1 = FUN_00411277();
      local_18 = (int)sVar1;
      sVar1 = FUN_00411277();
      uVar3 = FUN_00411277();
    }
    *(undefined2 *)(param_1 + 0x130) = uVar3;
    FUN_00411249();
    if ((local_14 & 0xffffff00) == 0) {
      local_28 = (sVar2 - local_1c) + 1;
      local_20 = ((sVar1 - local_18) + 1) * local_28;
      uVar4 = FUN_00411976(8,0,&local_8);
      if (local_8 == 0) {
        local_14 = uVar4;
        local_8 = FUN_004111b5();
        iVar7 = 0;
        if (local_8 == 0) {
          local_10 = 0;
          if (0 < local_20) {
            do {
              if (local_24 == 1) {
                sVar1 = FUN_00411277();
              }
              else {
                sVar1 = FUN_0041129f();
              }
              if (sVar1 != -1) {
                *(short *)(uVar4 + 4 + iVar7 * 8) = sVar1;
                *(int *)(uVar4 + iVar7 * 8) =
                     (local_10 / local_28 + local_18) * 0x100 + local_10 % local_28 + local_1c;
                iVar7 = iVar7 + 1;
              }
              local_10 = local_10 + 1;
            } while (local_10 < local_20);
          }
          FUN_00411249();
          local_2c = FUN_00411976(8,0,&local_8);
          iVar6 = 0;
          uVar4 = local_14;
          if (local_8 == 0) {
            if (0 < iVar7) {
              puVar5 = (undefined2 *)(local_2c + 4);
              do {
                *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(local_14 + iVar6 * 8);
                *puVar5 = *(undefined2 *)((local_14 - local_2c) + (int)puVar5);
                iVar6 = iVar6 + 1;
                puVar5 = puVar5 + 4;
              } while (iVar6 < iVar7);
            }
            *(int *)(param_1 + 300) = local_2c;
            *(int *)(param_1 + 0x128) = iVar7;
            FUN_00411a5c(local_14);
            return 0;
          }
        }
        FUN_00411a5c(local_2c);
        FUN_00411a5c(uVar4);
      }
      else {
        local_8 = 0x40;
      }
    }
    else {
      local_8 = 3;
    }
  }
  return local_8;
}

