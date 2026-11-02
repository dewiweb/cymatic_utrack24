// rea decompile_all
// name: FUN_002311c8
// address: 0x2311c8
// body: available
// range: 0x2311c8-0x231327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_002311c8(int *param_1,int param_2,int param_3,byte *param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  ushort local_2c;
  int *piStack_24;
  int iStack_20;
  int iStack_1c;
  byte *local_18;
  
  uVar9 = param_5 - (int)param_4;
  uVar2 = param_3 - param_2 >> 1;
  uVar3 = *(uint *)(*param_1 + -4);
  uVar8 = param_2 - *param_1 >> 1;
  piStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  if (uVar3 < uVar8) {
    FUN_00173800(9,&DAT_00231328,&DAT_00231328,uVar8,uVar3);
  }
  uVar3 = *(int *)(*param_1 + -4) - uVar8;
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  uVar7 = *(int *)(*param_1 + -4) - uVar3;
  if (-uVar9 - 0xf <= uVar7) {
    FUN_00173800(8,&DAT_00231328,&DAT_00231328,uVar7,-uVar9 - 0xf);
  }
  iVar4 = *param_1;
  iVar6 = *(int *)(iVar4 + -4) - uVar3;
  local_30 = iVar6 + uVar9;
  if (local_30 == 0) {
    FUN_00231ebc(param_1);
    local_30 = DAT_0023132c;
  }
  else {
    iVar6 = iVar6 - uVar8;
    uVar3 = 0;
    if ((*(int *)(iVar4 + -0xc) + 1U < 2) && (local_30 <= *(uint *)(iVar4 + -8))) {
      if (iVar6 != 0) {
        FUN_001c10ba(uVar8 * 2 + uVar9 * 2 + iVar4,uVar8 * 2 + uVar2 * 2 + iVar4,iVar6);
      }
      for (; uVar3 < uVar9; uVar3 = uVar3 + 1) {
        bVar1 = *local_18;
        local_18 = local_18 + 1;
        *(ushort *)(uVar8 * 2 + uVar3 * 2 + *param_1) = (ushort)bVar1;
      }
      *(uint *)(*param_1 + -4) = local_30;
      *(undefined2 *)(local_30 * 2 + *param_1) = 0;
      return param_1;
    }
    local_38 = FUN_0020b4f4(*(int *)(iVar4 + -4),param_1);
    local_34 = local_30;
    puVar5 = (undefined4 *)FUN_00247bfc(&local_38,&local_34);
    local_30 = FUN_00231e54(param_1,*puVar5,local_30);
    if (uVar8 != 0) {
      FUN_001c10ac(local_30 + 0xc,*param_1,uVar8);
    }
    local_30 = local_30 + 0xc;
    iVar4 = local_30 + uVar8 * 2;
    for (; uVar3 < uVar9; uVar3 = uVar3 + 1) {
      local_2c = (ushort)*local_18;
      local_18 = local_18 + 1;
      *(ushort *)(iVar4 + uVar3 * 2) = local_2c;
    }
    if (iVar6 != 0) {
      FUN_001c10ac(iVar4 + uVar9 * 2,uVar8 * 2 + uVar2 * 2 + *param_1,iVar6);
    }
    FUN_00231ebc(param_1);
  }
  *param_1 = local_30;
  return param_1;
}

