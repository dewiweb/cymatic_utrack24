// rea decompile_all
// name: FUN_00230eb0
// address: 0x230eb0
// body: available
// range: 0x230eb0-0x2311c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00230eb0(int *param_1,int param_2,int param_3,byte *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  int *piStack_34;
  int iStack_30;
  int local_2c;
  byte *local_28;
  
  piStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  uVar2 = FUN_002486b4(&local_28,&stack0x00000000);
  local_38 = local_2c - param_2 >> 1;
  iVar3 = FUN_00230ea4(param_1,*param_1);
  uVar1 = param_2 - iVar3 >> 1;
  uVar4 = FUN_0022d150(param_1);
  if (uVar4 < uVar1) {
    uVar5 = FUN_0022d150(param_1);
    FUN_00173800(9,&DAT_002311c4,&DAT_002311c4,uVar1,uVar5);
  }
  iVar3 = FUN_0022d150(param_1);
  local_3c = iVar3 - uVar1;
  uVar4 = local_3c;
  if (local_38 < local_3c) {
    uVar4 = local_38;
  }
  iVar3 = FUN_0022d150(param_1);
  iVar6 = FUN_0022d46c(param_1);
  if (iVar6 - uVar2 <= iVar3 - uVar4) {
    iVar3 = FUN_0022d46c(param_1);
    iVar6 = FUN_0022d150(param_1);
    FUN_00173800(8,&DAT_002311c4,&DAT_002311c4,iVar6 - uVar4,iVar3 - uVar2);
  }
  iVar3 = FUN_0022d150(param_1);
  uVar8 = (iVar3 - uVar4) + uVar2;
  if (uVar8 == 0) {
    FUN_00231ebc(param_1);
    iVar3 = FUN_00231788();
    *param_1 = iVar3;
  }
  else {
    iVar3 = FUN_0022d150(param_1);
    iVar3 = (iVar3 - uVar4) - uVar1;
    local_40 = FUN_0022d250(param_1);
    uVar4 = FUN_0022c250();
    if ((uVar4 < 2) && (uVar4 = FUN_0022d450(param_1), uVar8 <= uVar4)) {
      if (iVar3 != 0) {
        FUN_001c10ba(*param_1 + uVar1 * 2 + uVar2 * 2,*param_1 + uVar1 * 2 + local_38 * 2,iVar3);
      }
      for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
        local_44 = (uint)*local_28;
        local_28 = local_28 + 1;
        FUN_001c10c8(*param_1 + uVar1 * 2 + uVar4 * 2,&local_44);
      }
      iVar3 = FUN_0022d250(param_1);
      *(uint *)(iVar3 + 8) = uVar8;
      local_44 = *param_1 + uVar8 * 2;
      local_40 = 0;
      FUN_001c10c8(local_44,&local_40);
    }
    else {
      local_50 = FUN_0022d150(param_1);
      local_40 = FUN_0020b4f4(local_50,param_1);
      local_44 = uVar8;
      puVar7 = (undefined4 *)FUN_00247bfc(&local_40,&local_44);
      local_48 = *puVar7;
      local_4c = FUN_00231e54(param_1,local_48,uVar8);
      if (uVar1 != 0) {
        local_50 = FUN_00208b10(local_4c);
        FUN_001c10ac(local_50,*param_1,uVar1);
      }
      for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
        iVar6 = FUN_00208b10(local_4c);
        local_50 = (uint)*local_28;
        local_28 = local_28 + 1;
        FUN_001c10c8(iVar6 + uVar1 * 2 + uVar4 * 2,&local_50);
      }
      if (iVar3 != 0) {
        iVar6 = FUN_00208b10(local_4c);
        local_50 = iVar6 + uVar1 * 2 + uVar2 * 2;
        FUN_001c10ac(local_50,*param_1 + uVar1 * 2 + local_38 * 2,iVar3);
      }
      FUN_00231ebc(param_1);
      iVar3 = FUN_00208b10(local_4c);
      *param_1 = iVar3;
    }
  }
  return param_1;
}

