// rea decompile_all
// name: FUN_00418563
// address: 0x418563
// body: available
// range: 0x418563-0x4187d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00418563(int param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  uint uVar5;
  int *local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_24 = *(int *)(unaff_EBX + 4);
  iVar4 = *(int *)(local_24 + 0x68);
  local_28 = (undefined4 *)(in_EAX * 0x10 + *(int *)(local_24 + 0x1a0));
  local_10 = *(uint **)(local_24 + 0x184);
  uVar5 = 0;
  if (*(uint *)(local_24 + 0x17c) != 0) {
    do {
      if ((*local_10 == (uint)*(ushort *)(param_1 + 0xc)) &&
         (local_10[1] == (uint)*(ushort *)(param_1 + 0xe))) {
        uVar5 = local_10[2];
        local_c = 4;
        if ((uVar5 & 1) != 0) {
          local_c = 5;
        }
        if ((uVar5 & 2) != 0) {
          local_c = local_c + 1;
        }
        if ((uVar5 & 4) != 0) {
          local_c = local_c + 1;
        }
        local_8 = iVar4;
        iVar2 = FUN_0041106d();
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_004111b5();
        puVar1 = local_28;
        if (iVar2 != 0) {
          return iVar2;
        }
        FUN_004181e4(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24),*local_28,&local_2c
                     ,&local_14);
        FUN_00411249();
        if (local_14 == 0) {
          return 6;
        }
        local_c = 0;
        local_18 = 0;
        local_20 = 0;
        local_1c = 0;
        local_28 = (undefined4 *)0x0;
        uVar3 = puVar1[1];
        if (*(int *)(local_24 + 0x130) != *(int *)(local_24 + 300)) {
          uVar3 = FUN_0040d230(*(int *)(local_24 + 300));
        }
        *(undefined4 *)(unaff_EBX + 0x38) = uVar3;
        local_10 = (uint *)FUN_0040d230(puVar1[1]);
        iVar4 = local_8;
        iVar2 = FUN_0041106d();
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_004111b5();
        if (iVar2 != 0) {
          return iVar2;
        }
        local_14 = *(int *)(iVar4 + 0x20);
        iVar4 = FUN_004182d7(&local_14,*(undefined4 *)(iVar4 + 0x24),local_10,&local_c,&local_18,
                             &local_20,&local_1c,&local_10,&local_28);
        if (0x7fffffff < (uint)(local_1c + local_18)) {
          iVar4 = 0x17;
        }
        if (iVar4 == 0) {
          *(undefined4 *)(unaff_EBX + 0x30) = 0;
          *(int *)(unaff_EBX + 0x1c) = local_1c << 6;
          *(int *)(unaff_EBX + 0x20) = local_c << 6;
          *(int *)(unaff_EBX + 0x50) = local_20;
          local_2c = (int *)(unaff_EBX + 0x4c);
          *local_2c = local_1c;
          *(int *)(unaff_EBX + 0x24) = local_18 << 6;
          *(int *)(unaff_EBX + 0x18) = local_20 * 0x40;
          iVar4 = local_20 + 7 >> 3;
          *(int *)(unaff_EBX + 0x54) = iVar4;
          *(int *)(unaff_EBX + 0x2c) = local_20 * -0x40 >> 1;
          *(undefined4 *)(unaff_EBX + 0x48) = 0x62697473;
          *(undefined1 *)(unaff_EBX + 0x5e) = 1;
          *(uint *)(unaff_EBX + 0x28) = ((int)local_10 >> 2) + 0x20U & 0xffffffc0;
          *(undefined4 *)(unaff_EBX + 0x34) = *(undefined4 *)(param_1 + 0x20);
          *(int *)(unaff_EBX + 100) = local_c;
          *(int *)(unaff_EBX + 0x68) = local_1c + local_18;
          iVar4 = FUN_0040db55(iVar4 * local_1c);
          if (iVar4 == 0) {
            iVar4 = FUN_004184fe(local_14,*(undefined4 *)(local_8 + 0x24),local_28,
                                 *(byte *)(local_24 + 0xd0) & 2);
          }
        }
        FUN_00411249();
        return iVar4;
      }
      local_10 = local_10 + 9;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(local_24 + 0x17c));
  }
  return 6;
}

