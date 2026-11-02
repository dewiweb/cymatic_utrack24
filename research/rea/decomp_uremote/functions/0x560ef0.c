// rea decompile_all
// name: FUN_00560ef0
// address: 0x560ef0
// body: available
// range: 0x560ef0-0x56163b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00560ef0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined1 *puStack_1b4;
  undefined1 *puStack_1b0;
  uint uStack_1ac;
  uint *local_1a8;
  uint *local_1a4;
  uint *local_1a0;
  uint *local_19c;
  uint *local_198;
  uint *local_194;
  uint local_190;
  undefined4 local_18c;
  undefined4 *local_188;
  short local_182;
  ushort local_16e;
  undefined4 local_16c;
  int local_168;
  int *local_164;
  int local_158;
  int *local_154;
  undefined4 local_150;
  undefined4 *local_14c;
  short local_146;
  ushort local_132;
  undefined4 local_130;
  int local_12c;
  int *local_128;
  int local_11c;
  int *local_118;
  int local_114;
  int *local_110;
  int local_10c;
  int *local_108;
  int local_104;
  int *local_100;
  int local_fc;
  int *local_f8;
  undefined1 *local_f4;
  int local_f0;
  uint local_ec;
  undefined1 local_e8 [18];
  short local_d6;
  ushort local_8c;
  int local_88;
  uint local_84;
  undefined1 local_80 [18];
  short local_6e;
  ushort local_24;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d411b;
  local_10 = ExceptionList;
  uStack_1ac = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_1b0 = (undefined1 *)param_1;
  puStack_1b4 = (undefined1 *)0x560f33;
  FUN_005212e0();
  if (0x226 < (uint)(param_1 - *(int *)(local_190 + 0x134))) {
    *(int *)(local_190 + 0x134) = param_1;
    local_f8 = *(int **)(local_190 + 0x88);
    local_fc = *local_f8;
    local_194 = (uint *)(local_fc + 0x5b0);
    uVar3 = *local_194;
    *local_194 = uVar3 + 1;
    *(uint *)(local_fc + 0x5b4) = *(int *)(local_fc + 0x5b4) + (uint)(0xfffffffe < uVar3);
    if (*(int *)(local_190 + 0x14c) != 0) {
      puStack_1b0 = local_20;
      puStack_1b4 = (undefined1 *)0x560fd2;
      FUN_00568670();
      puStack_1b0 = local_20;
      puStack_1b4 = (undefined1 *)0x0;
      uStack_1b8 = 0;
      uStack_1bc = 0;
      (**(code **)(*(int *)(local_190 + 0x28 + *(int *)(*(int *)(local_190 + 0x28) + 0xc)) + 0x178))
                (0x3030,1,0);
      local_f4 = (undefined1 *)&uStack_1bc;
      FUN_00503c60(local_20);
      uVar1 = FUN_005686d0();
      FUN_00526ed0(1,uVar1);
    }
  }
  if (0x44c < (uint)(param_1 - *(int *)(local_190 + 0x138))) {
    *(int *)(local_190 + 0x138) = param_1;
    local_100 = *(int **)(local_190 + 0x88);
    local_104 = *local_100;
    local_198 = (uint *)(local_104 + 0x5b8);
    uVar3 = *local_198;
    *local_198 = uVar3 + 1;
    *(uint *)(local_104 + 0x5bc) = *(int *)(local_104 + 0x5bc) + (uint)(0xfffffffe < uVar3);
    puStack_1b0 = (undefined1 *)(uint)(*(byte *)(local_190 + 0x154) & 1);
    puStack_1b4 = (undefined1 *)0x5610ed;
    FUN_00569b70();
    puStack_1b0 = (undefined1 *)(uint)(*(byte *)(local_190 + 0x154) & 1);
    puStack_1b4 = (undefined1 *)0x561111;
    FUN_00569b70();
  }
  if (0x41a < (uint)(param_1 - *(int *)(local_190 + 0x13c))) {
    *(int *)(local_190 + 0x13c) = param_1;
    local_108 = *(int **)(local_190 + 0x88);
    local_10c = *local_108;
    local_19c = (uint *)(local_10c + 0x5c0);
    uVar3 = *local_19c;
    *local_19c = uVar3 + 1;
    *(uint *)(local_10c + 0x5c4) = *(int *)(local_10c + 0x5c4) + (uint)(0xfffffffe < uVar3);
    puStack_1b0 = (undefined1 *)0x561196;
    FUN_00579700();
  }
  if (0x4b0 < (uint)(param_1 - *(int *)(local_190 + 0x140))) {
    *(int *)(local_190 + 0x140) = param_1;
    local_110 = *(int **)(local_190 + 0x88);
    local_114 = *local_110;
    local_1a0 = (uint *)(local_114 + 0x5c8);
    uVar3 = *local_1a0;
    *local_1a0 = uVar3 + 1;
    *(uint *)(local_114 + 0x5cc) = *(int *)(local_114 + 0x5cc) + (uint)(0xfffffffe < uVar3);
    puStack_1b0 = (undefined1 *)(uint)(*(byte *)(local_190 + 0x154) & 1);
    puStack_1b4 = (undefined1 *)0x56122c;
    FUN_00569b70();
  }
  if (0x5dc < (uint)(param_1 - *(int *)(local_190 + 0x144))) {
    *(int *)(local_190 + 0x144) = param_1;
    local_118 = *(int **)(local_190 + 0x88);
    local_11c = *local_118;
    local_1a4 = (uint *)(local_11c + 0x5d0);
    uVar3 = *local_1a4;
    *local_1a4 = uVar3 + 1;
    *(uint *)(local_11c + 0x5d4) = *(int *)(local_11c + 0x5d4) + (uint)(0xfffffffe < uVar3);
    puStack_1b0 = (undefined1 *)0x5612b4;
    local_24 = FUN_0055ba10();
    if (local_24 != 0) {
      puStack_1b0 = (undefined1 *)0x5612cc;
      FUN_00512300();
      local_8 = 0;
      local_128 = *(int **)(local_190 + 0x88);
      local_12c = *local_128;
      uStack_1b8 = *(undefined4 *)(local_12c + 0xd8);
      puStack_1b0 = (undefined1 *)(local_190 + 0x48);
      puStack_1b4 = (undefined1 *)0x1;
      uStack_1bc = 0x561320;
      local_130 = uStack_1b8;
      FUN_005350f0();
      puStack_1b0 = (undefined1 *)(uint)local_24;
      puStack_1b4 = (undefined1 *)0x56132d;
      iVar2 = FUN_0052f3a0();
      if (iVar2 == 0) {
        for (local_84 = 0; local_132 = *(ushort *)(local_190 + 0xb8), local_84 < local_132;
            local_84 = local_84 + 1) {
          puStack_1b0 = (undefined1 *)local_84;
          puStack_1b4 = (undefined1 *)0x56137c;
          local_88 = FUN_0055bb40();
          if ((local_88 != 0) && (*(int *)(local_88 + 0x10) == 1)) {
            puStack_1b0 = (undefined1 *)0x0;
            uStack_1b8 = 0x5613ab;
            puStack_1b4 = (undefined1 *)local_88;
            puStack_1b0 = (undefined1 *)FUN_00503c30();
            puStack_1b4 = (undefined1 *)0x5613b4;
            FUN_0052f410();
          }
        }
        local_146 = local_6e;
        if (local_6e != 0) {
          local_14c = *(undefined4 **)(local_190 + 0x88);
          local_150 = *local_14c;
          puStack_1b0 = (undefined1 *)0x0;
          puStack_1b4 = local_80;
          uStack_1b8 = 0x561403;
          FUN_00529f40();
        }
      }
      local_8 = 0xffffffff;
      puStack_1b0 = (undefined1 *)0x561412;
      FUN_005123f0();
    }
  }
  uVar3 = local_190;
  if (2000 < (uint)(param_1 - *(int *)(local_190 + 0x148))) {
    *(int *)(local_190 + 0x148) = param_1;
    local_154 = *(int **)(local_190 + 0x88);
    local_158 = *local_154;
    local_1a8 = (uint *)(local_158 + 0x5d8);
    uVar3 = *local_1a8;
    *local_1a8 = uVar3 + 1;
    *(uint *)(local_158 + 0x5dc) = *(int *)(local_158 + 0x5dc) + (uint)(0xfffffffe < uVar3);
    puStack_1b0 = (undefined1 *)0x56149b;
    uVar3 = FUN_0055ba70();
    local_8c = (ushort)uVar3;
    if (local_8c != 0) {
      puStack_1b0 = (undefined1 *)0x5614bc;
      FUN_00512300();
      local_8 = 1;
      local_164 = *(int **)(local_190 + 0x88);
      local_168 = *local_164;
      uStack_1b8 = *(undefined4 *)(local_168 + 0xd8);
      puStack_1b0 = (undefined1 *)(local_190 + 0x48);
      puStack_1b4 = (undefined1 *)0x2;
      uStack_1bc = 0x561513;
      local_16c = uStack_1b8;
      FUN_005350f0();
      puStack_1b0 = (undefined1 *)(uint)local_8c;
      puStack_1b4 = (undefined1 *)0x561526;
      iVar2 = FUN_0052f3a0();
      if (iVar2 == 0) {
        for (local_ec = 0; local_16e = *(ushort *)(local_190 + 0xb8), local_ec < local_16e;
            local_ec = local_ec + 1) {
          puStack_1b0 = (undefined1 *)local_ec;
          puStack_1b4 = (undefined1 *)0x561584;
          local_f0 = FUN_0055bb40();
          if ((local_f0 != 0) && (*(int *)(local_f0 + 0x10) == 2)) {
            puStack_1b0 = (undefined1 *)0x0;
            uStack_1b8 = 0x5615b3;
            puStack_1b4 = (undefined1 *)local_f0;
            puStack_1b0 = (undefined1 *)FUN_00503c30();
            puStack_1b4 = (undefined1 *)0x5615bf;
            FUN_0052f410();
          }
        }
        local_182 = local_d6;
        if (local_d6 != 0) {
          local_188 = *(undefined4 **)(local_190 + 0x88);
          local_18c = *local_188;
          puStack_1b0 = (undefined1 *)0x0;
          puStack_1b4 = local_e8;
          uStack_1b8 = 0x561617;
          FUN_00529f40();
        }
      }
      local_8 = 0xffffffff;
      puStack_1b0 = (undefined1 *)0x561629;
      uVar3 = FUN_005123f0();
    }
  }
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}

